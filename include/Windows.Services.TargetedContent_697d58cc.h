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
typedef interface __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentAction __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentAction;
typedef interface __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentAvailabilityChangedEventArgs __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentAvailabilityChangedEventArgs;
typedef interface __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentChangedEventArgs __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentChangedEventArgs;
typedef interface __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentCollection __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentCollection;
typedef interface __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentContainer __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentContainer;
typedef interface __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentContainerStatics __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentContainerStatics;
typedef interface __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentImage __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentImage;
typedef interface __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItem __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItem;
typedef interface __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItemState __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItemState;
typedef interface __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentObject __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentObject;
typedef interface __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentStateChangedEventArgs __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentStateChangedEventArgs;
typedef interface __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscription __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscription;
typedef interface __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionOptions __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionOptions;
typedef interface __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionStatics __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionStatics;
typedef interface __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentValue __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentValue;
typedef interface __FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue __FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue;
typedef struct __FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This, __RPC__deref_out_opt __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentValue * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValueVtbl;
interface __FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValueVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This, __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValueVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValueVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValueVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValueVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentAction __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentAction;
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentAction;
typedef struct __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentActionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentAction * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentAction * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentAction * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentAction * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentAction * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentAction * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentAction * This, __RPC__out __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentAction * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentAction * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentAction * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentAction * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentAction * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentActionVtbl;
interface __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentAction
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentActionVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentAction __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentAction;
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentAction;
typedef struct __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentActionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentAction * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentAction * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentAction * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentAction * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentAction * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentAction * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentAction * This, __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentAction **first);
    END_INTERFACE
} __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentActionVtbl;
interface __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentAction
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentActionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentCollection __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentCollection;
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentCollection;
typedef struct __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentCollection * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentCollection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentCollection * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentCollection * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentCollection * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentCollection * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentCollection * This, __RPC__out __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentCollection * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentCollection * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentCollection * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentCollection * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentCollection * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentCollectionVtbl;
interface __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentCollection
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentCollectionVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentCollection __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentCollection;
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentCollection;
typedef struct __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentCollection * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentCollection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentCollection * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentCollection * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentCollection * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentCollection * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentCollection * This, __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentCollection **first);
    END_INTERFACE
} __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentCollectionVtbl;
interface __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentCollection
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentCollectionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;
typedef interface __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentFile __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentFile;
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentFile;
typedef struct __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentFileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentFile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentFile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentFile * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentFile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentFile * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentFile * This, __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentFile * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentFile * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentFile * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentFileVtbl;
interface __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentFile
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentFileVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentFile __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentFile;
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentFile;
typedef struct __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentFileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentFile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentFile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentFile * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentFile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentFile * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentFile * This, __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentFile **first);
    END_INTERFACE
} __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentFileVtbl;
interface __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentFile
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentFileVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentImage __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentImage;
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentImage;
typedef struct __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentImageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentImage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentImage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentImage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentImage * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentImage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentImage * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentImage * This, __RPC__out __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentImage * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentImage * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentImage * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentImage * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentImage * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentImageVtbl;
interface __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentImage
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentImageVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentImage __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentImage;
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentImage;
typedef struct __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentImageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentImage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentImage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentImage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentImage * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentImage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentImage * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentImage * This, __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentImage **first);
    END_INTERFACE
} __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentImageVtbl;
interface __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentImage
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentImageVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentItem __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentItem;
EXTERN_C const IID IID___FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentItem;
typedef struct __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentItem * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentItem * This, __RPC__out __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItem * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentItem * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItem * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentItemVtbl;
interface __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentItem
{
    CONST_VTBL struct __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentItemVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentItem __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentItem;
EXTERN_C const IID IID___FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentItem;
typedef struct __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentItem * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentItem * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentItem * This, __RPC__deref_out_opt __FIIterator_1_Windows__CServices__CTargetedContent__CTargetedContentItem **first);
    END_INTERFACE
} __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentItemVtbl;
interface __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentItem
{
    CONST_VTBL struct __FIIterable_1_Windows__CServices__CTargetedContent__CTargetedContentItemVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue __FIMapView_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue;
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue;
typedef struct __FIMapView_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentValue * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValueVtbl;
interface __FIMapView_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValueVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentAction __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentAction;
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentAction;
typedef struct __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentActionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentAction * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentAction * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentAction * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentAction * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentAction * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentAction * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentAction * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentAction * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentAction * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentAction * This,
                       __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentAction * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentAction * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentAction * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentActionVtbl;
interface __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentAction
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentActionVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentCollection __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentCollection;
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentCollection;
typedef struct __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentCollection * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentCollection * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentCollection * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentCollection * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentCollection * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentCollection * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentCollection * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentCollection * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentCollection * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentCollection * This,
                       __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentCollection * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentCollection * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentCollection * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentCollectionVtbl;
interface __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentCollection
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentCollectionVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentFile __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentFile;
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentFile;
typedef struct __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentFileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentFile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentFile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentFile * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentFile * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentFile * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentFile * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentFile * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentFile * This,
                       __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentFile * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentFileVtbl;
interface __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentFile
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentFileVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentImage __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentImage;
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentImage;
typedef struct __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentImageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentImage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentImage * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentImage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentImage * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentImage * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentImage * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentImage * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentImage * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentImage * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentImage * This,
                       __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentImage * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentImage * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentImage * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentImageVtbl;
interface __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentImage
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentImageVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentItem __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentItem;
EXTERN_C const IID IID___FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentItem;
typedef struct __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentItem * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentItem * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentItem * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentItem * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItem * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentItem * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentItem * This,
                       __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItem * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentItem * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItem * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentItemVtbl;
interface __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentItem
{
    CONST_VTBL struct __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentItemVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CTargetedContent__CTargetedContentContainer __FIAsyncOperationCompletedHandler_1_Windows__CServices__CTargetedContent__CTargetedContentContainer;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CServices__CTargetedContent__CTargetedContentContainer;
typedef interface __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentContainer __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentContainer;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CTargetedContent__CTargetedContentContainerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CTargetedContent__CTargetedContentContainer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CTargetedContent__CTargetedContentContainer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CTargetedContent__CTargetedContentContainer * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CTargetedContent__CTargetedContentContainer * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentContainer *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CServices__CTargetedContent__CTargetedContentContainerVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CTargetedContent__CTargetedContentContainer
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CTargetedContent__CTargetedContentContainerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentContainer __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentContainer;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentContainer;
typedef struct __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentContainerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentContainer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentContainer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentContainer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentContainer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentContainer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentContainer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentContainer * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CTargetedContent__CTargetedContentContainer *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentContainer * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CTargetedContent__CTargetedContentContainer **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentContainer * This, __RPC__out __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentContainer * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentContainerVtbl;
interface __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentContainer
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentContainerVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CTargetedContent__CTargetedContentSubscription __FIAsyncOperationCompletedHandler_1_Windows__CServices__CTargetedContent__CTargetedContentSubscription;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CServices__CTargetedContent__CTargetedContentSubscription;
typedef interface __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentSubscription __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentSubscription;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CTargetedContent__CTargetedContentSubscriptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CTargetedContent__CTargetedContentSubscription * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CTargetedContent__CTargetedContentSubscription * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CTargetedContent__CTargetedContentSubscription * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CServices__CTargetedContent__CTargetedContentSubscription * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentSubscription *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CServices__CTargetedContent__CTargetedContentSubscriptionVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CServices__CTargetedContent__CTargetedContentSubscription
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CServices__CTargetedContent__CTargetedContentSubscriptionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentSubscription __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentSubscription;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentSubscription;
typedef struct __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentSubscriptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentSubscription * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentSubscription * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentSubscription * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentSubscription * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentSubscription * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentSubscription * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentSubscription * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CTargetedContent__CTargetedContentSubscription *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentSubscription * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CServices__CTargetedContent__CTargetedContentSubscription **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentSubscription * This, __RPC__out __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscription * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentSubscriptionVtbl;
interface __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentSubscription
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentSubscriptionVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentAvailabilityChangedEventArgs __FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentAvailabilityChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentAvailabilityChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentAvailabilityChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentAvailabilityChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentAvailabilityChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentAvailabilityChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentAvailabilityChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscription * sender, __RPC__in_opt __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentAvailabilityChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentAvailabilityChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentAvailabilityChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentAvailabilityChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentChangedEventArgs __FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscription * sender, __RPC__in_opt __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentStateChangedEventArgs __FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentStateChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentStateChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentStateChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentStateChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentStateChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentStateChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscription * sender, __RPC__in_opt __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentStateChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentStateChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentStateChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentStateChangedEventArgsVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CFoundation__CUri __FIVectorView_1_Windows__CFoundation__CUri;
EXTERN_C const IID IID___FIVectorView_1_Windows__CFoundation__CUri;
typedef struct __FIVectorView_1_Windows__CFoundation__CUriVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                       __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CFoundation__CUriVtbl;
interface __FIVectorView_1_Windows__CFoundation__CUri
{
    CONST_VTBL struct __FIVectorView_1_Windows__CFoundation__CUriVtbl *lpVtbl;
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
typedef interface __FIIterator_1_double __FIIterator_1_double;
EXTERN_C const IID IID___FIIterator_1_double;
typedef struct __FIIterator_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_double * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_double * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_double * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_double * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_double * This, __RPC__out double *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_double * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_double * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_double * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) double *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_doubleVtbl;
interface __FIIterator_1_double
{
    CONST_VTBL struct __FIIterator_1_doubleVtbl *lpVtbl;
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
typedef interface __FIIterable_1_double __FIIterable_1_double;
EXTERN_C const IID IID___FIIterable_1_double;
typedef struct __FIIterable_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_double * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_double * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_double * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_double * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_double * This, __RPC__deref_out_opt __FIIterator_1_double **first);
    END_INTERFACE
} __FIIterable_1_doubleVtbl;
interface __FIIterable_1_double
{
    CONST_VTBL struct __FIIterable_1_doubleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_double __FIVectorView_1_double;
EXTERN_C const IID IID___FIVectorView_1_double;
typedef struct __FIVectorView_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_double * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_double * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_double * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_double * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_double * This,
                                                    unsigned int index,
                                                             __RPC__out double *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_double * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_double * This,
                       double item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_double * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) double *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_doubleVtbl;
interface __FIVectorView_1_double
{
    CONST_VTBL struct __FIVectorView_1_doubleVtbl *lpVtbl;
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
typedef interface __FIIterator_1_boolean __FIIterator_1_boolean;
EXTERN_C const IID IID___FIIterator_1_boolean;
typedef struct __FIIterator_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_boolean * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_boolean * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_boolean * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_boolean * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_boolean * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_boolean * This, __RPC__out boolean *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_boolean * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_boolean * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_boolean * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) boolean *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_booleanVtbl;
interface __FIIterator_1_boolean
{
    CONST_VTBL struct __FIIterator_1_booleanVtbl *lpVtbl;
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
typedef interface __FIIterable_1_boolean __FIIterable_1_boolean;
EXTERN_C const IID IID___FIIterable_1_boolean;
typedef struct __FIIterable_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_boolean * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_boolean * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_boolean * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_boolean * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_boolean * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_boolean * This, __RPC__deref_out_opt __FIIterator_1_boolean **first);
    END_INTERFACE
} __FIIterable_1_booleanVtbl;
interface __FIIterable_1_boolean
{
    CONST_VTBL struct __FIIterable_1_booleanVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_boolean __FIVectorView_1_boolean;
EXTERN_C const IID IID___FIVectorView_1_boolean;
typedef struct __FIVectorView_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_boolean * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_boolean * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_boolean * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_boolean * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_boolean * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_boolean * This,
                                                    unsigned int index,
                                                             __RPC__out boolean *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_boolean * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_boolean * This,
                       boolean item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_boolean * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) boolean *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_booleanVtbl;
