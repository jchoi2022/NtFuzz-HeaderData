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
#include "Windows.Security.Credentials.h"
#include "Windows.System.h"
#include "Windows.UI.h"
#include "Windows.UI.Shell.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity2 __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity2;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity3 __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity3;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel2 __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel2;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics2 __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics2;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics3 __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics3;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityFactory __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequest __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequest;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestManager __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestManager;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestManagerStatics __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestManagerStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestedEventArgs __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionHistoryItem __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionHistoryItem;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityStatics __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements;
typedef interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements2 __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements2;
typedef interface __FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivity __FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivity;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivity;
typedef struct __FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivityVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivityVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivity
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivityVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CUserActivities__CUserActivity __FIIterable_1_Windows__CApplicationModel__CUserActivities__CUserActivity;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CUserActivities__CUserActivity;
typedef struct __FIIterable_1_Windows__CApplicationModel__CUserActivities__CUserActivityVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivity **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CUserActivities__CUserActivityVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CUserActivities__CUserActivity
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CUserActivities__CUserActivityVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem __FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem;
typedef struct __FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionHistoryItem * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionHistoryItem * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItemVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItemVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem __FIIterable_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem;
typedef struct __FIIterable_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItemVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItemVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivity __FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivity;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivity;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivityVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This,
                       __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivityVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivity
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivityVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem __FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionHistoryItem * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This,
                       __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionHistoryItem * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionHistoryItem * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItemVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItemVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivity __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivity;
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivity;
typedef struct __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivityVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This, __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivity **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This, __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * *value);
    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivityVtbl;
interface __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivity
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivityVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem;
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem;
typedef struct __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This, __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionHistoryItem * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionHistoryItem * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionHistoryItem * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionHistoryItem * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionHistoryItem * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This, __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionHistoryItem * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionHistoryItem * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionHistoryItem * *value);
    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItemVtbl;
