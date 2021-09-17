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
#include "Windows.Data.Text.h"
#include "Windows.Storage.Streams.h"
#include "Windows.System.h"
#include "Windows.UI.h"
#include "Windows.UI.Popups.h"
#include "Windows.UI.ViewManagement.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIAggregateContactManager __x_ABI_CWindows_CApplicationModel_CContacts_CIAggregateContactManager;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIAggregateContactManager2 __x_ABI_CWindows_CApplicationModel_CContacts_CIAggregateContactManager2;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContact __x_ABI_CWindows_CApplicationModel_CContacts_CIContact;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContact2 __x_ABI_CWindows_CApplicationModel_CContacts_CIContact2;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3 __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation2 __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation2;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationList __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationList;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStore __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStore;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStore2 __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStore2;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactBatch __x_ABI_CWindows_CApplicationModel_CContacts_CIContactBatch;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardDelayedDataLoader __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardDelayedDataLoader;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardOptions __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardOptions;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardOptions2 __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardOptions2;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChange __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChange;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeReader __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeReader;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeTracker __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeTracker;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeTracker2 __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeTracker2;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangedDeferral __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangedDeferral;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangedEventArgs __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactConnectedServiceAccount __x_ABI_CWindows_CApplicationModel_CContacts_CIContactConnectedServiceAccount;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDate __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDate;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactEmail __x_ABI_CWindows_CApplicationModel_CContacts_CIContactEmail;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactField __x_ABI_CWindows_CApplicationModel_CContacts_CIContactField;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactFieldFactory __x_ABI_CWindows_CApplicationModel_CContacts_CIContactFieldFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactGroup __x_ABI_CWindows_CApplicationModel_CContacts_CIContactGroup;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInformation __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInformation;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageField __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageField;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageFieldFactory __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageFieldFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLaunchActionVerbsStatics __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLaunchActionVerbsStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList2 __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList2;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList3 __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList3;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListLimitedWriteOperations __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListLimitedWriteOperations;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManager __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManager;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManager2 __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManager2;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationField __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationField;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationFieldFactory __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationFieldFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser2 __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser2;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics2 __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics2;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics3 __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics3;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics4 __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics4;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics5 __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics5;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactMatchReason __x_ABI_CWindows_CApplicationModel_CContacts_CIContactMatchReason;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactName __x_ABI_CWindows_CApplicationModel_CContacts_CIContactName;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanel __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanel;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanelClosingEventArgs __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanelClosingEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanelLaunchFullAppRequestedEventArgs __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanelLaunchFullAppRequestedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhone __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhone;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker2 __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker2;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker3 __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker3;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPickerStatics __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPickerStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptionsFactory __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptionsFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryTextSearch __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryTextSearch;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactReader __x_ABI_CWindows_CApplicationModel_CContacts_CIContactReader;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther2 __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther2;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore2 __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore2;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore3 __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore3;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStoreNotificationTriggerDetails __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStoreNotificationTriggerDetails;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite2 __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite2;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIFullContactCardOptions __x_ABI_CWindows_CApplicationModel_CContacts_CIFullContactCardOptions;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIKnownContactFieldStatics __x_ABI_CWindows_CApplicationModel_CContacts_CIKnownContactFieldStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactIdsQueryResult __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactIdsQueryResult;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManager __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManager;
typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManagerStatics __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManagerStatics;
typedef interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContact __FIIterator_1_Windows__CApplicationModel__CContacts__CContact;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CContacts__CContact;
typedef struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContact * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContact * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContact * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContact * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContact * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContact * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContact * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContact * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContact * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContact * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CContacts__CContactVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContact
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContact __FIIterable_1_Windows__CApplicationModel__CContacts__CContact;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CContacts__CContact;
typedef struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContact * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContact * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContact * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContact * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContact * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContact * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContact * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CContacts__CContact **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CContacts__CContactVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContact
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAddress __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAddress;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CContacts__CContactAddress;
typedef struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAddressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAddress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAddress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAddress * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAddress * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAddress * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAddress * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAddress * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAddress * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAddress * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAddress * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAddressVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAddress
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAddressVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAddress __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAddress;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CContacts__CContactAddress;
typedef struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAddressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAddress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAddress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAddress * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAddress * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAddress * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAddress * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAddress * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAddress **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAddressVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAddress
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAddressVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotation __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotation;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotation;
typedef struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotation
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotation __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotation;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotation;
typedef struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotation **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotationVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotation
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationList __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationList;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationList;
typedef struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationList * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationList * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationList
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotationList __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotationList;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotationList;
typedef struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CContacts__CContactAnnotationList **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotationList
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactChange __FIIterator_1_Windows__CApplicationModel__CContacts__CContactChange;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CContacts__CContactChange;
typedef struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactChange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactChange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactChange * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactChange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactChange * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactChange * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChange * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactChange * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactChange * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactChange * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChange * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CContacts__CContactChangeVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactChange
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactChangeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactChange __FIIterable_1_Windows__CApplicationModel__CContacts__CContactChange;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CContacts__CContactChange;
typedef struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactChange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactChange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactChange * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactChange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactChange * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactChange * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CContacts__CContactChange **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CContacts__CContactChangeVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactChange
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactChangeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount __FIIterator_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount;
typedef struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccountVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactConnectedServiceAccount * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactConnectedServiceAccount * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccountVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccountVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount __FIIterable_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount;
typedef struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccountVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccountVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccountVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactDate __FIIterator_1_Windows__CApplicationModel__CContacts__CContactDate;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CContacts__CContactDate;
typedef struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactDateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactDate * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactDate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactDate * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactDate * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactDate * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactDate * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactDate * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDate * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactDate * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactDate * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactDate * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDate * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CContacts__CContactDateVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactDate
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactDateVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactDate __FIIterable_1_Windows__CApplicationModel__CContacts__CContactDate;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CContacts__CContactDate;
typedef struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactDateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactDate * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactDate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactDate * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactDate * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactDate * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactDate * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactDate * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CContacts__CContactDate **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CContacts__CContactDateVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactDate
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactDateVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactEmail __FIIterator_1_Windows__CApplicationModel__CContacts__CContactEmail;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CContacts__CContactEmail;
typedef struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactEmailVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactEmail * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactEmail * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactEmail * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactEmail * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactEmail * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactEmail * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactEmail * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactEmail * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactEmail * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactEmail * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactEmail * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactEmail * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CContacts__CContactEmailVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactEmail
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactEmailVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactEmail __FIIterable_1_Windows__CApplicationModel__CContacts__CContactEmail;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CContacts__CContactEmail;
typedef struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactEmailVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactEmail * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactEmail * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactEmail * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactEmail * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactEmail * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactEmail * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactEmail * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CContacts__CContactEmail **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CContacts__CContactEmailVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactEmail
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactEmailVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactField __FIIterator_1_Windows__CApplicationModel__CContacts__CContactField;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CContacts__CContactField;
typedef struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactField * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactField * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactField * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactField * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactField * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactField * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactField * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactField * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactField * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactField * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactField * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactField * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactField
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactField __FIIterable_1_Windows__CApplicationModel__CContacts__CContactField;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CContacts__CContactField;
typedef struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactField * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactField * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactField * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactField * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactField * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactField * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactField * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CContacts__CContactField **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactField
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType;
typedef interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType;
typedef struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType * This, __RPC__out enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldTypeVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldTypeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType;
typedef struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CContacts__CContactFieldType **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldTypeVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldType
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactFieldTypeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroup __FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroup;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroup;
typedef struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroup * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroup * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroup * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroup * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactGroup * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroup * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroup * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroup * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactGroup * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroupVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroup
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroupVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactGroup __FIIterable_1_Windows__CApplicationModel__CContacts__CContactGroup;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CContacts__CContactGroup;
typedef struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactGroup * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactGroup * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactGroup * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactGroup * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CContacts__CContactGroup **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CContacts__CContactGroupVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactGroup
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactGroupVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactInformation __FIIterator_1_Windows__CApplicationModel__CContacts__CContactInformation;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CContacts__CContactInformation;
typedef struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactInformation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactInformation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactInformation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactInformation * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInformation * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactInformation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactInformation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactInformation * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInformation * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CContacts__CContactInformationVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactInformation
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactInformationVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactInformation __FIIterable_1_Windows__CApplicationModel__CContacts__CContactInformation;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CContacts__CContactInformation;
typedef struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactInformation * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactInformation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactInformation * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactInformation * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CContacts__CContactInformation **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CContacts__CContactInformationVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactInformation
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactInformationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField __FIIterator_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField;
typedef struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactInstantMessageFieldVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageField * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageField * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CContacts__CContactInstantMessageFieldVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactInstantMessageFieldVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField __FIIterable_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField;
typedef struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactInstantMessageFieldVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CContacts__CContactInstantMessageFieldVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactInstantMessageFieldVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactJobInfo __FIIterator_1_Windows__CApplicationModel__CContacts__CContactJobInfo;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CContacts__CContactJobInfo;
typedef struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactJobInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CContacts__CContactJobInfoVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactJobInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactJobInfoVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactJobInfo __FIIterable_1_Windows__CApplicationModel__CContacts__CContactJobInfo;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CContacts__CContactJobInfo;
typedef struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactJobInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CContacts__CContactJobInfo **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CContacts__CContactJobInfoVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactJobInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactJobInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactList __FIIterator_1_Windows__CApplicationModel__CContacts__CContactList;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CContacts__CContactList;
typedef struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactList * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactList * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactList * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactList * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactList * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactList * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactList * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactList * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactList * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactList * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CContacts__CContactListVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactList
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactListVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactList __FIIterable_1_Windows__CApplicationModel__CContacts__CContactList;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CContacts__CContactList;
typedef struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactList * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactList * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactList * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactList * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactList * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactList * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactList * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CContacts__CContactList **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CContacts__CContactListVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactList
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactListVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactLocationField __FIIterator_1_Windows__CApplicationModel__CContacts__CContactLocationField;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CContacts__CContactLocationField;
typedef struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactLocationFieldVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactLocationField * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactLocationField * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactLocationField * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactLocationField * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactLocationField * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactLocationField * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactLocationField * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationField * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactLocationField * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactLocationField * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactLocationField * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationField * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CContacts__CContactLocationFieldVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactLocationField
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactLocationFieldVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactLocationField __FIIterable_1_Windows__CApplicationModel__CContacts__CContactLocationField;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CContacts__CContactLocationField;
typedef struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactLocationFieldVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactLocationField * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactLocationField * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactLocationField * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactLocationField * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactLocationField * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactLocationField * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactLocationField * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CContacts__CContactLocationField **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CContacts__CContactLocationFieldVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactLocationField
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactLocationFieldVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactMatchReason __FIIterator_1_Windows__CApplicationModel__CContacts__CContactMatchReason;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CContacts__CContactMatchReason;
typedef struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactMatchReasonVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactMatchReason * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactMatchReason * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactMatchReason * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactMatchReason * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactMatchReason * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactMatchReason * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactMatchReason * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactMatchReason * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactMatchReason * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactMatchReason * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactMatchReason * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactMatchReason * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CContacts__CContactMatchReasonVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactMatchReason
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactMatchReasonVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactMatchReason __FIIterable_1_Windows__CApplicationModel__CContacts__CContactMatchReason;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CContacts__CContactMatchReason;
typedef struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactMatchReasonVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactMatchReason * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactMatchReason * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactMatchReason * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactMatchReason * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactMatchReason * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactMatchReason * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactMatchReason * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CContacts__CContactMatchReason **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CContacts__CContactMatchReasonVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactMatchReason
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactMatchReasonVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactPhone __FIIterator_1_Windows__CApplicationModel__CContacts__CContactPhone;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CContacts__CContactPhone;
typedef struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactPhoneVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactPhone * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactPhone * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactPhone * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactPhone * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactPhone * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactPhone * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactPhone * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhone * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactPhone * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactPhone * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactPhone * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhone * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CContacts__CContactPhoneVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactPhone
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactPhoneVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactPhone __FIIterable_1_Windows__CApplicationModel__CContacts__CContactPhone;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CContacts__CContactPhone;
typedef struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactPhoneVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactPhone * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactPhone * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactPhone * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactPhone * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactPhone * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactPhone * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactPhone * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CContacts__CContactPhone **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CContacts__CContactPhoneVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactPhone
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactPhoneVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactSignificantOther __FIIterator_1_Windows__CApplicationModel__CContacts__CContactSignificantOther;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CContacts__CContactSignificantOther;
typedef struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactSignificantOtherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CContacts__CContactSignificantOtherVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactSignificantOther
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactSignificantOtherVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactSignificantOther __FIIterable_1_Windows__CApplicationModel__CContacts__CContactSignificantOther;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CContacts__CContactSignificantOther;
typedef struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactSignificantOtherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CContacts__CContactSignificantOther **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CContacts__CContactSignificantOtherVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactSignificantOther
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactSignificantOtherVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactWebsite __FIIterator_1_Windows__CApplicationModel__CContacts__CContactWebsite;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CContacts__CContactWebsite;
typedef struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactWebsiteVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactWebsite * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactWebsite * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactWebsite * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactWebsite * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactWebsite * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactWebsite * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactWebsite * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactWebsite * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactWebsite * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CContactWebsite * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CContacts__CContactWebsiteVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CContacts__CContactWebsite
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CContacts__CContactWebsiteVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactWebsite __FIIterable_1_Windows__CApplicationModel__CContacts__CContactWebsite;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CContacts__CContactWebsite;
typedef struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactWebsiteVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactWebsite * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactWebsite * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactWebsite * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactWebsite * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactWebsite * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactWebsite * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CContactWebsite * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CContacts__CContactWebsite **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CContacts__CContactWebsiteVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CContacts__CContactWebsite
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CContacts__CContactWebsiteVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CContacts__CIContactField __FIIterator_1_Windows__CApplicationModel__CContacts__CIContactField;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CContacts__CIContactField;
typedef struct __FIIterator_1_Windows__CApplicationModel__CContacts__CIContactFieldVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CIContactField * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CIContactField * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CIContactField * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CIContactField * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CIContactField * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CIContactField * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CIContactField * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactField * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CIContactField * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CIContactField * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CContacts__CIContactField * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactField * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CContacts__CIContactFieldVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CContacts__CIContactField
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CContacts__CIContactFieldVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CContacts__CIContactField __FIIterable_1_Windows__CApplicationModel__CContacts__CIContactField;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CContacts__CIContactField;
typedef struct __FIIterable_1_Windows__CApplicationModel__CContacts__CIContactFieldVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CIContactField * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CIContactField * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CIContactField * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CIContactField * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CIContactField * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CIContactField * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CContacts__CIContactField * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CContacts__CIContactField **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CContacts__CIContactFieldVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CContacts__CIContactField
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CContacts__CIContactFieldVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContact __FIVectorView_1_Windows__CApplicationModel__CContacts__CContact;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CContacts__CContact;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContact * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContact * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContact * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContact * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContact * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContact * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContact * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContact * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContact * This,
                       __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContact * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContact
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAddress __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAddress;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAddress;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAddressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAddress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAddress * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAddress * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAddress * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAddress * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAddress * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAddress * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAddress * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAddress * This,
                       __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAddress * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAddressVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAddress
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAddressVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This,
                       __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationList * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                       __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationList * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationList * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChange * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange * This,
                       __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChange * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChange * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChangeVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChangeVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccountVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactConnectedServiceAccount * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This,
                       __x_ABI_CWindows_CApplicationModel_CContacts_CIContactConnectedServiceAccount * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactConnectedServiceAccount * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccountVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccountVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactDate __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactDate;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactDate;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactDateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactDate * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactDate * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactDate * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactDate * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactDate * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactDate * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactDate * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDate * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactDate * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactDate * This,
                       __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDate * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactDate * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDate * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactDateVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactDate
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactDateVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactEmail __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactEmail;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactEmail;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactEmailVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactEmail * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactEmail * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactEmail * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactEmail * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactEmail * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactEmail * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactEmail * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactEmail * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactEmail * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactEmail * This,
                       __x_ABI_CWindows_CApplicationModel_CContacts_CIContactEmail * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactEmail * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactEmail * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactEmailVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactEmail
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactEmailVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactField __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactField;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactField;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactField * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactField * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactField * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactField * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactField * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactField * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactField * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactField * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactField * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactField * This,
                       __x_ABI_CWindows_CApplicationModel_CContacts_CIContactField * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactField * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactField * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactField
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
                       enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldTypeVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldTypeVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactGroup * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This,
                       __x_ABI_CWindows_CApplicationModel_CContacts_CIContactGroup * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactGroup * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroupVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroupVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInformation * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation * This,
                       __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInformation * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInformation * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformationVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformationVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInstantMessageFieldVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageField * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField * This,
                       __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageField * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageField * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInstantMessageFieldVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInstantMessageFieldVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactJobInfo __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactJobInfo;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactJobInfo;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactJobInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This,
                       __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactJobInfoVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactJobInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactJobInfoVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This,
                       __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactListVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactListVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactLocationField __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactLocationField;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactLocationField;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactLocationFieldVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactLocationField * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactLocationField * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactLocationField * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactLocationField * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactLocationField * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactLocationField * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactLocationField * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationField * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactLocationField * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactLocationField * This,
                       __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationField * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactLocationField * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationField * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactLocationFieldVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactLocationField
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactLocationFieldVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactMatchReason __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactMatchReason;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactMatchReason;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactMatchReasonVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactMatchReason * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactMatchReason * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactMatchReason * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactMatchReason * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactMatchReason * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactMatchReason * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactMatchReason * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactMatchReason * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactMatchReason * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactMatchReason * This,
                       __x_ABI_CWindows_CApplicationModel_CContacts_CIContactMatchReason * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactMatchReason * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactMatchReason * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactMatchReasonVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactMatchReason
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactMatchReasonVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactPhone __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactPhone;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactPhone;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactPhoneVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactPhone * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactPhone * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactPhone * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactPhone * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactPhone * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactPhone * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactPhone * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhone * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactPhone * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactPhone * This,
                       __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhone * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactPhone * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhone * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactPhoneVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactPhone
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactPhoneVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactSignificantOther __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactSignificantOther;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactSignificantOther;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactSignificantOtherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This,
                       __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactSignificantOtherVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactSignificantOther
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactSignificantOtherVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactWebsite __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactWebsite;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactWebsite;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactWebsiteVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactWebsite * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactWebsite * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactWebsite * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactWebsite * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactWebsite * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactWebsite * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactWebsite * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactWebsite * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactWebsite * This,
                       __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactWebsite * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactWebsiteVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactWebsite
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactWebsiteVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CIContactField __FIVectorView_1_Windows__CApplicationModel__CContacts__CIContactField;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CContacts__CIContactField;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CIContactFieldVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CIContactField * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CIContactField * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CIContactField * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CIContactField * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CIContactField * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CIContactField * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CIContactField * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactField * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CIContactField * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CIContactField * This,
                       __x_ABI_CWindows_CApplicationModel_CContacts_CIContactField * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CContacts__CIContactField * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactField * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CContacts__CIContactFieldVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CContacts__CIContactField
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CContacts__CIContactFieldVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CApplicationModel__CContacts__CContact __FIVector_1_Windows__CApplicationModel__CContacts__CContact;
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CContacts__CContact;
typedef struct __FIVector_1_Windows__CApplicationModel__CContacts__CContactVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContact * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContact * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContact * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContact * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContact * This, __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContact * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContact * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContact * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContact * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CContacts__CContact **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContact * This,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContact * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContact * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContact * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContact * This, __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContact * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContact * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContact * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContact * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * *value);
    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CContacts__CContactVtbl;