interface __FIVectorView_1_boolean
{
    CONST_VTBL struct __FIVectorView_1_booleanVtbl *lpVtbl;
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
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef enum __x_ABI_CWindows_CServices_CTargetedContent_CTargetedContentAppInstallationState __x_ABI_CWindows_CServices_CTargetedContent_CTargetedContentAppInstallationState;
typedef enum __x_ABI_CWindows_CServices_CTargetedContent_CTargetedContentAvailability __x_ABI_CWindows_CServices_CTargetedContent_CTargetedContentAvailability;
typedef enum __x_ABI_CWindows_CServices_CTargetedContent_CTargetedContentInteraction __x_ABI_CWindows_CServices_CTargetedContent_CTargetedContentInteraction;
typedef enum __x_ABI_CWindows_CServices_CTargetedContent_CTargetedContentObjectKind __x_ABI_CWindows_CServices_CTargetedContent_CTargetedContentObjectKind;
typedef enum __x_ABI_CWindows_CServices_CTargetedContent_CTargetedContentValueKind __x_ABI_CWindows_CServices_CTargetedContent_CTargetedContentValueKind;
enum __x_ABI_CWindows_CServices_CTargetedContent_CTargetedContentAppInstallationState
{
    TargetedContentAppInstallationState_NotApplicable = 0,
    TargetedContentAppInstallationState_NotInstalled = 1,
    TargetedContentAppInstallationState_Installed = 2,
};
enum __x_ABI_CWindows_CServices_CTargetedContent_CTargetedContentAvailability
{
    TargetedContentAvailability_None = 0,
    TargetedContentAvailability_Partial = 1,
    TargetedContentAvailability_All = 2,
};
enum __x_ABI_CWindows_CServices_CTargetedContent_CTargetedContentInteraction
{
    TargetedContentInteraction_Impression = 0,
    TargetedContentInteraction_ClickThrough = 1,
    TargetedContentInteraction_Hover = 2,
    TargetedContentInteraction_Like = 3,
    TargetedContentInteraction_Dislike = 4,
    TargetedContentInteraction_Dismiss = 5,
    TargetedContentInteraction_Ineligible = 6,
    TargetedContentInteraction_Accept = 7,
    TargetedContentInteraction_Decline = 8,
    TargetedContentInteraction_Defer = 9,
    TargetedContentInteraction_Canceled = 10,
    TargetedContentInteraction_Conversion = 11,
    TargetedContentInteraction_Opportunity = 12,
};
enum __x_ABI_CWindows_CServices_CTargetedContent_CTargetedContentObjectKind
{
    TargetedContentObjectKind_Collection = 0,
    TargetedContentObjectKind_Item = 1,
    TargetedContentObjectKind_Value = 2,
};
enum __x_ABI_CWindows_CServices_CTargetedContent_CTargetedContentValueKind
{
    TargetedContentValueKind_String = 0,
    TargetedContentValueKind_Uri = 1,
    TargetedContentValueKind_Number = 2,
    TargetedContentValueKind_Boolean = 3,
    TargetedContentValueKind_File = 4,
    TargetedContentValueKind_ImageFile = 5,
    TargetedContentValueKind_Action = 6,
    TargetedContentValueKind_Strings = 7,
    TargetedContentValueKind_Uris = 8,
    TargetedContentValueKind_Numbers = 9,
    TargetedContentValueKind_Booleans = 10,
    TargetedContentValueKind_Files = 11,
    TargetedContentValueKind_ImageFiles = 12,
    TargetedContentValueKind_Actions = 13,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_TargetedContent_ITargetedContentAction[] = L"Windows.Services.TargetedContent.ITargetedContentAction";
typedef struct __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentActionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentAction * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentAction * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentAction * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentAction * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentAction * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentAction * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *InvokeAsync )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentAction * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentActionVtbl;
interface __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentAction
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentActionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->InvokeAsync(This,asyncAction) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentAction;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_TargetedContent_ITargetedContentAvailabilityChangedEventArgs[] = L"Windows.Services.TargetedContent.ITargetedContentAvailabilityChangedEventArgs";
typedef struct __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentAvailabilityChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentAvailabilityChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentAvailabilityChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentAvailabilityChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentAvailabilityChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentAvailabilityChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentAvailabilityChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentAvailabilityChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentAvailabilityChangedEventArgsVtbl;
interface __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentAvailabilityChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentAvailabilityChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentAvailabilityChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_TargetedContent_ITargetedContentChangedEventArgs[] = L"Windows.Services.TargetedContent.ITargetedContentChangedEventArgs";
typedef struct __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasPreviousContentExpired )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentChangedEventArgs * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentChangedEventArgsVtbl;
interface __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
    ( (This)->lpVtbl->get_HasPreviousContentExpired(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_TargetedContent_ITargetedContentCollection[] = L"Windows.Services.TargetedContent.ITargetedContentCollection";
typedef struct __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentCollection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentCollection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentCollection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentCollection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentCollection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentCollection * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentCollection * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportInteraction )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentCollection * This,
                  __x_ABI_CWindows_CServices_CTargetedContent_CTargetedContentInteraction interaction
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCustomInteraction )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentCollection * This,
                  __RPC__in HSTRING customInteractionName
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Path )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentCollection * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentCollection * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Collections )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentCollection * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentCollection * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Items )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentCollection * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentItem * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentCollectionVtbl;
interface __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentCollection
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentCollectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->ReportInteraction(This,interaction) )
    ( (This)->lpVtbl->ReportCustomInteraction(This,customInteractionName) )
    ( (This)->lpVtbl->get_Path(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
    ( (This)->lpVtbl->get_Collections(This,value) )
    ( (This)->lpVtbl->get_Items(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentCollection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_TargetedContent_ITargetedContentContainer[] = L"Windows.Services.TargetedContent.ITargetedContentContainer";
typedef struct __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentContainerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentContainer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentContainer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentContainer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentContainer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentContainer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentContainer * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentContainer * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentContainer * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Availability )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentContainer * This,
                           __RPC__out __x_ABI_CWindows_CServices_CTargetedContent_CTargetedContentAvailability * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentContainer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentCollection * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SelectSingleObject )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentContainer * This,
                  __RPC__in HSTRING path,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentObject * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentContainerVtbl;
interface __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentContainer
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentContainerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
    ( (This)->lpVtbl->get_Availability(This,value) )
    ( (This)->lpVtbl->get_Content(This,value) )
    ( (This)->lpVtbl->SelectSingleObject(This,path,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentContainer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_TargetedContent_ITargetedContentContainerStatics[] = L"Windows.Services.TargetedContent.ITargetedContentContainerStatics";
typedef struct __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentContainerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentContainerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentContainerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentContainerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentContainerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentContainerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentContainerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAsync )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentContainerStatics * This,
                  __RPC__in HSTRING contentId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentContainer * * asyncOperation
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentContainerStaticsVtbl;
interface __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentContainerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentContainerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAsync(This,contentId,asyncOperation) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentContainerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_TargetedContent_ITargetedContentImage[] = L"Windows.Services.TargetedContent.ITargetedContentImage";
typedef struct __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentImageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentImage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentImage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentImage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentImage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentImage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentImage * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Height )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentImage * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Width )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentImage * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentImageVtbl;
interface __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentImage
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentImageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Height(This,value) )
    ( (This)->lpVtbl->get_Width(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentImage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_TargetedContent_ITargetedContentItem[] = L"Windows.Services.TargetedContent.ITargetedContentItem";
typedef struct __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItem * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItem * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItem * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItem * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItem * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItem * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Path )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItem * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportInteraction )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItem * This,
                  __x_ABI_CWindows_CServices_CTargetedContent_CTargetedContentInteraction interaction
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCustomInteraction )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItem * This,
                  __RPC__in HSTRING customInteractionName
        );
                   HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItemState * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItem * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CServices__CTargetedContent__CTargetedContentValue * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Collections )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItem * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentCollection * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItemVtbl;
