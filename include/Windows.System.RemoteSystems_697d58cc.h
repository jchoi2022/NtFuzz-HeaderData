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
#include "Windows.ApplicationModel.AppService.h"
#include "Windows.Networking.h"
#include "Windows.Security.Credentials.h"
#include "Windows.System.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2 __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3 __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem4 __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem4;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem5 __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem5;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem6 __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem6;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp2 __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp2;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppRegistration __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppRegistration;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppRegistrationStatics __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppRegistrationStatics;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionInfo __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionInfo;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionInfoStatics __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionInfoStatics;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest2 __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest2;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest3 __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest3;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestStatics __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestStatics;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestStatics2 __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestStatics2;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemEnumerationCompletedEventArgs __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemEnumerationCompletedEventArgs;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2 __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2 __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics3 __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics3;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher2 __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher2;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher3 __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher3;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcherErrorOccurredEventArgs __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcherErrorOccurredEventArgs;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWebAccountFilter __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWebAccountFilter;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWebAccountFilterFactory __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWebAccountFilterFactory;
typedef interface __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter;
EXTERN_C const IID IID___FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter;
typedef struct __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * This, __RPC__out __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilterVtbl;
interface __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter
{
    CONST_VTBL struct __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilterVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter;
EXTERN_C const IID IID___FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter;
typedef struct __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * This, __RPC__deref_out_opt __FIIterator_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter **first);
    END_INTERFACE
} __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilterVtbl;
interface __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter
{
    CONST_VTBL struct __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilterVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp;
EXTERN_C const IID IID___FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp;
typedef struct __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAppVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp * This, __RPC__out __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAppVtbl;
interface __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp
{
    CONST_VTBL struct __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAppVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp;
EXTERN_C const IID IID___FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp;
typedef struct __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAppVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp * This, __RPC__deref_out_opt __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp **first);
    END_INTERFACE
} __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAppVtbl;
interface __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp
{
    CONST_VTBL struct __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAppVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant;
EXTERN_C const IID IID___FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant;
typedef struct __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * This, __RPC__out __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantVtbl;
interface __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant
{
    CONST_VTBL struct __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant;
EXTERN_C const IID IID___FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant;
typedef struct __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * This, __RPC__deref_out_opt __FIIterator_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant **first);
    END_INTERFACE
} __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantVtbl;
interface __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant
{
    CONST_VTBL struct __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp __FIVectorView_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp;
EXTERN_C const IID IID___FIVectorView_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp;
typedef struct __FIVectorView_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAppVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp * This,
                       __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAppVtbl;
interface __FIVectorView_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAppVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem;
typedef interface __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem;
typedef struct __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystem **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem * This, __RPC__out __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemVtbl;
interface __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemAccessStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus;
typedef interface __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus;
typedef struct __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus * This, __RPC__out enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemAccessStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatusVtbl;
interface __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatusVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult;
typedef interface __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult;
typedef struct __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult * This, __RPC__out __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResultVtbl;
interface __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult;
typedef interface __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult;
typedef struct __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult * This, __RPC__out __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResultVtbl;
interface __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResultVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgs __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * sender, __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgs __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController * sender, __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgs __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener * sender, __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgs __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel * sender, __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectable __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgs __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgs __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgs __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgs __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgs __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgs __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemEnumerationCompletedEventArgs __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemEnumerationCompletedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemEnumerationCompletedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemEnumerationCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemEnumerationCompletedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemEnumerationCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemEnumerationCompletedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemEnumerationCompletedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemEnumerationCompletedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemEnumerationCompletedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemEnumerationCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemEnumerationCompletedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgs __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgs __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcherErrorOccurredEventArgs __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcherErrorOccurredEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcherErrorOccurredEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcherErrorOccurredEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcherErrorOccurredEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcherErrorOccurredEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcherErrorOccurredEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcherErrorOccurredEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcherErrorOccurredEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcherErrorOccurredEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcherErrorOccurredEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcherErrorOccurredEventArgsVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CNetworking_CIHostName __x_ABI_CWindows_CNetworking_CIHostName;
typedef interface __FIIterator_1_Windows__CNetworking__CHostName __FIIterator_1_Windows__CNetworking__CHostName;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CHostName;
typedef struct __FIIterator_1_Windows__CNetworking__CHostNameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This, __RPC__out __x_ABI_CWindows_CNetworking_CIHostName * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CIHostName * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CHostNameVtbl;
interface __FIIterator_1_Windows__CNetworking__CHostName
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CHostNameVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CHostName __FIIterable_1_Windows__CNetworking__CHostName;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CHostName;
typedef struct __FIIterable_1_Windows__CNetworking__CHostNameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CHostName **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CHostNameVtbl;
interface __FIIterable_1_Windows__CNetworking__CHostName
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CHostNameVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CNetworking__CHostName __FIVectorView_1_Windows__CNetworking__CHostName;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CHostName;
typedef struct __FIVectorView_1_Windows__CNetworking__CHostNameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CIHostName * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                       __x_ABI_CWindows_CNetworking_CIHostName * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CIHostName * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CHostNameVtbl;
interface __FIVectorView_1_Windows__CNetworking__CHostName
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CHostNameVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection;
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount;
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemAccessStatus __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemAccessStatus;
typedef enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemAuthorizationKind __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemAuthorizationKind;
typedef enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemDiscoveryType __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemDiscoveryType;
typedef enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemPlatform __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemPlatform;
typedef enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionCreationStatus __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionCreationStatus;
typedef enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionDisconnectedReason __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionDisconnectedReason;
typedef enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionJoinStatus __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionJoinStatus;
typedef enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionMessageChannelReliability __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionMessageChannelReliability;
typedef enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionParticipantWatcherStatus __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionParticipantWatcherStatus;
typedef enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionWatcherStatus __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionWatcherStatus;
typedef enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemStatus __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemStatus;
typedef enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemStatusType __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemStatusType;
typedef enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemWatcherError __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemWatcherError;
enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemAccessStatus
{
    RemoteSystemAccessStatus_Unspecified = 0,
    RemoteSystemAccessStatus_Allowed = 1,
    RemoteSystemAccessStatus_DeniedByUser = 2,
    RemoteSystemAccessStatus_DeniedBySystem = 3,
};
enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemAuthorizationKind
{
    RemoteSystemAuthorizationKind_SameUser = 0,
    RemoteSystemAuthorizationKind_Anonymous = 1,
};
enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemDiscoveryType
{
    RemoteSystemDiscoveryType_Any = 0,
    RemoteSystemDiscoveryType_Proximal = 1,
    RemoteSystemDiscoveryType_Cloud = 2,
    RemoteSystemDiscoveryType_SpatiallyProximal = 3,
};
enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemPlatform
{
    RemoteSystemPlatform_Unknown = 0,
    RemoteSystemPlatform_Windows = 1,
    RemoteSystemPlatform_Android = 2,
    RemoteSystemPlatform_Ios = 3,
    RemoteSystemPlatform_Linux = 4,
};
enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionCreationStatus
{
    RemoteSystemSessionCreationStatus_Success = 0,
    RemoteSystemSessionCreationStatus_SessionLimitsExceeded = 1,
    RemoteSystemSessionCreationStatus_OperationAborted = 2,
};
enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionDisconnectedReason
{
    RemoteSystemSessionDisconnectedReason_SessionUnavailable = 0,
    RemoteSystemSessionDisconnectedReason_RemovedByController = 1,
    RemoteSystemSessionDisconnectedReason_SessionClosed = 2,
};
enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionJoinStatus
{
    RemoteSystemSessionJoinStatus_Success = 0,
    RemoteSystemSessionJoinStatus_SessionLimitsExceeded = 1,
    RemoteSystemSessionJoinStatus_OperationAborted = 2,
    RemoteSystemSessionJoinStatus_SessionUnavailable = 3,
    RemoteSystemSessionJoinStatus_RejectedByController = 4,
};
enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionMessageChannelReliability
{
    RemoteSystemSessionMessageChannelReliability_Reliable = 0,
    RemoteSystemSessionMessageChannelReliability_Unreliable = 1,
};
enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionParticipantWatcherStatus
{
    RemoteSystemSessionParticipantWatcherStatus_Created = 0,
    RemoteSystemSessionParticipantWatcherStatus_Started = 1,
    RemoteSystemSessionParticipantWatcherStatus_EnumerationCompleted = 2,
    RemoteSystemSessionParticipantWatcherStatus_Stopping = 3,
    RemoteSystemSessionParticipantWatcherStatus_Stopped = 4,
    RemoteSystemSessionParticipantWatcherStatus_Aborted = 5,
};
enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionWatcherStatus
{
    RemoteSystemSessionWatcherStatus_Created = 0,
    RemoteSystemSessionWatcherStatus_Started = 1,
    RemoteSystemSessionWatcherStatus_EnumerationCompleted = 2,
    RemoteSystemSessionWatcherStatus_Stopping = 3,
    RemoteSystemSessionWatcherStatus_Stopped = 4,
    RemoteSystemSessionWatcherStatus_Aborted = 5,
};
enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemStatus
{
    RemoteSystemStatus_Unavailable = 0,
    RemoteSystemStatus_DiscoveringAvailability = 1,
    RemoteSystemStatus_Available = 2,
    RemoteSystemStatus_Unknown = 3,
};
enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemStatusType
{
    RemoteSystemStatusType_Any = 0,
    RemoteSystemStatusType_Available = 1,
};
enum __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemWatcherError
{
    RemoteSystemWatcherError_Unknown = 0,
    RemoteSystemWatcherError_InternetNotAvailable = 1,
    RemoteSystemWatcherError_AuthenticationError = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IKnownRemoteSystemCapabilitiesStatics[] = L"Windows.System.RemoteSystems.IKnownRemoteSystemCapabilitiesStatics";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AppService )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LaunchUri )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemoteSession )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SpatialEntity )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AppService(This,value) )
    ( (This)->lpVtbl->get_LaunchUri(This,value) )
    ( (This)->lpVtbl->get_RemoteSession(This,value) )
    ( (This)->lpVtbl->get_SpatialEntity(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIKnownRemoteSystemCapabilitiesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystem[] = L"Windows.System.RemoteSystems.IRemoteSystem";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsAvailableByProximity )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_Kind(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_IsAvailableByProximity(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystem2[] = L"Windows.System.RemoteSystems.IRemoteSystem2";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsAvailableBySpatialProximity )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2 * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCapabilitySupportedAsync )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2 * This,
                  __RPC__in HSTRING capabilityName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2Vtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsAvailableBySpatialProximity(This,value) )
    ( (This)->lpVtbl->GetCapabilitySupportedAsync(This,capabilityName,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystem3[] = L"Windows.System.RemoteSystems.IRemoteSystem3";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ManufacturerDisplayName )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ModelDisplayName )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3Vtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ManufacturerDisplayName(This,value) )
    ( (This)->lpVtbl->get_ModelDisplayName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystem4[] = L"Windows.System.RemoteSystems.IRemoteSystem4";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Platform )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem4 * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemPlatform * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem4Vtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem4
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Platform(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystem5[] = L"Windows.System.RemoteSystems.IRemoteSystem5";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Apps )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem5 * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CSystem__CRemoteSystems__CRemoteSystemApp * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem5Vtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem5
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Apps(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystem6[] = L"Windows.System.RemoteSystems.IRemoteSystem6";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem6Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem6 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem6 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem6 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem6 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem6 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem6 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem6 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem6Vtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem6
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem6Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_User(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem6;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemAddedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemAddedEventArgs";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RemoteSystem )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgsVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RemoteSystem(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAddedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemApp[] = L"Windows.System.RemoteSystems.IRemoteSystemApp";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsAvailableByProximity )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsAvailableBySpatialProximity )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Attributes )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_IsAvailableByProximity(This,value) )
    ( (This)->lpVtbl->get_IsAvailableBySpatialProximity(This,value) )
    ( (This)->lpVtbl->get_Attributes(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemApp2[] = L"Windows.System.RemoteSystems.IRemoteSystemApp2";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ConnectionToken )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp2Vtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_User(This,value) )
    ( (This)->lpVtbl->get_ConnectionToken(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemAppRegistration[] = L"Windows.System.RemoteSystems.IRemoteSystemAppRegistration";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppRegistrationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppRegistration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppRegistration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppRegistration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppRegistration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppRegistration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppRegistration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppRegistration * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Attributes )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppRegistration * This,
                           __RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SaveAsync )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppRegistration * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppRegistrationVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppRegistration
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppRegistrationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_User(This,value) )
    ( (This)->lpVtbl->get_Attributes(This,value) )
    ( (This)->lpVtbl->SaveAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppRegistration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemAppRegistrationStatics[] = L"Windows.System.RemoteSystems.IRemoteSystemAppRegistrationStatics";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppRegistrationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppRegistrationStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppRegistrationStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppRegistrationStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppRegistrationStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppRegistrationStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppRegistrationStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppRegistrationStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppRegistration * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetForUser )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppRegistrationStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppRegistration * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppRegistrationStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppRegistrationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppRegistrationStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,result) )
    ( (This)->lpVtbl->GetForUser(This,user,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAppRegistrationStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemAuthorizationKindFilter[] = L"Windows.System.RemoteSystems.IRemoteSystemAuthorizationKindFilter";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RemoteSystemAuthorizationKind )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemAuthorizationKind * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RemoteSystemAuthorizationKind(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemAuthorizationKindFilterFactory[] = L"Windows.System.RemoteSystems.IRemoteSystemAuthorizationKindFilterFactory";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory * This,
                  __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemAuthorizationKind remoteSystemAuthorizationKind,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilter * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactoryVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,remoteSystemAuthorizationKind,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemAuthorizationKindFilterFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemConnectionInfo[] = L"Windows.System.RemoteSystems.IRemoteSystemConnectionInfo";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsProximal )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionInfo * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionInfoVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsProximal(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemConnectionInfoStatics[] = L"Windows.System.RemoteSystems.IRemoteSystemConnectionInfoStatics";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionInfoStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionInfoStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionInfoStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionInfoStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionInfoStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionInfoStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionInfoStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *TryCreateFromAppServiceConnection )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionInfoStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection * connection,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionInfo * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionInfoStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionInfoStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionInfoStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryCreateFromAppServiceConnection(This,connection,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionInfoStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemConnectionRequest[] = L"Windows.System.RemoteSystems.IRemoteSystemConnectionRequest";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RemoteSystem )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RemoteSystem(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemConnectionRequest2[] = L"Windows.System.RemoteSystems.IRemoteSystemConnectionRequest2";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RemoteSystemApp )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest2Vtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RemoteSystemApp(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemConnectionRequest3[] = L"Windows.System.RemoteSystems.IRemoteSystemConnectionRequest3";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ConnectionToken )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest3Vtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest3
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ConnectionToken(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemConnectionRequestFactory[] = L"Windows.System.RemoteSystems.IRemoteSystemConnectionRequestFactory";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * remoteSystem,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactoryVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,remoteSystem,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemConnectionRequestStatics[] = L"Windows.System.RemoteSystems.IRemoteSystemConnectionRequestStatics";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateForApp )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemApp * remoteSystemApp,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateForApp(This,remoteSystemApp,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemConnectionRequestStatics2[] = L"Windows.System.RemoteSystems.IRemoteSystemConnectionRequestStatics2";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromConnectionToken )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestStatics2 * This,
                  __RPC__in HSTRING connectionToken,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromConnectionTokenForUser )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in HSTRING connectionToken,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestStatics2Vtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromConnectionToken(This,connectionToken,result) )
    ( (This)->lpVtbl->CreateFromConnectionTokenForUser(This,user,connectionToken,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequestStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemDiscoveryTypeFilter[] = L"Windows.System.RemoteSystems.IRemoteSystemDiscoveryTypeFilter";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RemoteSystemDiscoveryType )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemDiscoveryType * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RemoteSystemDiscoveryType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemDiscoveryTypeFilterFactory[] = L"Windows.System.RemoteSystems.IRemoteSystemDiscoveryTypeFilterFactory";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory * This,
                  __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemDiscoveryType discoveryType,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilter * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactoryVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,discoveryType,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemDiscoveryTypeFilterFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemEnumerationCompletedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemEnumerationCompletedEventArgs";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemEnumerationCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemEnumerationCompletedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemEnumerationCompletedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemEnumerationCompletedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemEnumerationCompletedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemEnumerationCompletedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemEnumerationCompletedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemEnumerationCompletedEventArgsVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemEnumerationCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemEnumerationCompletedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemEnumerationCompletedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemFilter[] = L"Windows.System.RemoteSystems.IRemoteSystemFilter";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilterVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemFilter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemKindFilter[] = L"Windows.System.RemoteSystems.IRemoteSystemKindFilter";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RemoteSystemKinds )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RemoteSystemKinds(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemKindFilterFactory[] = L"Windows.System.RemoteSystems.IRemoteSystemKindFilterFactory";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * remoteSystemKinds,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilter * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactoryVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,remoteSystemKinds,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindFilterFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemKindStatics[] = L"Windows.System.RemoteSystems.IRemoteSystemKindStatics";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Phone )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Hub )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Holographic )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Desktop )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Xbox )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Phone(This,value) )
    ( (This)->lpVtbl->get_Hub(This,value) )
    ( (This)->lpVtbl->get_Holographic(This,value) )
    ( (This)->lpVtbl->get_Desktop(This,value) )
    ( (This)->lpVtbl->get_Xbox(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemKindStatics2[] = L"Windows.System.RemoteSystems.IRemoteSystemKindStatics2";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Iot )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Tablet )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Laptop )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2Vtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Iot(This,value) )
    ( (This)->lpVtbl->get_Tablet(This,value) )
    ( (This)->lpVtbl->get_Laptop(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemKindStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemRemovedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemRemovedEventArgs";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RemoteSystemId )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgsVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RemoteSystemId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemRemovedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSession[] = L"Windows.System.RemoteSystems.IRemoteSystemSession";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ControllerDisplayName )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Disconnected )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSession_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionDisconnectedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Disconnected )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *CreateParticipantWatcher )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SendInvitationAsync )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * invitee,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_ControllerDisplayName(This,value) )
    ( (This)->lpVtbl->add_Disconnected(This,handler,token) )
    ( (This)->lpVtbl->remove_Disconnected(This,token) )
    ( (This)->lpVtbl->CreateParticipantWatcher(This,result) )
    ( (This)->lpVtbl->SendInvitationAsync(This,invitee,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionAddedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionAddedEventArgs";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SessionInfo )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgsVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SessionInfo(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionAddedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionController[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionController";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_JoinRequested )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionController_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_JoinRequested )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveParticipantAsync )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant * pParticipant,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CreateSessionAsync )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionCreationResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_JoinRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_JoinRequested(This,token) )
    ( (This)->lpVtbl->RemoveParticipantAsync(This,pParticipant,operation) )
    ( (This)->lpVtbl->CreateSessionAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionControllerFactory[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionControllerFactory";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateController )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory * This,
                  __RPC__in HSTRING displayName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateControllerWithSessionOptions )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory * This,
                  __RPC__in HSTRING displayName,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions * options,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionController * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactoryVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateController(This,displayName,value) )
    ( (This)->lpVtbl->CreateControllerWithSessionOptions(This,displayName,options,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionControllerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionCreationResult[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionCreationResult";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionCreationStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Session )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResultVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_Session(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionCreationResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionDisconnectedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionDisconnectedEventArgs";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionDisconnectedReason * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgsVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Reason(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionDisconnectedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionInfo[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionInfo";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ControllerDisplayName )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *JoinAsync )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionJoinResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfoVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_ControllerDisplayName(This,value) )
    ( (This)->lpVtbl->JoinAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionInvitation[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionInvitation";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Sender )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SessionInfo )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Sender(This,value) )
    ( (This)->lpVtbl->get_SessionInfo(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionInvitationListener[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionInvitationListener";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListenerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_InvitationReceived )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationListener_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionInvitationReceivedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_InvitationReceived )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListenerVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListenerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_InvitationReceived(This,handler,token) )
    ( (This)->lpVtbl->remove_InvitationReceived(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationListener;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionInvitationReceivedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionInvitationReceivedEventArgs";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Invitation )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitation * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgsVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Invitation(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInvitationReceivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionJoinRequest[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionJoinRequest";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Participant )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Accept )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Participant(This,value) )
    ( (This)->lpVtbl->Accept(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionJoinRequestedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionJoinRequestedEventArgs";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_JoinRequest )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_JoinRequest(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionJoinResult[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionJoinResult";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionJoinStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Session )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResultVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_Session(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionJoinResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionMessageChannel[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionMessageChannel";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Session )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * * value
        );
    HRESULT ( STDMETHODCALLTYPE *BroadcastValueSetAsync )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * messageData,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SendValueSetAsync )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * messageData,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant * participant,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SendValueSetToParticipantsAsync )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * messageData,
                  __RPC__in_opt __FIIterable_1_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipant * participants,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ValueSetReceived )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionMessageChannel_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionValueSetReceivedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ValueSetReceived )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Session(This,value) )
    ( (This)->lpVtbl->BroadcastValueSetAsync(This,messageData,operation) )
    ( (This)->lpVtbl->SendValueSetAsync(This,messageData,participant,operation) )
    ( (This)->lpVtbl->SendValueSetToParticipantsAsync(This,messageData,participants,operation) )
    ( (This)->lpVtbl->add_ValueSetReceived(This,handler,token) )
    ( (This)->lpVtbl->remove_ValueSetReceived(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionMessageChannelFactory[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionMessageChannelFactory";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * session,
                  __RPC__in HSTRING channelName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateWithReliability )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * session,
                  __RPC__in HSTRING channelName,
                  __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionMessageChannelReliability reliability,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannel * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactoryVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,session,channelName,value) )
    ( (This)->lpVtbl->CreateWithReliability(This,session,channelName,reliability,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionMessageChannelFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionOptions[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionOptions";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsInviteOnly )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsInviteOnly )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptionsVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsInviteOnly(This,value) )
    ( (This)->lpVtbl->put_IsInviteOnly(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionParticipant[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionParticipant";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RemoteSystem )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetHostNames )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CHostName * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RemoteSystem(This,value) )
    ( (This)->lpVtbl->GetHostNames(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantAddedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionParticipantAddedEventArgs";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Participant )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgsVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Participant(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantAddedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantRemovedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionParticipantRemovedEventArgs";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Participant )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgsVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Participant(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantRemovedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantWatcher[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionParticipantWatcher";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * This
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionParticipantWatcherStatus * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Added )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantAddedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Added )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Removed )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantRemovedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Removed )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_EnumerationCompleted )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionParticipantWatcher_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_EnumerationCompleted )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcherVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcherVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Start(This) )
    ( (This)->lpVtbl->Stop(This) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->add_Added(This,handler,token) )
    ( (This)->lpVtbl->remove_Added(This,token) )
    ( (This)->lpVtbl->add_Removed(This,handler,token) )
    ( (This)->lpVtbl->remove_Removed(This,token) )
    ( (This)->lpVtbl->add_EnumerationCompleted(This,handler,token) )
    ( (This)->lpVtbl->remove_EnumerationCompleted(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipantWatcher;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionRemovedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionRemovedEventArgs";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SessionInfo )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgsVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SessionInfo(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionRemovedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionStatics[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionStatics";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWatcher )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWatcher(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionUpdatedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionUpdatedEventArgs";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SessionInfo )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionInfo * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgsVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SessionInfo(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionUpdatedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionValueSetReceivedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionValueSetReceivedEventArgs";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Sender )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionParticipant * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgsVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Sender(This,value) )
    ( (This)->lpVtbl->get_Message(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionValueSetReceivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemSessionWatcher[] = L"Windows.System.RemoteSystems.IRemoteSystemSessionWatcher";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * This
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemSessionWatcherStatus * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Added )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionAddedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Added )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Updated )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionUpdatedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Updated )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Removed )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemSessionRemovedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Removed )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcherVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcherVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Start(This) )
    ( (This)->lpVtbl->Stop(This) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->add_Added(This,handler,token) )
    ( (This)->lpVtbl->remove_Added(This,token) )
    ( (This)->lpVtbl->add_Updated(This,handler,token) )
    ( (This)->lpVtbl->remove_Updated(This,token) )
    ( (This)->lpVtbl->add_Removed(This,handler,token) )
    ( (This)->lpVtbl->remove_Removed(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSessionWatcher;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemStatics[] = L"Windows.System.RemoteSystems.IRemoteSystemStatics";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FindByHostNameAsync )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * hostName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystem * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateWatcher )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateWatcherWithFilters )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics * This,
                  __RPC__in_opt __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * filters,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * * result
        );
    HRESULT ( STDMETHODCALLTYPE *RequestAccessAsync )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CRemoteSystems__CRemoteSystemAccessStatus * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FindByHostNameAsync(This,hostName,operation) )
    ( (This)->lpVtbl->CreateWatcher(This,result) )
    ( (This)->lpVtbl->CreateWatcherWithFilters(This,filters,result) )
    ( (This)->lpVtbl->RequestAccessAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemStatics2[] = L"Windows.System.RemoteSystems.IRemoteSystemStatics2";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsAuthorizationKindEnabled )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2 * This,
                  __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemAuthorizationKind kind,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2Vtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsAuthorizationKindEnabled(This,kind,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemStatics3[] = L"Windows.System.RemoteSystems.IRemoteSystemStatics3";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateWatcherForUser )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateWatcherWithFiltersForUser )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in_opt __FIIterable_1_Windows__CSystem__CRemoteSystems__CIRemoteSystemFilter * filters,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics3Vtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWatcherForUser(This,user,result) )
    ( (This)->lpVtbl->CreateWatcherWithFiltersForUser(This,user,filters,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemStatusTypeFilter[] = L"Windows.System.RemoteSystems.IRemoteSystemStatusTypeFilter";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RemoteSystemStatusType )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemStatusType * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RemoteSystemStatusType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemStatusTypeFilterFactory[] = L"Windows.System.RemoteSystems.IRemoteSystemStatusTypeFilterFactory";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory * This,
                  __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemStatusType remoteSystemStatusType,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilter * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactoryVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,remoteSystemStatusType,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemStatusTypeFilterFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemUpdatedEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemUpdatedEventArgs";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RemoteSystem )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystem * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgsVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RemoteSystem(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemUpdatedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemWatcher[] = L"Windows.System.RemoteSystems.IRemoteSystemWatcher";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * This
        );
                    HRESULT ( STDMETHODCALLTYPE *add_RemoteSystemAdded )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemAddedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_RemoteSystemAdded )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_RemoteSystemUpdated )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemUpdatedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_RemoteSystemUpdated )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_RemoteSystemRemoved )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemRemovedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_RemoteSystemRemoved )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcherVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcherVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Start(This) )
    ( (This)->lpVtbl->Stop(This) )
    ( (This)->lpVtbl->add_RemoteSystemAdded(This,handler,token) )
    ( (This)->lpVtbl->remove_RemoteSystemAdded(This,token) )
    ( (This)->lpVtbl->add_RemoteSystemUpdated(This,handler,token) )
    ( (This)->lpVtbl->remove_RemoteSystemUpdated(This,token) )
    ( (This)->lpVtbl->add_RemoteSystemRemoved(This,handler,token) )
    ( (This)->lpVtbl->remove_RemoteSystemRemoved(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemWatcher2[] = L"Windows.System.RemoteSystems.IRemoteSystemWatcher2";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_EnumerationCompleted )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemEnumerationCompletedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_EnumerationCompleted )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher2 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ErrorOccurred )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcher_Windows__CSystem__CRemoteSystems__CRemoteSystemWatcherErrorOccurredEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ErrorOccurred )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher2 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher2Vtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_EnumerationCompleted(This,handler,token) )
    ( (This)->lpVtbl->remove_EnumerationCompleted(This,token) )
    ( (This)->lpVtbl->add_ErrorOccurred(This,handler,token) )
    ( (This)->lpVtbl->remove_ErrorOccurred(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemWatcher3[] = L"Windows.System.RemoteSystems.IRemoteSystemWatcher3";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher3Vtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher3
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_User(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcher3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemWatcherErrorOccurredEventArgs[] = L"Windows.System.RemoteSystems.IRemoteSystemWatcherErrorOccurredEventArgs";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcherErrorOccurredEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcherErrorOccurredEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcherErrorOccurredEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcherErrorOccurredEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcherErrorOccurredEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcherErrorOccurredEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcherErrorOccurredEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Error )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcherErrorOccurredEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CRemoteSystems_CRemoteSystemWatcherError * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcherErrorOccurredEventArgsVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcherErrorOccurredEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcherErrorOccurredEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Error(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWatcherErrorOccurredEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemWebAccountFilter[] = L"Windows.System.RemoteSystems.IRemoteSystemWebAccountFilter";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWebAccountFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWebAccountFilter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWebAccountFilter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWebAccountFilter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWebAccountFilter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWebAccountFilter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWebAccountFilter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Account )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWebAccountFilter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWebAccountFilterVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWebAccountFilter
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWebAccountFilterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Account(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWebAccountFilter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteSystems_IRemoteSystemWebAccountFilterFactory[] = L"Windows.System.RemoteSystems.IRemoteSystemWebAccountFilterFactory";
typedef struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWebAccountFilterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWebAccountFilterFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWebAccountFilterFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWebAccountFilterFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWebAccountFilterFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWebAccountFilterFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWebAccountFilterFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWebAccountFilterFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * account,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWebAccountFilter * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWebAccountFilterFactoryVtbl;
interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWebAccountFilterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWebAccountFilterFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,account,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemWebAccountFilterFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_KnownRemoteSystemCapabilities[] = L"Windows.System.RemoteSystems.KnownRemoteSystemCapabilities";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystem[] = L"Windows.System.RemoteSystems.RemoteSystem";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemAddedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemAddedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemApp[] = L"Windows.System.RemoteSystems.RemoteSystemApp";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemAppRegistration[] = L"Windows.System.RemoteSystems.RemoteSystemAppRegistration";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemAuthorizationKindFilter[] = L"Windows.System.RemoteSystems.RemoteSystemAuthorizationKindFilter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemConnectionInfo[] = L"Windows.System.RemoteSystems.RemoteSystemConnectionInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemConnectionRequest[] = L"Windows.System.RemoteSystems.RemoteSystemConnectionRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemDiscoveryTypeFilter[] = L"Windows.System.RemoteSystems.RemoteSystemDiscoveryTypeFilter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemEnumerationCompletedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemEnumerationCompletedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemKindFilter[] = L"Windows.System.RemoteSystems.RemoteSystemKindFilter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemKinds[] = L"Windows.System.RemoteSystems.RemoteSystemKinds";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemRemovedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemRemovedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSession[] = L"Windows.System.RemoteSystems.RemoteSystemSession";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionAddedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemSessionAddedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionController[] = L"Windows.System.RemoteSystems.RemoteSystemSessionController";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionCreationResult[] = L"Windows.System.RemoteSystems.RemoteSystemSessionCreationResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionDisconnectedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemSessionDisconnectedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionInfo[] = L"Windows.System.RemoteSystems.RemoteSystemSessionInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionInvitation[] = L"Windows.System.RemoteSystems.RemoteSystemSessionInvitation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionInvitationListener[] = L"Windows.System.RemoteSystems.RemoteSystemSessionInvitationListener";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionInvitationReceivedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemSessionInvitationReceivedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionJoinRequest[] = L"Windows.System.RemoteSystems.RemoteSystemSessionJoinRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionJoinRequestedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemSessionJoinRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionJoinResult[] = L"Windows.System.RemoteSystems.RemoteSystemSessionJoinResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionMessageChannel[] = L"Windows.System.RemoteSystems.RemoteSystemSessionMessageChannel";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionOptions[] = L"Windows.System.RemoteSystems.RemoteSystemSessionOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionParticipant[] = L"Windows.System.RemoteSystems.RemoteSystemSessionParticipant";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionParticipantAddedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemSessionParticipantAddedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionParticipantRemovedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemSessionParticipantRemovedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionParticipantWatcher[] = L"Windows.System.RemoteSystems.RemoteSystemSessionParticipantWatcher";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionRemovedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemSessionRemovedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionUpdatedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemSessionUpdatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionValueSetReceivedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemSessionValueSetReceivedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemSessionWatcher[] = L"Windows.System.RemoteSystems.RemoteSystemSessionWatcher";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemStatusTypeFilter[] = L"Windows.System.RemoteSystems.RemoteSystemStatusTypeFilter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemUpdatedEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemUpdatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemWatcher[] = L"Windows.System.RemoteSystems.RemoteSystemWatcher";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemWatcherErrorOccurredEventArgs[] = L"Windows.System.RemoteSystems.RemoteSystemWatcherErrorOccurredEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteSystems_RemoteSystemWebAccountFilter[] = L"Windows.System.RemoteSystems.RemoteSystemWebAccountFilter";
       
       
#pragma clang diagnostic pop