interface __FIVector_1_Windows__CApplicationModel__CContacts__CContact
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CContacts__CContactVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CApplicationModel__CContacts__CContactAddress __FIVector_1_Windows__CApplicationModel__CContacts__CContactAddress;
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CContacts__CContactAddress;
typedef struct __FIVector_1_Windows__CApplicationModel__CContacts__CContactAddressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactAddress * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactAddress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactAddress * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactAddress * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactAddress * This, __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactAddress * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactAddress * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactAddress * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactAddress * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAddress **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactAddress * This,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactAddress * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactAddress * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactAddress * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactAddress * This, __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactAddress * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactAddress * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactAddress * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactAddress * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress * *value);
    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CContacts__CContactAddressVtbl;
interface __FIVector_1_Windows__CApplicationModel__CContacts__CContactAddress
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CContacts__CContactAddressVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount __FIVector_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount;
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount;
typedef struct __FIVector_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccountVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This, __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactConnectedServiceAccount * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactConnectedServiceAccount * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactConnectedServiceAccount * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactConnectedServiceAccount * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactConnectedServiceAccount * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This, __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactConnectedServiceAccount * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactConnectedServiceAccount * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactConnectedServiceAccount * *value);
    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccountVtbl;
interface __FIVector_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccountVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CApplicationModel__CContacts__CContactDate __FIVector_1_Windows__CApplicationModel__CContacts__CContactDate;
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CContacts__CContactDate;
typedef struct __FIVector_1_Windows__CApplicationModel__CContacts__CContactDateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactDate * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactDate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactDate * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactDate * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactDate * This, __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDate * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactDate * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactDate * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDate * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactDate * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactDate * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactDate **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactDate * This,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDate * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactDate * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDate * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactDate * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDate * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactDate * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactDate * This, __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDate * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactDate * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactDate * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactDate * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDate * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactDate * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDate * *value);
    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CContacts__CContactDateVtbl;
interface __FIVector_1_Windows__CApplicationModel__CContacts__CContactDate
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CContacts__CContactDateVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CApplicationModel__CContacts__CContactEmail __FIVector_1_Windows__CApplicationModel__CContacts__CContactEmail;
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CContacts__CContactEmail;
typedef struct __FIVector_1_Windows__CApplicationModel__CContacts__CContactEmailVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactEmail * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactEmail * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactEmail * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactEmail * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactEmail * This, __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactEmail * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactEmail * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactEmail * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactEmail * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactEmail * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactEmail * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactEmail **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactEmail * This,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactEmail * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactEmail * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactEmail * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactEmail * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactEmail * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactEmail * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactEmail * This, __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactEmail * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactEmail * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactEmail * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactEmail * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactEmail * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactEmail * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactEmail * *value);
    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CContacts__CContactEmailVtbl;
interface __FIVector_1_Windows__CApplicationModel__CContacts__CContactEmail
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CContacts__CContactEmailVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType;
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType;
typedef struct __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This, __RPC__deref_out_opt enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
                   unsigned int index,
                            __RPC__deref_out_opt enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactFieldType **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
                   __RPC__in enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
                   unsigned int index,
                   __RPC__in enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
                   unsigned int index,
                   __RPC__in enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This, __RPC__in enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType *value);
    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldTypeVtbl;
interface __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldTypeVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CApplicationModel__CContacts__CContactJobInfo __FIVector_1_Windows__CApplicationModel__CContacts__CContactJobInfo;
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CContacts__CContactJobInfo;
typedef struct __FIVector_1_Windows__CApplicationModel__CContacts__CContactJobInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This, __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactJobInfo **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This, __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactJobInfo * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * *value);
    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CContacts__CContactJobInfoVtbl;
interface __FIVector_1_Windows__CApplicationModel__CContacts__CContactJobInfo
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CContacts__CContactJobInfoVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CApplicationModel__CContacts__CContactPhone __FIVector_1_Windows__CApplicationModel__CContacts__CContactPhone;
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CContacts__CContactPhone;
typedef struct __FIVector_1_Windows__CApplicationModel__CContacts__CContactPhoneVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactPhone * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactPhone * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactPhone * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactPhone * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactPhone * This, __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhone * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactPhone * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactPhone * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhone * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactPhone * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactPhone * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactPhone **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactPhone * This,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhone * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactPhone * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhone * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactPhone * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhone * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactPhone * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactPhone * This, __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhone * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactPhone * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactPhone * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactPhone * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhone * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactPhone * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhone * *value);
    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CContacts__CContactPhoneVtbl;
interface __FIVector_1_Windows__CApplicationModel__CContacts__CContactPhone
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CContacts__CContactPhoneVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CApplicationModel__CContacts__CContactSignificantOther __FIVector_1_Windows__CApplicationModel__CContacts__CContactSignificantOther;
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CContacts__CContactSignificantOther;
typedef struct __FIVector_1_Windows__CApplicationModel__CContacts__CContactSignificantOtherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This, __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactSignificantOther **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This, __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther * *value);
    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CContacts__CContactSignificantOtherVtbl;
interface __FIVector_1_Windows__CApplicationModel__CContacts__CContactSignificantOther
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CContacts__CContactSignificantOtherVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CApplicationModel__CContacts__CContactWebsite __FIVector_1_Windows__CApplicationModel__CContacts__CContactWebsite;
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CContacts__CContactWebsite;
typedef struct __FIVector_1_Windows__CApplicationModel__CContacts__CContactWebsiteVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactWebsite * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactWebsite * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactWebsite * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactWebsite * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactWebsite * This, __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactWebsite * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactWebsite * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactWebsite * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactWebsite * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactWebsite **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactWebsite * This,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactWebsite * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactWebsite * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactWebsite * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactWebsite * This, __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactWebsite * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactWebsite * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactWebsite * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CContactWebsite * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite * *value);
    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CContacts__CContactWebsiteVtbl;
interface __FIVector_1_Windows__CApplicationModel__CContacts__CContactWebsite
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CContacts__CContactWebsiteVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CApplicationModel__CContacts__CIContactField __FIVector_1_Windows__CApplicationModel__CContacts__CIContactField;
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CContacts__CIContactField;
typedef struct __FIVector_1_Windows__CApplicationModel__CContacts__CIContactFieldVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CIContactField * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CIContactField * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CIContactField * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CIContactField * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CIContactField * This, __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactField * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CIContactField * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CIContactField * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactField * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CIContactField * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CIContactField * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CContacts__CIContactField **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CIContactField * This,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactField * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CIContactField * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactField * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CIContactField * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactField * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CIContactField * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CIContactField * This, __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactField * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CIContactField * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CIContactField * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CIContactField * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactField * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CContacts__CIContactField * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CContacts_CIContactField * *value);
    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CContacts__CIContactFieldVtbl;