interface __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItem
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItemVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Path(This,value) )
    ( (This)->lpVtbl->ReportInteraction(This,interaction) )
    ( (This)->lpVtbl->ReportCustomInteraction(This,customInteractionName) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
    ( (This)->lpVtbl->get_Collections(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItem;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_TargetedContent_ITargetedContentItemState[] = L"Windows.Services.TargetedContent.ITargetedContentItemState";
typedef struct __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItemStateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItemState * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItemState * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItemState * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItemState * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItemState * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItemState * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ShouldDisplay )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItemState * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppInstallationState )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItemState * This,
                           __RPC__out __x_ABI_CWindows_CServices_CTargetedContent_CTargetedContentAppInstallationState * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItemStateVtbl;
interface __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItemState
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItemStateVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ShouldDisplay(This,value) )
    ( (This)->lpVtbl->get_AppInstallationState(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItemState;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_TargetedContent_ITargetedContentObject[] = L"Windows.Services.TargetedContent.ITargetedContentObject";
typedef struct __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentObjectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentObject * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentObject * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentObject * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentObject * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentObject * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentObject * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ObjectKind )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentObject * This,
                           __RPC__out __x_ABI_CWindows_CServices_CTargetedContent_CTargetedContentObjectKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Collection )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentObject * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentCollection * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Item )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentObject * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentItem * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentObject * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentValue * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentObjectVtbl;