interface __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItemVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivityVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivityVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivityVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivityVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CUserActivities__CUserActivity **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivityVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivityVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem;
typedef interface __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This, __RPC__in_opt __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItemVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItemVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem;
typedef struct __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * This, __RPC__out __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItemVtbl;
interface __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItemVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CUserActivities__CUserActivityRequestManager_Windows__CApplicationModel__CUserActivities__CUserActivityRequestedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CUserActivities__CUserActivityRequestManager_Windows__CApplicationModel__CUserActivities__CUserActivityRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CUserActivities__CUserActivityRequestManager_Windows__CApplicationModel__CUserActivities__CUserActivityRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CUserActivities__CUserActivityRequestManager_Windows__CApplicationModel__CUserActivities__CUserActivityRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserActivities__CUserActivityRequestManager_Windows__CApplicationModel__CUserActivities__CUserActivityRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserActivities__CUserActivityRequestManager_Windows__CApplicationModel__CUserActivities__CUserActivityRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserActivities__CUserActivityRequestManager_Windows__CApplicationModel__CUserActivities__CUserActivityRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CUserActivities__CUserActivityRequestManager_Windows__CApplicationModel__CUserActivities__CUserActivityRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestManager * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CUserActivities__CUserActivityRequestManager_Windows__CApplicationModel__CUserActivities__CUserActivityRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CUserActivities__CUserActivityRequestManager_Windows__CApplicationModel__CUserActivities__CUserActivityRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CUserActivities__CUserActivityRequestManager_Windows__CApplicationModel__CUserActivities__CUserActivityRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
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
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount;
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;
typedef interface __x_ABI_CWindows_CUI_CShell_CIAdaptiveCard __x_ABI_CWindows_CUI_CShell_CIAdaptiveCard;
typedef enum __x_ABI_CWindows_CApplicationModel_CUserActivities_CUserActivityState __x_ABI_CWindows_CApplicationModel_CUserActivities_CUserActivityState;
enum __x_ABI_CWindows_CApplicationModel_CUserActivities_CUserActivityState
{
    UserActivityState_New = 0,
    UserActivityState_Published = 1,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivity[] = L"Windows.ApplicationModel.UserActivities.IUserActivity";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CUserActivities_CUserActivityState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ActivityId )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VisualElements )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContentUri )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ContentUri )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContentType )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ContentType )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FallbackUri )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FallbackUri )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ActivationUri )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ActivationUri )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContentInfo )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ContentInfo )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo * value
        );
    HRESULT ( STDMETHODCALLTYPE *SaveAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CreateSession )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->get_ActivityId(This,value) )
    ( (This)->lpVtbl->get_VisualElements(This,value) )
    ( (This)->lpVtbl->get_ContentUri(This,value) )
    ( (This)->lpVtbl->put_ContentUri(This,value) )
    ( (This)->lpVtbl->get_ContentType(This,value) )
    ( (This)->lpVtbl->put_ContentType(This,value) )
    ( (This)->lpVtbl->get_FallbackUri(This,value) )
    ( (This)->lpVtbl->put_FallbackUri(This,value) )
    ( (This)->lpVtbl->get_ActivationUri(This,value) )
    ( (This)->lpVtbl->put_ActivationUri(This,value) )
    ( (This)->lpVtbl->get_ContentInfo(This,value) )
    ( (This)->lpVtbl->put_ContentInfo(This,value) )
    ( (This)->lpVtbl->SaveAsync(This,operation) )
    ( (This)->lpVtbl->CreateSession(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivity2[] = L"Windows.ApplicationModel.UserActivities.IUserActivity2";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ToJson )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity2 * This,
                           __RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ToJson(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivity3[] = L"Windows.ApplicationModel.UserActivities.IUserActivity3";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsRoamable )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity3 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsRoamable )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity3 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsRoamable(This,value) )
    ( (This)->lpVtbl->put_IsRoamable(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivityAttribution[] = L"Windows.ApplicationModel.UserActivities.IUserActivityAttribution";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IconUri )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IconUri )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AlternateText )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AlternateText )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AddImageQuery )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AddImageQuery )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IconUri(This,value) )
    ( (This)->lpVtbl->put_IconUri(This,value) )
    ( (This)->lpVtbl->get_AlternateText(This,value) )
    ( (This)->lpVtbl->put_AlternateText(This,value) )
    ( (This)->lpVtbl->get_AddImageQuery(This,value) )
    ( (This)->lpVtbl->put_AddImageQuery(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivityAttributionFactory[] = L"Windows.ApplicationModel.UserActivities.IUserActivityAttributionFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithUri )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * iconUri,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWithUri(This,iconUri,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttributionFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivityChannel[] = L"Windows.ApplicationModel.UserActivities.IUserActivityChannel";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetOrCreateUserActivityAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel * This,
                  __RPC__in HSTRING activityId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CUserActivities__CUserActivity * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteActivityAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel * This,
                  __RPC__in HSTRING activityId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteAllActivitiesAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetOrCreateUserActivityAsync(This,activityId,operation) )
    ( (This)->lpVtbl->DeleteActivityAsync(This,activityId,operation) )
    ( (This)->lpVtbl->DeleteAllActivitiesAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivityChannel2[] = L"Windows.ApplicationModel.UserActivities.IUserActivityChannel2";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetRecentUserActivitiesAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel2 * This,
                  INT32 maxUniqueActivities,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetSessionHistoryItemsForUserActivityAsync )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel2 * This,
                  __RPC__in HSTRING activityId,
                  __x_ABI_CWindows_CFoundation_CDateTime startTime,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivitySessionHistoryItem * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetRecentUserActivitiesAsync(This,maxUniqueActivities,operation) )
    ( (This)->lpVtbl->GetSessionHistoryItemsForUserActivityAsync(This,activityId,startTime,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivityChannelStatics[] = L"Windows.ApplicationModel.UserActivities.IUserActivityChannelStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivityChannelStatics2[] = L"Windows.ApplicationModel.UserActivities.IUserActivityChannelStatics2";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *DisableAutoSessionCreation )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics2 * This
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetForWebAccount )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * account,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->DisableAutoSessionCreation(This) )
    ( (This)->lpVtbl->TryGetForWebAccount(This,account,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivityChannelStatics3[] = L"Windows.ApplicationModel.UserActivities.IUserActivityChannelStatics3";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForUser )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannel * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForUser(This,user,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityChannelStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivityContentInfo[] = L"Windows.ApplicationModel.UserActivities.IUserActivityContentInfo";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ToJson )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo * This,
                           __RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ToJson(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivityContentInfoStatics[] = L"Windows.ApplicationModel.UserActivities.IUserActivityContentInfoStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromJson )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics * This,
                  __RPC__in HSTRING value,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfo * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromJson(This,value,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityContentInfoStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivityFactory[] = L"Windows.ApplicationModel.UserActivities.IUserActivityFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithActivityId )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityFactory * This,
                  __RPC__in HSTRING activityId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWithActivityId(This,activityId,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivityRequest[] = L"Windows.ApplicationModel.UserActivities.IUserActivityRequest";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetUserActivity )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequest * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * activity
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetUserActivity(This,activity) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivityRequestManager[] = L"Windows.ApplicationModel.UserActivities.IUserActivityRequestManager";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_UserActivityRequested )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CUserActivities__CUserActivityRequestManager_Windows__CApplicationModel__CUserActivities__CUserActivityRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_UserActivityRequested )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestManager * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestManagerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestManager
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_UserActivityRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_UserActivityRequested(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivityRequestManagerStatics[] = L"Windows.ApplicationModel.UserActivities.IUserActivityRequestManagerStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestManager * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestManagerStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentView(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivityRequestedEventArgs[] = L"Windows.ApplicationModel.UserActivities.IUserActivityRequestedEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Request(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivitySession[] = L"Windows.ApplicationModel.UserActivities.IUserActivitySession";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ActivityId )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ActivityId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySession;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivitySessionHistoryItem[] = L"Windows.ApplicationModel.UserActivities.IUserActivitySessionHistoryItem";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionHistoryItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionHistoryItem * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionHistoryItem * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionHistoryItem * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionHistoryItem * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionHistoryItem * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionHistoryItem * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UserActivity )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionHistoryItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StartTime )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionHistoryItem * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EndTime )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionHistoryItem * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionHistoryItemVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionHistoryItem
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionHistoryItemVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UserActivity(This,value) )
    ( (This)->lpVtbl->get_StartTime(This,value) )
    ( (This)->lpVtbl->get_EndTime(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivitySessionHistoryItem;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivityStatics[] = L"Windows.ApplicationModel.UserActivities.IUserActivityStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryParseFromJson )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityStatics * This,
                  __RPC__in HSTRING json,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivity * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryParseFromJsonArray )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityStatics * This,
                  __RPC__in HSTRING json,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CUserActivities__CUserActivity * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ToJsonArray )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityStatics * This,
                  __RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CUserActivities__CUserActivity * activities,
                           __RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryParseFromJson(This,json,result) )
    ( (This)->lpVtbl->TryParseFromJsonArray(This,json,result) )
    ( (This)->lpVtbl->ToJsonArray(This,activities,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivityVisualElements[] = L"Windows.ApplicationModel.UserActivities.IUserActivityVisualElements";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElementsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DisplayText )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DisplayText )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BackgroundColor )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Attribution )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Attribution )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityAttribution * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Content )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CShell_CIAdaptiveCard * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CShell_CIAdaptiveCard * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElementsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElementsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DisplayText(This,value) )
    ( (This)->lpVtbl->put_DisplayText(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->put_Description(This,value) )
    ( (This)->lpVtbl->get_BackgroundColor(This,value) )
    ( (This)->lpVtbl->put_BackgroundColor(This,value) )
    ( (This)->lpVtbl->get_Attribution(This,value) )
    ( (This)->lpVtbl->put_Attribution(This,value) )
    ( (This)->lpVtbl->put_Content(This,value) )
    ( (This)->lpVtbl->get_Content(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_UserActivities_IUserActivityVisualElements2[] = L"Windows.ApplicationModel.UserActivities.IUserActivityVisualElements2";
typedef struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AttributionDisplayText )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AttributionDisplayText )(
        __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements2 * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AttributionDisplayText(This,value) )
    ( (This)->lpVtbl->put_AttributionDisplayText(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CUserActivities_CIUserActivityVisualElements2;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserActivities_UserActivity[] = L"Windows.ApplicationModel.UserActivities.UserActivity";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserActivities_UserActivityAttribution[] = L"Windows.ApplicationModel.UserActivities.UserActivityAttribution";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserActivities_UserActivityChannel[] = L"Windows.ApplicationModel.UserActivities.UserActivityChannel";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserActivities_UserActivityContentInfo[] = L"Windows.ApplicationModel.UserActivities.UserActivityContentInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserActivities_UserActivityRequest[] = L"Windows.ApplicationModel.UserActivities.UserActivityRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserActivities_UserActivityRequestManager[] = L"Windows.ApplicationModel.UserActivities.UserActivityRequestManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserActivities_UserActivityRequestedEventArgs[] = L"Windows.ApplicationModel.UserActivities.UserActivityRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserActivities_UserActivitySession[] = L"Windows.ApplicationModel.UserActivities.UserActivitySession";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserActivities_UserActivitySessionHistoryItem[] = L"Windows.ApplicationModel.UserActivities.UserActivitySessionHistoryItem";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_UserActivities_UserActivityVisualElements[] = L"Windows.ApplicationModel.UserActivities.UserActivityVisualElements";
       
       
#pragma clang diagnostic pop
