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
#include "Windows.ApplicationModel.h"
#include "Windows.Data.Xml.Dom.h"
#include "Windows.System.h"
#include "Windows.UI.Notifications.Management.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationContent __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationContent;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationText __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationText;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotification __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotification;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotificationFactory __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotificationFactory;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerForUser __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerForUser;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerStatics __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerStatics;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerStatics2 __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerStatics2;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdater __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdater;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationHintsStatics __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationHintsStatics;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationTextStylesStatics __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationTextStylesStatics;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIKnownNotificationBindingsStatics __x_ABI_CWindows_CUI_CNotifications_CIKnownNotificationBindingsStatics;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CINotification __x_ABI_CWindows_CUI_CNotifications_CINotification;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CINotificationBinding __x_ABI_CWindows_CUI_CNotifications_CINotificationBinding;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CINotificationData __x_ABI_CWindows_CUI_CNotifications_CINotificationData;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CINotificationDataFactory __x_ABI_CWindows_CUI_CNotifications_CINotificationDataFactory;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CINotificationVisual __x_ABI_CWindows_CUI_CNotifications_CINotificationVisual;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotification __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotification;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotificationFactory __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotificationFactory;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification2 __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification2;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification3 __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification3;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification4 __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification4;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationFactory __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationFactory;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationShowingEventArgs __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationShowingEventArgs;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIShownTileNotification __x_ABI_CWindows_CUI_CNotifications_CIShownTileNotification;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutNotification __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutNotification;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutNotificationFactory __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutNotificationFactory;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdateManagerStatics __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdateManagerStatics;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdater __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdater;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CITileNotification __x_ABI_CWindows_CUI_CNotifications_CITileNotification;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CITileNotificationFactory __x_ABI_CWindows_CUI_CNotifications_CITileNotificationFactory;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerForUser __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerForUser;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerStatics __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerStatics;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerStatics2 __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerStatics2;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CITileUpdater __x_ABI_CWindows_CUI_CNotifications_CITileUpdater;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CITileUpdater2 __x_ABI_CWindows_CUI_CNotifications_CITileUpdater2;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIToastActivatedEventArgs __x_ABI_CWindows_CUI_CNotifications_CIToastActivatedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIToastActivatedEventArgs2 __x_ABI_CWindows_CUI_CNotifications_CIToastActivatedEventArgs2;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIToastCollection __x_ABI_CWindows_CUI_CNotifications_CIToastCollection;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionFactory __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionFactory;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionManager __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionManager;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIToastDismissedEventArgs __x_ABI_CWindows_CUI_CNotifications_CIToastDismissedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIToastFailedEventArgs __x_ABI_CWindows_CUI_CNotifications_CIToastFailedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotification __x_ABI_CWindows_CUI_CNotifications_CIToastNotification;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotification2 __x_ABI_CWindows_CUI_CNotifications_CIToastNotification2;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotification3 __x_ABI_CWindows_CUI_CNotifications_CIToastNotification3;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotification4 __x_ABI_CWindows_CUI_CNotifications_CIToastNotification4;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotification6 __x_ABI_CWindows_CUI_CNotifications_CIToastNotification6;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationActionTriggerDetail __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationActionTriggerDetail;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationFactory __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationFactory;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory2 __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory2;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistoryChangedTriggerDetail __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistoryChangedTriggerDetail;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistoryChangedTriggerDetail2 __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistoryChangedTriggerDetail2;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUser __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUser;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUser2 __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUser2;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics2 __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics2;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics4 __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics4;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics5 __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics5;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier2 __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier2;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier3 __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier3;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIUserNotification __x_ABI_CWindows_CUI_CNotifications_CIUserNotification;
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIUserNotificationChangedEventArgs __x_ABI_CWindows_CUI_CNotifications_CIUserNotificationChangedEventArgs;
typedef interface __FIIterator_1_Windows__CUI__CNotifications__CAdaptiveNotificationText __FIIterator_1_Windows__CUI__CNotifications__CAdaptiveNotificationText;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CNotifications__CAdaptiveNotificationText;
typedef struct __FIIterator_1_Windows__CUI__CNotifications__CAdaptiveNotificationTextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CNotifications__CAdaptiveNotificationText * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CAdaptiveNotificationText * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CAdaptiveNotificationText * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CAdaptiveNotificationText * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CAdaptiveNotificationText * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CAdaptiveNotificationText * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CAdaptiveNotificationText * This, __RPC__out __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationText * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CAdaptiveNotificationText * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CAdaptiveNotificationText * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CAdaptiveNotificationText * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationText * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CNotifications__CAdaptiveNotificationTextVtbl;
interface __FIIterator_1_Windows__CUI__CNotifications__CAdaptiveNotificationText
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CNotifications__CAdaptiveNotificationTextVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CNotifications__CAdaptiveNotificationText __FIIterable_1_Windows__CUI__CNotifications__CAdaptiveNotificationText;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CNotifications__CAdaptiveNotificationText;
typedef struct __FIIterable_1_Windows__CUI__CNotifications__CAdaptiveNotificationTextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CNotifications__CAdaptiveNotificationText * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CAdaptiveNotificationText * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CAdaptiveNotificationText * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CAdaptiveNotificationText * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CAdaptiveNotificationText * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CAdaptiveNotificationText * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CAdaptiveNotificationText * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CNotifications__CAdaptiveNotificationText **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CNotifications__CAdaptiveNotificationTextVtbl;
interface __FIIterable_1_Windows__CUI__CNotifications__CAdaptiveNotificationText
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CNotifications__CAdaptiveNotificationTextVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CNotifications__CNotificationBinding __FIIterator_1_Windows__CUI__CNotifications__CNotificationBinding;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CNotifications__CNotificationBinding;
typedef struct __FIIterator_1_Windows__CUI__CNotifications__CNotificationBindingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CNotifications__CNotificationBinding * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CNotificationBinding * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CNotificationBinding * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CNotificationBinding * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CNotificationBinding * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CNotificationBinding * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CNotificationBinding * This, __RPC__out __x_ABI_CWindows_CUI_CNotifications_CINotificationBinding * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CNotificationBinding * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CNotificationBinding * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CNotificationBinding * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CNotifications_CINotificationBinding * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CNotifications__CNotificationBindingVtbl;
interface __FIIterator_1_Windows__CUI__CNotifications__CNotificationBinding
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CNotifications__CNotificationBindingVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CNotifications__CNotificationBinding __FIIterable_1_Windows__CUI__CNotifications__CNotificationBinding;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CNotifications__CNotificationBinding;
typedef struct __FIIterable_1_Windows__CUI__CNotifications__CNotificationBindingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CNotifications__CNotificationBinding * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CNotificationBinding * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CNotificationBinding * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CNotificationBinding * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CNotificationBinding * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CNotificationBinding * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CNotificationBinding * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CNotifications__CNotificationBinding **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CNotifications__CNotificationBindingVtbl;
interface __FIIterable_1_Windows__CUI__CNotifications__CNotificationBinding
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CNotifications__CNotificationBindingVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CNotifications__CScheduledTileNotification __FIIterator_1_Windows__CUI__CNotifications__CScheduledTileNotification;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CNotifications__CScheduledTileNotification;
typedef struct __FIIterator_1_Windows__CUI__CNotifications__CScheduledTileNotificationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CNotifications__CScheduledTileNotification * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CScheduledTileNotification * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CScheduledTileNotification * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CScheduledTileNotification * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CScheduledTileNotification * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CScheduledTileNotification * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CScheduledTileNotification * This, __RPC__out __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotification * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CScheduledTileNotification * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CScheduledTileNotification * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CScheduledTileNotification * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotification * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CNotifications__CScheduledTileNotificationVtbl;
interface __FIIterator_1_Windows__CUI__CNotifications__CScheduledTileNotification
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CNotifications__CScheduledTileNotificationVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CNotifications__CScheduledTileNotification __FIIterable_1_Windows__CUI__CNotifications__CScheduledTileNotification;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CNotifications__CScheduledTileNotification;
typedef struct __FIIterable_1_Windows__CUI__CNotifications__CScheduledTileNotificationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CNotifications__CScheduledTileNotification * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CScheduledTileNotification * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CScheduledTileNotification * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CScheduledTileNotification * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CScheduledTileNotification * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CScheduledTileNotification * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CScheduledTileNotification * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CNotifications__CScheduledTileNotification **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CNotifications__CScheduledTileNotificationVtbl;
interface __FIIterable_1_Windows__CUI__CNotifications__CScheduledTileNotification
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CNotifications__CScheduledTileNotificationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CNotifications__CScheduledToastNotification __FIIterator_1_Windows__CUI__CNotifications__CScheduledToastNotification;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CNotifications__CScheduledToastNotification;
typedef struct __FIIterator_1_Windows__CUI__CNotifications__CScheduledToastNotificationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CNotifications__CScheduledToastNotification * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CScheduledToastNotification * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CScheduledToastNotification * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CScheduledToastNotification * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CScheduledToastNotification * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CScheduledToastNotification * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CScheduledToastNotification * This, __RPC__out __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CScheduledToastNotification * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CScheduledToastNotification * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CScheduledToastNotification * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CNotifications__CScheduledToastNotificationVtbl;
interface __FIIterator_1_Windows__CUI__CNotifications__CScheduledToastNotification
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CNotifications__CScheduledToastNotificationVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CNotifications__CScheduledToastNotification __FIIterable_1_Windows__CUI__CNotifications__CScheduledToastNotification;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CNotifications__CScheduledToastNotification;
typedef struct __FIIterable_1_Windows__CUI__CNotifications__CScheduledToastNotificationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CNotifications__CScheduledToastNotification * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CScheduledToastNotification * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CScheduledToastNotification * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CScheduledToastNotification * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CScheduledToastNotification * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CScheduledToastNotification * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CScheduledToastNotification * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CNotifications__CScheduledToastNotification **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CNotifications__CScheduledToastNotificationVtbl;
interface __FIIterable_1_Windows__CUI__CNotifications__CScheduledToastNotification
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CNotifications__CScheduledToastNotificationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification;
typedef struct __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotificationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification * This, __RPC__out __x_ABI_CWindows_CUI_CNotifications_CIShownTileNotification * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CNotifications_CIShownTileNotification * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotificationVtbl;
interface __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotificationVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification;
typedef struct __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotificationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CNotifications__CShownTileNotification **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotificationVtbl;
interface __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotification
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CNotifications__CShownTileNotificationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CNotifications__CToastCollection __FIIterator_1_Windows__CUI__CNotifications__CToastCollection;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CNotifications__CToastCollection;
typedef struct __FIIterator_1_Windows__CUI__CNotifications__CToastCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CNotifications__CToastCollection * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CToastCollection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CToastCollection * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CToastCollection * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CToastCollection * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CToastCollection * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CToastCollection * This, __RPC__out __x_ABI_CWindows_CUI_CNotifications_CIToastCollection * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CToastCollection * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CToastCollection * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CToastCollection * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CNotifications_CIToastCollection * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CNotifications__CToastCollectionVtbl;
interface __FIIterator_1_Windows__CUI__CNotifications__CToastCollection
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CNotifications__CToastCollectionVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CNotifications__CToastCollection __FIIterable_1_Windows__CUI__CNotifications__CToastCollection;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CNotifications__CToastCollection;
typedef struct __FIIterable_1_Windows__CUI__CNotifications__CToastCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CNotifications__CToastCollection * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CToastCollection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CToastCollection * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CToastCollection * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CToastCollection * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CToastCollection * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CToastCollection * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CNotifications__CToastCollection **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CNotifications__CToastCollectionVtbl;
interface __FIIterable_1_Windows__CUI__CNotifications__CToastCollection
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CNotifications__CToastCollectionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CNotifications__CToastNotification __FIIterator_1_Windows__CUI__CNotifications__CToastNotification;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CNotifications__CToastNotification;
typedef struct __FIIterator_1_Windows__CUI__CNotifications__CToastNotificationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CNotifications__CToastNotification * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CToastNotification * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CToastNotification * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CToastNotification * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CToastNotification * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CToastNotification * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CToastNotification * This, __RPC__out __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CToastNotification * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CToastNotification * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CNotifications__CToastNotification * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CNotifications__CToastNotificationVtbl;
interface __FIIterator_1_Windows__CUI__CNotifications__CToastNotification
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CNotifications__CToastNotificationVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CNotifications__CToastNotification __FIIterable_1_Windows__CUI__CNotifications__CToastNotification;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CNotifications__CToastNotification;
typedef struct __FIIterable_1_Windows__CUI__CNotifications__CToastNotificationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CNotifications__CToastNotification * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CToastNotification * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CToastNotification * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CToastNotification * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CToastNotification * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CToastNotification * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CNotifications__CToastNotification * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CNotifications__CToastNotification **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CNotifications__CToastNotificationVtbl;
interface __FIIterable_1_Windows__CUI__CNotifications__CToastNotification
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CNotifications__CToastNotificationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
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
typedef interface __FIVectorView_1_Windows__CUI__CNotifications__CAdaptiveNotificationText __FIVectorView_1_Windows__CUI__CNotifications__CAdaptiveNotificationText;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CNotifications__CAdaptiveNotificationText;
typedef struct __FIVectorView_1_Windows__CUI__CNotifications__CAdaptiveNotificationTextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CAdaptiveNotificationText * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CAdaptiveNotificationText * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CAdaptiveNotificationText * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CAdaptiveNotificationText * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CAdaptiveNotificationText * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CAdaptiveNotificationText * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CAdaptiveNotificationText * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationText * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CAdaptiveNotificationText * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CAdaptiveNotificationText * This,
                       __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationText * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CAdaptiveNotificationText * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationText * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CNotifications__CAdaptiveNotificationTextVtbl;