interface __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentObject
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentObjectVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ObjectKind(This,value) )
    ( (This)->lpVtbl->get_Collection(This,value) )
    ( (This)->lpVtbl->get_Item(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentObject;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_TargetedContent_ITargetedContentStateChangedEventArgs[] = L"Windows.Services.TargetedContent.ITargetedContentStateChangedEventArgs";
typedef struct __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentStateChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentStateChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentStateChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentStateChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentStateChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentStateChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentStateChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentStateChangedEventArgsVtbl;
interface __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentStateChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentStateChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentStateChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_TargetedContent_ITargetedContentSubscription[] = L"Windows.Services.TargetedContent.ITargetedContentSubscription";
typedef struct __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscription * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscription * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscription * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscription * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscription * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscription * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscription * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetContentContainerAsync )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscription * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentContainer * * asyncOperation
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ContentChanged )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscription * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ContentChanged )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscription * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AvailabilityChanged )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscription * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentAvailabilityChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AvailabilityChanged )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscription * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_StateChanged )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscription * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CServices__CTargetedContent__CTargetedContentSubscription_Windows__CServices__CTargetedContent__CTargetedContentStateChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StateChanged )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscription * This,
                  EventRegistrationToken cookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionVtbl;
interface __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscription
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->GetContentContainerAsync(This,asyncOperation) )
    ( (This)->lpVtbl->add_ContentChanged(This,handler,cookie) )
    ( (This)->lpVtbl->remove_ContentChanged(This,cookie) )
    ( (This)->lpVtbl->add_AvailabilityChanged(This,handler,cookie) )
    ( (This)->lpVtbl->remove_AvailabilityChanged(This,cookie) )
    ( (This)->lpVtbl->add_StateChanged(This,handler,cookie) )
    ( (This)->lpVtbl->remove_StateChanged(This,cookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscription;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_TargetedContent_ITargetedContentSubscriptionOptions[] = L"Windows.Services.TargetedContent.ITargetedContentSubscriptionOptions";
typedef struct __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SubscriptionId )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionOptions * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowPartialContentAvailability )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllowPartialContentAvailability )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionOptions * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CloudQueryParameters )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionOptions * This,
                           __RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocalFilters )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionOptions * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Update )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionOptions * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionOptionsVtbl;
