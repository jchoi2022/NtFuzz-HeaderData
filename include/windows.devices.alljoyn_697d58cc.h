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
#include "Windows.Devices.Enumeration.h"
#include "Windows.Globalization.h"
#include "Windows.Networking.Sockets.h"
#include "Windows.Security.Credentials.h"
#include "Windows.Security.Cryptography.Certificates.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2 __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory;
enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism;
typedef interface __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism;
typedef struct __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanismVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This, __RPC__out enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanismVtbl;
interface __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanismVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism;
typedef struct __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanismVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanismVtbl;
interface __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanismVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism;
typedef struct __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanismVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
                       enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanismVtbl;
interface __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanismVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism;
EXTERN_C const IID IID___FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism;
typedef struct __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanismVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This, __RPC__deref_out_opt enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
                   unsigned int index,
                            __RPC__deref_out_opt enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
                   __RPC__in enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
                   unsigned int index,
                   __RPC__in enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
                   unsigned int index,
                   __RPC__in enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This, __RPC__in enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism *value);
    END_INTERFACE
} __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanismVtbl;
interface __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism
{
    CONST_VTBL struct __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanismVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataViewVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataViewVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * This, __RPC__out __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataViewVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataViewVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfoVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo * This, __RPC__out __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfoVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfoVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSessionVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSessionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession * This, __RPC__out __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSessionVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSessionVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgs __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgs __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgs __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgs __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgs __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgs __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgs __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgs __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgs __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgsVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CGlobalization_CILanguage __x_ABI_CWindows_CGlobalization_CILanguage;
typedef interface __FIIterator_1_Windows__CGlobalization__CLanguage __FIIterator_1_Windows__CGlobalization__CLanguage;
EXTERN_C const IID IID___FIIterator_1_Windows__CGlobalization__CLanguage;
typedef struct __FIIterator_1_Windows__CGlobalization__CLanguageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This, __RPC__out __x_ABI_CWindows_CGlobalization_CILanguage * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGlobalization_CILanguage * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGlobalization__CLanguageVtbl;
interface __FIIterator_1_Windows__CGlobalization__CLanguage
{
    CONST_VTBL struct __FIIterator_1_Windows__CGlobalization__CLanguageVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGlobalization__CLanguage __FIIterable_1_Windows__CGlobalization__CLanguage;
EXTERN_C const IID IID___FIIterable_1_Windows__CGlobalization__CLanguage;
typedef struct __FIIterable_1_Windows__CGlobalization__CLanguageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGlobalization__CLanguage **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGlobalization__CLanguageVtbl;
interface __FIIterable_1_Windows__CGlobalization__CLanguage
{
    CONST_VTBL struct __FIIterable_1_Windows__CGlobalization__CLanguageVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CGlobalization__CLanguage __FIVectorView_1_Windows__CGlobalization__CLanguage;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGlobalization__CLanguage;
typedef struct __FIVectorView_1_Windows__CGlobalization__CLanguageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGlobalization_CILanguage * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
                       __x_ABI_CWindows_CGlobalization_CILanguage * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGlobalization_CILanguage * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGlobalization__CLanguageVtbl;
interface __FIVectorView_1_Windows__CGlobalization__CLanguage
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGlobalization__CLanguageVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult;
typedef interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;
EXTERN_C const IID IID___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;
typedef struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, __RPC__out enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl;
interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult
{
    CONST_VTBL struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;
EXTERN_C const IID IID___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;
typedef struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, __RPC__deref_out_opt __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult **first);
    END_INTERFACE
} __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl;
interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult
{
    CONST_VTBL struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;
EXTERN_C const IID IID___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;
typedef struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                       enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl;
interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher;
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef enum __x_ABI_CWindows_CNetworking_CSockets_CSocketSslErrorSeverity __x_ABI_CWindows_CNetworking_CSockets_CSocketSslErrorSeverity;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential;
typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult;
typedef enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism;
typedef enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynBusAttachmentState __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynBusAttachmentState;
typedef enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynSessionLostReason __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynSessionLostReason;
typedef enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynTrafficType __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynTrafficType;
enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism
{
    AllJoynAuthenticationMechanism_None = 0,
    AllJoynAuthenticationMechanism_SrpAnonymous
    DEPRECATEDENUMERATOR("SrpAnonymous is deprecated and might not work on all platforms. For more info, see MSDN.")
     = 1,
    AllJoynAuthenticationMechanism_SrpLogon
    DEPRECATEDENUMERATOR("SrpLogon is deprecated and might not work on all platforms. For more info, see MSDN.")
     = 2,
    AllJoynAuthenticationMechanism_EcdheNull = 3,
    AllJoynAuthenticationMechanism_EcdhePsk
    DEPRECATEDENUMERATOR("EcdhePsk is deprecated and might not work on all platforms. For more info, see MSDN.")
     = 4,
    AllJoynAuthenticationMechanism_EcdheEcdsa = 5,
    AllJoynAuthenticationMechanism_EcdheSpeke = 6,
};
enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynBusAttachmentState
{
    AllJoynBusAttachmentState_Disconnected = 0,
    AllJoynBusAttachmentState_Connecting = 1,
    AllJoynBusAttachmentState_Connected = 2,
    AllJoynBusAttachmentState_Disconnecting = 3,
};
enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynSessionLostReason
{
    AllJoynSessionLostReason_None = 0,
    AllJoynSessionLostReason_ProducerLeftSession = 1,
    AllJoynSessionLostReason_ProducerClosedAbruptly = 2,
    AllJoynSessionLostReason_RemovedByProducer = 3,
    AllJoynSessionLostReason_LinkTimeout = 4,
    AllJoynSessionLostReason_Other = 5,
};
enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynTrafficType
{
    AllJoynTrafficType_Unknown = 0,
    AllJoynTrafficType_Messages = 1,
    AllJoynTrafficType_RawUnreliable = 2,
    AllJoynTrafficType_RawReliable = 4,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynAboutData[] = L"Windows.Devices.AllJoyn.IAllJoynAboutData";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsEnabled )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DefaultAppName )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DefaultAppName )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppNames )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
                           __RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DateOfManufacture )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DateOfManufacture )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DefaultDescription )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DefaultDescription )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Descriptions )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
                           __RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DefaultManufacturer )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DefaultManufacturer )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Manufacturers )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
                           __RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ModelNumber )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ModelNumber )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SoftwareVersion )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SoftwareVersion )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportUrl )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SupportUrl )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppId )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AppId )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
                  GUID value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsEnabled(This,value) )
    ( (This)->lpVtbl->put_IsEnabled(This,value) )
    ( (This)->lpVtbl->get_DefaultAppName(This,value) )
    ( (This)->lpVtbl->put_DefaultAppName(This,value) )
    ( (This)->lpVtbl->get_AppNames(This,value) )
    ( (This)->lpVtbl->get_DateOfManufacture(This,value) )
    ( (This)->lpVtbl->put_DateOfManufacture(This,value) )
    ( (This)->lpVtbl->get_DefaultDescription(This,value) )
    ( (This)->lpVtbl->put_DefaultDescription(This,value) )
    ( (This)->lpVtbl->get_Descriptions(This,value) )
    ( (This)->lpVtbl->get_DefaultManufacturer(This,value) )
    ( (This)->lpVtbl->put_DefaultManufacturer(This,value) )
    ( (This)->lpVtbl->get_Manufacturers(This,value) )
    ( (This)->lpVtbl->get_ModelNumber(This,value) )
    ( (This)->lpVtbl->put_ModelNumber(This,value) )
    ( (This)->lpVtbl->get_SoftwareVersion(This,value) )
    ( (This)->lpVtbl->put_SoftwareVersion(This,value) )
    ( (This)->lpVtbl->get_SupportUrl(This,value) )
    ( (This)->lpVtbl->put_SupportUrl(This,value) )
    ( (This)->lpVtbl->get_AppId(This,value) )
    ( (This)->lpVtbl->put_AppId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynAboutDataView[] = L"Windows.Devices.AllJoyn.IAllJoynAboutDataView";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AJSoftwareVersion )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppId )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DateOfManufacture )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DefaultLanguage )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CILanguage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HardwareVersion )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ModelNumber )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SoftwareVersion )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedLanguages )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CGlobalization__CLanguage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportUrl )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppName )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceName )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Manufacturer )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
    ( (This)->lpVtbl->get_AJSoftwareVersion(This,value) )
    ( (This)->lpVtbl->get_AppId(This,value) )
    ( (This)->lpVtbl->get_DateOfManufacture(This,value) )
    ( (This)->lpVtbl->get_DefaultLanguage(This,value) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_HardwareVersion(This,value) )
    ( (This)->lpVtbl->get_ModelNumber(This,value) )
    ( (This)->lpVtbl->get_SoftwareVersion(This,value) )
    ( (This)->lpVtbl->get_SupportedLanguages(This,value) )
    ( (This)->lpVtbl->get_SupportUrl(This,value) )
    ( (This)->lpVtbl->get_AppName(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->get_DeviceName(This,value) )
    ( (This)->lpVtbl->get_Manufacturer(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynAboutDataViewStatics[] = L"Windows.Devices.AllJoyn.IAllJoynAboutDataViewStatics";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetDataBySessionPortAsync )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics * This,
                  __RPC__in HSTRING uniqueName,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * busAttachment,
                  UINT16 sessionPort,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDataBySessionPortWithLanguageAsync )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics * This,
                  __RPC__in HSTRING uniqueName,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * busAttachment,
                  UINT16 sessionPort,
                  __RPC__in_opt __x_ABI_CWindows_CGlobalization_CILanguage * language,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDataBySessionPortAsync(This,uniqueName,busAttachment,sessionPort,operation) )
    ( (This)->lpVtbl->GetDataBySessionPortWithLanguageAsync(This,uniqueName,busAttachment,sessionPort,language,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynAcceptSessionJoiner[] = L"Windows.Devices.AllJoyn.IAllJoynAcceptSessionJoiner";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Accept )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Accept(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynAcceptSessionJoinerEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynAcceptSessionJoinerEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UniqueName )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SessionPort )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TrafficType )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynTrafficType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SamePhysicalNode )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SameNetwork )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *Accept )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UniqueName(This,value) )
    ( (This)->lpVtbl->get_SessionPort(This,value) )
    ( (This)->lpVtbl->get_TrafficType(This,value) )
    ( (This)->lpVtbl->get_SamePhysicalNode(This,value) )
    ( (This)->lpVtbl->get_SameNetwork(This,value) )
    ( (This)->lpVtbl->Accept(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynAcceptSessionJoinerEventArgsFactory[] = L"Windows.Devices.AllJoyn.IAllJoynAcceptSessionJoinerEventArgsFactory";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory * This,
                  __RPC__in HSTRING uniqueName,
                  UINT16 sessionPort,
                  __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynTrafficType trafficType,
                  BYTE proximity,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner * acceptSessionJoiner,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,uniqueName,sessionPort,trafficType,proximity,acceptSessionJoiner,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynAuthenticationCompleteEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynAuthenticationCompleteEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AuthenticationMechanism )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PeerUniqueName )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Succeeded )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AuthenticationMechanism(This,value) )
    ( (This)->lpVtbl->get_PeerUniqueName(This,value) )
    ( (This)->lpVtbl->get_Succeeded(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynBusAttachment[] = L"Windows.Devices.AllJoyn.IAllJoynBusAttachment";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AboutData )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ConnectionSpecification )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynBusAttachmentState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UniqueName )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *PingAsync )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
                  __RPC__in HSTRING uniqueName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_int * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *Connect )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This
        );
    HRESULT ( STDMETHODCALLTYPE *Disconnect )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This
        );
                    HRESULT ( STDMETHODCALLTYPE *add_StateChanged )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StateChanged )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AuthenticationMechanisms )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CredentialsRequested )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CredentialsRequested )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CredentialsVerificationRequested )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CredentialsVerificationRequested )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AuthenticationComplete )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AuthenticationComplete )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AboutData(This,value) )
    ( (This)->lpVtbl->get_ConnectionSpecification(This,value) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->get_UniqueName(This,value) )
    ( (This)->lpVtbl->PingAsync(This,uniqueName,operation) )
    ( (This)->lpVtbl->Connect(This) )
    ( (This)->lpVtbl->Disconnect(This) )
    ( (This)->lpVtbl->add_StateChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_StateChanged(This,token) )
    ( (This)->lpVtbl->get_AuthenticationMechanisms(This,value) )
    ( (This)->lpVtbl->add_CredentialsRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_CredentialsRequested(This,token) )
    ( (This)->lpVtbl->add_CredentialsVerificationRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_CredentialsVerificationRequested(This,token) )
    ( (This)->lpVtbl->add_AuthenticationComplete(This,handler,token) )
    ( (This)->lpVtbl->remove_AuthenticationComplete(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynBusAttachment2[] = L"Windows.Devices.AllJoyn.IAllJoynBusAttachment2";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetAboutDataAsync )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo * serviceInfo,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetAboutDataWithLanguageAsync )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo * serviceInfo,
                  __RPC__in_opt __x_ABI_CWindows_CGlobalization_CILanguage * language,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AcceptSessionJoinerRequested )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AcceptSessionJoinerRequested )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SessionJoined )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SessionJoined )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2Vtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAboutDataAsync(This,serviceInfo,operation) )
    ( (This)->lpVtbl->GetAboutDataWithLanguageAsync(This,serviceInfo,language,operation) )
    ( (This)->lpVtbl->add_AcceptSessionJoinerRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_AcceptSessionJoinerRequested(This,token) )
    ( (This)->lpVtbl->add_SessionJoined(This,handler,token) )
    ( (This)->lpVtbl->remove_SessionJoined(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynBusAttachmentFactory[] = L"Windows.Devices.AllJoyn.IAllJoynBusAttachmentFactory";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory * This,
                  __RPC__in HSTRING connectionSpecification,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,connectionSpecification,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynBusAttachmentStateChangedEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynBusAttachmentStateChangedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynBusAttachmentState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynBusAttachmentStatics[] = L"Windows.Devices.AllJoyn.IAllJoynBusAttachmentStatics";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * * defaultBusAttachment
        );
    HRESULT ( STDMETHODCALLTYPE *GetWatcher )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * requiredInterfaces,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * * deviceWatcher
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,defaultBusAttachment) )
    ( (This)->lpVtbl->GetWatcher(This,requiredInterfaces,deviceWatcher) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynBusObject[] = L"Windows.Devices.AllJoyn.IAllJoynBusObject";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject * This
        );
    HRESULT ( STDMETHODCALLTYPE *AddProducer )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer * producer
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BusAttachment )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Session )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Stopped )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Stopped )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Start(This) )
    ( (This)->lpVtbl->Stop(This) )
    ( (This)->lpVtbl->AddProducer(This,producer) )
    ( (This)->lpVtbl->get_BusAttachment(This,value) )
    ( (This)->lpVtbl->get_Session(This,value) )
    ( (This)->lpVtbl->add_Stopped(This,handler,token) )
    ( (This)->lpVtbl->remove_Stopped(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynBusObjectFactory[] = L"Windows.Devices.AllJoyn.IAllJoynBusObjectFactory";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory * This,
                  __RPC__in HSTRING objectPath,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithBusAttachment )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory * This,
                  __RPC__in HSTRING objectPath,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * busAttachment,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,objectPath,result) )
    ( (This)->lpVtbl->CreateWithBusAttachment(This,objectPath,busAttachment,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynBusObjectStoppedEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynBusObjectStoppedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynBusObjectStoppedEventArgsFactory[] = L"Windows.Devices.AllJoyn.IAllJoynBusObjectStoppedEventArgsFactory";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory * This,
                  INT32 status,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,status,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynCredentials[] = L"Windows.Devices.AllJoyn.IAllJoynCredentials";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AuthenticationMechanism )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Certificate )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Certificate )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PasswordCredential )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PasswordCredential )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Timeout )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Timeout )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AuthenticationMechanism(This,value) )
    ( (This)->lpVtbl->get_Certificate(This,value) )
    ( (This)->lpVtbl->put_Certificate(This,value) )
    ( (This)->lpVtbl->get_PasswordCredential(This,value) )
    ( (This)->lpVtbl->put_PasswordCredential(This,value) )
    ( (This)->lpVtbl->get_Timeout(This,value) )
    ( (This)->lpVtbl->put_Timeout(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynCredentialsRequestedEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynCredentialsRequestedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AttemptCount )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Credentials )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PeerUniqueName )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RequestedUserName )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AttemptCount(This,value) )
    ( (This)->lpVtbl->get_Credentials(This,value) )
    ( (This)->lpVtbl->get_PeerUniqueName(This,value) )
    ( (This)->lpVtbl->get_RequestedUserName(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynCredentialsVerificationRequestedEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynCredentialsVerificationRequestedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AuthenticationMechanism )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PeerUniqueName )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PeerCertificate )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PeerCertificateErrorSeverity )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketSslErrorSeverity * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PeerCertificateErrors )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PeerIntermediateCertificates )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Accept )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs * This
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AuthenticationMechanism(This,value) )
    ( (This)->lpVtbl->get_PeerUniqueName(This,value) )
    ( (This)->lpVtbl->get_PeerCertificate(This,value) )
    ( (This)->lpVtbl->get_PeerCertificateErrorSeverity(This,value) )
    ( (This)->lpVtbl->get_PeerCertificateErrors(This,value) )
    ( (This)->lpVtbl->get_PeerIntermediateCertificates(This,value) )
    ( (This)->lpVtbl->Accept(This) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynMessageInfo[] = L"Windows.Devices.AllJoyn.IAllJoynMessageInfo";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SenderUniqueName )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SenderUniqueName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynMessageInfoFactory[] = L"Windows.Devices.AllJoyn.IAllJoynMessageInfoFactory";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory * This,
                  __RPC__in HSTRING senderUniqueName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,senderUniqueName,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynProducer[] = L"Windows.Devices.AllJoyn.IAllJoynProducer";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetBusObject )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject * busObject
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetBusObject(This,busObject) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynProducerStoppedEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynProducerStoppedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynProducerStoppedEventArgsFactory[] = L"Windows.Devices.AllJoyn.IAllJoynProducerStoppedEventArgsFactory";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory * This,
                  INT32 status,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,status,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynServiceInfo[] = L"Windows.Devices.AllJoyn.IAllJoynServiceInfo";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UniqueName )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ObjectPath )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SessionPort )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo * This,
                           __RPC__out UINT16 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UniqueName(This,value) )
    ( (This)->lpVtbl->get_ObjectPath(This,value) )
    ( (This)->lpVtbl->get_SessionPort(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynServiceInfoFactory[] = L"Windows.Devices.AllJoyn.IAllJoynServiceInfoFactory";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory * This,
                  __RPC__in HSTRING uniqueName,
                  __RPC__in HSTRING objectPath,
                  UINT16 sessionPort,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,uniqueName,objectPath,sessionPort,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynServiceInfoRemovedEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynServiceInfoRemovedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UniqueName )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UniqueName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynServiceInfoRemovedEventArgsFactory[] = L"Windows.Devices.AllJoyn.IAllJoynServiceInfoRemovedEventArgsFactory";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory * This,
                  __RPC__in HSTRING uniqueName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,uniqueName,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynServiceInfoStatics[] = L"Windows.Devices.AllJoyn.IAllJoynServiceInfoStatics";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynSession[] = L"Windows.Devices.AllJoyn.IAllJoynSession";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * This,
                           __RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveMemberAsync )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * This,
                  __RPC__in HSTRING uniqueName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_int * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *add_MemberAdded )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MemberAdded )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_MemberRemoved )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MemberRemoved )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Lost )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Lost )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->RemoveMemberAsync(This,uniqueName,operation) )
    ( (This)->lpVtbl->add_MemberAdded(This,handler,token) )
    ( (This)->lpVtbl->remove_MemberAdded(This,token) )
    ( (This)->lpVtbl->add_MemberRemoved(This,handler,token) )
    ( (This)->lpVtbl->remove_MemberRemoved(This,token) )
    ( (This)->lpVtbl->add_Lost(This,handler,token) )
    ( (This)->lpVtbl->remove_Lost(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynSessionJoinedEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynSessionJoinedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Session )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Session(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynSessionJoinedEventArgsFactory[] = L"Windows.Devices.AllJoyn.IAllJoynSessionJoinedEventArgsFactory";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * session,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,session,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynSessionLostEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynSessionLostEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynSessionLostReason * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Reason(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynSessionLostEventArgsFactory[] = L"Windows.Devices.AllJoyn.IAllJoynSessionLostEventArgsFactory";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory * This,
                  __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynSessionLostReason reason,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,reason,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynSessionMemberAddedEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynSessionMemberAddedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UniqueName )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UniqueName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynSessionMemberAddedEventArgsFactory[] = L"Windows.Devices.AllJoyn.IAllJoynSessionMemberAddedEventArgsFactory";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory * This,
                  __RPC__in HSTRING uniqueName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,uniqueName,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynSessionMemberRemovedEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynSessionMemberRemovedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UniqueName )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UniqueName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynSessionMemberRemovedEventArgsFactory[] = L"Windows.Devices.AllJoyn.IAllJoynSessionMemberRemovedEventArgsFactory";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory * This,
                  __RPC__in HSTRING uniqueName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,uniqueName,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynSessionStatics[] = L"Windows.Devices.AllJoyn.IAllJoynSessionStatics";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetFromServiceInfoAsync )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo * serviceInfo,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetFromServiceInfoAndBusAttachmentAsync )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo * serviceInfo,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * busAttachment,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetFromServiceInfoAsync(This,serviceInfo,operation) )
    ( (This)->lpVtbl->GetFromServiceInfoAndBusAttachmentAsync(This,serviceInfo,busAttachment,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynStatusStatics[] = L"Windows.Devices.AllJoyn.IAllJoynStatusStatics";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Ok )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Fail )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OperationTimedOut )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OtherEndClosed )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ConnectionRefused )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AuthenticationFailed )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AuthenticationRejectedByUser )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SslConnectFailed )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SslIdentityVerificationFailed )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InsufficientSecurity )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InvalidArgument1 )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InvalidArgument2 )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InvalidArgument3 )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InvalidArgument4 )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InvalidArgument5 )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InvalidArgument6 )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InvalidArgument7 )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InvalidArgument8 )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Ok(This,value) )
    ( (This)->lpVtbl->get_Fail(This,value) )
    ( (This)->lpVtbl->get_OperationTimedOut(This,value) )
    ( (This)->lpVtbl->get_OtherEndClosed(This,value) )
    ( (This)->lpVtbl->get_ConnectionRefused(This,value) )
    ( (This)->lpVtbl->get_AuthenticationFailed(This,value) )
    ( (This)->lpVtbl->get_AuthenticationRejectedByUser(This,value) )
    ( (This)->lpVtbl->get_SslConnectFailed(This,value) )
    ( (This)->lpVtbl->get_SslIdentityVerificationFailed(This,value) )
    ( (This)->lpVtbl->get_InsufficientSecurity(This,value) )
    ( (This)->lpVtbl->get_InvalidArgument1(This,value) )
    ( (This)->lpVtbl->get_InvalidArgument2(This,value) )
    ( (This)->lpVtbl->get_InvalidArgument3(This,value) )
    ( (This)->lpVtbl->get_InvalidArgument4(This,value) )
    ( (This)->lpVtbl->get_InvalidArgument5(This,value) )
    ( (This)->lpVtbl->get_InvalidArgument6(This,value) )
    ( (This)->lpVtbl->get_InvalidArgument7(This,value) )
    ( (This)->lpVtbl->get_InvalidArgument8(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynWatcherStoppedEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynWatcherStoppedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynWatcherStoppedEventArgsFactory[] = L"Windows.Devices.AllJoyn.IAllJoynWatcherStoppedEventArgsFactory";
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory * This,
                  INT32 status,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,status,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynAboutData[] = L"Windows.Devices.AllJoyn.AllJoynAboutData";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynAboutDataView[] = L"Windows.Devices.AllJoyn.AllJoynAboutDataView";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynAcceptSessionJoinerEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynAcceptSessionJoinerEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynAuthenticationCompleteEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynAuthenticationCompleteEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynBusAttachment[] = L"Windows.Devices.AllJoyn.AllJoynBusAttachment";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynBusAttachmentStateChangedEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynBusAttachmentStateChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynBusObject[] = L"Windows.Devices.AllJoyn.AllJoynBusObject";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynBusObjectStoppedEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynBusObjectStoppedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynCredentials[] = L"Windows.Devices.AllJoyn.AllJoynCredentials";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynCredentialsRequestedEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynCredentialsRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynCredentialsVerificationRequestedEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynCredentialsVerificationRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynMessageInfo[] = L"Windows.Devices.AllJoyn.AllJoynMessageInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynProducerStoppedEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynProducerStoppedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynServiceInfo[] = L"Windows.Devices.AllJoyn.AllJoynServiceInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynServiceInfoRemovedEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynServiceInfoRemovedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynSession[] = L"Windows.Devices.AllJoyn.AllJoynSession";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynSessionJoinedEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynSessionJoinedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynSessionLostEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynSessionLostEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynSessionMemberAddedEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynSessionMemberAddedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynSessionMemberRemovedEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynSessionMemberRemovedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynStatus[] = L"Windows.Devices.AllJoyn.AllJoynStatus";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynWatcherStoppedEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynWatcherStoppedEventArgs";
       
       
#pragma clang diagnostic pop