interface __FIVectorView_1_Windows__CUI__CNotifications__CAdaptiveNotificationText
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CNotifications__CAdaptiveNotificationTextVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CNotifications__CNotificationBinding __FIVectorView_1_Windows__CUI__CNotifications__CNotificationBinding;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CNotifications__CNotificationBinding;
typedef struct __FIVectorView_1_Windows__CUI__CNotifications__CNotificationBindingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CNotificationBinding * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CNotificationBinding * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CNotificationBinding * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CNotificationBinding * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CNotificationBinding * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CNotificationBinding * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CNotificationBinding * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CNotifications_CINotificationBinding * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CNotificationBinding * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CNotificationBinding * This,
                       __x_ABI_CWindows_CUI_CNotifications_CINotificationBinding * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CNotificationBinding * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CNotifications_CINotificationBinding * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CNotifications__CNotificationBindingVtbl;
interface __FIVectorView_1_Windows__CUI__CNotifications__CNotificationBinding
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CNotifications__CNotificationBindingVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CNotifications__CScheduledTileNotification __FIVectorView_1_Windows__CUI__CNotifications__CScheduledTileNotification;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CNotifications__CScheduledTileNotification;
typedef struct __FIVectorView_1_Windows__CUI__CNotifications__CScheduledTileNotificationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CScheduledTileNotification * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CScheduledTileNotification * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CScheduledTileNotification * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CScheduledTileNotification * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CScheduledTileNotification * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CScheduledTileNotification * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CScheduledTileNotification * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotification * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CScheduledTileNotification * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CScheduledTileNotification * This,
                       __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotification * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CScheduledTileNotification * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotification * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CNotifications__CScheduledTileNotificationVtbl;
interface __FIVectorView_1_Windows__CUI__CNotifications__CScheduledTileNotification
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CNotifications__CScheduledTileNotificationVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CNotifications__CScheduledToastNotification __FIVectorView_1_Windows__CUI__CNotifications__CScheduledToastNotification;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CNotifications__CScheduledToastNotification;
typedef struct __FIVectorView_1_Windows__CUI__CNotifications__CScheduledToastNotificationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CScheduledToastNotification * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CScheduledToastNotification * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CScheduledToastNotification * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CScheduledToastNotification * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CScheduledToastNotification * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CScheduledToastNotification * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CScheduledToastNotification * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CScheduledToastNotification * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CScheduledToastNotification * This,
                       __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CScheduledToastNotification * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CNotifications__CScheduledToastNotificationVtbl;
interface __FIVectorView_1_Windows__CUI__CNotifications__CScheduledToastNotification
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CNotifications__CScheduledToastNotificationVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification;
typedef struct __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotificationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CNotifications_CIShownTileNotification * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification * This,
                       __x_ABI_CWindows_CUI_CNotifications_CIShownTileNotification * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CNotifications_CIShownTileNotification * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotificationVtbl;
interface __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotification
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CNotifications__CShownTileNotificationVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CNotifications__CToastCollection __FIVectorView_1_Windows__CUI__CNotifications__CToastCollection;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CNotifications__CToastCollection;
typedef struct __FIVectorView_1_Windows__CUI__CNotifications__CToastCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CToastCollection * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CToastCollection * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CToastCollection * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CToastCollection * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CToastCollection * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CToastCollection * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CToastCollection * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CNotifications_CIToastCollection * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CToastCollection * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CToastCollection * This,
                       __x_ABI_CWindows_CUI_CNotifications_CIToastCollection * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CToastCollection * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CNotifications_CIToastCollection * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CNotifications__CToastCollectionVtbl;
interface __FIVectorView_1_Windows__CUI__CNotifications__CToastCollection
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CNotifications__CToastCollectionVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CNotifications__CToastNotification __FIVectorView_1_Windows__CUI__CNotifications__CToastNotification;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CNotifications__CToastNotification;
typedef struct __FIVectorView_1_Windows__CUI__CNotifications__CToastNotificationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CToastNotification * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CToastNotification * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CToastNotification * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CToastNotification * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CToastNotification * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CToastNotification * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CToastNotification * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CToastNotification * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CToastNotification * This,
                       __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CNotifications__CToastNotification * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CNotifications__CToastNotificationVtbl;
interface __FIVectorView_1_Windows__CUI__CNotifications__CToastNotification
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CNotifications__CToastNotificationVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CNotifications__CNotificationBinding __FIVector_1_Windows__CUI__CNotifications__CNotificationBinding;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CNotifications__CNotificationBinding;
typedef struct __FIVector_1_Windows__CUI__CNotifications__CNotificationBindingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CNotifications__CNotificationBinding * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CNotifications__CNotificationBinding * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CNotifications__CNotificationBinding * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CNotifications__CNotificationBinding * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CNotifications__CNotificationBinding * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CINotificationBinding * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CNotifications__CNotificationBinding * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CNotifications__CNotificationBinding * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CINotificationBinding * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CNotifications__CNotificationBinding * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CNotifications__CNotificationBinding * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CNotifications__CNotificationBinding **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CNotifications__CNotificationBinding * This,
                   __RPC__in __x_ABI_CWindows_CUI_CNotifications_CINotificationBinding * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CNotifications__CNotificationBinding * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CNotifications_CINotificationBinding * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CNotifications__CNotificationBinding * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CNotifications_CINotificationBinding * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CNotifications__CNotificationBinding * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CNotifications__CNotificationBinding * This, __RPC__in __x_ABI_CWindows_CUI_CNotifications_CINotificationBinding * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CNotifications__CNotificationBinding * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CNotifications__CNotificationBinding * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CNotifications__CNotificationBinding * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CNotifications_CINotificationBinding * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CNotifications__CNotificationBinding * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CNotifications_CINotificationBinding * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CNotifications__CNotificationBindingVtbl;