interface __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SubscriptionId(This,value) )
    ( (This)->lpVtbl->get_AllowPartialContentAvailability(This,value) )
    ( (This)->lpVtbl->put_AllowPartialContentAvailability(This,value) )
    ( (This)->lpVtbl->get_CloudQueryParameters(This,value) )
    ( (This)->lpVtbl->get_LocalFilters(This,value) )
    ( (This)->lpVtbl->Update(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_TargetedContent_ITargetedContentSubscriptionStatics[] = L"Windows.Services.TargetedContent.ITargetedContentSubscriptionStatics";
typedef struct __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAsync )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionStatics * This,
                  __RPC__in HSTRING subscriptionId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CServices__CTargetedContent__CTargetedContentSubscription * * asyncOperation
        );
    HRESULT ( STDMETHODCALLTYPE *GetOptions )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionStatics * This,
                  __RPC__in HSTRING subscriptionId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionOptions * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionStaticsVtbl;
interface __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAsync(This,subscriptionId,asyncOperation) )
    ( (This)->lpVtbl->GetOptions(This,subscriptionId,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentSubscriptionStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Services_TargetedContent_ITargetedContentValue[] = L"Windows.Services.TargetedContent.ITargetedContentValue";
typedef struct __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentValue * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentValue * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentValue * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentValue * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentValue * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentValue * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ValueKind )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentValue * This,
                           __RPC__out __x_ABI_CWindows_CServices_CTargetedContent_CTargetedContentValueKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Path )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentValue * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_String )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentValue * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentValue * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Number )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentValue * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Boolean )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentValue * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_File )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentValue * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ImageFile )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentValue * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentImage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Action )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentValue * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentAction * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Strings )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentValue * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Uris )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentValue * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CFoundation__CUri * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Numbers )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentValue * This,
                           __RPC__deref_out_opt __FIVectorView_1_double * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Booleans )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentValue * This,
                           __RPC__deref_out_opt __FIVectorView_1_boolean * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Files )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentValue * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentFile * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ImageFiles )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentValue * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentImage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Actions )(
        __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentValue * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CServices__CTargetedContent__CTargetedContentAction * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentValueVtbl;
interface __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentValue
{
    CONST_VTBL struct __x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentValueVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ValueKind(This,value) )
    ( (This)->lpVtbl->get_Path(This,value) )
    ( (This)->lpVtbl->get_String(This,value) )
    ( (This)->lpVtbl->get_Uri(This,value) )
    ( (This)->lpVtbl->get_Number(This,value) )
    ( (This)->lpVtbl->get_Boolean(This,value) )
    ( (This)->lpVtbl->get_File(This,value) )
    ( (This)->lpVtbl->get_ImageFile(This,value) )
    ( (This)->lpVtbl->get_Action(This,value) )
    ( (This)->lpVtbl->get_Strings(This,value) )
    ( (This)->lpVtbl->get_Uris(This,value) )
    ( (This)->lpVtbl->get_Numbers(This,value) )
    ( (This)->lpVtbl->get_Booleans(This,value) )
    ( (This)->lpVtbl->get_Files(This,value) )
    ( (This)->lpVtbl->get_ImageFiles(This,value) )
    ( (This)->lpVtbl->get_Actions(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CServices_CTargetedContent_CITargetedContentValue;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_TargetedContent_TargetedContentAction[] = L"Windows.Services.TargetedContent.TargetedContentAction";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_TargetedContent_TargetedContentAvailabilityChangedEventArgs[] = L"Windows.Services.TargetedContent.TargetedContentAvailabilityChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_TargetedContent_TargetedContentChangedEventArgs[] = L"Windows.Services.TargetedContent.TargetedContentChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_TargetedContent_TargetedContentCollection[] = L"Windows.Services.TargetedContent.TargetedContentCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_TargetedContent_TargetedContentContainer[] = L"Windows.Services.TargetedContent.TargetedContentContainer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_TargetedContent_TargetedContentFile[] = L"Windows.Services.TargetedContent.TargetedContentFile";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_TargetedContent_TargetedContentImage[] = L"Windows.Services.TargetedContent.TargetedContentImage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_TargetedContent_TargetedContentItem[] = L"Windows.Services.TargetedContent.TargetedContentItem";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_TargetedContent_TargetedContentItemState[] = L"Windows.Services.TargetedContent.TargetedContentItemState";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_TargetedContent_TargetedContentObject[] = L"Windows.Services.TargetedContent.TargetedContentObject";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_TargetedContent_TargetedContentStateChangedEventArgs[] = L"Windows.Services.TargetedContent.TargetedContentStateChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_TargetedContent_TargetedContentSubscription[] = L"Windows.Services.TargetedContent.TargetedContentSubscription";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_TargetedContent_TargetedContentSubscriptionOptions[] = L"Windows.Services.TargetedContent.TargetedContentSubscriptionOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Services_TargetedContent_TargetedContentValue[] = L"Windows.Services.TargetedContent.TargetedContentValue";
       
       
#pragma clang diagnostic pop
