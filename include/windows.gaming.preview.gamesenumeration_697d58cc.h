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
#include "Windows.Gaming.Preview.h"
#include "Windows.Storage.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler;
typedef interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler;
typedef interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry;
typedef interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2 __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2;
typedef interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics;
typedef interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2 __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2;
typedef interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration;
typedef interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration;
typedef interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics;
typedef interface __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry;
EXTERN_C const IID IID___FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry;
typedef struct __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, __RPC__out __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl;
interface __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry
{
    CONST_VTBL struct __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry;
EXTERN_C const IID IID___FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry;
typedef struct __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl;
interface __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry
{
    CONST_VTBL struct __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry;
typedef struct __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
                       __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl;
interface __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, __RPC__out __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry;
typedef interface __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry;
typedef struct __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, __RPC__out __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl;
interface __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;
typedef enum __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CGameListCategory __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CGameListCategory;
typedef enum __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CGameListEntryLaunchableState __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CGameListEntryLaunchableState;
enum __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CGameListCategory
{
    GameListCategory_Candidate = 0,
    GameListCategory_ConfirmedBySystem = 1,
    GameListCategory_ConfirmedByUser = 2,
};
enum __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CGameListEntryLaunchableState
{
    GameListEntryLaunchableState_NotLaunchable = 0,
    GameListEntryLaunchableState_ByLastRunningFullPath = 1,
    GameListEntryLaunchableState_ByUserProvidedPath = 2,
    GameListEntryLaunchableState_ByTile = 3,
};
typedef struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * game
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandlerVtbl;
interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,game) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler;
typedef struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler * This,
                  __RPC__in HSTRING identifier
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandlerVtbl;
interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,identifier) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry[] = L"Windows.Gaming.Preview.GamesEnumeration.IGameListEntry";
typedef struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DisplayInfo )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo * * value
        );
    HRESULT ( STDMETHODCALLTYPE *LaunchAsync )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Category )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * This,
                           __RPC__out __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CGameListCategory * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetCategoryAsync )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * This,
                  __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CGameListCategory value,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntryVtbl;
interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DisplayInfo(This,value) )
    ( (This)->lpVtbl->LaunchAsync(This,operation) )
    ( (This)->lpVtbl->get_Category(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
    ( (This)->lpVtbl->SetCategoryAsync(This,value,action) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry2[] = L"Windows.Gaming.Preview.GamesEnumeration.IGameListEntry2";
typedef struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LaunchableState )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2 * This,
                           __RPC__out __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CGameListEntryLaunchableState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LauncherExecutable )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LaunchParameters )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                    HRESULT ( STDMETHODCALLTYPE *SetLauncherExecutableFileAsync )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * executableFile,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *SetLauncherExecutableFileWithParamsAsync )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * executableFile,
                  __RPC__in HSTRING launchParams,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TitleId )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetTitleIdAsync )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2 * This,
                  __RPC__in HSTRING id,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GameModeConfiguration )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2Vtbl;
interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LaunchableState(This,value) )
    ( (This)->lpVtbl->get_LauncherExecutable(This,value) )
    ( (This)->lpVtbl->get_LaunchParameters(This,value) )
    ( (This)->lpVtbl->SetLauncherExecutableFileAsync(This,executableFile,operation) )
    ( (This)->lpVtbl->SetLauncherExecutableFileWithParamsAsync(This,executableFile,launchParams,operation) )
    ( (This)->lpVtbl->get_TitleId(This,value) )
    ( (This)->lpVtbl->SetTitleIdAsync(This,id,operation) )
    ( (This)->lpVtbl->get_GameModeConfiguration(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics[] = L"Windows.Gaming.Preview.GamesEnumeration.IGameListStatics";
typedef struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *FindAllAsync )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *FindAllAsyncPackageFamilyName )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics * This,
                  __RPC__in HSTRING packageFamilyName,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *add_GameAdded )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_GameAdded )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_GameRemoved )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_GameRemoved )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_GameUpdated )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_GameUpdated )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStaticsVtbl;
interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FindAllAsync(This,operation) )
    ( (This)->lpVtbl->FindAllAsyncPackageFamilyName(This,packageFamilyName,operation) )
    ( (This)->lpVtbl->add_GameAdded(This,handler,token) )
    ( (This)->lpVtbl->remove_GameAdded(This,token) )
    ( (This)->lpVtbl->add_GameRemoved(This,handler,token) )
    ( (This)->lpVtbl->remove_GameRemoved(This,token) )
    ( (This)->lpVtbl->add_GameUpdated(This,handler,token) )
    ( (This)->lpVtbl->remove_GameUpdated(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics2[] = L"Windows.Gaming.Preview.GamesEnumeration.IGameListStatics2";
typedef struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *MergeEntriesAsync )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * left,
                  __RPC__in_opt __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * right,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *UnmergeEntryAsync )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * mergedEntry,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2Vtbl;
interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->MergeEntriesAsync(This,left,right,operation) )
    ( (This)->lpVtbl->UnmergeEntryAsync(This,mergedEntry,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Preview_GamesEnumeration_IGameModeConfiguration[] = L"Windows.Gaming.Preview.GamesEnumeration.IGameModeConfiguration";
typedef struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsEnabled )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RelatedProcessNames )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PercentGpuTimeAllocatedToGame )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PercentGpuTimeAllocatedToGame )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PercentGpuMemoryAllocatedToGame )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PercentGpuMemoryAllocatedToGame )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PercentGpuMemoryAllocatedToSystemCompositor )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PercentGpuMemoryAllocatedToSystemCompositor )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxCpuCount )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxCpuCount )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CpuExclusivityMaskLow )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CpuExclusivityMaskLow )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CpuExclusivityMaskHigh )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CpuExclusivityMaskHigh )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AffinitizeToExclusiveCpus )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AffinitizeToExclusiveCpus )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *SaveAsync )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfigurationVtbl;
interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfigurationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsEnabled(This,value) )
    ( (This)->lpVtbl->put_IsEnabled(This,value) )
    ( (This)->lpVtbl->get_RelatedProcessNames(This,value) )
    ( (This)->lpVtbl->get_PercentGpuTimeAllocatedToGame(This,value) )
    ( (This)->lpVtbl->put_PercentGpuTimeAllocatedToGame(This,value) )
    ( (This)->lpVtbl->get_PercentGpuMemoryAllocatedToGame(This,value) )
    ( (This)->lpVtbl->put_PercentGpuMemoryAllocatedToGame(This,value) )
    ( (This)->lpVtbl->get_PercentGpuMemoryAllocatedToSystemCompositor(This,value) )
    ( (This)->lpVtbl->put_PercentGpuMemoryAllocatedToSystemCompositor(This,value) )
    ( (This)->lpVtbl->get_MaxCpuCount(This,value) )
    ( (This)->lpVtbl->put_MaxCpuCount(This,value) )
    ( (This)->lpVtbl->get_CpuExclusivityMaskLow(This,value) )
    ( (This)->lpVtbl->put_CpuExclusivityMaskLow(This,value) )
    ( (This)->lpVtbl->get_CpuExclusivityMaskHigh(This,value) )
    ( (This)->lpVtbl->put_CpuExclusivityMaskHigh(This,value) )
    ( (This)->lpVtbl->get_AffinitizeToExclusiveCpus(This,value) )
    ( (This)->lpVtbl->put_AffinitizeToExclusiveCpus(This,value) )
    ( (This)->lpVtbl->SaveAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Preview_GamesEnumeration_IGameModeUserConfiguration[] = L"Windows.Gaming.Preview.GamesEnumeration.IGameModeUserConfiguration";
typedef struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_GamingRelatedProcessNames )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * processNames
        );
    HRESULT ( STDMETHODCALLTYPE *SaveAsync )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationVtbl;
interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_GamingRelatedProcessNames(This,processNames) )
    ( (This)->lpVtbl->SaveAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Preview_GamesEnumeration_IGameModeUserConfigurationStatics[] = L"Windows.Gaming.Preview.GamesEnumeration.IGameModeUserConfigurationStatics";
typedef struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration * * userConfiguration
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStaticsVtbl;
interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,userConfiguration) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Preview_GamesEnumeration_GameList[] = L"Windows.Gaming.Preview.GamesEnumeration.GameList";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Preview_GamesEnumeration_GameListEntry[] = L"Windows.Gaming.Preview.GamesEnumeration.GameListEntry";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Preview_GamesEnumeration_GameModeConfiguration[] = L"Windows.Gaming.Preview.GamesEnumeration.GameModeConfiguration";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Preview_GamesEnumeration_GameModeUserConfiguration[] = L"Windows.Gaming.Preview.GamesEnumeration.GameModeUserConfiguration";
       
       
#pragma clang diagnostic pop