interface __FIVector_1_Windows__CApplicationModel__CContacts__CIContactField
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CContacts__CIContactFieldVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContact __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContact;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContact;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContact __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContact;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContact * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContact * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContact * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContact * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContact *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContact
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContact __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContact;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContact;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContact * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContact * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContact * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContact * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContact * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContact * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContact * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContact *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContact * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContact **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContact * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContact
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotation __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotation;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotation;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotation __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotation;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotation *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotationVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotation
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotation __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotation;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotation;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotation *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotation **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotation
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotationList __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotationList;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotationList;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationList __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationList;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationList *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotationList
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationList __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationList;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationList;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotationList *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotationList **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationList * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationList
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotationStore __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotationStore;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotationStore;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationStore __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationStore;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotationStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotationStore * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotationStore * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotationStore * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotationStore * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationStore *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotationStoreVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotationStore
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotationStoreVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationStore __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationStore;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationStore;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationStore * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationStore * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationStore * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationStore * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationStore * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationStore * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationStore * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotationStore *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationStore * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactAnnotationStore **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationStore * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStore * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationStoreVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationStore
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationStoreVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactBatch __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactBatch;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactBatch;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactBatch __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactBatch;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactBatchVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactBatch * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactBatch * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactBatch * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactBatch * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactBatch *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactBatchVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactBatch
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactBatchVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactBatch __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactBatch;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactBatch;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactBatchVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactBatch * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactBatch * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactBatch * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactBatch * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactBatch * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactBatch * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactBatch * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactBatch *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactBatch * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactBatch **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactBatch * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactBatch * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactBatchVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactBatch
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactBatchVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactInformation __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactInformation;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactInformation;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactInformation __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactInformation;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactInformation * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactInformation * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactInformation *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactInformationVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactInformation
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactInformationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactInformation __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactInformation;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactInformation;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactInformation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactInformation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactInformation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactInformation * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactInformation *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactInformation * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactInformation **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactInformation * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInformation * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactInformationVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactInformation
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactInformationVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactList __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactList;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactList;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactList __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactList;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactList * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactList * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactList * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactList * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactList *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactListVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactList
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactListVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactList __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactList;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactList;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactList * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactList * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactList * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactList * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactList * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactList * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactList * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactList *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactList * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactList **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactList * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactListVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactList
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactListVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactStore __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactStore;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactStore;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactStore __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactStore;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactStore * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactStore * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactStore * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactStore * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactStore *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactStoreVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactStore
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactStoreVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactStore __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactStore;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactStore;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactStore * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactStore * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactStore * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactStore * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactStore * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactStore * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactStore * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactStore *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactStore * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CContactStore **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactStore * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactStoreVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactStore
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactStoreVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CPinnedContactIdsQueryResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CPinnedContactIdsQueryResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CPinnedContactIdsQueryResult;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CPinnedContactIdsQueryResult __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CPinnedContactIdsQueryResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CPinnedContactIdsQueryResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CPinnedContactIdsQueryResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CPinnedContactIdsQueryResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CPinnedContactIdsQueryResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CPinnedContactIdsQueryResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CPinnedContactIdsQueryResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CPinnedContactIdsQueryResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CPinnedContactIdsQueryResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CPinnedContactIdsQueryResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CPinnedContactIdsQueryResult __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CPinnedContactIdsQueryResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CPinnedContactIdsQueryResult;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CPinnedContactIdsQueryResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CPinnedContactIdsQueryResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CPinnedContactIdsQueryResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CPinnedContactIdsQueryResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CPinnedContactIdsQueryResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CPinnedContactIdsQueryResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CPinnedContactIdsQueryResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CPinnedContactIdsQueryResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CPinnedContactIdsQueryResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CPinnedContactIdsQueryResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CContacts__CPinnedContactIdsQueryResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CPinnedContactIdsQueryResult * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactIdsQueryResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CPinnedContactIdsQueryResultVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CPinnedContactIdsQueryResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CPinnedContactIdsQueryResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContact __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContact;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContact;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContact __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContact;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContact * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContact * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContact * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContact * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContact *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContact
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContact __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContact;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContact;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContact * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContact * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContact * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContact * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContact * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContact * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContact * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContact *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContact * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContact **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContact * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CContacts__CContact * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContact
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationListVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChangeVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChangeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChangeVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChangeVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroupVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroupVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroupVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroup
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactGroupVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformationVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformationVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformationVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactListVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactListVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactListVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactListVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CContacts__CContact __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CContacts__CContact;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CContacts__CContact;
typedef interface __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CContacts__CContact __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CContacts__CContact;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CContacts__CContactVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CContacts__CContact * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CContacts__CContact * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CContacts__CContact * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CContacts__CContact * This, __RPC__in_opt __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CContacts__CContact *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CContacts__CContactVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CContacts__CContact
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CContacts__CContactVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CContacts__CContact __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CContacts__CContact;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CContacts__CContact;
typedef struct __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CContacts__CContactVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CContacts__CContact * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CContacts__CContact * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CContacts__CContact * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CContacts__CContact * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CContacts__CContact * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CContacts__CContact * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CContacts__CContact * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CContacts__CContact *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CContacts__CContact * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CContacts__CContact **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CContacts__CContact * This, __RPC__out __FIVector_1_Windows__CApplicationModel__CContacts__CContact * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CContacts__CContactVtbl;
interface __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CContacts__CContact
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CContacts__CContactVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactList_Windows__CApplicationModel__CContacts__CContactChangedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactList_Windows__CApplicationModel__CContacts__CContactChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactList_Windows__CApplicationModel__CContacts__CContactChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactList_Windows__CApplicationModel__CContacts__CContactChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactList_Windows__CApplicationModel__CContacts__CContactChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactList_Windows__CApplicationModel__CContacts__CContactChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactList_Windows__CApplicationModel__CContacts__CContactChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactList_Windows__CApplicationModel__CContacts__CContactChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactList_Windows__CApplicationModel__CContacts__CContactChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactList_Windows__CApplicationModel__CContacts__CContactChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactList_Windows__CApplicationModel__CContacts__CContactChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactListSyncManager_IInspectable __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactListSyncManager_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactListSyncManager_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactListSyncManager_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactListSyncManager_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactListSyncManager_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactListSyncManager_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactListSyncManager_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManager * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactListSyncManager_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactListSyncManager_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactListSyncManager_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactPanel_Windows__CApplicationModel__CContacts__CContactPanelClosingEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactPanel_Windows__CApplicationModel__CContacts__CContactPanelClosingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactPanel_Windows__CApplicationModel__CContacts__CContactPanelClosingEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactPanel_Windows__CApplicationModel__CContacts__CContactPanelClosingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactPanel_Windows__CApplicationModel__CContacts__CContactPanelClosingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactPanel_Windows__CApplicationModel__CContacts__CContactPanelClosingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactPanel_Windows__CApplicationModel__CContacts__CContactPanelClosingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactPanel_Windows__CApplicationModel__CContacts__CContactPanelClosingEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanel * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanelClosingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactPanel_Windows__CApplicationModel__CContacts__CContactPanelClosingEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactPanel_Windows__CApplicationModel__CContacts__CContactPanelClosingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactPanel_Windows__CApplicationModel__CContacts__CContactPanelClosingEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactPanel_Windows__CApplicationModel__CContacts__CContactPanelLaunchFullAppRequestedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactPanel_Windows__CApplicationModel__CContacts__CContactPanelLaunchFullAppRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactPanel_Windows__CApplicationModel__CContacts__CContactPanelLaunchFullAppRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactPanel_Windows__CApplicationModel__CContacts__CContactPanelLaunchFullAppRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactPanel_Windows__CApplicationModel__CContacts__CContactPanelLaunchFullAppRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactPanel_Windows__CApplicationModel__CContacts__CContactPanelLaunchFullAppRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactPanel_Windows__CApplicationModel__CContacts__CContactPanelLaunchFullAppRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactPanel_Windows__CApplicationModel__CContacts__CContactPanelLaunchFullAppRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanel * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanelLaunchFullAppRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactPanel_Windows__CApplicationModel__CContacts__CContactPanelLaunchFullAppRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactPanel_Windows__CApplicationModel__CContacts__CContactPanelLaunchFullAppRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactPanel_Windows__CApplicationModel__CContacts__CContactPanelLaunchFullAppRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactStore_Windows__CApplicationModel__CContacts__CContactChangedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactStore_Windows__CApplicationModel__CContacts__CContactChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactStore_Windows__CApplicationModel__CContacts__CContactChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactStore_Windows__CApplicationModel__CContacts__CContactChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactStore_Windows__CApplicationModel__CContacts__CContactChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactStore_Windows__CApplicationModel__CContacts__CContactChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactStore_Windows__CApplicationModel__CContacts__CContactChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactStore_Windows__CApplicationModel__CContacts__CContactChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactStore_Windows__CApplicationModel__CContacts__CContactChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactStore_Windows__CApplicationModel__CContacts__CContactChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactStore_Windows__CApplicationModel__CContacts__CContactChangedEventArgsVtbl *lpVtbl;
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
typedef interface __FIMap_2_HSTRING_IInspectable __FIMap_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIMap_2_HSTRING_IInspectable;
typedef struct __FIMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                   HSTRING key,
                            __RPC__deref_out_opt IInspectable * **value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                   HSTRING key,
                   __RPC__in_opt IInspectable * *value,
                            __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    END_INTERFACE
} __FIMap_2_HSTRING_IInspectableVtbl;
interface __FIMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMap_2_HSTRING_IInspectableVtbl *lpVtbl;
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
typedef interface __FIMapChangedEventArgs_1_HSTRING __FIMapChangedEventArgs_1_HSTRING;
EXTERN_C const IID IID___FIMapChangedEventArgs_1_HSTRING;
typedef struct __FIMapChangedEventArgs_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_CollectionChange )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__out __x_ABI_CWindows_CFoundation_CCollections_CCollectionChange *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIMapChangedEventArgs_1_HSTRINGVtbl;
interface __FIMapChangedEventArgs_1_HSTRING
{
    CONST_VTBL struct __FIMapChangedEventArgs_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_CollectionChange(This,value) )
    ( (This)->lpVtbl -> get_Key(This,value) )