interface __FIVector_1_Windows__CUI__CNotifications__CNotificationBinding
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CNotifications__CNotificationBindingVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CToastCollection __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CToastCollection;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CToastCollection;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CToastCollection __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CToastCollection;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CToastCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CToastCollection * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CToastCollection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CToastCollection * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CToastCollection * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CToastCollection *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CToastCollectionVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CToastCollection
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CToastCollectionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CToastCollection __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CToastCollection;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CToastCollection;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CToastCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CToastCollection * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CToastCollection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CToastCollection * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CToastCollection * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CToastCollection * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CToastCollection * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CToastCollection * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CToastCollection *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CToastCollection * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CToastCollection **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CToastCollection * This, __RPC__out __FIVectorView_1_Windows__CUI__CNotifications__CToastCollection * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CToastCollectionVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CToastCollection
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CToastCollectionVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastCollection __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastCollection;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastCollection;
typedef interface __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastCollection __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastCollection;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastCollection * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastCollection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastCollection * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastCollection * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastCollection *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastCollectionVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastCollection
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastCollectionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastCollection __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastCollection;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CUI__CNotifications__CToastCollection;
typedef struct __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastCollection * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastCollection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastCollection * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastCollection * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastCollection * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastCollection * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastCollection * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastCollection *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastCollection * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastCollection **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastCollection * This, __RPC__out __x_ABI_CWindows_CUI_CNotifications_CIToastCollection * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastCollectionVtbl;
interface __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastCollection
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastCollectionVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastNotificationHistory __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastNotificationHistory;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastNotificationHistory;
typedef interface __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotificationHistory __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotificationHistory;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastNotificationHistoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastNotificationHistory * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastNotificationHistory * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastNotificationHistory * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastNotificationHistory * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotificationHistory *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastNotificationHistoryVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastNotificationHistory
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastNotificationHistoryVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotificationHistory __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotificationHistory;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotificationHistory;
typedef struct __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotificationHistoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotificationHistory * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotificationHistory * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotificationHistory * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotificationHistory * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotificationHistory * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotificationHistory * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotificationHistory * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastNotificationHistory *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotificationHistory * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastNotificationHistory **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotificationHistory * This, __RPC__out __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotificationHistoryVtbl;
interface __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotificationHistory
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotificationHistoryVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastNotifier __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastNotifier;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastNotifier;
typedef interface __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotifier __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotifier;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastNotifierVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastNotifier * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastNotifier * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastNotifier * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastNotifier * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotifier *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastNotifierVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastNotifier
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastNotifierVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotifier __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotifier;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotifier;
typedef struct __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotifierVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotifier * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotifier * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotifier * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotifier * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotifier * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotifier * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotifier * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastNotifier *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotifier * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CToastNotifier **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotifier * This, __RPC__out __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotifierVtbl;
interface __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotifier
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotifierVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener;
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
typedef interface __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_IInspectable __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_Windows__CUI__CNotifications__CToastDismissedEventArgs __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_Windows__CUI__CNotifications__CToastDismissedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_Windows__CUI__CNotifications__CToastDismissedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_Windows__CUI__CNotifications__CToastDismissedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_Windows__CUI__CNotifications__CToastDismissedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_Windows__CUI__CNotifications__CToastDismissedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_Windows__CUI__CNotifications__CToastDismissedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_Windows__CUI__CNotifications__CToastDismissedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CIToastDismissedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_Windows__CUI__CNotifications__CToastDismissedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_Windows__CUI__CNotifications__CToastDismissedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_Windows__CUI__CNotifications__CToastDismissedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_Windows__CUI__CNotifications__CToastFailedEventArgs __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_Windows__CUI__CNotifications__CToastFailedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_Windows__CUI__CNotifications__CToastFailedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_Windows__CUI__CNotifications__CToastFailedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_Windows__CUI__CNotifications__CToastFailedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_Windows__CUI__CNotifications__CToastFailedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_Windows__CUI__CNotifications__CToastFailedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_Windows__CUI__CNotifications__CToastFailedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CIToastFailedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_Windows__CUI__CNotifications__CToastFailedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_Windows__CUI__CNotifications__CToastFailedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_Windows__CUI__CNotifications__CToastFailedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotifier_Windows__CUI__CNotifications__CScheduledToastNotificationShowingEventArgs __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotifier_Windows__CUI__CNotifications__CScheduledToastNotificationShowingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotifier_Windows__CUI__CNotifications__CScheduledToastNotificationShowingEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotifier_Windows__CUI__CNotifications__CScheduledToastNotificationShowingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotifier_Windows__CUI__CNotifications__CScheduledToastNotificationShowingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotifier_Windows__CUI__CNotifications__CScheduledToastNotificationShowingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotifier_Windows__CUI__CNotifications__CScheduledToastNotificationShowingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotifier_Windows__CUI__CNotifications__CScheduledToastNotificationShowingEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationShowingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotifier_Windows__CUI__CNotifications__CScheduledToastNotificationShowingEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotifier_Windows__CUI__CNotifications__CScheduledToastNotificationShowingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotifier_Windows__CUI__CNotifications__CScheduledToastNotificationShowingEventArgsVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __FIIterator_1_Windows__CFoundation__CUri __FIIterator_1_Windows__CFoundation__CUri;
EXTERN_C const IID IID___FIIterator_1_Windows__CFoundation__CUri;
typedef struct __FIIterator_1_Windows__CFoundation__CUriVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CFoundation__CUri * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, __RPC__out __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CFoundation__CUriVtbl;
interface __FIIterator_1_Windows__CFoundation__CUri
{
    CONST_VTBL struct __FIIterator_1_Windows__CFoundation__CUriVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CFoundation__CUri __FIIterable_1_Windows__CFoundation__CUri;
EXTERN_C const IID IID___FIIterable_1_Windows__CFoundation__CUri;
typedef struct __FIIterable_1_Windows__CFoundation__CUriVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CFoundation__CUri * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This, __RPC__deref_out_opt __FIIterator_1_Windows__CFoundation__CUri **first);
    END_INTERFACE
} __FIIterable_1_Windows__CFoundation__CUriVtbl;
interface __FIIterable_1_Windows__CFoundation__CUri
{
    CONST_VTBL struct __FIIterable_1_Windows__CFoundation__CUriVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
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
typedef interface __x_ABI_CWindows_CApplicationModel_CIAppInfo __x_ABI_CWindows_CApplicationModel_CIAppInfo;
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument;
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef enum __x_ABI_CWindows_CUI_CNotifications_CAdaptiveNotificationContentKind __x_ABI_CWindows_CUI_CNotifications_CAdaptiveNotificationContentKind;
typedef enum __x_ABI_CWindows_CUI_CNotifications_CBadgeTemplateType __x_ABI_CWindows_CUI_CNotifications_CBadgeTemplateType;
typedef enum __x_ABI_CWindows_CUI_CNotifications_CNotificationKinds __x_ABI_CWindows_CUI_CNotifications_CNotificationKinds;
typedef enum __x_ABI_CWindows_CUI_CNotifications_CNotificationMirroring __x_ABI_CWindows_CUI_CNotifications_CNotificationMirroring;
typedef enum __x_ABI_CWindows_CUI_CNotifications_CNotificationSetting __x_ABI_CWindows_CUI_CNotifications_CNotificationSetting;
typedef enum __x_ABI_CWindows_CUI_CNotifications_CNotificationUpdateResult __x_ABI_CWindows_CUI_CNotifications_CNotificationUpdateResult;
typedef enum __x_ABI_CWindows_CUI_CNotifications_CPeriodicUpdateRecurrence __x_ABI_CWindows_CUI_CNotifications_CPeriodicUpdateRecurrence;
typedef enum __x_ABI_CWindows_CUI_CNotifications_CTileFlyoutTemplateType __x_ABI_CWindows_CUI_CNotifications_CTileFlyoutTemplateType;
typedef enum __x_ABI_CWindows_CUI_CNotifications_CTileTemplateType __x_ABI_CWindows_CUI_CNotifications_CTileTemplateType;
typedef enum __x_ABI_CWindows_CUI_CNotifications_CToastDismissalReason __x_ABI_CWindows_CUI_CNotifications_CToastDismissalReason;
typedef enum __x_ABI_CWindows_CUI_CNotifications_CToastHistoryChangedType __x_ABI_CWindows_CUI_CNotifications_CToastHistoryChangedType;
typedef enum __x_ABI_CWindows_CUI_CNotifications_CToastNotificationPriority __x_ABI_CWindows_CUI_CNotifications_CToastNotificationPriority;
typedef enum __x_ABI_CWindows_CUI_CNotifications_CToastTemplateType __x_ABI_CWindows_CUI_CNotifications_CToastTemplateType;
typedef enum __x_ABI_CWindows_CUI_CNotifications_CUserNotificationChangedKind __x_ABI_CWindows_CUI_CNotifications_CUserNotificationChangedKind;
enum __x_ABI_CWindows_CUI_CNotifications_CAdaptiveNotificationContentKind
{
    AdaptiveNotificationContentKind_Text = 0,
};
enum __x_ABI_CWindows_CUI_CNotifications_CBadgeTemplateType
{
    BadgeTemplateType_BadgeGlyph = 0,
    BadgeTemplateType_BadgeNumber = 1,
};
enum __x_ABI_CWindows_CUI_CNotifications_CNotificationKinds
{
    NotificationKinds_Unknown = 0,
    NotificationKinds_Toast = 0x1,
};
enum __x_ABI_CWindows_CUI_CNotifications_CNotificationMirroring
{
    NotificationMirroring_Allowed = 0,
    NotificationMirroring_Disabled = 1,
};
enum __x_ABI_CWindows_CUI_CNotifications_CNotificationSetting
{
    NotificationSetting_Enabled = 0,
    NotificationSetting_DisabledForApplication = 1,
    NotificationSetting_DisabledForUser = 2,
    NotificationSetting_DisabledByGroupPolicy = 3,
    NotificationSetting_DisabledByManifest = 4,
};
enum __x_ABI_CWindows_CUI_CNotifications_CNotificationUpdateResult
{
    NotificationUpdateResult_Succeeded = 0,
    NotificationUpdateResult_Failed = 1,
    NotificationUpdateResult_NotificationNotFound = 2,
};
enum __x_ABI_CWindows_CUI_CNotifications_CPeriodicUpdateRecurrence
{
    PeriodicUpdateRecurrence_HalfHour = 0,
    PeriodicUpdateRecurrence_Hour = 1,
    PeriodicUpdateRecurrence_SixHours = 2,
    PeriodicUpdateRecurrence_TwelveHours = 3,
    PeriodicUpdateRecurrence_Daily = 4,
};
enum __x_ABI_CWindows_CUI_CNotifications_CTileFlyoutTemplateType
{
    TileFlyoutTemplateType_TileFlyoutTemplate01 = 0,
};
enum __x_ABI_CWindows_CUI_CNotifications_CTileTemplateType
{
    TileTemplateType_TileSquareImage
    DEPRECATEDENUMERATOR("TileSquareImage may be altered or unavailable for releases after Windows 8.1. Instead, use TileSquare150x150Image.")
     = 0,
    TileTemplateType_TileSquareBlock
    DEPRECATEDENUMERATOR("TileSquareBlock may be altered or unavailable for releases after Windows 8.1. Instead, use TileSquare150x150Block.")
     = 1,
    TileTemplateType_TileSquareText01
    DEPRECATEDENUMERATOR("TileSquareText01 may be altered or unavailable for releases after Windows 8.1. Instead, use TileSquare150x150Text01.")
     = 2,
    TileTemplateType_TileSquareText02
    DEPRECATEDENUMERATOR("TileSquareText02 may be altered or unavailable for releases after Windows 8.1. Instead, use TileSquare150x150Text02.")
     = 3,
    TileTemplateType_TileSquareText03
    DEPRECATEDENUMERATOR("TileSquareText03 may be altered or unavailable for releases after Windows 8.1. Instead, use TileSquare150x150Text03.")
     = 4,
    TileTemplateType_TileSquareText04
    DEPRECATEDENUMERATOR("TileSquareText04 may be altered or unavailable for releases after Windows 8.1. Instead, use TileSquare150x150Text04.")
     = 5,
    TileTemplateType_TileSquarePeekImageAndText01
    DEPRECATEDENUMERATOR("TileSquarePeekImageAndText01 may be altered or unavailable for releases after Windows 8.1. Instead, use TileSquare150x150PeekImageAndText01.")
     = 6,
    TileTemplateType_TileSquarePeekImageAndText02
    DEPRECATEDENUMERATOR("TileSquarePeekImageAndText02 may be altered or unavailable for releases after Windows 8.1. Instead, use TileSquare150x150PeekImageAndText02.")
     = 7,
    TileTemplateType_TileSquarePeekImageAndText03
    DEPRECATEDENUMERATOR("TileSquarePeekImageAndText03 may be altered or unavailable for releases after Windows 8.1. Instead, use TileSquare150x150PeekImageAndText03.")
     = 8,
    TileTemplateType_TileSquarePeekImageAndText04
    DEPRECATEDENUMERATOR("TileSquarePeekImageAndText04 may be altered or unavailable for releases after Windows 8.1. Instead, use TileSquare150x150PeekImageAndText04.")
     = 9,
    TileTemplateType_TileWideImage
    DEPRECATEDENUMERATOR("TileWideImage may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150Image.")
     = 10,
    TileTemplateType_TileWideImageCollection
    DEPRECATEDENUMERATOR("TileWideImageCollection may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150ImageCollection.")
     = 11,
    TileTemplateType_TileWideImageAndText01
    DEPRECATEDENUMERATOR("TileWideImageAndText01 may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150ImageAndText01.")
     = 12,
    TileTemplateType_TileWideImageAndText02
    DEPRECATEDENUMERATOR("TileWideImageAndText02 may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150ImageAndText02.")
     = 13,
    TileTemplateType_TileWideBlockAndText01
    DEPRECATEDENUMERATOR("TileWideBlockAndText01 may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150BlockAndText01.")
     = 14,
    TileTemplateType_TileWideBlockAndText02
    DEPRECATEDENUMERATOR("TileWideBlockAndText02 may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150BlockAndText02.")
     = 15,
    TileTemplateType_TileWidePeekImageCollection01
    DEPRECATEDENUMERATOR("TileWidePeekImageCollection01 may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150PeekImageCollection01.")
     = 16,
    TileTemplateType_TileWidePeekImageCollection02
    DEPRECATEDENUMERATOR("TileWidePeekImageCollection02 may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150PeekImageCollection02.")
     = 17,
    TileTemplateType_TileWidePeekImageCollection03
    DEPRECATEDENUMERATOR("TileWidePeekImageCollection03 may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150PeekImageCollection03.")
     = 18,
    TileTemplateType_TileWidePeekImageCollection04
    DEPRECATEDENUMERATOR("TileWidePeekImageCollection04 may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150PeekImageCollection04.")
     = 19,
    TileTemplateType_TileWidePeekImageCollection05
    DEPRECATEDENUMERATOR("TileWidePeekImageCollection05 may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150PeekImageCollection05.")
     = 20,
    TileTemplateType_TileWidePeekImageCollection06
    DEPRECATEDENUMERATOR("TileWidePeekImageCollection06 may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150PeekImageCollection06.")
     = 21,
    TileTemplateType_TileWidePeekImageAndText01
    DEPRECATEDENUMERATOR("TileWidePeekImageAndText01 may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150PeekImageAndText01.")
     = 22,
    TileTemplateType_TileWidePeekImageAndText02
    DEPRECATEDENUMERATOR("TileWidePeekImageAndText02 may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150PeekImageAndText02.")
     = 23,
    TileTemplateType_TileWidePeekImage01
    DEPRECATEDENUMERATOR("TileWidePeekImage01 may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150PeekImage01.")
     = 24,
    TileTemplateType_TileWidePeekImage02
    DEPRECATEDENUMERATOR("TileWidePeekImage02 may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150PeekImage02.")
     = 25,
    TileTemplateType_TileWidePeekImage03
    DEPRECATEDENUMERATOR("TileWidePeekImage03 may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150PeekImage03.")
     = 26,
    TileTemplateType_TileWidePeekImage04
    DEPRECATEDENUMERATOR("TileWidePeekImage04 may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150PeekImage04.")
     = 27,
    TileTemplateType_TileWidePeekImage05
    DEPRECATEDENUMERATOR("TileWidePeekImage05 may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150PeekImage05.")
     = 28,
    TileTemplateType_TileWidePeekImage06
    DEPRECATEDENUMERATOR("TileWidePeekImage06 may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150PeekImage06.")
     = 29,
    TileTemplateType_TileWideSmallImageAndText01
    DEPRECATEDENUMERATOR("TileWideSmallImageAndText01 may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150SmallImageAndText01.")
     = 30,
    TileTemplateType_TileWideSmallImageAndText02
    DEPRECATEDENUMERATOR("TileWideSmallImageAndText02 may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150SmallImageAndText02.")
     = 31,
    TileTemplateType_TileWideSmallImageAndText03
    DEPRECATEDENUMERATOR("TileWideSmallImageAndText03 may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150SmallImageAndText03.")
     = 32,
    TileTemplateType_TileWideSmallImageAndText04
    DEPRECATEDENUMERATOR("TileWideSmallImageAndText04 may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150SmallImageAndText04.")
     = 33,
    TileTemplateType_TileWideSmallImageAndText05
    DEPRECATEDENUMERATOR("TileWideSmallImageAndText05 may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150SmallImageAndText05.")
     = 34,
    TileTemplateType_TileWideText01
    DEPRECATEDENUMERATOR("TileWideText01 may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150Text01.")
     = 35,
    TileTemplateType_TileWideText02
    DEPRECATEDENUMERATOR("TileWideText02 may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150Text02.")
     = 36,
    TileTemplateType_TileWideText03
    DEPRECATEDENUMERATOR("TileWideText03 may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150Text03.")
     = 37,
    TileTemplateType_TileWideText04
    DEPRECATEDENUMERATOR("TileWideText04 may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150Text04.")
     = 38,
    TileTemplateType_TileWideText05
    DEPRECATEDENUMERATOR("TileWideText05 may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150Text05.")
     = 39,
    TileTemplateType_TileWideText06
    DEPRECATEDENUMERATOR("TileWideText06 may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150Text06.")
     = 40,
    TileTemplateType_TileWideText07
    DEPRECATEDENUMERATOR("TileWideText07 may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150Text07.")
     = 41,
    TileTemplateType_TileWideText08
    DEPRECATEDENUMERATOR("TileWideText08 may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150Text08.")
     = 42,
    TileTemplateType_TileWideText09
    DEPRECATEDENUMERATOR("TileWideText09 may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150Text09.")
     = 43,
    TileTemplateType_TileWideText10
    DEPRECATEDENUMERATOR("TileWideText10 may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150Text10.")
     = 44,
    TileTemplateType_TileWideText11
    DEPRECATEDENUMERATOR("TileWideText11 may be altered or unavailable for releases after Windows 8.1. Instead, use TileWide310x150Text11.")
     = 45,
    TileTemplateType_TileSquare150x150Image = 0,
    TileTemplateType_TileSquare150x150Block = 1,
    TileTemplateType_TileSquare150x150Text01 = 2,
    TileTemplateType_TileSquare150x150Text02 = 3,
    TileTemplateType_TileSquare150x150Text03 = 4,
    TileTemplateType_TileSquare150x150Text04 = 5,
    TileTemplateType_TileSquare150x150PeekImageAndText01 = 6,
    TileTemplateType_TileSquare150x150PeekImageAndText02 = 7,
    TileTemplateType_TileSquare150x150PeekImageAndText03 = 8,
    TileTemplateType_TileSquare150x150PeekImageAndText04 = 9,
    TileTemplateType_TileWide310x150Image = 10,
    TileTemplateType_TileWide310x150ImageCollection = 11,
    TileTemplateType_TileWide310x150ImageAndText01 = 12,
    TileTemplateType_TileWide310x150ImageAndText02 = 13,
    TileTemplateType_TileWide310x150BlockAndText01 = 14,
    TileTemplateType_TileWide310x150BlockAndText02 = 15,
    TileTemplateType_TileWide310x150PeekImageCollection01 = 16,
    TileTemplateType_TileWide310x150PeekImageCollection02 = 17,
    TileTemplateType_TileWide310x150PeekImageCollection03 = 18,
    TileTemplateType_TileWide310x150PeekImageCollection04 = 19,
    TileTemplateType_TileWide310x150PeekImageCollection05 = 20,
    TileTemplateType_TileWide310x150PeekImageCollection06 = 21,
    TileTemplateType_TileWide310x150PeekImageAndText01 = 22,
    TileTemplateType_TileWide310x150PeekImageAndText02 = 23,
    TileTemplateType_TileWide310x150PeekImage01 = 24,
    TileTemplateType_TileWide310x150PeekImage02 = 25,
    TileTemplateType_TileWide310x150PeekImage03 = 26,
    TileTemplateType_TileWide310x150PeekImage04 = 27,
    TileTemplateType_TileWide310x150PeekImage05 = 28,
    TileTemplateType_TileWide310x150PeekImage06 = 29,
    TileTemplateType_TileWide310x150SmallImageAndText01 = 30,
    TileTemplateType_TileWide310x150SmallImageAndText02 = 31,
    TileTemplateType_TileWide310x150SmallImageAndText03 = 32,
    TileTemplateType_TileWide310x150SmallImageAndText04 = 33,
    TileTemplateType_TileWide310x150SmallImageAndText05 = 34,
    TileTemplateType_TileWide310x150Text01 = 35,
    TileTemplateType_TileWide310x150Text02 = 36,
    TileTemplateType_TileWide310x150Text03 = 37,
    TileTemplateType_TileWide310x150Text04 = 38,
    TileTemplateType_TileWide310x150Text05 = 39,
    TileTemplateType_TileWide310x150Text06 = 40,
    TileTemplateType_TileWide310x150Text07 = 41,
    TileTemplateType_TileWide310x150Text08 = 42,
    TileTemplateType_TileWide310x150Text09 = 43,
    TileTemplateType_TileWide310x150Text10 = 44,
    TileTemplateType_TileWide310x150Text11 = 45,
    TileTemplateType_TileSquare310x310BlockAndText01 = 46,
    TileTemplateType_TileSquare310x310BlockAndText02 = 47,
    TileTemplateType_TileSquare310x310Image = 48,
    TileTemplateType_TileSquare310x310ImageAndText01 = 49,
    TileTemplateType_TileSquare310x310ImageAndText02 = 50,
    TileTemplateType_TileSquare310x310ImageAndTextOverlay01 = 51,
    TileTemplateType_TileSquare310x310ImageAndTextOverlay02 = 52,
    TileTemplateType_TileSquare310x310ImageAndTextOverlay03 = 53,
    TileTemplateType_TileSquare310x310ImageCollectionAndText01 = 54,
    TileTemplateType_TileSquare310x310ImageCollectionAndText02 = 55,
    TileTemplateType_TileSquare310x310ImageCollection = 56,
    TileTemplateType_TileSquare310x310SmallImagesAndTextList01 = 57,
    TileTemplateType_TileSquare310x310SmallImagesAndTextList02 = 58,
    TileTemplateType_TileSquare310x310SmallImagesAndTextList03 = 59,
    TileTemplateType_TileSquare310x310SmallImagesAndTextList04 = 60,
    TileTemplateType_TileSquare310x310Text01 = 61,
    TileTemplateType_TileSquare310x310Text02 = 62,
    TileTemplateType_TileSquare310x310Text03 = 63,
    TileTemplateType_TileSquare310x310Text04 = 64,
    TileTemplateType_TileSquare310x310Text05 = 65,
    TileTemplateType_TileSquare310x310Text06 = 66,
    TileTemplateType_TileSquare310x310Text07 = 67,
    TileTemplateType_TileSquare310x310Text08 = 68,
    TileTemplateType_TileSquare310x310TextList01 = 69,
    TileTemplateType_TileSquare310x310TextList02 = 70,
    TileTemplateType_TileSquare310x310TextList03 = 71,
    TileTemplateType_TileSquare310x310SmallImageAndText01 = 72,
    TileTemplateType_TileSquare310x310SmallImagesAndTextList05 = 73,
    TileTemplateType_TileSquare310x310Text09 = 74,
    TileTemplateType_TileSquare71x71IconWithBadge = 75,
    TileTemplateType_TileSquare150x150IconWithBadge = 76,
    TileTemplateType_TileWide310x150IconWithBadgeAndText = 77,
    TileTemplateType_TileSquare71x71Image = 78,
    TileTemplateType_TileTall150x310Image = 79,
};
enum __x_ABI_CWindows_CUI_CNotifications_CToastDismissalReason
{
    ToastDismissalReason_UserCanceled = 0,
    ToastDismissalReason_ApplicationHidden = 1,
    ToastDismissalReason_TimedOut = 2,
};
enum __x_ABI_CWindows_CUI_CNotifications_CToastHistoryChangedType
{
    ToastHistoryChangedType_Cleared = 0,
    ToastHistoryChangedType_Removed = 1,
    ToastHistoryChangedType_Expired = 2,
    ToastHistoryChangedType_Added = 3,
};
enum __x_ABI_CWindows_CUI_CNotifications_CToastNotificationPriority
{
    ToastNotificationPriority_Default = 0,
    ToastNotificationPriority_High = 1,
};
enum __x_ABI_CWindows_CUI_CNotifications_CToastTemplateType
{
    ToastTemplateType_ToastImageAndText01 = 0,
    ToastTemplateType_ToastImageAndText02 = 1,
    ToastTemplateType_ToastImageAndText03 = 2,
    ToastTemplateType_ToastImageAndText04 = 3,
    ToastTemplateType_ToastText01 = 4,
    ToastTemplateType_ToastText02 = 5,
    ToastTemplateType_ToastText03 = 6,
    ToastTemplateType_ToastText04 = 7,
};
enum __x_ABI_CWindows_CUI_CNotifications_CUserNotificationChangedKind
{
    UserNotificationChangedKind_Added = 0,
    UserNotificationChangedKind_Removed = 1,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IAdaptiveNotificationContent[] = L"Windows.UI.Notifications.IAdaptiveNotificationContent";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationContentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationContent * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationContent * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationContent * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationContent * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationContent * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationContent * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationContent * This,
                           __RPC__out __x_ABI_CWindows_CUI_CNotifications_CAdaptiveNotificationContentKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Hints )(
        __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationContent * This,
                           __RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationContentVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationContent
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationContentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Kind(This,value) )
    ( (This)->lpVtbl->get_Hints(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationContent;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IAdaptiveNotificationText[] = L"Windows.UI.Notifications.IAdaptiveNotificationText";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationTextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationText * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationText * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationText * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationText * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationText * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationText * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationText * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Text )(
        __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationText * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Language )(
        __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationText * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Language )(
        __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationText * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationTextVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationText
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationTextVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Text(This,value) )
    ( (This)->lpVtbl->put_Text(This,value) )
    ( (This)->lpVtbl->get_Language(This,value) )
    ( (This)->lpVtbl->put_Language(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIAdaptiveNotificationText;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IBadgeNotification[] = L"Windows.UI.Notifications.IBadgeNotification";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotificationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotification * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotification * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotification * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotification * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotification * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotification * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotification * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ExpirationTime )(
        __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotification * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExpirationTime )(
        __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotification * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotificationVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotification
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotificationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Content(This,value) )
    ( (This)->lpVtbl->put_ExpirationTime(This,value) )
    ( (This)->lpVtbl->get_ExpirationTime(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIBadgeNotification;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IBadgeNotificationFactory[] = L"Windows.UI.Notifications.IBadgeNotificationFactory";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotificationFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotificationFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotificationFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotificationFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotificationFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotificationFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotificationFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateBadgeNotification )(
        __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotificationFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * content,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotification * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotificationFactoryVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotificationFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotificationFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateBadgeNotification(This,content,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIBadgeNotificationFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IBadgeUpdateManagerForUser[] = L"Windows.UI.Notifications.IBadgeUpdateManagerForUser";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerForUserVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerForUser * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerForUser * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerForUser * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerForUser * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerForUser * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerForUser * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateBadgeUpdaterForApplication )(
        __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerForUser * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdater * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateBadgeUpdaterForApplicationWithId )(
        __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerForUser * This,
                  __RPC__in HSTRING applicationId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdater * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateBadgeUpdaterForSecondaryTile )(
        __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerForUser * This,
                  __RPC__in HSTRING tileId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdater * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerForUser * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerForUserVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerForUser
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerForUserVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateBadgeUpdaterForApplication(This,result) )
    ( (This)->lpVtbl->CreateBadgeUpdaterForApplicationWithId(This,applicationId,result) )
    ( (This)->lpVtbl->CreateBadgeUpdaterForSecondaryTile(This,tileId,result) )
    ( (This)->lpVtbl->get_User(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerForUser;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IBadgeUpdateManagerStatics[] = L"Windows.UI.Notifications.IBadgeUpdateManagerStatics";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateBadgeUpdaterForApplication )(
        __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdater * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateBadgeUpdaterForApplicationWithId )(
        __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerStatics * This,
                  __RPC__in HSTRING applicationId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdater * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateBadgeUpdaterForSecondaryTile )(
        __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerStatics * This,
                  __RPC__in HSTRING tileId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdater * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetTemplateContent )(
        __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerStatics * This,
                  __x_ABI_CWindows_CUI_CNotifications_CBadgeTemplateType type,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerStaticsVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateBadgeUpdaterForApplication(This,result) )
    ( (This)->lpVtbl->CreateBadgeUpdaterForApplicationWithId(This,applicationId,result) )
    ( (This)->lpVtbl->CreateBadgeUpdaterForSecondaryTile(This,tileId,result) )
    ( (This)->lpVtbl->GetTemplateContent(This,type,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IBadgeUpdateManagerStatics2[] = L"Windows.UI.Notifications.IBadgeUpdateManagerStatics2";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForUser )(
        __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerForUser * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForUser(This,user,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdateManagerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IBadgeUpdater[] = L"Windows.UI.Notifications.IBadgeUpdater";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdaterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdater * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdater * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdater * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdater * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdater * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdater * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Update )(
        __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdater * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CIBadgeNotification * notification
        );
    HRESULT ( STDMETHODCALLTYPE *Clear )(
        __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdater * This
        );
                    HRESULT ( STDMETHODCALLTYPE *StartPeriodicUpdate )(
        __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdater * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * badgeContent,
                  __x_ABI_CWindows_CUI_CNotifications_CPeriodicUpdateRecurrence requestedInterval
        );
                    HRESULT ( STDMETHODCALLTYPE *StartPeriodicUpdateAtTime )(
        __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdater * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * badgeContent,
                  __x_ABI_CWindows_CFoundation_CDateTime startTime,
                  __x_ABI_CWindows_CUI_CNotifications_CPeriodicUpdateRecurrence requestedInterval
        );
    HRESULT ( STDMETHODCALLTYPE *StopPeriodicUpdate )(
        __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdater * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdaterVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdater
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdaterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Update(This,notification) )
    ( (This)->lpVtbl->Clear(This) )
    ( (This)->lpVtbl->StartPeriodicUpdate(This,badgeContent,requestedInterval) )
    ( (This)->lpVtbl->StartPeriodicUpdateAtTime(This,badgeContent,startTime,requestedInterval) )
    ( (This)->lpVtbl->StopPeriodicUpdate(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIBadgeUpdater;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IKnownAdaptiveNotificationHintsStatics[] = L"Windows.UI.Notifications.IKnownAdaptiveNotificationHintsStatics";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationHintsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationHintsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationHintsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationHintsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationHintsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationHintsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationHintsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Style )(
        __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationHintsStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Wrap )(
        __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationHintsStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxLines )(
        __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationHintsStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinLines )(
        __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationHintsStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TextStacking )(
        __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationHintsStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Align )(
        __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationHintsStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationHintsStaticsVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationHintsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationHintsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Style(This,value) )
    ( (This)->lpVtbl->get_Wrap(This,value) )
    ( (This)->lpVtbl->get_MaxLines(This,value) )
    ( (This)->lpVtbl->get_MinLines(This,value) )
    ( (This)->lpVtbl->get_TextStacking(This,value) )
    ( (This)->lpVtbl->get_Align(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationHintsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IKnownAdaptiveNotificationTextStylesStatics[] = L"Windows.UI.Notifications.IKnownAdaptiveNotificationTextStylesStatics";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationTextStylesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationTextStylesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationTextStylesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationTextStylesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationTextStylesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationTextStylesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationTextStylesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Caption )(
        __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationTextStylesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Body )(
        __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationTextStylesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Base )(
        __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationTextStylesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Subtitle )(
        __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationTextStylesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationTextStylesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Subheader )(
        __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationTextStylesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Header )(
        __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationTextStylesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TitleNumeral )(
        __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationTextStylesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SubheaderNumeral )(
        __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationTextStylesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HeaderNumeral )(
        __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationTextStylesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CaptionSubtle )(
        __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationTextStylesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BodySubtle )(
        __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationTextStylesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BaseSubtle )(
        __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationTextStylesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SubtitleSubtle )(
        __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationTextStylesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TitleSubtle )(
        __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationTextStylesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SubheaderSubtle )(
        __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationTextStylesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SubheaderNumeralSubtle )(
        __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationTextStylesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HeaderSubtle )(
        __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationTextStylesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HeaderNumeralSubtle )(
        __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationTextStylesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationTextStylesStaticsVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationTextStylesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationTextStylesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Caption(This,value) )
    ( (This)->lpVtbl->get_Body(This,value) )
    ( (This)->lpVtbl->get_Base(This,value) )
    ( (This)->lpVtbl->get_Subtitle(This,value) )
    ( (This)->lpVtbl->get_Title(This,value) )
    ( (This)->lpVtbl->get_Subheader(This,value) )
    ( (This)->lpVtbl->get_Header(This,value) )
    ( (This)->lpVtbl->get_TitleNumeral(This,value) )
    ( (This)->lpVtbl->get_SubheaderNumeral(This,value) )
    ( (This)->lpVtbl->get_HeaderNumeral(This,value) )
    ( (This)->lpVtbl->get_CaptionSubtle(This,value) )
    ( (This)->lpVtbl->get_BodySubtle(This,value) )
    ( (This)->lpVtbl->get_BaseSubtle(This,value) )
    ( (This)->lpVtbl->get_SubtitleSubtle(This,value) )
    ( (This)->lpVtbl->get_TitleSubtle(This,value) )
    ( (This)->lpVtbl->get_SubheaderSubtle(This,value) )
    ( (This)->lpVtbl->get_SubheaderNumeralSubtle(This,value) )
    ( (This)->lpVtbl->get_HeaderSubtle(This,value) )
    ( (This)->lpVtbl->get_HeaderNumeralSubtle(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIKnownAdaptiveNotificationTextStylesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IKnownNotificationBindingsStatics[] = L"Windows.UI.Notifications.IKnownNotificationBindingsStatics";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIKnownNotificationBindingsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIKnownNotificationBindingsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIKnownNotificationBindingsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIKnownNotificationBindingsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIKnownNotificationBindingsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIKnownNotificationBindingsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIKnownNotificationBindingsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ToastGeneric )(
        __x_ABI_CWindows_CUI_CNotifications_CIKnownNotificationBindingsStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIKnownNotificationBindingsStaticsVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIKnownNotificationBindingsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIKnownNotificationBindingsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ToastGeneric(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIKnownNotificationBindingsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_INotification[] = L"Windows.UI.Notifications.INotification";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CINotificationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CINotification * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CINotification * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CINotification * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CINotification * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CINotification * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CINotification * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExpirationTime )(
        __x_ABI_CWindows_CUI_CNotifications_CINotification * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ExpirationTime )(
        __x_ABI_CWindows_CUI_CNotifications_CINotification * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Visual )(
        __x_ABI_CWindows_CUI_CNotifications_CINotification * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CINotificationVisual * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Visual )(
        __x_ABI_CWindows_CUI_CNotifications_CINotification * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CINotificationVisual * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CINotificationVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CINotification
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CINotificationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExpirationTime(This,value) )
    ( (This)->lpVtbl->put_ExpirationTime(This,value) )
    ( (This)->lpVtbl->get_Visual(This,value) )
    ( (This)->lpVtbl->put_Visual(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CINotification;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_INotificationBinding[] = L"Windows.UI.Notifications.INotificationBinding";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CINotificationBindingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CINotificationBinding * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CINotificationBinding * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CINotificationBinding * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CINotificationBinding * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CINotificationBinding * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CINotificationBinding * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Template )(
        __x_ABI_CWindows_CUI_CNotifications_CINotificationBinding * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Template )(
        __x_ABI_CWindows_CUI_CNotifications_CINotificationBinding * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Language )(
        __x_ABI_CWindows_CUI_CNotifications_CINotificationBinding * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Language )(
        __x_ABI_CWindows_CUI_CNotifications_CINotificationBinding * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Hints )(
        __x_ABI_CWindows_CUI_CNotifications_CINotificationBinding * This,
                           __RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetTextElements )(
        __x_ABI_CWindows_CUI_CNotifications_CINotificationBinding * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CNotifications__CAdaptiveNotificationText * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CINotificationBindingVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CINotificationBinding
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CINotificationBindingVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Template(This,value) )
    ( (This)->lpVtbl->put_Template(This,value) )
    ( (This)->lpVtbl->get_Language(This,value) )
    ( (This)->lpVtbl->put_Language(This,value) )
    ( (This)->lpVtbl->get_Hints(This,value) )
    ( (This)->lpVtbl->GetTextElements(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CINotificationBinding;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_INotificationData[] = L"Windows.UI.Notifications.INotificationData";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CINotificationDataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CINotificationData * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CINotificationData * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CINotificationData * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CINotificationData * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CINotificationData * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CINotificationData * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Values )(
        __x_ABI_CWindows_CUI_CNotifications_CINotificationData * This,
                           __RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SequenceNumber )(
        __x_ABI_CWindows_CUI_CNotifications_CINotificationData * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SequenceNumber )(
        __x_ABI_CWindows_CUI_CNotifications_CINotificationData * This,
                  UINT32 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CINotificationDataVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CINotificationData
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CINotificationDataVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Values(This,value) )
    ( (This)->lpVtbl->get_SequenceNumber(This,value) )
    ( (This)->lpVtbl->put_SequenceNumber(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CINotificationData;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_INotificationDataFactory[] = L"Windows.UI.Notifications.INotificationDataFactory";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CINotificationDataFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CINotificationDataFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CINotificationDataFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CINotificationDataFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CINotificationDataFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CINotificationDataFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CINotificationDataFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateNotificationDataWithValuesAndSequenceNumber )(
        __x_ABI_CWindows_CUI_CNotifications_CINotificationDataFactory * This,
                  __RPC__in_opt __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * initialValues,
                  UINT32 sequenceNumber,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CINotificationData * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateNotificationDataWithValues )(
        __x_ABI_CWindows_CUI_CNotifications_CINotificationDataFactory * This,
                  __RPC__in_opt __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * initialValues,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CINotificationData * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CINotificationDataFactoryVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CINotificationDataFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CINotificationDataFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateNotificationDataWithValuesAndSequenceNumber(This,initialValues,sequenceNumber,value) )
    ( (This)->lpVtbl->CreateNotificationDataWithValues(This,initialValues,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CINotificationDataFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_INotificationVisual[] = L"Windows.UI.Notifications.INotificationVisual";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CINotificationVisualVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CINotificationVisual * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CINotificationVisual * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CINotificationVisual * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CINotificationVisual * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CINotificationVisual * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CINotificationVisual * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Language )(
        __x_ABI_CWindows_CUI_CNotifications_CINotificationVisual * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Language )(
        __x_ABI_CWindows_CUI_CNotifications_CINotificationVisual * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Bindings )(
        __x_ABI_CWindows_CUI_CNotifications_CINotificationVisual * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CNotifications__CNotificationBinding * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetBinding )(
        __x_ABI_CWindows_CUI_CNotifications_CINotificationVisual * This,
                  __RPC__in HSTRING templateName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CINotificationBinding * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CINotificationVisualVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CINotificationVisual
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CINotificationVisualVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Language(This,value) )
    ( (This)->lpVtbl->put_Language(This,value) )
    ( (This)->lpVtbl->get_Bindings(This,value) )
    ( (This)->lpVtbl->GetBinding(This,templateName,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CINotificationVisual;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IScheduledTileNotification[] = L"Windows.UI.Notifications.IScheduledTileNotification";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotificationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotification * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotification * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotification * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotification * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotification * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotification * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotification * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeliveryTime )(
        __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotification * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ExpirationTime )(
        __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotification * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExpirationTime )(
        __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotification * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Tag )(
        __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotification * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Tag )(
        __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotification * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Id )(
        __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotification * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotification * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotificationVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotification
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotificationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Content(This,value) )
    ( (This)->lpVtbl->get_DeliveryTime(This,value) )
    ( (This)->lpVtbl->put_ExpirationTime(This,value) )
    ( (This)->lpVtbl->get_ExpirationTime(This,value) )
    ( (This)->lpVtbl->put_Tag(This,value) )
    ( (This)->lpVtbl->get_Tag(This,value) )
    ( (This)->lpVtbl->put_Id(This,value) )
    ( (This)->lpVtbl->get_Id(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotification;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IScheduledTileNotificationFactory[] = L"Windows.UI.Notifications.IScheduledTileNotificationFactory";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotificationFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotificationFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotificationFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotificationFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotificationFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotificationFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotificationFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateScheduledTileNotification )(
        __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotificationFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * content,
                  __x_ABI_CWindows_CFoundation_CDateTime deliveryTime,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotification * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotificationFactoryVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotificationFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotificationFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateScheduledTileNotification(This,content,deliveryTime,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotificationFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IScheduledToastNotification[] = L"Windows.UI.Notifications.IScheduledToastNotification";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeliveryTime )(
        __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SnoozeInterval )(
        __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaximumSnoozeCount )(
        __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Id )(
        __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Content(This,value) )
    ( (This)->lpVtbl->get_DeliveryTime(This,value) )
    ( (This)->lpVtbl->get_SnoozeInterval(This,value) )
    ( (This)->lpVtbl->get_MaximumSnoozeCount(This,value) )
    ( (This)->lpVtbl->put_Id(This,value) )
    ( (This)->lpVtbl->get_Id(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IScheduledToastNotification2[] = L"Windows.UI.Notifications.IScheduledToastNotification2";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Tag )(
        __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Tag )(
        __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Group )(
        __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Group )(
        __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SuppressPopup )(
        __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SuppressPopup )(
        __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification2Vtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Tag(This,value) )
    ( (This)->lpVtbl->get_Tag(This,value) )
    ( (This)->lpVtbl->put_Group(This,value) )
    ( (This)->lpVtbl->get_Group(This,value) )
    ( (This)->lpVtbl->put_SuppressPopup(This,value) )
    ( (This)->lpVtbl->get_SuppressPopup(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IScheduledToastNotification3[] = L"Windows.UI.Notifications.IScheduledToastNotification3";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NotificationMirroring )(
        __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification3 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CNotifications_CNotificationMirroring * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NotificationMirroring )(
        __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification3 * This,
                  __x_ABI_CWindows_CUI_CNotifications_CNotificationMirroring value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemoteId )(
        __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RemoteId )(
        __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification3 * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification3Vtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NotificationMirroring(This,value) )
    ( (This)->lpVtbl->put_NotificationMirroring(This,value) )
    ( (This)->lpVtbl->get_RemoteId(This,value) )
    ( (This)->lpVtbl->put_RemoteId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IScheduledToastNotification4[] = L"Windows.UI.Notifications.IScheduledToastNotification4";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExpirationTime )(
        __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification4 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ExpirationTime )(
        __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification4 * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification4Vtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExpirationTime(This,value) )
    ( (This)->lpVtbl->put_ExpirationTime(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IScheduledToastNotificationFactory[] = L"Windows.UI.Notifications.IScheduledToastNotificationFactory";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateScheduledToastNotification )(
        __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * content,
                  __x_ABI_CWindows_CFoundation_CDateTime deliveryTime,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateScheduledToastNotificationRecurring )(
        __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * content,
                  __x_ABI_CWindows_CFoundation_CDateTime deliveryTime,
                  __x_ABI_CWindows_CFoundation_CTimeSpan snoozeInterval,
                  UINT32 maximumSnoozeCount,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationFactoryVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateScheduledToastNotification(This,content,deliveryTime,value) )
    ( (This)->lpVtbl->CreateScheduledToastNotificationRecurring(This,content,deliveryTime,snoozeInterval,maximumSnoozeCount,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IScheduledToastNotificationShowingEventArgs[] = L"Windows.UI.Notifications.IScheduledToastNotificationShowingEventArgs";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationShowingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationShowingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationShowingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationShowingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationShowingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationShowingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationShowingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Cancel )(
        __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationShowingEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Cancel )(
        __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationShowingEventArgs * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScheduledToastNotification )(
        __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationShowingEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationShowingEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationShowingEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationShowingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationShowingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Cancel(This,value) )
    ( (This)->lpVtbl->put_Cancel(This,value) )
    ( (This)->lpVtbl->get_ScheduledToastNotification(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotificationShowingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IShownTileNotification[] = L"Windows.UI.Notifications.IShownTileNotification";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIShownTileNotificationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIShownTileNotification * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIShownTileNotification * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIShownTileNotification * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIShownTileNotification * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIShownTileNotification * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIShownTileNotification * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Arguments )(
        __x_ABI_CWindows_CUI_CNotifications_CIShownTileNotification * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIShownTileNotificationVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIShownTileNotification
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIShownTileNotificationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Arguments(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIShownTileNotification;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_ITileFlyoutNotification[] = L"Windows.UI.Notifications.ITileFlyoutNotification";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutNotificationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutNotification * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutNotification * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutNotification * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutNotification * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutNotification * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutNotification * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutNotification * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ExpirationTime )(
        __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutNotification * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExpirationTime )(
        __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutNotification * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutNotificationVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutNotification
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutNotificationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Content(This,value) )
    ( (This)->lpVtbl->put_ExpirationTime(This,value) )
    ( (This)->lpVtbl->get_ExpirationTime(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CITileFlyoutNotification;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_ITileFlyoutNotificationFactory[] = L"Windows.UI.Notifications.ITileFlyoutNotificationFactory";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutNotificationFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutNotificationFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutNotificationFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutNotificationFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutNotificationFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutNotificationFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutNotificationFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateTileFlyoutNotification )(
        __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutNotificationFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * content,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutNotification * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutNotificationFactoryVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutNotificationFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutNotificationFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateTileFlyoutNotification(This,content,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CITileFlyoutNotificationFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_ITileFlyoutUpdateManagerStatics[] = L"Windows.UI.Notifications.ITileFlyoutUpdateManagerStatics";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdateManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdateManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdateManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdateManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdateManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdateManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdateManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateTileFlyoutUpdaterForApplication )(
        __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdateManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdater * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateTileFlyoutUpdaterForApplicationWithId )(
        __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdateManagerStatics * This,
                  __RPC__in HSTRING applicationId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdater * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateTileFlyoutUpdaterForSecondaryTile )(
        __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdateManagerStatics * This,
                  __RPC__in HSTRING tileId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdater * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetTemplateContent )(
        __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdateManagerStatics * This,
                  __x_ABI_CWindows_CUI_CNotifications_CTileFlyoutTemplateType type,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdateManagerStaticsVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdateManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdateManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateTileFlyoutUpdaterForApplication(This,result) )
    ( (This)->lpVtbl->CreateTileFlyoutUpdaterForApplicationWithId(This,applicationId,result) )
    ( (This)->lpVtbl->CreateTileFlyoutUpdaterForSecondaryTile(This,tileId,result) )
    ( (This)->lpVtbl->GetTemplateContent(This,type,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdateManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_ITileFlyoutUpdater[] = L"Windows.UI.Notifications.ITileFlyoutUpdater";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdaterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdater * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdater * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdater * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdater * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdater * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdater * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Update )(
        __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdater * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutNotification * notification
        );
    HRESULT ( STDMETHODCALLTYPE *Clear )(
        __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdater * This
        );
                    HRESULT ( STDMETHODCALLTYPE *StartPeriodicUpdate )(
        __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdater * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * tileFlyoutContent,
                  __x_ABI_CWindows_CUI_CNotifications_CPeriodicUpdateRecurrence requestedInterval
        );
                    HRESULT ( STDMETHODCALLTYPE *StartPeriodicUpdateAtTime )(
        __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdater * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * tileFlyoutContent,
                  __x_ABI_CWindows_CFoundation_CDateTime startTime,
                  __x_ABI_CWindows_CUI_CNotifications_CPeriodicUpdateRecurrence requestedInterval
        );
    HRESULT ( STDMETHODCALLTYPE *StopPeriodicUpdate )(
        __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdater * This
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Setting )(
        __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdater * This,
                           __RPC__out __x_ABI_CWindows_CUI_CNotifications_CNotificationSetting * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdaterVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdater
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdaterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Update(This,notification) )
    ( (This)->lpVtbl->Clear(This) )
    ( (This)->lpVtbl->StartPeriodicUpdate(This,tileFlyoutContent,requestedInterval) )
    ( (This)->lpVtbl->StartPeriodicUpdateAtTime(This,tileFlyoutContent,startTime,requestedInterval) )
    ( (This)->lpVtbl->StopPeriodicUpdate(This) )
    ( (This)->lpVtbl->get_Setting(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CITileFlyoutUpdater;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_ITileNotification[] = L"Windows.UI.Notifications.ITileNotification";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CITileNotificationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileNotification * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileNotification * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileNotification * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileNotification * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileNotification * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileNotification * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CWindows_CUI_CNotifications_CITileNotification * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ExpirationTime )(
        __x_ABI_CWindows_CUI_CNotifications_CITileNotification * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExpirationTime )(
        __x_ABI_CWindows_CUI_CNotifications_CITileNotification * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Tag )(
        __x_ABI_CWindows_CUI_CNotifications_CITileNotification * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Tag )(
        __x_ABI_CWindows_CUI_CNotifications_CITileNotification * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CITileNotificationVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CITileNotification
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CITileNotificationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Content(This,value) )
    ( (This)->lpVtbl->put_ExpirationTime(This,value) )
    ( (This)->lpVtbl->get_ExpirationTime(This,value) )
    ( (This)->lpVtbl->put_Tag(This,value) )
    ( (This)->lpVtbl->get_Tag(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CITileNotification;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_ITileNotificationFactory[] = L"Windows.UI.Notifications.ITileNotificationFactory";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CITileNotificationFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileNotificationFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileNotificationFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileNotificationFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileNotificationFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileNotificationFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileNotificationFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateTileNotification )(
        __x_ABI_CWindows_CUI_CNotifications_CITileNotificationFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * content,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CITileNotification * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CITileNotificationFactoryVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CITileNotificationFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CITileNotificationFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateTileNotification(This,content,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CITileNotificationFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_ITileUpdateManagerForUser[] = L"Windows.UI.Notifications.ITileUpdateManagerForUser";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerForUserVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerForUser * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerForUser * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerForUser * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerForUser * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerForUser * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerForUser * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateTileUpdaterForApplication )(
        __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerForUser * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CITileUpdater * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateTileUpdaterForApplicationWithId )(
        __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerForUser * This,
                  __RPC__in HSTRING applicationId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CITileUpdater * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateTileUpdaterForSecondaryTile )(
        __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerForUser * This,
                  __RPC__in HSTRING tileId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CITileUpdater * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerForUser * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerForUserVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerForUser
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerForUserVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateTileUpdaterForApplication(This,result) )
    ( (This)->lpVtbl->CreateTileUpdaterForApplicationWithId(This,applicationId,result) )
    ( (This)->lpVtbl->CreateTileUpdaterForSecondaryTile(This,tileId,result) )
    ( (This)->lpVtbl->get_User(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerForUser;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_ITileUpdateManagerStatics[] = L"Windows.UI.Notifications.ITileUpdateManagerStatics";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateTileUpdaterForApplication )(
        __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CITileUpdater * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateTileUpdaterForApplicationWithId )(
        __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerStatics * This,
                  __RPC__in HSTRING applicationId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CITileUpdater * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateTileUpdaterForSecondaryTile )(
        __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerStatics * This,
                  __RPC__in HSTRING tileId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CITileUpdater * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetTemplateContent )(
        __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerStatics * This,
                  __x_ABI_CWindows_CUI_CNotifications_CTileTemplateType type,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerStaticsVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateTileUpdaterForApplication(This,result) )
    ( (This)->lpVtbl->CreateTileUpdaterForApplicationWithId(This,applicationId,result) )
    ( (This)->lpVtbl->CreateTileUpdaterForSecondaryTile(This,tileId,result) )
    ( (This)->lpVtbl->GetTemplateContent(This,type,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_ITileUpdateManagerStatics2[] = L"Windows.UI.Notifications.ITileUpdateManagerStatics2";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForUser )(
        __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerForUser * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForUser(This,user,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CITileUpdateManagerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_ITileUpdater[] = L"Windows.UI.Notifications.ITileUpdater";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CITileUpdaterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileUpdater * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileUpdater * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileUpdater * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileUpdater * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileUpdater * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileUpdater * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Update )(
        __x_ABI_CWindows_CUI_CNotifications_CITileUpdater * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CITileNotification * notification
        );
    HRESULT ( STDMETHODCALLTYPE *Clear )(
        __x_ABI_CWindows_CUI_CNotifications_CITileUpdater * This
        );
    HRESULT ( STDMETHODCALLTYPE *EnableNotificationQueue )(
        __x_ABI_CWindows_CUI_CNotifications_CITileUpdater * This,
                  boolean enable
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Setting )(
        __x_ABI_CWindows_CUI_CNotifications_CITileUpdater * This,
                           __RPC__out __x_ABI_CWindows_CUI_CNotifications_CNotificationSetting * value
        );
    HRESULT ( STDMETHODCALLTYPE *AddToSchedule )(
        __x_ABI_CWindows_CUI_CNotifications_CITileUpdater * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotification * scheduledTile
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveFromSchedule )(
        __x_ABI_CWindows_CUI_CNotifications_CITileUpdater * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CIScheduledTileNotification * scheduledTile
        );
    HRESULT ( STDMETHODCALLTYPE *GetScheduledTileNotifications )(
        __x_ABI_CWindows_CUI_CNotifications_CITileUpdater * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CNotifications__CScheduledTileNotification * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *StartPeriodicUpdate )(
        __x_ABI_CWindows_CUI_CNotifications_CITileUpdater * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * tileContent,
                  __x_ABI_CWindows_CUI_CNotifications_CPeriodicUpdateRecurrence requestedInterval
        );
                    HRESULT ( STDMETHODCALLTYPE *StartPeriodicUpdateAtTime )(
        __x_ABI_CWindows_CUI_CNotifications_CITileUpdater * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * tileContent,
                  __x_ABI_CWindows_CFoundation_CDateTime startTime,
                  __x_ABI_CWindows_CUI_CNotifications_CPeriodicUpdateRecurrence requestedInterval
        );
    HRESULT ( STDMETHODCALLTYPE *StopPeriodicUpdate )(
        __x_ABI_CWindows_CUI_CNotifications_CITileUpdater * This
        );
                    HRESULT ( STDMETHODCALLTYPE *StartPeriodicUpdateBatch )(
        __x_ABI_CWindows_CUI_CNotifications_CITileUpdater * This,
                  __RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * tileContents,
                  __x_ABI_CWindows_CUI_CNotifications_CPeriodicUpdateRecurrence requestedInterval
        );
                    HRESULT ( STDMETHODCALLTYPE *StartPeriodicUpdateBatchAtTime )(
        __x_ABI_CWindows_CUI_CNotifications_CITileUpdater * This,
                  __RPC__in_opt __FIIterable_1_Windows__CFoundation__CUri * tileContents,
                  __x_ABI_CWindows_CFoundation_CDateTime startTime,
                  __x_ABI_CWindows_CUI_CNotifications_CPeriodicUpdateRecurrence requestedInterval
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CITileUpdaterVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CITileUpdater
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CITileUpdaterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Update(This,notification) )
    ( (This)->lpVtbl->Clear(This) )
    ( (This)->lpVtbl->EnableNotificationQueue(This,enable) )
    ( (This)->lpVtbl->get_Setting(This,value) )
    ( (This)->lpVtbl->AddToSchedule(This,scheduledTile) )
    ( (This)->lpVtbl->RemoveFromSchedule(This,scheduledTile) )
    ( (This)->lpVtbl->GetScheduledTileNotifications(This,result) )
    ( (This)->lpVtbl->StartPeriodicUpdate(This,tileContent,requestedInterval) )
    ( (This)->lpVtbl->StartPeriodicUpdateAtTime(This,tileContent,startTime,requestedInterval) )
    ( (This)->lpVtbl->StopPeriodicUpdate(This) )
    ( (This)->lpVtbl->StartPeriodicUpdateBatch(This,tileContents,requestedInterval) )
    ( (This)->lpVtbl->StartPeriodicUpdateBatchAtTime(This,tileContents,startTime,requestedInterval) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CITileUpdater;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_ITileUpdater2[] = L"Windows.UI.Notifications.ITileUpdater2";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CITileUpdater2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileUpdater2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileUpdater2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileUpdater2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileUpdater2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileUpdater2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CITileUpdater2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *EnableNotificationQueueForSquare150x150 )(
        __x_ABI_CWindows_CUI_CNotifications_CITileUpdater2 * This,
                  boolean enable
        );
    HRESULT ( STDMETHODCALLTYPE *EnableNotificationQueueForWide310x150 )(
        __x_ABI_CWindows_CUI_CNotifications_CITileUpdater2 * This,
                  boolean enable
        );
    HRESULT ( STDMETHODCALLTYPE *EnableNotificationQueueForSquare310x310 )(
        __x_ABI_CWindows_CUI_CNotifications_CITileUpdater2 * This,
                  boolean enable
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CITileUpdater2Vtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CITileUpdater2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CITileUpdater2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->EnableNotificationQueueForSquare150x150(This,enable) )
    ( (This)->lpVtbl->EnableNotificationQueueForWide310x150(This,enable) )
    ( (This)->lpVtbl->EnableNotificationQueueForSquare310x310(This,enable) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CITileUpdater2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IToastActivatedEventArgs[] = L"Windows.UI.Notifications.IToastActivatedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIToastActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastActivatedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastActivatedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastActivatedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastActivatedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastActivatedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastActivatedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Arguments )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastActivatedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIToastActivatedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIToastActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIToastActivatedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Arguments(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIToastActivatedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IToastActivatedEventArgs2[] = L"Windows.UI.Notifications.IToastActivatedEventArgs2";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIToastActivatedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastActivatedEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastActivatedEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastActivatedEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastActivatedEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastActivatedEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastActivatedEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UserInput )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastActivatedEventArgs2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIToastActivatedEventArgs2Vtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIToastActivatedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIToastActivatedEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UserInput(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIToastActivatedEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IToastCollection[] = L"Windows.UI.Notifications.IToastCollection";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastCollection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastCollection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastCollection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastCollection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastCollection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastCollection * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastCollection * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastCollection * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastCollection * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LaunchArgs )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastCollection * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LaunchArgs )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastCollection * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Icon )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastCollection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Icon )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastCollection * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIToastCollection
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionVtbl *lpVtbl;
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
    ( (This)->lpVtbl->get_LaunchArgs(This,value) )
    ( (This)->lpVtbl->put_LaunchArgs(This,value) )
    ( (This)->lpVtbl->get_Icon(This,value) )
    ( (This)->lpVtbl->put_Icon(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIToastCollection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IToastCollectionFactory[] = L"Windows.UI.Notifications.IToastCollectionFactory";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionFactory * This,
                  __RPC__in HSTRING collectionId,
                  __RPC__in HSTRING displayName,
                  __RPC__in HSTRING launchArgs,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * iconUri,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIToastCollection * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionFactoryVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,collectionId,displayName,launchArgs,iconUri,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIToastCollectionFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IToastCollectionManager[] = L"Windows.UI.Notifications.IToastCollectionManager";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SaveToastCollectionAsync )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CIToastCollection * collection,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *FindAllToastCollectionsAsync )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionManager * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CToastCollection * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetToastCollectionAsync )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionManager * This,
                  __RPC__in HSTRING collectionId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastCollection * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveToastCollectionAsync )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionManager * This,
                  __RPC__in HSTRING collectionId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveAllToastCollectionsAsync )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionManager * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionManager * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppId )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionManager * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionManagerVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionManager
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SaveToastCollectionAsync(This,collection,operation) )
    ( (This)->lpVtbl->FindAllToastCollectionsAsync(This,operation) )
    ( (This)->lpVtbl->GetToastCollectionAsync(This,collectionId,operation) )
    ( (This)->lpVtbl->RemoveToastCollectionAsync(This,collectionId,operation) )
    ( (This)->lpVtbl->RemoveAllToastCollectionsAsync(This,operation) )
    ( (This)->lpVtbl->get_User(This,value) )
    ( (This)->lpVtbl->get_AppId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIToastCollectionManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IToastDismissedEventArgs[] = L"Windows.UI.Notifications.IToastDismissedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIToastDismissedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastDismissedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastDismissedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastDismissedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastDismissedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastDismissedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastDismissedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastDismissedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CNotifications_CToastDismissalReason * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIToastDismissedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIToastDismissedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIToastDismissedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Reason(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIToastDismissedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IToastFailedEventArgs[] = L"Windows.UI.Notifications.IToastFailedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIToastFailedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastFailedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastFailedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastFailedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastFailedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastFailedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastFailedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ErrorCode )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastFailedEventArgs * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIToastFailedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIToastFailedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIToastFailedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ErrorCode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIToastFailedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IToastNotification[] = L"Windows.UI.Notifications.IToastNotification";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ExpirationTime )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExpirationTime )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Dismissed )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_Windows__CUI__CNotifications__CToastDismissedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Dismissed )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Activated )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Activated )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Failed )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotification_Windows__CUI__CNotifications__CToastFailedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Failed )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotification
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Content(This,value) )
    ( (This)->lpVtbl->put_ExpirationTime(This,value) )
    ( (This)->lpVtbl->get_ExpirationTime(This,value) )
    ( (This)->lpVtbl->add_Dismissed(This,handler,token) )
    ( (This)->lpVtbl->remove_Dismissed(This,token) )
    ( (This)->lpVtbl->add_Activated(This,handler,token) )
    ( (This)->lpVtbl->remove_Activated(This,token) )
    ( (This)->lpVtbl->add_Failed(This,handler,token) )
    ( (This)->lpVtbl->remove_Failed(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIToastNotification;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IToastNotification2[] = L"Windows.UI.Notifications.IToastNotification2";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotification2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotification2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotification2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotification2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotification2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotification2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotification2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Tag )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotification2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Tag )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotification2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Group )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotification2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Group )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotification2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SuppressPopup )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotification2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SuppressPopup )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotification2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIToastNotification2Vtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotification2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotification2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Tag(This,value) )
    ( (This)->lpVtbl->get_Tag(This,value) )
    ( (This)->lpVtbl->put_Group(This,value) )
    ( (This)->lpVtbl->get_Group(This,value) )
    ( (This)->lpVtbl->put_SuppressPopup(This,value) )
    ( (This)->lpVtbl->get_SuppressPopup(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIToastNotification2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IToastNotification3[] = L"Windows.UI.Notifications.IToastNotification3";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotification3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotification3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotification3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotification3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotification3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotification3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotification3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NotificationMirroring )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotification3 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CNotifications_CNotificationMirroring * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NotificationMirroring )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotification3 * This,
                  __x_ABI_CWindows_CUI_CNotifications_CNotificationMirroring value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemoteId )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotification3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RemoteId )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotification3 * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIToastNotification3Vtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotification3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotification3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NotificationMirroring(This,value) )
    ( (This)->lpVtbl->put_NotificationMirroring(This,value) )
    ( (This)->lpVtbl->get_RemoteId(This,value) )
    ( (This)->lpVtbl->put_RemoteId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIToastNotification3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IToastNotification4[] = L"Windows.UI.Notifications.IToastNotification4";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotification4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotification4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotification4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotification4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotification4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotification4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotification4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotification4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CINotificationData * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Data )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotification4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CINotificationData * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Priority )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotification4 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CNotifications_CToastNotificationPriority * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Priority )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotification4 * This,
                  __x_ABI_CWindows_CUI_CNotifications_CToastNotificationPriority value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIToastNotification4Vtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotification4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotification4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Data(This,value) )
    ( (This)->lpVtbl->put_Data(This,value) )
    ( (This)->lpVtbl->get_Priority(This,value) )
    ( (This)->lpVtbl->put_Priority(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIToastNotification4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IToastNotification6[] = L"Windows.UI.Notifications.IToastNotification6";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotification6Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotification6 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotification6 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotification6 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotification6 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotification6 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotification6 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExpiresOnReboot )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotification6 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ExpiresOnReboot )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotification6 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIToastNotification6Vtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotification6
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotification6Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExpiresOnReboot(This,value) )
    ( (This)->lpVtbl->put_ExpiresOnReboot(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIToastNotification6;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IToastNotificationActionTriggerDetail[] = L"Windows.UI.Notifications.IToastNotificationActionTriggerDetail";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationActionTriggerDetailVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationActionTriggerDetail * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationActionTriggerDetail * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationActionTriggerDetail * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationActionTriggerDetail * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationActionTriggerDetail * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationActionTriggerDetail * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Argument )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationActionTriggerDetail * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UserInput )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationActionTriggerDetail * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationActionTriggerDetailVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationActionTriggerDetail
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationActionTriggerDetailVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Argument(This,value) )
    ( (This)->lpVtbl->get_UserInput(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIToastNotificationActionTriggerDetail;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IToastNotificationFactory[] = L"Windows.UI.Notifications.IToastNotificationFactory";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateToastNotification )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * content,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationFactoryVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateToastNotification(This,content,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIToastNotificationFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IToastNotificationHistory[] = L"Windows.UI.Notifications.IToastNotificationHistory";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *RemoveGroup )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory * This,
                  __RPC__in HSTRING group
        );
                    HRESULT ( STDMETHODCALLTYPE *RemoveGroupWithId )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory * This,
                  __RPC__in HSTRING group,
                  __RPC__in HSTRING applicationId
        );
                    HRESULT ( STDMETHODCALLTYPE *RemoveGroupedTagWithId )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory * This,
                  __RPC__in HSTRING tag,
                  __RPC__in HSTRING group,
                  __RPC__in HSTRING applicationId
        );
                    HRESULT ( STDMETHODCALLTYPE *RemoveGroupedTag )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory * This,
                  __RPC__in HSTRING tag,
                  __RPC__in HSTRING group
        );
                    HRESULT ( STDMETHODCALLTYPE *Remove )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory * This,
                  __RPC__in HSTRING tag
        );
                    HRESULT ( STDMETHODCALLTYPE *Clear )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory * This
        );
                    HRESULT ( STDMETHODCALLTYPE *ClearWithId )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory * This,
                  __RPC__in HSTRING applicationId
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistoryVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RemoveGroup(This,group) )
    ( (This)->lpVtbl->RemoveGroupWithId(This,group,applicationId) )
    ( (This)->lpVtbl->RemoveGroupedTagWithId(This,tag,group,applicationId) )
    ( (This)->lpVtbl->RemoveGroupedTag(This,tag,group) )
    ( (This)->lpVtbl->Remove(This,tag) )
    ( (This)->lpVtbl->Clear(This) )
    ( (This)->lpVtbl->ClearWithId(This,applicationId) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IToastNotificationHistory2[] = L"Windows.UI.Notifications.IToastNotificationHistory2";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetHistory )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory2 * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CNotifications__CToastNotification * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetHistoryWithId )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory2 * This,
                  __RPC__in HSTRING applicationId,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CNotifications__CToastNotification * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory2Vtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetHistory(This,result) )
    ( (This)->lpVtbl->GetHistoryWithId(This,applicationId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IToastNotificationHistoryChangedTriggerDetail[] = L"Windows.UI.Notifications.IToastNotificationHistoryChangedTriggerDetail";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistoryChangedTriggerDetailVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistoryChangedTriggerDetail * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistoryChangedTriggerDetail * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistoryChangedTriggerDetail * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistoryChangedTriggerDetail * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistoryChangedTriggerDetail * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistoryChangedTriggerDetail * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ChangeType )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistoryChangedTriggerDetail * This,
                           __RPC__out __x_ABI_CWindows_CUI_CNotifications_CToastHistoryChangedType * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistoryChangedTriggerDetailVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistoryChangedTriggerDetail
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistoryChangedTriggerDetailVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ChangeType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistoryChangedTriggerDetail;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IToastNotificationHistoryChangedTriggerDetail2[] = L"Windows.UI.Notifications.IToastNotificationHistoryChangedTriggerDetail2";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistoryChangedTriggerDetail2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistoryChangedTriggerDetail2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistoryChangedTriggerDetail2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistoryChangedTriggerDetail2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistoryChangedTriggerDetail2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistoryChangedTriggerDetail2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistoryChangedTriggerDetail2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CollectionId )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistoryChangedTriggerDetail2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistoryChangedTriggerDetail2Vtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistoryChangedTriggerDetail2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistoryChangedTriggerDetail2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CollectionId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistoryChangedTriggerDetail2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IToastNotificationManagerForUser[] = L"Windows.UI.Notifications.IToastNotificationManagerForUser";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUserVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUser * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUser * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUser * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUser * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUser * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUser * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateToastNotifier )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUser * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateToastNotifierWithId )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUser * This,
                  __RPC__in HSTRING applicationId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_History )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUser * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUser * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUserVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUser
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUserVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateToastNotifier(This,result) )
    ( (This)->lpVtbl->CreateToastNotifierWithId(This,applicationId,result) )
    ( (This)->lpVtbl->get_History(This,value) )
    ( (This)->lpVtbl->get_User(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUser;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IToastNotificationManagerForUser2[] = L"Windows.UI.Notifications.IToastNotificationManagerForUser2";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUser2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUser2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUser2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUser2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUser2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUser2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUser2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetToastNotifierForToastCollectionIdAsync )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUser2 * This,
                  __RPC__in HSTRING collectionId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotifier * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetHistoryForToastCollectionIdAsync )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUser2 * This,
                  __RPC__in HSTRING collectionId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CNotifications__CToastNotificationHistory * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetToastCollectionManager )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUser2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionManager * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetToastCollectionManagerWithAppId )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUser2 * This,
                  __RPC__in HSTRING appId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIToastCollectionManager * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUser2Vtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUser2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUser2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetToastNotifierForToastCollectionIdAsync(This,collectionId,operation) )
    ( (This)->lpVtbl->GetHistoryForToastCollectionIdAsync(This,collectionId,operation) )
    ( (This)->lpVtbl->GetToastCollectionManager(This,result) )
    ( (This)->lpVtbl->GetToastCollectionManagerWithAppId(This,appId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUser2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IToastNotificationManagerStatics[] = L"Windows.UI.Notifications.IToastNotificationManagerStatics";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateToastNotifier )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateToastNotifierWithId )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics * This,
                  __RPC__in HSTRING applicationId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetTemplateContent )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics * This,
                  __x_ABI_CWindows_CUI_CNotifications_CToastTemplateType type,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStaticsVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateToastNotifier(This,result) )
    ( (This)->lpVtbl->CreateToastNotifierWithId(This,applicationId,result) )
    ( (This)->lpVtbl->GetTemplateContent(This,type,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IToastNotificationManagerStatics2[] = L"Windows.UI.Notifications.IToastNotificationManagerStatics2";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_History )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationHistory * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_History(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IToastNotificationManagerStatics4[] = L"Windows.UI.Notifications.IToastNotificationManagerStatics4";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForUser )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUser * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ConfigureNotificationMirroring )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics4 * This,
                  __x_ABI_CWindows_CUI_CNotifications_CNotificationMirroring value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics4Vtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForUser(This,user,result) )
    ( (This)->lpVtbl->ConfigureNotificationMirroring(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IToastNotificationManagerStatics5[] = L"Windows.UI.Notifications.IToastNotificationManagerStatics5";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerForUser * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics5Vtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics5
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIToastNotificationManagerStatics5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IToastNotifier[] = L"Windows.UI.Notifications.IToastNotifier";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotifierVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Show )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * notification
        );
    HRESULT ( STDMETHODCALLTYPE *Hide )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * notification
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Setting )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier * This,
                           __RPC__out __x_ABI_CWindows_CUI_CNotifications_CNotificationSetting * value
        );
    HRESULT ( STDMETHODCALLTYPE *AddToSchedule )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification * scheduledToast
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveFromSchedule )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CIScheduledToastNotification * scheduledToast
        );
    HRESULT ( STDMETHODCALLTYPE *GetScheduledToastNotifications )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CNotifications__CScheduledToastNotification * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIToastNotifierVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotifierVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Show(This,notification) )
    ( (This)->lpVtbl->Hide(This,notification) )
    ( (This)->lpVtbl->get_Setting(This,value) )
    ( (This)->lpVtbl->AddToSchedule(This,scheduledToast) )
    ( (This)->lpVtbl->RemoveFromSchedule(This,scheduledToast) )
    ( (This)->lpVtbl->GetScheduledToastNotifications(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIToastNotifier;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IToastNotifier2[] = L"Windows.UI.Notifications.IToastNotifier2";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *UpdateWithTagAndGroup )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CINotificationData * data,
                  __RPC__in HSTRING tag,
                  __RPC__in HSTRING group,
                           __RPC__out __x_ABI_CWindows_CUI_CNotifications_CNotificationUpdateResult * result
        );
                    HRESULT ( STDMETHODCALLTYPE *UpdateWithTag )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CINotificationData * data,
                  __RPC__in HSTRING tag,
                           __RPC__out __x_ABI_CWindows_CUI_CNotifications_CNotificationUpdateResult * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier2Vtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->UpdateWithTagAndGroup(This,data,tag,group,result) )
    ( (This)->lpVtbl->UpdateWithTag(This,data,tag,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIToastNotifier2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IToastNotifier3[] = L"Windows.UI.Notifications.IToastNotifier3";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_ScheduledToastNotificationShowing )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier3 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CNotifications__CToastNotifier_Windows__CUI__CNotifications__CScheduledToastNotificationShowingEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ScheduledToastNotificationShowing )(
        __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier3 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier3Vtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIToastNotifier3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_ScheduledToastNotificationShowing(This,handler,token) )
    ( (This)->lpVtbl->remove_ScheduledToastNotificationShowing(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIToastNotifier3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IUserNotification[] = L"Windows.UI.Notifications.IUserNotification";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIUserNotificationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIUserNotification * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIUserNotification * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIUserNotification * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIUserNotification * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIUserNotification * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIUserNotification * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Notification )(
        __x_ABI_CWindows_CUI_CNotifications_CIUserNotification * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CINotification * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppInfo )(
        __x_ABI_CWindows_CUI_CNotifications_CIUserNotification * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIAppInfo * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CUI_CNotifications_CIUserNotification * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CreationTime )(
        __x_ABI_CWindows_CUI_CNotifications_CIUserNotification * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIUserNotificationVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIUserNotification
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIUserNotificationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Notification(This,value) )
    ( (This)->lpVtbl->get_AppInfo(This,value) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_CreationTime(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIUserNotification;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_IUserNotificationChangedEventArgs[] = L"Windows.UI.Notifications.IUserNotificationChangedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CNotifications_CIUserNotificationChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIUserNotificationChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIUserNotificationChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIUserNotificationChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIUserNotificationChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIUserNotificationChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CNotifications_CIUserNotificationChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ChangeKind )(
        __x_ABI_CWindows_CUI_CNotifications_CIUserNotificationChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CNotifications_CUserNotificationChangedKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UserNotificationId )(
        __x_ABI_CWindows_CUI_CNotifications_CIUserNotificationChangedEventArgs * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CNotifications_CIUserNotificationChangedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CNotifications_CIUserNotificationChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CIUserNotificationChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ChangeKind(This,value) )
    ( (This)->lpVtbl->get_UserNotificationId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CIUserNotificationChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_AdaptiveNotificationText[] = L"Windows.UI.Notifications.AdaptiveNotificationText";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_BadgeNotification[] = L"Windows.UI.Notifications.BadgeNotification";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_BadgeUpdateManager[] = L"Windows.UI.Notifications.BadgeUpdateManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_BadgeUpdateManagerForUser[] = L"Windows.UI.Notifications.BadgeUpdateManagerForUser";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_BadgeUpdater[] = L"Windows.UI.Notifications.BadgeUpdater";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_KnownAdaptiveNotificationHints[] = L"Windows.UI.Notifications.KnownAdaptiveNotificationHints";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_KnownAdaptiveNotificationTextStyles[] = L"Windows.UI.Notifications.KnownAdaptiveNotificationTextStyles";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_KnownNotificationBindings[] = L"Windows.UI.Notifications.KnownNotificationBindings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_Notification[] = L"Windows.UI.Notifications.Notification";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_NotificationBinding[] = L"Windows.UI.Notifications.NotificationBinding";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_NotificationData[] = L"Windows.UI.Notifications.NotificationData";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_NotificationVisual[] = L"Windows.UI.Notifications.NotificationVisual";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_ScheduledTileNotification[] = L"Windows.UI.Notifications.ScheduledTileNotification";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_ScheduledToastNotification[] = L"Windows.UI.Notifications.ScheduledToastNotification";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_ScheduledToastNotificationShowingEventArgs[] = L"Windows.UI.Notifications.ScheduledToastNotificationShowingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_ShownTileNotification[] = L"Windows.UI.Notifications.ShownTileNotification";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_TileFlyoutNotification[] = L"Windows.UI.Notifications.TileFlyoutNotification";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_TileFlyoutUpdateManager[] = L"Windows.UI.Notifications.TileFlyoutUpdateManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_TileFlyoutUpdater[] = L"Windows.UI.Notifications.TileFlyoutUpdater";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_TileNotification[] = L"Windows.UI.Notifications.TileNotification";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_TileUpdateManager[] = L"Windows.UI.Notifications.TileUpdateManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_TileUpdateManagerForUser[] = L"Windows.UI.Notifications.TileUpdateManagerForUser";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_TileUpdater[] = L"Windows.UI.Notifications.TileUpdater";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_ToastActivatedEventArgs[] = L"Windows.UI.Notifications.ToastActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_ToastCollection[] = L"Windows.UI.Notifications.ToastCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_ToastCollectionManager[] = L"Windows.UI.Notifications.ToastCollectionManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_ToastDismissedEventArgs[] = L"Windows.UI.Notifications.ToastDismissedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_ToastFailedEventArgs[] = L"Windows.UI.Notifications.ToastFailedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_ToastNotification[] = L"Windows.UI.Notifications.ToastNotification";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_ToastNotificationActionTriggerDetail[] = L"Windows.UI.Notifications.ToastNotificationActionTriggerDetail";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_ToastNotificationHistory[] = L"Windows.UI.Notifications.ToastNotificationHistory";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_ToastNotificationHistoryChangedTriggerDetail[] = L"Windows.UI.Notifications.ToastNotificationHistoryChangedTriggerDetail";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_ToastNotificationManager[] = L"Windows.UI.Notifications.ToastNotificationManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_ToastNotificationManagerForUser[] = L"Windows.UI.Notifications.ToastNotificationManagerForUser";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_ToastNotifier[] = L"Windows.UI.Notifications.ToastNotifier";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_UserNotification[] = L"Windows.UI.Notifications.UserNotification";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_UserNotificationChangedEventArgs[] = L"Windows.UI.Notifications.UserNotificationChangedEventArgs";
       
       
#pragma clang diagnostic pop