typedef interface __FMapChangedEventHandler_2_HSTRING_IInspectable __FMapChangedEventHandler_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FMapChangedEventHandler_2_HSTRING_IInspectable;
typedef interface __FIObservableMap_2_HSTRING_IInspectable __FIObservableMap_2_HSTRING_IInspectable;
typedef interface __FIMapChangedEventArgs_1_HSTRING __FIMapChangedEventArgs_1_HSTRING;
typedef struct __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This,
                   __RPC__in_opt __FIObservableMap_2_HSTRING_IInspectable *sender,
                   __RPC__in_opt __FIMapChangedEventArgs_1_HSTRING *e);
    END_INTERFACE
} __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl;
interface __FMapChangedEventHandler_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIObservableMap_2_HSTRING_IInspectable __FIObservableMap_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIObservableMap_2_HSTRING_IInspectable;
typedef struct __FIObservableMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *add_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                   __RPC__in_opt __FMapChangedEventHandler_2_HSTRING_IInspectable *handler,
                            __RPC__out EventRegistrationToken *token);
    HRESULT ( STDMETHODCALLTYPE *remove_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                   EventRegistrationToken token);
    END_INTERFACE
} __FIObservableMap_2_HSTRING_IInspectableVtbl;
interface __FIObservableMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIObservableMap_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> add_MapChanged(This,handler,token) )
    ( (This)->lpVtbl -> remove_MapChanged(This,token) )
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING;
typedef interface __FIAsyncOperation_1___FIVectorView_1_HSTRING __FIAsyncOperation_1___FIVectorView_1_HSTRING;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_HSTRING *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRINGVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_HSTRING __FIAsyncOperation_1___FIVectorView_1_HSTRING;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_HSTRING;
typedef struct __FIAsyncOperation_1___FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, __RPC__out __FIVectorView_1_HSTRING * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_HSTRINGVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_HSTRINGVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentTypeVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentTypeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This, __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentTypeVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentTypeVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl *lpVtbl;
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
struct __x_ABI_CWindows_CData_CText_CTextSegment;
typedef interface __FIIterator_1_Windows__CData__CText__CTextSegment __FIIterator_1_Windows__CData__CText__CTextSegment;
EXTERN_C const IID IID___FIIterator_1_Windows__CData__CText__CTextSegment;
typedef struct __FIIterator_1_Windows__CData__CText__CTextSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CData__CText__CTextSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextSegment * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextSegment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextSegment * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextSegment * This, __RPC__out struct __x_ABI_CWindows_CData_CText_CTextSegment *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextSegment * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextSegment * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextSegment * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CData_CText_CTextSegment *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CData__CText__CTextSegmentVtbl;
interface __FIIterator_1_Windows__CData__CText__CTextSegment
{
    CONST_VTBL struct __FIIterator_1_Windows__CData__CText__CTextSegmentVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CData__CText__CTextSegment __FIIterable_1_Windows__CData__CText__CTextSegment;
EXTERN_C const IID IID___FIIterable_1_Windows__CData__CText__CTextSegment;
typedef struct __FIIterable_1_Windows__CData__CText__CTextSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CData__CText__CTextSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CData__CText__CTextSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CData__CText__CTextSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CData__CText__CTextSegment * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CData__CText__CTextSegment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CData__CText__CTextSegment * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CData__CText__CTextSegment * This, __RPC__deref_out_opt __FIIterator_1_Windows__CData__CText__CTextSegment **first);
    END_INTERFACE
} __FIIterable_1_Windows__CData__CText__CTextSegmentVtbl;
interface __FIIterable_1_Windows__CData__CText__CTextSegment
{
    CONST_VTBL struct __FIIterable_1_Windows__CData__CText__CTextSegmentVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CData__CText__CTextSegment __FIVectorView_1_Windows__CData__CText__CTextSegment;
EXTERN_C const IID IID___FIVectorView_1_Windows__CData__CText__CTextSegment;
typedef struct __FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CData__CText__CTextSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CData__CText__CTextSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                                                    unsigned int index,
                                                             __RPC__out struct __x_ABI_CWindows_CData_CText_CTextSegment *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                       struct __x_ABI_CWindows_CData_CText_CTextSegment item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CData_CText_CTextSegment *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl;
interface __FIVectorView_1_Windows__CData__CText__CTextSegment
{
    CONST_VTBL struct __FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl *lpVtbl;
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
struct __x_ABI_CWindows_CUI_CColor;
typedef interface __FIReference_1_Windows__CUI__CColor __FIReference_1_Windows__CUI__CColor;
EXTERN_C const IID IID___FIReference_1_Windows__CUI__CColor;
typedef struct __FIReference_1_Windows__CUI__CColorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CUI__CColor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CUI__CColor * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CUI__CColor * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CUI__CColor * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CUI__CColor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CUI__CColor * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CUI__CColor * This, __RPC__out struct __x_ABI_CWindows_CUI_CColor *value);
    END_INTERFACE
} __FIReference_1_Windows__CUI__CColorVtbl;
interface __FIReference_1_Windows__CUI__CColor
{
    CONST_VTBL struct __FIReference_1_Windows__CUI__CColorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef struct __x_ABI_CWindows_CData_CText_CTextSegment __x_ABI_CWindows_CData_CText_CTextSegment;
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;
typedef enum __x_ABI_CWindows_CUI_CPopups_CPlacement __x_ABI_CWindows_CUI_CPopups_CPlacement;
typedef enum __x_ABI_CWindows_CUI_CViewManagement_CViewSizePreference __x_ABI_CWindows_CUI_CViewManagement_CViewSizePreference;
typedef enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactAddressKind __x_ABI_CWindows_CApplicationModel_CContacts_CContactAddressKind;
typedef enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactAnnotationOperations __x_ABI_CWindows_CApplicationModel_CContacts_CContactAnnotationOperations;
typedef enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactAnnotationStoreAccessType __x_ABI_CWindows_CApplicationModel_CContacts_CContactAnnotationStoreAccessType;
typedef enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactBatchStatus __x_ABI_CWindows_CApplicationModel_CContacts_CContactBatchStatus;
typedef enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactCardHeaderKind __x_ABI_CWindows_CApplicationModel_CContacts_CContactCardHeaderKind;
typedef enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactCardTabKind __x_ABI_CWindows_CApplicationModel_CContacts_CContactCardTabKind;
typedef enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactChangeType __x_ABI_CWindows_CApplicationModel_CContacts_CContactChangeType;
typedef enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactDateKind __x_ABI_CWindows_CApplicationModel_CContacts_CContactDateKind;
typedef enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactEmailKind __x_ABI_CWindows_CApplicationModel_CContacts_CContactEmailKind;
typedef enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldCategory __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldCategory;
typedef enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType;
typedef enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactListOtherAppReadAccess __x_ABI_CWindows_CApplicationModel_CContacts_CContactListOtherAppReadAccess;
typedef enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactListOtherAppWriteAccess __x_ABI_CWindows_CApplicationModel_CContacts_CContactListOtherAppWriteAccess;
typedef enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactListSyncStatus __x_ABI_CWindows_CApplicationModel_CContacts_CContactListSyncStatus;
typedef enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactMatchReasonKind __x_ABI_CWindows_CApplicationModel_CContacts_CContactMatchReasonKind;
typedef enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactNameOrder __x_ABI_CWindows_CApplicationModel_CContacts_CContactNameOrder;
typedef enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactPhoneKind __x_ABI_CWindows_CApplicationModel_CContacts_CContactPhoneKind;
typedef enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactQueryDesiredFields __x_ABI_CWindows_CApplicationModel_CContacts_CContactQueryDesiredFields;
typedef enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactQuerySearchFields __x_ABI_CWindows_CApplicationModel_CContacts_CContactQuerySearchFields;
typedef enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactQuerySearchScope __x_ABI_CWindows_CApplicationModel_CContacts_CContactQuerySearchScope;
typedef enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactRelationship __x_ABI_CWindows_CApplicationModel_CContacts_CContactRelationship;
typedef enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactSelectionMode __x_ABI_CWindows_CApplicationModel_CContacts_CContactSelectionMode;
typedef enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactStoreAccessType __x_ABI_CWindows_CApplicationModel_CContacts_CContactStoreAccessType;
typedef enum __x_ABI_CWindows_CApplicationModel_CContacts_CPinnedContactSurface __x_ABI_CWindows_CApplicationModel_CContacts_CPinnedContactSurface;
enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactAddressKind
{
    ContactAddressKind_Home = 0,
    ContactAddressKind_Work = 1,
    ContactAddressKind_Other = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactAnnotationOperations
{
    ContactAnnotationOperations_None = 0,
    ContactAnnotationOperations_ContactProfile = 0x1,
    ContactAnnotationOperations_Message = 0x2,
    ContactAnnotationOperations_AudioCall = 0x4,
    ContactAnnotationOperations_VideoCall = 0x8,
    ContactAnnotationOperations_SocialFeeds = 0x10,
    ContactAnnotationOperations_Share = 0x20,
};
enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactAnnotationStoreAccessType
{
    ContactAnnotationStoreAccessType_AppAnnotationsReadWrite = 0,
    ContactAnnotationStoreAccessType_AllAnnotationsReadWrite = 1,
};
enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactBatchStatus
{
    ContactBatchStatus_Success = 0,
    ContactBatchStatus_ServerSearchSyncManagerError = 1,
    ContactBatchStatus_ServerSearchUnknownError = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactCardHeaderKind
{
    ContactCardHeaderKind_Default = 0,
    ContactCardHeaderKind_Basic = 1,
    ContactCardHeaderKind_Enterprise = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactCardTabKind
{
    ContactCardTabKind_Default = 0,
    ContactCardTabKind_Email = 1,
    ContactCardTabKind_Messaging = 2,
    ContactCardTabKind_Phone = 3,
    ContactCardTabKind_Video = 4,
    ContactCardTabKind_OrganizationalHierarchy = 5,
};
enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactChangeType
{
    ContactChangeType_Created = 0,
    ContactChangeType_Modified = 1,
    ContactChangeType_Deleted = 2,
    ContactChangeType_ChangeTrackingLost = 3,
};
enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactDateKind
{
    ContactDateKind_Birthday = 0,
    ContactDateKind_Anniversary = 1,
    ContactDateKind_Other = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactEmailKind
{
    ContactEmailKind_Personal = 0,
    ContactEmailKind_Work = 1,
    ContactEmailKind_Other = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldCategory
{
    ContactFieldCategory_None = 0,
    ContactFieldCategory_Home = 1,
    ContactFieldCategory_Work = 2,
    ContactFieldCategory_Mobile = 3,
    ContactFieldCategory_Other = 4,
};
enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType
{
    ContactFieldType_Email = 0,
    ContactFieldType_PhoneNumber = 1,
    ContactFieldType_Location
    DEPRECATEDENUMERATOR("Location  may be altered or unavailable for releases after Windows 8.1. Instead, use Address.")
     = 2,
    ContactFieldType_InstantMessage
    DEPRECATEDENUMERATOR("InstantMessage  may be altered or unavailable for releases after Windows 8.1. Instead, use ConnectedServiceAccount.")
     = 3,
    ContactFieldType_Custom
    DEPRECATEDENUMERATOR("Custom may be altered or unavailable for releases after Windows 8.1. Instead, use one of the specific types.")
     = 4,
    ContactFieldType_ConnectedServiceAccount = 5,
    ContactFieldType_ImportantDate = 6,
    ContactFieldType_Address = 7,
    ContactFieldType_SignificantOther = 8,
    ContactFieldType_Notes = 9,
    ContactFieldType_Website = 10,
    ContactFieldType_JobInfo = 11,
};
enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactListOtherAppReadAccess
{
    ContactListOtherAppReadAccess_SystemOnly = 0,
    ContactListOtherAppReadAccess_Limited = 1,
    ContactListOtherAppReadAccess_Full = 2,
    ContactListOtherAppReadAccess_None = 3,
};
enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactListOtherAppWriteAccess
{
    ContactListOtherAppWriteAccess_None = 0,
    ContactListOtherAppWriteAccess_SystemOnly = 1,
    ContactListOtherAppWriteAccess_Limited = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactListSyncStatus
{
    ContactListSyncStatus_Idle = 0,
    ContactListSyncStatus_Syncing = 1,
    ContactListSyncStatus_UpToDate = 2,
    ContactListSyncStatus_AuthenticationError = 3,
    ContactListSyncStatus_PolicyError = 4,
    ContactListSyncStatus_UnknownError = 5,
    ContactListSyncStatus_ManualAccountRemovalRequired = 6,
};
enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactMatchReasonKind
{
    ContactMatchReasonKind_Name = 0,
    ContactMatchReasonKind_EmailAddress = 1,
    ContactMatchReasonKind_PhoneNumber = 2,
    ContactMatchReasonKind_JobInfo = 3,
    ContactMatchReasonKind_YomiName = 4,
    ContactMatchReasonKind_Other = 5,
};
enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactNameOrder
{
    ContactNameOrder_FirstNameLastName = 0,
    ContactNameOrder_LastNameFirstName = 1,
};
enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactPhoneKind
{
    ContactPhoneKind_Home = 0,
    ContactPhoneKind_Mobile = 1,
    ContactPhoneKind_Work = 2,
    ContactPhoneKind_Other = 3,
    ContactPhoneKind_Pager = 4,
    ContactPhoneKind_BusinessFax = 5,
    ContactPhoneKind_HomeFax = 6,
    ContactPhoneKind_Company = 7,
    ContactPhoneKind_Assistant = 8,
    ContactPhoneKind_Radio = 9,
};
enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactQueryDesiredFields
{
    ContactQueryDesiredFields_None = 0,
    ContactQueryDesiredFields_PhoneNumber = 0x1,
    ContactQueryDesiredFields_EmailAddress = 0x2,
    ContactQueryDesiredFields_PostalAddress = 0x4,
};
enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactQuerySearchFields
{
    ContactQuerySearchFields_None = 0,
    ContactQuerySearchFields_Name = 0x1,
    ContactQuerySearchFields_Email = 0x2,
    ContactQuerySearchFields_Phone = 0x4,
    ContactQuerySearchFields_All = 0xffffffff,
};
enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactQuerySearchScope
{
    ContactQuerySearchScope_Local = 0,
    ContactQuerySearchScope_Server = 1,
};
enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactRelationship
{
    ContactRelationship_Other = 0,
    ContactRelationship_Spouse = 1,
    ContactRelationship_Partner = 2,
    ContactRelationship_Sibling = 3,
    ContactRelationship_Parent = 4,
    ContactRelationship_Child = 5,
};
enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactSelectionMode
{
    ContactSelectionMode_Contacts = 0,
    ContactSelectionMode_Fields = 1,
};
enum __x_ABI_CWindows_CApplicationModel_CContacts_CContactStoreAccessType
{
    ContactStoreAccessType_AppContactsReadWrite = 0,
    ContactStoreAccessType_AllContactsReadOnly = 1,
    ContactStoreAccessType_AllContactsReadWrite = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CContacts_CPinnedContactSurface
{
    PinnedContactSurface_StartMenu = 0,
    PinnedContactSurface_Taskbar = 1,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IAggregateContactManager[] = L"Windows.ApplicationModel.Contacts.IAggregateContactManager";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIAggregateContactManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIAggregateContactManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIAggregateContactManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIAggregateContactManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIAggregateContactManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIAggregateContactManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIAggregateContactManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FindRawContactsAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIAggregateContactManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * contact,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContact * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryLinkContactsAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIAggregateContactManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * primaryContact,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * secondaryContact,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContact * * contact
        );
    HRESULT ( STDMETHODCALLTYPE *UnlinkRawContactAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIAggregateContactManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * contact,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TrySetPreferredSourceForPictureAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIAggregateContactManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * aggregateContact,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * rawContact,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIAggregateContactManagerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIAggregateContactManager
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIAggregateContactManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FindRawContactsAsync(This,contact,value) )
    ( (This)->lpVtbl->TryLinkContactsAsync(This,primaryContact,secondaryContact,contact) )
    ( (This)->lpVtbl->UnlinkRawContactAsync(This,contact,value) )
    ( (This)->lpVtbl->TrySetPreferredSourceForPictureAsync(This,aggregateContact,rawContact,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIAggregateContactManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IAggregateContactManager2[] = L"Windows.ApplicationModel.Contacts.IAggregateContactManager2";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIAggregateContactManager2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIAggregateContactManager2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIAggregateContactManager2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIAggregateContactManager2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIAggregateContactManager2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIAggregateContactManager2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIAggregateContactManager2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetRemoteIdentificationInformationAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIAggregateContactManager2 * This,
                  __RPC__in HSTRING contactListId,
                  __RPC__in HSTRING remoteSourceId,
                  __RPC__in HSTRING accountId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIAggregateContactManager2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIAggregateContactManager2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIAggregateContactManager2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetRemoteIdentificationInformationAsync(This,contactListId,remoteSourceId,accountId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIAggregateContactManager2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContact[] = L"Windows.ApplicationModel.Contacts.IContact";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Name )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Thumbnail )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Thumbnail )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Fields )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CContacts__CIContactField * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContact
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->put_Name(This,value) )
    ( (This)->lpVtbl->get_Thumbnail(This,value) )
    ( (This)->lpVtbl->put_Thumbnail(This,value) )
    ( (This)->lpVtbl->get_Fields(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContact;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContact2[] = L"Windows.ApplicationModel.Contacts.IContact2";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContact2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContact2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContact2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContact2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContact2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContact2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContact2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Id )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Notes )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Notes )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Phones )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact2 * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CContacts__CContactPhone * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Emails )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact2 * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CContacts__CContactEmail * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Addresses )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact2 * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CContacts__CContactAddress * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ConnectedServiceAccounts )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact2 * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CContacts__CContactConnectedServiceAccount * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ImportantDates )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact2 * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CContacts__CContactDate * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DataSuppliers )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact2 * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_JobInfo )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact2 * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CContacts__CContactJobInfo * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SignificantOthers )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact2 * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CContacts__CContactSignificantOther * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Websites )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact2 * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CContacts__CContactWebsite * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProviderProperties )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContact2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContact2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContact2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->put_Id(This,value) )
    ( (This)->lpVtbl->get_Notes(This,value) )
    ( (This)->lpVtbl->put_Notes(This,value) )
    ( (This)->lpVtbl->get_Phones(This,value) )
    ( (This)->lpVtbl->get_Emails(This,value) )
    ( (This)->lpVtbl->get_Addresses(This,value) )
    ( (This)->lpVtbl->get_ConnectedServiceAccounts(This,value) )
    ( (This)->lpVtbl->get_ImportantDates(This,value) )
    ( (This)->lpVtbl->get_DataSuppliers(This,value) )
    ( (This)->lpVtbl->get_JobInfo(This,value) )
    ( (This)->lpVtbl->get_SignificantOthers(This,value) )
    ( (This)->lpVtbl->get_Websites(This,value) )
    ( (This)->lpVtbl->get_ProviderProperties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContact2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContact3[] = L"Windows.ApplicationModel.Contacts.IContact3";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ContactListId )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayPictureUserUpdateTime )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DisplayPictureUserUpdateTime )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3 * This,
                  __x_ABI_CWindows_CFoundation_CDateTime value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsMe )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AggregateId )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemoteId )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RemoteId )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RingToneToken )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RingToneToken )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDisplayPictureManuallySet )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LargeDisplayPicture )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SmallDisplayPicture )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SourceDisplayPicture )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SourceDisplayPicture )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TextToneToken )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TextToneToken )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsAggregate )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FullName )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayNameOverride )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DisplayNameOverride )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Nickname )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Nickname )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SortName )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContact3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ContactListId(This,value) )
    ( (This)->lpVtbl->get_DisplayPictureUserUpdateTime(This,value) )
    ( (This)->lpVtbl->put_DisplayPictureUserUpdateTime(This,value) )
    ( (This)->lpVtbl->get_IsMe(This,value) )
    ( (This)->lpVtbl->get_AggregateId(This,value) )
    ( (This)->lpVtbl->get_RemoteId(This,value) )
    ( (This)->lpVtbl->put_RemoteId(This,value) )
    ( (This)->lpVtbl->get_RingToneToken(This,value) )
    ( (This)->lpVtbl->put_RingToneToken(This,value) )
    ( (This)->lpVtbl->get_IsDisplayPictureManuallySet(This,value) )
    ( (This)->lpVtbl->get_LargeDisplayPicture(This,value) )
    ( (This)->lpVtbl->get_SmallDisplayPicture(This,value) )
    ( (This)->lpVtbl->get_SourceDisplayPicture(This,value) )
    ( (This)->lpVtbl->put_SourceDisplayPicture(This,value) )
    ( (This)->lpVtbl->get_TextToneToken(This,value) )
    ( (This)->lpVtbl->put_TextToneToken(This,value) )
    ( (This)->lpVtbl->get_IsAggregate(This,value) )
    ( (This)->lpVtbl->get_FullName(This,value) )
    ( (This)->lpVtbl->get_DisplayNameOverride(This,value) )
    ( (This)->lpVtbl->put_DisplayNameOverride(This,value) )
    ( (This)->lpVtbl->get_Nickname(This,value) )
    ( (This)->lpVtbl->put_Nickname(This,value) )
    ( (This)->lpVtbl->get_SortName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContact3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactAddress[] = L"Windows.ApplicationModel.Contacts.IContactAddress";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StreetAddress )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StreetAddress )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Locality )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Locality )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Region )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Region )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Country )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Country )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PostalCode )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PostalCode )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CContactAddressKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Kind )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress * This,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactAddressKind value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddressVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddressVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StreetAddress(This,value) )
    ( (This)->lpVtbl->put_StreetAddress(This,value) )
    ( (This)->lpVtbl->get_Locality(This,value) )
    ( (This)->lpVtbl->put_Locality(This,value) )
    ( (This)->lpVtbl->get_Region(This,value) )
    ( (This)->lpVtbl->put_Region(This,value) )
    ( (This)->lpVtbl->get_Country(This,value) )
    ( (This)->lpVtbl->put_Country(This,value) )
    ( (This)->lpVtbl->get_PostalCode(This,value) )
    ( (This)->lpVtbl->put_PostalCode(This,value) )
    ( (This)->lpVtbl->get_Kind(This,value) )
    ( (This)->lpVtbl->put_Kind(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->put_Description(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactAddress;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactAnnotation[] = L"Windows.ApplicationModel.Contacts.IContactAnnotation";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AnnotationListId )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContactId )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ContactId )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemoteId )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RemoteId )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedOperations )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CContactAnnotationOperations * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SupportedOperations )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation * This,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactAnnotationOperations value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDisabled )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProviderProperties )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_AnnotationListId(This,value) )
    ( (This)->lpVtbl->get_ContactId(This,value) )
    ( (This)->lpVtbl->put_ContactId(This,value) )
    ( (This)->lpVtbl->get_RemoteId(This,value) )
    ( (This)->lpVtbl->put_RemoteId(This,value) )
    ( (This)->lpVtbl->get_SupportedOperations(This,value) )
    ( (This)->lpVtbl->put_SupportedOperations(This,value) )
    ( (This)->lpVtbl->get_IsDisabled(This,value) )
    ( (This)->lpVtbl->get_ProviderProperties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactAnnotation2[] = L"Windows.ApplicationModel.Contacts.IContactAnnotation2";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ContactListId )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ContactListId )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation2 * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ContactListId(This,value) )
    ( (This)->lpVtbl->put_ContactListId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactAnnotationList[] = L"Windows.ApplicationModel.Contacts.IContactAnnotationList";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationList * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationList * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationList * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationList * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationList * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationList * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationList * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProviderPackageFamilyName )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationList * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UserDataAccountId )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationList * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationList * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TrySaveAnnotationAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationList * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation * annotation,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * ppResult
        );
    HRESULT ( STDMETHODCALLTYPE *GetAnnotationAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationList * This,
                  __RPC__in HSTRING annotationId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotation * * annotation
        );
    HRESULT ( STDMETHODCALLTYPE *FindAnnotationsByRemoteIdAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationList * This,
                  __RPC__in HSTRING remoteId,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation * * annotations
        );
    HRESULT ( STDMETHODCALLTYPE *FindAnnotationsAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationList * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation * * annotations
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteAnnotationAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationList * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation * annotation,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationListVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationList
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationListVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_ProviderPackageFamilyName(This,value) )
    ( (This)->lpVtbl->get_UserDataAccountId(This,value) )
    ( (This)->lpVtbl->DeleteAsync(This,value) )
    ( (This)->lpVtbl->TrySaveAnnotationAsync(This,annotation,ppResult) )
    ( (This)->lpVtbl->GetAnnotationAsync(This,annotationId,annotation) )
    ( (This)->lpVtbl->FindAnnotationsByRemoteIdAsync(This,remoteId,annotations) )
    ( (This)->lpVtbl->FindAnnotationsAsync(This,annotations) )
    ( (This)->lpVtbl->DeleteAnnotationAsync(This,annotation,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationList;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactAnnotationStore[] = L"Windows.ApplicationModel.Contacts.IContactAnnotationStore";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStore * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStore * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStore * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStore * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStore * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStore * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FindContactIdsByEmailAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStore * This,
                  __RPC__in HSTRING emailAddress,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_HSTRING * * contactIds
        );
    HRESULT ( STDMETHODCALLTYPE *FindContactIdsByPhoneNumberAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStore * This,
                  __RPC__in HSTRING phoneNumber,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_HSTRING * * contactIds
        );
    HRESULT ( STDMETHODCALLTYPE *FindAnnotationsForContactAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStore * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * contact,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation * * annotations
        );
    HRESULT ( STDMETHODCALLTYPE *DisableAnnotationAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStore * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotation * annotation,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateAnnotationListAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStore * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateAnnotationListInAccountAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStore * This,
                  __RPC__in HSTRING userDataAccountId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAnnotationListAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStore * This,
                  __RPC__in HSTRING annotationListId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * * value
        );
    HRESULT ( STDMETHODCALLTYPE *FindAnnotationListsAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStore * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotationList * * lists
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStoreVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStore
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStoreVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FindContactIdsByEmailAsync(This,emailAddress,contactIds) )
    ( (This)->lpVtbl->FindContactIdsByPhoneNumberAsync(This,phoneNumber,contactIds) )
    ( (This)->lpVtbl->FindAnnotationsForContactAsync(This,contact,annotations) )
    ( (This)->lpVtbl->DisableAnnotationAsync(This,annotation,value) )
    ( (This)->lpVtbl->CreateAnnotationListAsync(This,value) )
    ( (This)->lpVtbl->CreateAnnotationListInAccountAsync(This,userDataAccountId,value) )
    ( (This)->lpVtbl->GetAnnotationListAsync(This,annotationListId,value) )
    ( (This)->lpVtbl->FindAnnotationListsAsync(This,lists) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStore;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactAnnotationStore2[] = L"Windows.ApplicationModel.Contacts.IContactAnnotationStore2";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStore2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStore2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStore2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStore2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStore2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStore2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStore2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FindAnnotationsForContactListAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStore2 * This,
                  __RPC__in HSTRING contactListId,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactAnnotation * * annotations
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStore2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStore2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStore2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FindAnnotationsForContactListAsync(This,contactListId,annotations) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactAnnotationStore2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactBatch[] = L"Windows.ApplicationModel.Contacts.IContactBatch";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactBatchVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactBatch * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactBatch * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactBatch * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactBatch * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactBatch * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactBatch * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Contacts )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactBatch * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CContacts__CContact * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactBatch * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CContactBatchStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactBatchVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactBatch
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactBatchVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Contacts(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactBatch;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactCardDelayedDataLoader[] = L"Windows.ApplicationModel.Contacts.IContactCardDelayedDataLoader";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardDelayedDataLoaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardDelayedDataLoader * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardDelayedDataLoader * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardDelayedDataLoader * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardDelayedDataLoader * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardDelayedDataLoader * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardDelayedDataLoader * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetData )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardDelayedDataLoader * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * contact
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardDelayedDataLoaderVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardDelayedDataLoader
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardDelayedDataLoaderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetData(This,contact) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardDelayedDataLoader;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactCardOptions[] = L"Windows.ApplicationModel.Contacts.IContactCardOptions";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HeaderKind )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardOptions * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CContactCardHeaderKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_HeaderKind )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardOptions * This,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactCardHeaderKind value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InitialTabKind )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardOptions * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CContactCardTabKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InitialTabKind )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardOptions * This,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactCardTabKind value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardOptionsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HeaderKind(This,value) )
    ( (This)->lpVtbl->put_HeaderKind(This,value) )
    ( (This)->lpVtbl->get_InitialTabKind(This,value) )
    ( (This)->lpVtbl->put_InitialTabKind(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactCardOptions2[] = L"Windows.ApplicationModel.Contacts.IContactCardOptions2";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardOptions2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardOptions2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardOptions2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardOptions2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardOptions2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardOptions2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardOptions2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ServerSearchContactListIds )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardOptions2 * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardOptions2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardOptions2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardOptions2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ServerSearchContactListIds(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardOptions2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactChange[] = L"Windows.ApplicationModel.Contacts.IContactChange";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChange * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChange * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChange * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChange * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChange * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChange * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ChangeType )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChange * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CContactChangeType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Contact )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChange * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChange
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ChangeType(This,value) )
    ( (This)->lpVtbl->get_Contact(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactChange;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactChangeReader[] = L"Windows.ApplicationModel.Contacts.IContactChangeReader";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeReader * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeReader * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeReader * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeReader * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeReader * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeReader * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AcceptChanges )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeReader * This
        );
    HRESULT ( STDMETHODCALLTYPE *AcceptChangesThrough )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeReader * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChange * lastChangeToAccept
        );
    HRESULT ( STDMETHODCALLTYPE *ReadBatchAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeReader * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactChange * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeReaderVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeReader
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeReaderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AcceptChanges(This) )
    ( (This)->lpVtbl->AcceptChangesThrough(This,lastChangeToAccept) )
    ( (This)->lpVtbl->ReadBatchAsync(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeReader;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactChangeTracker[] = L"Windows.ApplicationModel.Contacts.IContactChangeTracker";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeTrackerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeTracker * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeTracker * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeTracker * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeTracker * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeTracker * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeTracker * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Enable )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeTracker * This
        );
    HRESULT ( STDMETHODCALLTYPE *GetChangeReader )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeTracker * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeReader * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Reset )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeTracker * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeTrackerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeTracker
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeTrackerVtbl *lpVtbl;
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
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeTracker;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactChangeTracker2[] = L"Windows.ApplicationModel.Contacts.IContactChangeTracker2";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeTracker2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeTracker2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeTracker2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeTracker2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeTracker2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeTracker2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeTracker2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsTracking )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeTracker2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeTracker2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeTracker2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeTracker2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsTracking(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeTracker2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactChangedDeferral[] = L"Windows.ApplicationModel.Contacts.IContactChangedDeferral";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangedDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangedDeferral * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangedDeferral * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangedDeferral * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangedDeferral * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangedDeferral * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangedDeferral * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangedDeferral * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangedDeferralVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangedDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangedDeferralVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Complete(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangedDeferral;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactChangedEventArgs[] = L"Windows.ApplicationModel.Contacts.IContactChangedEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangedDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangedEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactConnectedServiceAccount[] = L"Windows.ApplicationModel.Contacts.IContactConnectedServiceAccount";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactConnectedServiceAccountVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactConnectedServiceAccount * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactConnectedServiceAccount * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactConnectedServiceAccount * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactConnectedServiceAccount * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactConnectedServiceAccount * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactConnectedServiceAccount * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactConnectedServiceAccount * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Id )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactConnectedServiceAccount * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServiceName )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactConnectedServiceAccount * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ServiceName )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactConnectedServiceAccount * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactConnectedServiceAccountVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactConnectedServiceAccount
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactConnectedServiceAccountVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->put_Id(This,value) )
    ( (This)->lpVtbl->get_ServiceName(This,value) )
    ( (This)->lpVtbl->put_ServiceName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactConnectedServiceAccount;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactDate[] = L"Windows.ApplicationModel.Contacts.IContactDate";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDate * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDate * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDate * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDate * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDate * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDate * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Day )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDate * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Day )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDate * This,
                  __RPC__in_opt __FIReference_1_UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Month )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDate * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Month )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDate * This,
                  __RPC__in_opt __FIReference_1_UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Year )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDate * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Year )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDate * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDate * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CContactDateKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Kind )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDate * This,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactDateKind value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDate * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDate * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDateVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDate
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactDateVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Day(This,value) )
    ( (This)->lpVtbl->put_Day(This,value) )
    ( (This)->lpVtbl->get_Month(This,value) )
    ( (This)->lpVtbl->put_Month(This,value) )
    ( (This)->lpVtbl->get_Year(This,value) )
    ( (This)->lpVtbl->put_Year(This,value) )
    ( (This)->lpVtbl->get_Kind(This,value) )
    ( (This)->lpVtbl->put_Kind(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->put_Description(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactDate;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactEmail[] = L"Windows.ApplicationModel.Contacts.IContactEmail";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactEmailVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactEmail * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactEmail * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactEmail * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactEmail * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactEmail * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactEmail * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Address )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactEmail * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Address )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactEmail * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactEmail * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CContactEmailKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Kind )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactEmail * This,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactEmailKind value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactEmail * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactEmail * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactEmailVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactEmail
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactEmailVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Address(This,value) )
    ( (This)->lpVtbl->put_Address(This,value) )
    ( (This)->lpVtbl->get_Kind(This,value) )
    ( (This)->lpVtbl->put_Kind(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->put_Description(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactEmail;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactField[] = L"Windows.ApplicationModel.Contacts.IContactField";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactFieldVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactField * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactField * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactField * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactField * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactField * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactField * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactField * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Category )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactField * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldCategory * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactField * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactField * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactFieldVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactField
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactFieldVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Type(This,value) )
    ( (This)->lpVtbl->get_Category(This,value) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactField;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactFieldFactory[] = L"Windows.ApplicationModel.Contacts.IContactFieldFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactFieldFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactFieldFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactFieldFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactFieldFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactFieldFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactFieldFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactFieldFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateField_Default )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactFieldFactory * This,
                  __RPC__in HSTRING value,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType type,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactField * * field
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateField_Category )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactFieldFactory * This,
                  __RPC__in HSTRING value,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType type,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldCategory category,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactField * * field
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateField_Custom )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactFieldFactory * This,
                  __RPC__in HSTRING name,
                  __RPC__in HSTRING value,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType type,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldCategory category,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactField * * field
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactFieldFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactFieldFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactFieldFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateField_Default(This,value,type,field) )
    ( (This)->lpVtbl->CreateField_Category(This,value,type,category,field) )
    ( (This)->lpVtbl->CreateField_Custom(This,name,value,type,category,field) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactFieldFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactGroup[] = L"Windows.ApplicationModel.Contacts.IContactGroup";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactGroup * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactGroup * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactGroup * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactGroup * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactGroup * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactGroup * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactGroupVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactGroup
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactGroupVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactGroup;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactInformation[] = L"Windows.ApplicationModel.Contacts.IContactInformation";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInformation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInformation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInformation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInformation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInformation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInformation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetThumbnailAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInformation * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Emails )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInformation * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactField * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhoneNumbers )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInformation * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactField * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Locations )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInformation * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactLocationField * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InstantMessages )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInformation * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInstantMessageField * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CustomFields )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInformation * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactField * * value
        );
    HRESULT ( STDMETHODCALLTYPE *QueryCustomFields )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInformation * This,
                  __RPC__in HSTRING customName,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactField * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInformationVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInformationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->GetThumbnailAsync(This,operation) )
    ( (This)->lpVtbl->get_Emails(This,value) )
    ( (This)->lpVtbl->get_PhoneNumbers(This,value) )
    ( (This)->lpVtbl->get_Locations(This,value) )
    ( (This)->lpVtbl->get_InstantMessages(This,value) )
    ( (This)->lpVtbl->get_CustomFields(This,value) )
    ( (This)->lpVtbl->QueryCustomFields(This,customName,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactInformation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactInstantMessageField[] = L"Windows.ApplicationModel.Contacts.IContactInstantMessageField";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageFieldVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageField * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageField * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageField * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageField * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageField * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageField * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UserName )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageField * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Service )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageField * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayText )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageField * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LaunchUri )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageField * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageFieldVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageField
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageFieldVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UserName(This,value) )
    ( (This)->lpVtbl->get_Service(This,value) )
    ( (This)->lpVtbl->get_DisplayText(This,value) )
    ( (This)->lpVtbl->get_LaunchUri(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageField;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactInstantMessageFieldFactory[] = L"Windows.ApplicationModel.Contacts.IContactInstantMessageFieldFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageFieldFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageFieldFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageFieldFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageFieldFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageFieldFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageFieldFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageFieldFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateInstantMessage_Default )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageFieldFactory * This,
                  __RPC__in HSTRING userName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageField * * field
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateInstantMessage_Category )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageFieldFactory * This,
                  __RPC__in HSTRING userName,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldCategory category,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageField * * field
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateInstantMessage_All )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageFieldFactory * This,
                  __RPC__in HSTRING userName,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldCategory category,
                  __RPC__in HSTRING service,
                  __RPC__in HSTRING displayText,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * verb,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageField * * field
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageFieldFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageFieldFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageFieldFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstantMessage_Default(This,userName,field) )
    ( (This)->lpVtbl->CreateInstantMessage_Category(This,userName,category,field) )
    ( (This)->lpVtbl->CreateInstantMessage_All(This,userName,category,service,displayText,verb,field) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactInstantMessageFieldFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactJobInfo[] = L"Windows.ApplicationModel.Contacts.IContactJobInfo";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CompanyName )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CompanyName )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CompanyYomiName )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CompanyYomiName )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Department )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Department )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Manager )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Manager )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Office )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Office )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CompanyAddress )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CompanyAddress )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfoVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CompanyName(This,value) )
    ( (This)->lpVtbl->put_CompanyName(This,value) )
    ( (This)->lpVtbl->get_CompanyYomiName(This,value) )
    ( (This)->lpVtbl->put_CompanyYomiName(This,value) )
    ( (This)->lpVtbl->get_Department(This,value) )
    ( (This)->lpVtbl->put_Department(This,value) )
    ( (This)->lpVtbl->get_Title(This,value) )
    ( (This)->lpVtbl->put_Title(This,value) )
    ( (This)->lpVtbl->get_Manager(This,value) )
    ( (This)->lpVtbl->put_Manager(This,value) )
    ( (This)->lpVtbl->get_Office(This,value) )
    ( (This)->lpVtbl->put_Office(This,value) )
    ( (This)->lpVtbl->get_CompanyAddress(This,value) )
    ( (This)->lpVtbl->put_CompanyAddress(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->put_Description(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactJobInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactLaunchActionVerbsStatics[] = L"Windows.ApplicationModel.Contacts.IContactLaunchActionVerbsStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLaunchActionVerbsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLaunchActionVerbsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLaunchActionVerbsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLaunchActionVerbsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLaunchActionVerbsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLaunchActionVerbsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLaunchActionVerbsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Call )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLaunchActionVerbsStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLaunchActionVerbsStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Map )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLaunchActionVerbsStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Post )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLaunchActionVerbsStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoCall )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLaunchActionVerbsStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLaunchActionVerbsStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLaunchActionVerbsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLaunchActionVerbsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Call(This,value) )
    ( (This)->lpVtbl->get_Message(This,value) )
    ( (This)->lpVtbl->get_Map(This,value) )
    ( (This)->lpVtbl->get_Post(This,value) )
    ( (This)->lpVtbl->get_VideoCall(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactLaunchActionVerbsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactList[] = L"Windows.ApplicationModel.Contacts.IContactList";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SourceDisplayName )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsHidden )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsHidden )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OtherAppReadAccess )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CContactListOtherAppReadAccess * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OtherAppReadAccess )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * This,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactListOtherAppReadAccess value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OtherAppWriteAccess )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CContactListOtherAppWriteAccess * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OtherAppWriteAccess )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * This,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactListOtherAppWriteAccess value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChangeTracker )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeTracker * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SyncManager )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManager * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportsServerSearch )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UserDataAccountId )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ContactChanged )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactList_Windows__CApplicationModel__CContacts__CContactChangedEventArgs * value,
                           __RPC__out EventRegistrationToken * returnValue
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ContactChanged )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * This,
                  EventRegistrationToken value
        );
    HRESULT ( STDMETHODCALLTYPE *SaveAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetContactFromRemoteIdAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * This,
                  __RPC__in HSTRING remoteId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContact * * contact
        );
    HRESULT ( STDMETHODCALLTYPE *GetMeContactAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContact * * meContact
        );
                    HRESULT ( STDMETHODCALLTYPE *GetContactReader )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactReader * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *GetContactReaderWithOptions )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions * options,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactReader * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SaveContactAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * contact,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteContactAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * contact,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetContactAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList * This,
                  __RPC__in HSTRING contactId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContact * * contacts
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->put_DisplayName(This,value) )
    ( (This)->lpVtbl->get_SourceDisplayName(This,value) )
    ( (This)->lpVtbl->get_IsHidden(This,value) )
    ( (This)->lpVtbl->put_IsHidden(This,value) )
    ( (This)->lpVtbl->get_OtherAppReadAccess(This,value) )
    ( (This)->lpVtbl->put_OtherAppReadAccess(This,value) )
    ( (This)->lpVtbl->get_OtherAppWriteAccess(This,value) )
    ( (This)->lpVtbl->put_OtherAppWriteAccess(This,value) )
    ( (This)->lpVtbl->get_ChangeTracker(This,value) )
    ( (This)->lpVtbl->get_SyncManager(This,value) )
    ( (This)->lpVtbl->get_SupportsServerSearch(This,value) )
    ( (This)->lpVtbl->get_UserDataAccountId(This,value) )
    ( (This)->lpVtbl->add_ContactChanged(This,value,returnValue) )
    ( (This)->lpVtbl->remove_ContactChanged(This,value) )
    ( (This)->lpVtbl->SaveAsync(This,returnValue) )
    ( (This)->lpVtbl->DeleteAsync(This,returnValue) )
    ( (This)->lpVtbl->GetContactFromRemoteIdAsync(This,remoteId,contact) )
    ( (This)->lpVtbl->GetMeContactAsync(This,meContact) )
    ( (This)->lpVtbl->GetContactReader(This,value) )
    ( (This)->lpVtbl->GetContactReaderWithOptions(This,options,value) )
    ( (This)->lpVtbl->SaveContactAsync(This,contact,value) )
    ( (This)->lpVtbl->DeleteContactAsync(This,contact,value) )
    ( (This)->lpVtbl->GetContactAsync(This,contactId,contacts) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactList;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactList2[] = L"Windows.ApplicationModel.Contacts.IContactList2";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RegisterSyncManagerAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SupportsServerSearch )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SyncConstraints )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RegisterSyncManagerAsync(This,result) )
    ( (This)->lpVtbl->put_SupportsServerSearch(This,value) )
    ( (This)->lpVtbl->get_SyncConstraints(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactList2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactList3[] = L"Windows.ApplicationModel.Contacts.IContactList3";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LimitedWriteOperations )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListLimitedWriteOperations * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetChangeTracker )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList3 * This,
                  __RPC__in HSTRING identity,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeTracker * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactList3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LimitedWriteOperations(This,value) )
    ( (This)->lpVtbl->GetChangeTracker(This,identity,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactList3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactListLimitedWriteOperations[] = L"Windows.ApplicationModel.Contacts.IContactListLimitedWriteOperations";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListLimitedWriteOperationsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListLimitedWriteOperations * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListLimitedWriteOperations * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListLimitedWriteOperations * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListLimitedWriteOperations * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListLimitedWriteOperations * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListLimitedWriteOperations * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryCreateOrUpdateContactAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListLimitedWriteOperations * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * contact,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TryDeleteContactAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListLimitedWriteOperations * This,
                  __RPC__in HSTRING contactId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListLimitedWriteOperationsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListLimitedWriteOperations
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListLimitedWriteOperationsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryCreateOrUpdateContactAsync(This,contact,operation) )
    ( (This)->lpVtbl->TryDeleteContactAsync(This,contactId,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactListLimitedWriteOperations;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactListSyncConstraints[] = L"Windows.ApplicationModel.Contacts.IContactListSyncConstraints";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraintsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CanSyncDescriptions )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanSyncDescriptions )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxHomePhoneNumbers )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxHomePhoneNumbers )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxMobilePhoneNumbers )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxMobilePhoneNumbers )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxWorkPhoneNumbers )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxWorkPhoneNumbers )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxOtherPhoneNumbers )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxOtherPhoneNumbers )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxPagerPhoneNumbers )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxPagerPhoneNumbers )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxBusinessFaxPhoneNumbers )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxBusinessFaxPhoneNumbers )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxHomeFaxPhoneNumbers )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxHomeFaxPhoneNumbers )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxCompanyPhoneNumbers )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxCompanyPhoneNumbers )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxAssistantPhoneNumbers )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxAssistantPhoneNumbers )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxRadioPhoneNumbers )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxRadioPhoneNumbers )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxPersonalEmailAddresses )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxPersonalEmailAddresses )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxWorkEmailAddresses )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxWorkEmailAddresses )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxOtherEmailAddresses )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxOtherEmailAddresses )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxHomeAddresses )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxHomeAddresses )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxWorkAddresses )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxWorkAddresses )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxOtherAddresses )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxOtherAddresses )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxBirthdayDates )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxBirthdayDates )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxAnniversaryDates )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxAnniversaryDates )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxOtherDates )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxOtherDates )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxOtherRelationships )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxOtherRelationships )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxSpouseRelationships )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxSpouseRelationships )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxPartnerRelationships )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxPartnerRelationships )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxSiblingRelationships )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxSiblingRelationships )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxParentRelationships )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxParentRelationships )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxChildRelationships )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxChildRelationships )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxJobInfo )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxJobInfo )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxWebsites )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxWebsites )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraintsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraintsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CanSyncDescriptions(This,value) )
    ( (This)->lpVtbl->put_CanSyncDescriptions(This,value) )
    ( (This)->lpVtbl->get_MaxHomePhoneNumbers(This,value) )
    ( (This)->lpVtbl->put_MaxHomePhoneNumbers(This,value) )
    ( (This)->lpVtbl->get_MaxMobilePhoneNumbers(This,value) )
    ( (This)->lpVtbl->put_MaxMobilePhoneNumbers(This,value) )
    ( (This)->lpVtbl->get_MaxWorkPhoneNumbers(This,value) )
    ( (This)->lpVtbl->put_MaxWorkPhoneNumbers(This,value) )
    ( (This)->lpVtbl->get_MaxOtherPhoneNumbers(This,value) )
    ( (This)->lpVtbl->put_MaxOtherPhoneNumbers(This,value) )
    ( (This)->lpVtbl->get_MaxPagerPhoneNumbers(This,value) )
    ( (This)->lpVtbl->put_MaxPagerPhoneNumbers(This,value) )
    ( (This)->lpVtbl->get_MaxBusinessFaxPhoneNumbers(This,value) )
    ( (This)->lpVtbl->put_MaxBusinessFaxPhoneNumbers(This,value) )
    ( (This)->lpVtbl->get_MaxHomeFaxPhoneNumbers(This,value) )
    ( (This)->lpVtbl->put_MaxHomeFaxPhoneNumbers(This,value) )
    ( (This)->lpVtbl->get_MaxCompanyPhoneNumbers(This,value) )
    ( (This)->lpVtbl->put_MaxCompanyPhoneNumbers(This,value) )
    ( (This)->lpVtbl->get_MaxAssistantPhoneNumbers(This,value) )
    ( (This)->lpVtbl->put_MaxAssistantPhoneNumbers(This,value) )
    ( (This)->lpVtbl->get_MaxRadioPhoneNumbers(This,value) )
    ( (This)->lpVtbl->put_MaxRadioPhoneNumbers(This,value) )
    ( (This)->lpVtbl->get_MaxPersonalEmailAddresses(This,value) )
    ( (This)->lpVtbl->put_MaxPersonalEmailAddresses(This,value) )
    ( (This)->lpVtbl->get_MaxWorkEmailAddresses(This,value) )
    ( (This)->lpVtbl->put_MaxWorkEmailAddresses(This,value) )
    ( (This)->lpVtbl->get_MaxOtherEmailAddresses(This,value) )
    ( (This)->lpVtbl->put_MaxOtherEmailAddresses(This,value) )
    ( (This)->lpVtbl->get_MaxHomeAddresses(This,value) )
    ( (This)->lpVtbl->put_MaxHomeAddresses(This,value) )
    ( (This)->lpVtbl->get_MaxWorkAddresses(This,value) )
    ( (This)->lpVtbl->put_MaxWorkAddresses(This,value) )
    ( (This)->lpVtbl->get_MaxOtherAddresses(This,value) )
    ( (This)->lpVtbl->put_MaxOtherAddresses(This,value) )
    ( (This)->lpVtbl->get_MaxBirthdayDates(This,value) )
    ( (This)->lpVtbl->put_MaxBirthdayDates(This,value) )
    ( (This)->lpVtbl->get_MaxAnniversaryDates(This,value) )
    ( (This)->lpVtbl->put_MaxAnniversaryDates(This,value) )
    ( (This)->lpVtbl->get_MaxOtherDates(This,value) )
    ( (This)->lpVtbl->put_MaxOtherDates(This,value) )
    ( (This)->lpVtbl->get_MaxOtherRelationships(This,value) )
    ( (This)->lpVtbl->put_MaxOtherRelationships(This,value) )
    ( (This)->lpVtbl->get_MaxSpouseRelationships(This,value) )
    ( (This)->lpVtbl->put_MaxSpouseRelationships(This,value) )
    ( (This)->lpVtbl->get_MaxPartnerRelationships(This,value) )
    ( (This)->lpVtbl->put_MaxPartnerRelationships(This,value) )
    ( (This)->lpVtbl->get_MaxSiblingRelationships(This,value) )
    ( (This)->lpVtbl->put_MaxSiblingRelationships(This,value) )
    ( (This)->lpVtbl->get_MaxParentRelationships(This,value) )
    ( (This)->lpVtbl->put_MaxParentRelationships(This,value) )
    ( (This)->lpVtbl->get_MaxChildRelationships(This,value) )
    ( (This)->lpVtbl->put_MaxChildRelationships(This,value) )
    ( (This)->lpVtbl->get_MaxJobInfo(This,value) )
    ( (This)->lpVtbl->put_MaxJobInfo(This,value) )
    ( (This)->lpVtbl->get_MaxWebsites(This,value) )
    ( (This)->lpVtbl->put_MaxWebsites(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncConstraints;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactListSyncManager[] = L"Windows.ApplicationModel.Contacts.IContactListSyncManager";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManager * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CContactListSyncStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastSuccessfulSyncTime )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManager * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastAttemptedSyncTime )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManager * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    HRESULT ( STDMETHODCALLTYPE *SyncAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManager * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SyncStatusChanged )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactListSyncManager_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SyncStatusChanged )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManager * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManagerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManager
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManagerVtbl *lpVtbl;
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
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactListSyncManager2[] = L"Windows.ApplicationModel.Contacts.IContactListSyncManager2";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManager2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManager2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManager2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManager2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManager2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManager2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManager2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Status )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManager2 * This,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactListSyncStatus value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LastSuccessfulSyncTime )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManager2 * This,
                  __x_ABI_CWindows_CFoundation_CDateTime value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LastAttemptedSyncTime )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManager2 * This,
                  __x_ABI_CWindows_CFoundation_CDateTime value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManager2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManager2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManager2Vtbl *lpVtbl;
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
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactListSyncManager2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactLocationField[] = L"Windows.ApplicationModel.Contacts.IContactLocationField";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationFieldVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationField * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationField * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationField * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationField * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationField * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationField * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UnstructuredAddress )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationField * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Street )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationField * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_City )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationField * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Region )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationField * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Country )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationField * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PostalCode )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationField * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationFieldVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationField
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationFieldVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UnstructuredAddress(This,value) )
    ( (This)->lpVtbl->get_Street(This,value) )
    ( (This)->lpVtbl->get_City(This,value) )
    ( (This)->lpVtbl->get_Region(This,value) )
    ( (This)->lpVtbl->get_Country(This,value) )
    ( (This)->lpVtbl->get_PostalCode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationField;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactLocationFieldFactory[] = L"Windows.ApplicationModel.Contacts.IContactLocationFieldFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationFieldFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationFieldFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationFieldFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationFieldFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationFieldFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationFieldFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationFieldFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateLocation_Default )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationFieldFactory * This,
                  __RPC__in HSTRING unstructuredAddress,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationField * * field
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateLocation_Category )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationFieldFactory * This,
                  __RPC__in HSTRING unstructuredAddress,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldCategory category,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationField * * field
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateLocation_All )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationFieldFactory * This,
                  __RPC__in HSTRING unstructuredAddress,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldCategory category,
                  __RPC__in HSTRING street,
                  __RPC__in HSTRING city,
                  __RPC__in HSTRING region,
                  __RPC__in HSTRING country,
                  __RPC__in HSTRING postalCode,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationField * * field
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationFieldFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationFieldFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationFieldFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateLocation_Default(This,unstructuredAddress,field) )
    ( (This)->lpVtbl->CreateLocation_Category(This,unstructuredAddress,category,field) )
    ( (This)->lpVtbl->CreateLocation_All(This,unstructuredAddress,category,street,city,region,country,postalCode,field) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactLocationFieldFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactManagerForUser[] = L"Windows.ApplicationModel.Contacts.IContactManagerForUser";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUserVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *ConvertContactToVCardAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * contact,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *ConvertContactToVCardAsyncWithMaxBytes )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * contact,
                  UINT32 maxBytes,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ConvertVCardToContactAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * vCard,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContact * * result
        );
    HRESULT ( STDMETHODCALLTYPE *RequestStoreAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser * This,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactStoreAccessType accessType,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactStore * * result
        );
    HRESULT ( STDMETHODCALLTYPE *RequestAnnotationStoreAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser * This,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactAnnotationStoreAccessType accessType,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationStore * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SystemDisplayNameOrder )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CContactNameOrder * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SystemDisplayNameOrder )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser * This,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactNameOrder value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SystemSortOrder )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CContactNameOrder * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SystemSortOrder )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser * This,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactNameOrder value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUserVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUserVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ConvertContactToVCardAsync(This,contact,result) )
    ( (This)->lpVtbl->ConvertContactToVCardAsyncWithMaxBytes(This,contact,maxBytes,result) )
    ( (This)->lpVtbl->ConvertVCardToContactAsync(This,vCard,result) )
    ( (This)->lpVtbl->RequestStoreAsync(This,accessType,result) )
    ( (This)->lpVtbl->RequestAnnotationStoreAsync(This,accessType,result) )
    ( (This)->lpVtbl->get_SystemDisplayNameOrder(This,value) )
    ( (This)->lpVtbl->put_SystemDisplayNameOrder(This,value) )
    ( (This)->lpVtbl->get_SystemSortOrder(This,value) )
    ( (This)->lpVtbl->put_SystemSortOrder(This,value) )
    ( (This)->lpVtbl->get_User(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactManagerForUser2[] = L"Windows.ApplicationModel.Contacts.IContactManagerForUser2";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ShowFullContactCard )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * contact,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIFullContactCardOptions * fullContactCardOptions
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ShowFullContactCard(This,contact,fullContactCardOptions) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactManagerStatics[] = L"Windows.ApplicationModel.Contacts.IContactManagerStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *ShowContactCard )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * contact,
                  __x_ABI_CWindows_CFoundation_CRect selection
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowContactCardWithPlacement )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * contact,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                  __x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowDelayLoadedContactCard )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * contact,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                  __x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardDelayedDataLoader * * dataLoader
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ShowContactCard(This,contact,selection) )
    ( (This)->lpVtbl->ShowContactCardWithPlacement(This,contact,selection,preferredPlacement) )
    ( (This)->lpVtbl->ShowDelayLoadedContactCard(This,contact,selection,preferredPlacement,dataLoader) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactManagerStatics2[] = L"Windows.ApplicationModel.Contacts.IContactManagerStatics2";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *RequestStoreAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactStore * * store
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestStoreAsync(This,store) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactManagerStatics3[] = L"Windows.ApplicationModel.Contacts.IContactManagerStatics3";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *ConvertContactToVCardAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * contact,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * * vCard
        );
                    HRESULT ( STDMETHODCALLTYPE *ConvertContactToVCardAsyncWithMaxBytes )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * contact,
                  UINT32 maxBytes,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * * vCard
        );
    HRESULT ( STDMETHODCALLTYPE *ConvertVCardToContactAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * vCard,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContact * * contact
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestStoreAsyncWithAccessType )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics3 * This,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactStoreAccessType accessType,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactStore * * store
        );
    HRESULT ( STDMETHODCALLTYPE *RequestAnnotationStoreAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics3 * This,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactAnnotationStoreAccessType accessType,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactAnnotationStore * * store
        );
    HRESULT ( STDMETHODCALLTYPE *IsShowContactCardSupported )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics3 * This,
                           __RPC__out boolean * result
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowContactCardWithOptions )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * contact,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                  __x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardOptions * contactCardOptions
        );
    HRESULT ( STDMETHODCALLTYPE *IsShowDelayLoadedContactCardSupported )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics3 * This,
                           __RPC__out boolean * result
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowDelayLoadedContactCardWithOptions )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * contact,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                  __x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardOptions * contactCardOptions,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactCardDelayedDataLoader * * dataLoader
        );
    HRESULT ( STDMETHODCALLTYPE *ShowFullContactCard )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * contact,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIFullContactCardOptions * fullContactCardOptions
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SystemDisplayNameOrder )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics3 * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CContactNameOrder * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SystemDisplayNameOrder )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics3 * This,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactNameOrder value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SystemSortOrder )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics3 * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CContactNameOrder * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SystemSortOrder )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics3 * This,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactNameOrder value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ConvertContactToVCardAsync(This,contact,vCard) )
    ( (This)->lpVtbl->ConvertContactToVCardAsyncWithMaxBytes(This,contact,maxBytes,vCard) )
    ( (This)->lpVtbl->ConvertVCardToContactAsync(This,vCard,contact) )
    ( (This)->lpVtbl->RequestStoreAsyncWithAccessType(This,accessType,store) )
    ( (This)->lpVtbl->RequestAnnotationStoreAsync(This,accessType,store) )
    ( (This)->lpVtbl->IsShowContactCardSupported(This,result) )
    ( (This)->lpVtbl->ShowContactCardWithOptions(This,contact,selection,preferredPlacement,contactCardOptions) )
    ( (This)->lpVtbl->IsShowDelayLoadedContactCardSupported(This,result) )
    ( (This)->lpVtbl->ShowDelayLoadedContactCardWithOptions(This,contact,selection,preferredPlacement,contactCardOptions,dataLoader) )
    ( (This)->lpVtbl->ShowFullContactCard(This,contact,fullContactCardOptions) )
    ( (This)->lpVtbl->get_SystemDisplayNameOrder(This,value) )
    ( (This)->lpVtbl->put_SystemDisplayNameOrder(This,value) )
    ( (This)->lpVtbl->get_SystemSortOrder(This,value) )
    ( (This)->lpVtbl->put_SystemSortOrder(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactManagerStatics4[] = L"Windows.ApplicationModel.Contacts.IContactManagerStatics4";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForUser )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerForUser * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics4Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForUser(This,user,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactManagerStatics5[] = L"Windows.ApplicationModel.Contacts.IContactManagerStatics5";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsShowFullContactCardSupportedAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics5 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IncludeMiddleNameInSystemDisplayAndSort )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics5 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IncludeMiddleNameInSystemDisplayAndSort )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics5 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics5Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics5
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsShowFullContactCardSupportedAsync(This,result) )
    ( (This)->lpVtbl->get_IncludeMiddleNameInSystemDisplayAndSort(This,value) )
    ( (This)->lpVtbl->put_IncludeMiddleNameInSystemDisplayAndSort(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactManagerStatics5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactMatchReason[] = L"Windows.ApplicationModel.Contacts.IContactMatchReason";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactMatchReasonVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactMatchReason * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactMatchReason * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactMatchReason * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactMatchReason * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactMatchReason * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactMatchReason * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Field )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactMatchReason * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CContactMatchReasonKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Segments )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactMatchReason * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CData__CText__CTextSegment * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactMatchReason * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactMatchReasonVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactMatchReason
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactMatchReasonVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Field(This,value) )
    ( (This)->lpVtbl->get_Segments(This,value) )
    ( (This)->lpVtbl->get_Text(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactMatchReason;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactName[] = L"Windows.ApplicationModel.Contacts.IContactName";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactNameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactName * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactName * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactName * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactName * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactName * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactName * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FirstName )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactName * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FirstName )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactName * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastName )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactName * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LastName )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactName * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MiddleName )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactName * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MiddleName )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactName * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_YomiGivenName )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactName * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_YomiGivenName )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactName * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_YomiFamilyName )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactName * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_YomiFamilyName )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactName * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HonorificNameSuffix )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactName * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_HonorificNameSuffix )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactName * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HonorificNamePrefix )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactName * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_HonorificNamePrefix )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactName * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactName * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_YomiDisplayName )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactName * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactNameVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactName
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactNameVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FirstName(This,value) )
    ( (This)->lpVtbl->put_FirstName(This,value) )
    ( (This)->lpVtbl->get_LastName(This,value) )
    ( (This)->lpVtbl->put_LastName(This,value) )
    ( (This)->lpVtbl->get_MiddleName(This,value) )
    ( (This)->lpVtbl->put_MiddleName(This,value) )
    ( (This)->lpVtbl->get_YomiGivenName(This,value) )
    ( (This)->lpVtbl->put_YomiGivenName(This,value) )
    ( (This)->lpVtbl->get_YomiFamilyName(This,value) )
    ( (This)->lpVtbl->put_YomiFamilyName(This,value) )
    ( (This)->lpVtbl->get_HonorificNameSuffix(This,value) )
    ( (This)->lpVtbl->put_HonorificNameSuffix(This,value) )
    ( (This)->lpVtbl->get_HonorificNamePrefix(This,value) )
    ( (This)->lpVtbl->put_HonorificNamePrefix(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_YomiDisplayName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactName;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactPanel[] = L"Windows.ApplicationModel.Contacts.IContactPanel";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanel * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanel * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanel * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanel * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanel * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanel * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ClosePanel )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanel * This
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HeaderColor )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanel * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_HeaderColor )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanel * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_LaunchFullAppRequested )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanel * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactPanel_Windows__CApplicationModel__CContacts__CContactPanelLaunchFullAppRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_LaunchFullAppRequested )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanel * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Closing )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanel * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactPanel_Windows__CApplicationModel__CContacts__CContactPanelClosingEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Closing )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanel * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanelVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanel
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanelVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ClosePanel(This) )
    ( (This)->lpVtbl->get_HeaderColor(This,value) )
    ( (This)->lpVtbl->put_HeaderColor(This,value) )
    ( (This)->lpVtbl->add_LaunchFullAppRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_LaunchFullAppRequested(This,token) )
    ( (This)->lpVtbl->add_Closing(This,handler,token) )
    ( (This)->lpVtbl->remove_Closing(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanel;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactPanelClosingEventArgs[] = L"Windows.ApplicationModel.Contacts.IContactPanelClosingEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanelClosingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanelClosingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanelClosingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanelClosingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanelClosingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanelClosingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanelClosingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanelClosingEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * deferral
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanelClosingEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanelClosingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanelClosingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeferral(This,deferral) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanelClosingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactPanelLaunchFullAppRequestedEventArgs[] = L"Windows.ApplicationModel.Contacts.IContactPanelLaunchFullAppRequestedEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanelLaunchFullAppRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanelLaunchFullAppRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanelLaunchFullAppRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanelLaunchFullAppRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanelLaunchFullAppRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanelLaunchFullAppRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanelLaunchFullAppRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanelLaunchFullAppRequestedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanelLaunchFullAppRequestedEventArgs * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanelLaunchFullAppRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanelLaunchFullAppRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanelLaunchFullAppRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactPanelLaunchFullAppRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactPhone[] = L"Windows.ApplicationModel.Contacts.IContactPhone";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhoneVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhone * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhone * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhone * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhone * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhone * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhone * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Number )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhone * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Number )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhone * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhone * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CContactPhoneKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Kind )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhone * This,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactPhoneKind value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhone * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhone * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhoneVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhone
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhoneVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Number(This,value) )
    ( (This)->lpVtbl->put_Number(This,value) )
    ( (This)->lpVtbl->get_Kind(This,value) )
    ( (This)->lpVtbl->put_Kind(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->put_Description(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactPhone;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactPicker[] = L"Windows.ApplicationModel.Contacts.IContactPicker";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPickerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CommitButtonText )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CommitButtonText )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectionMode )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CContactSelectionMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SelectionMode )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker * This,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactSelectionMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DesiredFields )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    HRESULT ( STDMETHODCALLTYPE *PickSingleContactAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactInformation * * result
        );
    HRESULT ( STDMETHODCALLTYPE *PickMultipleContactsAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactInformation * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPickerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPickerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CommitButtonText(This,value) )
    ( (This)->lpVtbl->put_CommitButtonText(This,value) )
    ( (This)->lpVtbl->get_SelectionMode(This,value) )
    ( (This)->lpVtbl->put_SelectionMode(This,value) )
    ( (This)->lpVtbl->get_DesiredFields(This,value) )
    ( (This)->lpVtbl->PickSingleContactAsync(This,result) )
    ( (This)->lpVtbl->PickMultipleContactsAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactPicker2[] = L"Windows.ApplicationModel.Contacts.IContactPicker2";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DesiredFieldsWithContactFieldType )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker2 * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CContacts__CContactFieldType * * value
        );
    HRESULT ( STDMETHODCALLTYPE *PickContactAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContact * * result
        );
    HRESULT ( STDMETHODCALLTYPE *PickContactsAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CContacts__CContact * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DesiredFieldsWithContactFieldType(This,value) )
    ( (This)->lpVtbl->PickContactAsync(This,result) )
    ( (This)->lpVtbl->PickContactsAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactPicker3[] = L"Windows.ApplicationModel.Contacts.IContactPicker3";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_User(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactPickerStatics[] = L"Windows.ApplicationModel.Contacts.IContactPickerStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPickerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPickerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPickerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPickerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPickerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPickerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPickerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateForUser )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPickerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPicker * * result
        );
    HRESULT ( STDMETHODCALLTYPE *IsSupportedAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPickerStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPickerStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPickerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactPickerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateForUser(This,user,result) )
    ( (This)->lpVtbl->IsSupportedAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactPickerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactQueryOptions[] = L"Windows.ApplicationModel.Contacts.IContactQueryOptions";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TextSearch )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryTextSearch * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContactListIds )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IncludeContactsFromHiddenLists )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IncludeContactsFromHiddenLists )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DesiredFields )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CContactQueryDesiredFields * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DesiredFields )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions * This,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactQueryDesiredFields value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DesiredOperations )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CContactAnnotationOperations * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DesiredOperations )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions * This,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactAnnotationOperations value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AnnotationListIds )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptionsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TextSearch(This,value) )
    ( (This)->lpVtbl->get_ContactListIds(This,value) )
    ( (This)->lpVtbl->get_IncludeContactsFromHiddenLists(This,value) )
    ( (This)->lpVtbl->put_IncludeContactsFromHiddenLists(This,value) )
    ( (This)->lpVtbl->get_DesiredFields(This,value) )
    ( (This)->lpVtbl->put_DesiredFields(This,value) )
    ( (This)->lpVtbl->get_DesiredOperations(This,value) )
    ( (This)->lpVtbl->put_DesiredOperations(This,value) )
    ( (This)->lpVtbl->get_AnnotationListIds(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactQueryOptionsFactory[] = L"Windows.ApplicationModel.Contacts.IContactQueryOptionsFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptionsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptionsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptionsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptionsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptionsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptionsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptionsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithText )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptionsFactory * This,
                  __RPC__in HSTRING text,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithTextAndFields )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptionsFactory * This,
                  __RPC__in HSTRING text,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactQuerySearchFields fields,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptionsFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptionsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptionsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWithText(This,text,result) )
    ( (This)->lpVtbl->CreateWithTextAndFields(This,text,fields,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptionsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactQueryTextSearch[] = L"Windows.ApplicationModel.Contacts.IContactQueryTextSearch";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryTextSearchVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryTextSearch * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryTextSearch * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryTextSearch * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryTextSearch * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryTextSearch * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryTextSearch * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Fields )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryTextSearch * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CContactQuerySearchFields * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Fields )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryTextSearch * This,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactQuerySearchFields value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryTextSearch * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Text )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryTextSearch * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SearchScope )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryTextSearch * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CContactQuerySearchScope * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SearchScope )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryTextSearch * This,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactQuerySearchScope value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryTextSearchVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryTextSearch
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryTextSearchVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Fields(This,value) )
    ( (This)->lpVtbl->put_Fields(This,value) )
    ( (This)->lpVtbl->get_Text(This,value) )
    ( (This)->lpVtbl->put_Text(This,value) )
    ( (This)->lpVtbl->get_SearchScope(This,value) )
    ( (This)->lpVtbl->put_SearchScope(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryTextSearch;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactReader[] = L"Windows.ApplicationModel.Contacts.IContactReader";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactReader * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactReader * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactReader * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactReader * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactReader * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactReader * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ReadBatchAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactReader * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactBatch * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetMatchingPropertiesWithMatchReason )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactReader * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * contact,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CContacts__CContactMatchReason * * ppRetVal
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactReaderVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactReader
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactReaderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ReadBatchAsync(This,value) )
    ( (This)->lpVtbl->GetMatchingPropertiesWithMatchReason(This,contact,ppRetVal) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactReader;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactSignificantOther[] = L"Windows.ApplicationModel.Contacts.IContactSignificantOther";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOtherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Name )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOtherVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOtherVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->put_Name(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->put_Description(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactSignificantOther2[] = L"Windows.ApplicationModel.Contacts.IContactSignificantOther2";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Relationship )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther2 * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CContactRelationship * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Relationship )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther2 * This,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactRelationship value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Relationship(This,value) )
    ( (This)->lpVtbl->put_Relationship(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactSignificantOther2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactStore[] = L"Windows.ApplicationModel.Contacts.IContactStore";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *FindContactsAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContact * * contacts
        );
                    HRESULT ( STDMETHODCALLTYPE *FindContactsWithSearchTextAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore * This,
                  __RPC__in HSTRING searchText,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContact * * contacts
        );
    HRESULT ( STDMETHODCALLTYPE *GetContactAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore * This,
                  __RPC__in HSTRING contactId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContact * * contacts
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStoreVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStoreVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FindContactsAsync(This,contacts) )
    ( (This)->lpVtbl->FindContactsWithSearchTextAsync(This,searchText,contacts) )
    ( (This)->lpVtbl->GetContactAsync(This,contactId,contacts) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactStore2[] = L"Windows.ApplicationModel.Contacts.IContactStore2";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ChangeTracker )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeTracker * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ContactChanged )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CContacts__CContactStore_Windows__CApplicationModel__CContacts__CContactChangedEventArgs * value,
                           __RPC__out EventRegistrationToken * returnValue
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ContactChanged )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore2 * This,
                  EventRegistrationToken value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AggregateContactManager )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIAggregateContactManager * * value
        );
    HRESULT ( STDMETHODCALLTYPE *FindContactListsAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CContacts__CContactList * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetContactListAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore2 * This,
                  __RPC__in HSTRING contactListId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactList * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateContactListAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore2 * This,
                  __RPC__in HSTRING displayName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactList * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetMeContactAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContact * * meContact
        );
                    HRESULT ( STDMETHODCALLTYPE *GetContactReader )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactReader * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *GetContactReaderWithOptions )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactQueryOptions * options,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactReader * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateContactListInAccountAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore2 * This,
                  __RPC__in HSTRING displayName,
                  __RPC__in HSTRING userDataAccountId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CContactList * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ChangeTracker(This,value) )
    ( (This)->lpVtbl->add_ContactChanged(This,value,returnValue) )
    ( (This)->lpVtbl->remove_ContactChanged(This,value) )
    ( (This)->lpVtbl->get_AggregateContactManager(This,value) )
    ( (This)->lpVtbl->FindContactListsAsync(This,value) )
    ( (This)->lpVtbl->GetContactListAsync(This,contactListId,value) )
    ( (This)->lpVtbl->CreateContactListAsync(This,displayName,value) )
    ( (This)->lpVtbl->GetMeContactAsync(This,meContact) )
    ( (This)->lpVtbl->GetContactReader(This,value) )
    ( (This)->lpVtbl->GetContactReaderWithOptions(This,options,value) )
    ( (This)->lpVtbl->CreateContactListInAccountAsync(This,displayName,userDataAccountId,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactStore3[] = L"Windows.ApplicationModel.Contacts.IContactStore3";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetChangeTracker )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore3 * This,
                  __RPC__in HSTRING identity,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContactChangeTracker * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetChangeTracker(This,identity,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactStore3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactStoreNotificationTriggerDetails[] = L"Windows.ApplicationModel.Contacts.IContactStoreNotificationTriggerDetails";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStoreNotificationTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStoreNotificationTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStoreNotificationTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStoreNotificationTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStoreNotificationTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStoreNotificationTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStoreNotificationTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStoreNotificationTriggerDetailsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStoreNotificationTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactStoreNotificationTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactStoreNotificationTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactWebsite[] = L"Windows.ApplicationModel.Contacts.IContactWebsite";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsiteVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Uri )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsiteVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsiteVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Uri(This,value) )
    ( (This)->lpVtbl->put_Uri(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->put_Description(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IContactWebsite2[] = L"Windows.ApplicationModel.Contacts.IContactWebsite2";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RawValue )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RawValue )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite2 * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RawValue(This,value) )
    ( (This)->lpVtbl->put_RawValue(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIContactWebsite2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IFullContactCardOptions[] = L"Windows.ApplicationModel.Contacts.IFullContactCardOptions";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIFullContactCardOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIFullContactCardOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIFullContactCardOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIFullContactCardOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIFullContactCardOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIFullContactCardOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIFullContactCardOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DesiredRemainingView )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIFullContactCardOptions * This,
                           __RPC__out __x_ABI_CWindows_CUI_CViewManagement_CViewSizePreference * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DesiredRemainingView )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIFullContactCardOptions * This,
                  __x_ABI_CWindows_CUI_CViewManagement_CViewSizePreference value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIFullContactCardOptionsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIFullContactCardOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIFullContactCardOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DesiredRemainingView(This,value) )
    ( (This)->lpVtbl->put_DesiredRemainingView(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIFullContactCardOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IKnownContactFieldStatics[] = L"Windows.ApplicationModel.Contacts.IKnownContactFieldStatics";
typedef struct
DEPRECATED("IKnownContactFieldStatics may be altered or unavailable for releases after Windows 8.1. Instead, use ContactAddress, ContactPhone, ContactConnectedServiceAccount or ContactEmail.")
__x_ABI_CWindows_CApplicationModel_CContacts_CIKnownContactFieldStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIKnownContactFieldStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIKnownContactFieldStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIKnownContactFieldStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIKnownContactFieldStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIKnownContactFieldStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIKnownContactFieldStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("IKnownContactFieldStatics may be altered or unavailable for releases after Windows 8.1. Instead, use ContactAddress, ContactPhone, ContactConnectedServiceAccount or ContactEmail.")
                               HRESULT ( STDMETHODCALLTYPE *get_Email )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIKnownContactFieldStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("IKnownContactFieldStatics may be altered or unavailable for releases after Windows 8.1. Instead, use ContactAddress, ContactPhone, ContactConnectedServiceAccount or ContactEmail.")
                               HRESULT ( STDMETHODCALLTYPE *get_PhoneNumber )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIKnownContactFieldStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("IKnownContactFieldStatics may be altered or unavailable for releases after Windows 8.1. Instead, use ContactAddress, ContactPhone, ContactConnectedServiceAccount or ContactEmail.")
                               HRESULT ( STDMETHODCALLTYPE *get_Location )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIKnownContactFieldStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("IKnownContactFieldStatics may be altered or unavailable for releases after Windows 8.1. Instead, use ContactAddress, ContactPhone, ContactConnectedServiceAccount or ContactEmail.")
                               HRESULT ( STDMETHODCALLTYPE *get_InstantMessage )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIKnownContactFieldStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("IKnownContactFieldStatics may be altered or unavailable for releases after Windows 8.1. Instead, use ContactAddress, ContactPhone, ContactConnectedServiceAccount or ContactEmail.")
                      HRESULT ( STDMETHODCALLTYPE *ConvertNameToType )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIKnownContactFieldStatics * This,
                  __RPC__in HSTRING name,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType * type
        );
    DEPRECATED("IKnownContactFieldStatics may be altered or unavailable for releases after Windows 8.1. Instead, use ContactAddress, ContactPhone, ContactConnectedServiceAccount or ContactEmail.")
                      HRESULT ( STDMETHODCALLTYPE *ConvertTypeToName )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIKnownContactFieldStatics * This,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CContactFieldType type,
                           __RPC__deref_out_opt HSTRING * name
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIKnownContactFieldStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIKnownContactFieldStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIKnownContactFieldStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("IKnownContactFieldStatics may be altered or unavailable for releases after Windows 8.1. Instead, use ContactAddress, ContactPhone, ContactConnectedServiceAccount or ContactEmail.")
    ( (This)->lpVtbl->get_Email(This,value) )
DEPRECATED("IKnownContactFieldStatics may be altered or unavailable for releases after Windows 8.1. Instead, use ContactAddress, ContactPhone, ContactConnectedServiceAccount or ContactEmail.")
    ( (This)->lpVtbl->get_PhoneNumber(This,value) )
DEPRECATED("IKnownContactFieldStatics may be altered or unavailable for releases after Windows 8.1. Instead, use ContactAddress, ContactPhone, ContactConnectedServiceAccount or ContactEmail.")
    ( (This)->lpVtbl->get_Location(This,value) )
DEPRECATED("IKnownContactFieldStatics may be altered or unavailable for releases after Windows 8.1. Instead, use ContactAddress, ContactPhone, ContactConnectedServiceAccount or ContactEmail.")
    ( (This)->lpVtbl->get_InstantMessage(This,value) )
DEPRECATED("IKnownContactFieldStatics may be altered or unavailable for releases after Windows 8.1. Instead, use ContactAddress, ContactPhone, ContactConnectedServiceAccount or ContactEmail.")
    ( (This)->lpVtbl->ConvertNameToType(This,name,type) )
DEPRECATED("IKnownContactFieldStatics may be altered or unavailable for releases after Windows 8.1. Instead, use ContactAddress, ContactPhone, ContactConnectedServiceAccount or ContactEmail.")
    ( (This)->lpVtbl->ConvertTypeToName(This,type,name) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIKnownContactFieldStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IPinnedContactIdsQueryResult[] = L"Windows.ApplicationModel.Contacts.IPinnedContactIdsQueryResult";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactIdsQueryResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactIdsQueryResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactIdsQueryResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactIdsQueryResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactIdsQueryResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactIdsQueryResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactIdsQueryResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ContactIds )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactIdsQueryResult * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactIdsQueryResultVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactIdsQueryResult
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactIdsQueryResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ContactIds(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactIdsQueryResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IPinnedContactManager[] = L"Windows.ApplicationModel.Contacts.IPinnedContactManager";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManager * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * user
        );
    HRESULT ( STDMETHODCALLTYPE *IsPinSurfaceSupported )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManager * This,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CPinnedContactSurface surface,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *IsContactPinned )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * contact,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CPinnedContactSurface surface,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *RequestPinContactAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * contact,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CPinnedContactSurface surface,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RequestPinContactsAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManager * This,
                  __RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CContacts__CContact * contacts,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CPinnedContactSurface surface,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RequestUnpinContactAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * contact,
                  __x_ABI_CWindows_CApplicationModel_CContacts_CPinnedContactSurface surface,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SignalContactActivity )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIContact * contact
        );
    HRESULT ( STDMETHODCALLTYPE *GetPinnedContactIdsAsync )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManager * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CContacts__CPinnedContactIdsQueryResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManagerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManager
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_User(This,user) )
    ( (This)->lpVtbl->IsPinSurfaceSupported(This,surface,result) )
    ( (This)->lpVtbl->IsContactPinned(This,contact,surface,result) )
    ( (This)->lpVtbl->RequestPinContactAsync(This,contact,surface,operation) )
    ( (This)->lpVtbl->RequestPinContactsAsync(This,contacts,surface,operation) )
    ( (This)->lpVtbl->RequestUnpinContactAsync(This,contact,surface,operation) )
    ( (This)->lpVtbl->SignalContactActivity(This,contact) )
    ( (This)->lpVtbl->GetPinnedContactIdsAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Contacts_IPinnedContactManagerStatics[] = L"Windows.ApplicationModel.Contacts.IPinnedContactManagerStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManager * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetForUser )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManager * * result
        );
    HRESULT ( STDMETHODCALLTYPE *IsSupported )(
        __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManagerStatics * This,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManagerStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,result) )
    ( (This)->lpVtbl->GetForUser(This,user,result) )
    ( (This)->lpVtbl->IsSupported(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CContacts_CIPinnedContactManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_AggregateContactManager[] = L"Windows.ApplicationModel.Contacts.AggregateContactManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_Contact[] = L"Windows.ApplicationModel.Contacts.Contact";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactAddress[] = L"Windows.ApplicationModel.Contacts.ContactAddress";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactAnnotation[] = L"Windows.ApplicationModel.Contacts.ContactAnnotation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactAnnotationList[] = L"Windows.ApplicationModel.Contacts.ContactAnnotationList";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactAnnotationStore[] = L"Windows.ApplicationModel.Contacts.ContactAnnotationStore";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactBatch[] = L"Windows.ApplicationModel.Contacts.ContactBatch";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactCardDelayedDataLoader[] = L"Windows.ApplicationModel.Contacts.ContactCardDelayedDataLoader";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactCardOptions[] = L"Windows.ApplicationModel.Contacts.ContactCardOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactChange[] = L"Windows.ApplicationModel.Contacts.ContactChange";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactChangeReader[] = L"Windows.ApplicationModel.Contacts.ContactChangeReader";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactChangeTracker[] = L"Windows.ApplicationModel.Contacts.ContactChangeTracker";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactChangedDeferral[] = L"Windows.ApplicationModel.Contacts.ContactChangedDeferral";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactChangedEventArgs[] = L"Windows.ApplicationModel.Contacts.ContactChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactConnectedServiceAccount[] = L"Windows.ApplicationModel.Contacts.ContactConnectedServiceAccount";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactDate[] = L"Windows.ApplicationModel.Contacts.ContactDate";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactEmail[] = L"Windows.ApplicationModel.Contacts.ContactEmail";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactField[] = L"Windows.ApplicationModel.Contacts.ContactField";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactFieldFactory[] = L"Windows.ApplicationModel.Contacts.ContactFieldFactory";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactGroup[] = L"Windows.ApplicationModel.Contacts.ContactGroup";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactInformation[] = L"Windows.ApplicationModel.Contacts.ContactInformation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactInstantMessageField[] = L"Windows.ApplicationModel.Contacts.ContactInstantMessageField";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactJobInfo[] = L"Windows.ApplicationModel.Contacts.ContactJobInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactLaunchActionVerbs[] = L"Windows.ApplicationModel.Contacts.ContactLaunchActionVerbs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactList[] = L"Windows.ApplicationModel.Contacts.ContactList";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactListLimitedWriteOperations[] = L"Windows.ApplicationModel.Contacts.ContactListLimitedWriteOperations";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactListSyncConstraints[] = L"Windows.ApplicationModel.Contacts.ContactListSyncConstraints";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactListSyncManager[] = L"Windows.ApplicationModel.Contacts.ContactListSyncManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactLocationField[] = L"Windows.ApplicationModel.Contacts.ContactLocationField";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactManager[] = L"Windows.ApplicationModel.Contacts.ContactManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactManagerForUser[] = L"Windows.ApplicationModel.Contacts.ContactManagerForUser";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactMatchReason[] = L"Windows.ApplicationModel.Contacts.ContactMatchReason";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactPanel[] = L"Windows.ApplicationModel.Contacts.ContactPanel";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactPanelClosingEventArgs[] = L"Windows.ApplicationModel.Contacts.ContactPanelClosingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactPanelLaunchFullAppRequestedEventArgs[] = L"Windows.ApplicationModel.Contacts.ContactPanelLaunchFullAppRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactPhone[] = L"Windows.ApplicationModel.Contacts.ContactPhone";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactPicker[] = L"Windows.ApplicationModel.Contacts.ContactPicker";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactQueryOptions[] = L"Windows.ApplicationModel.Contacts.ContactQueryOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactQueryTextSearch[] = L"Windows.ApplicationModel.Contacts.ContactQueryTextSearch";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactReader[] = L"Windows.ApplicationModel.Contacts.ContactReader";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactSignificantOther[] = L"Windows.ApplicationModel.Contacts.ContactSignificantOther";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactStore[] = L"Windows.ApplicationModel.Contacts.ContactStore";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactStoreNotificationTriggerDetails[] = L"Windows.ApplicationModel.Contacts.ContactStoreNotificationTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_ContactWebsite[] = L"Windows.ApplicationModel.Contacts.ContactWebsite";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_FullContactCardOptions[] = L"Windows.ApplicationModel.Contacts.FullContactCardOptions";
DEPRECATED("KnownContactField  may be altered or unavailable for releases after Windows 8.1. Instead, use ContactAddress, ContactPhone, ContactConnectedServiceAccount or ContactEmail.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_KnownContactField[] = L"Windows.ApplicationModel.Contacts.KnownContactField";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_PinnedContactIdsQueryResult[] = L"Windows.ApplicationModel.Contacts.PinnedContactIdsQueryResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Contacts_PinnedContactManager[] = L"Windows.ApplicationModel.Contacts.PinnedContactManager";
       
       
#pragma clang diagnostic pop
