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
#include "Windows.Storage.h"
#include "Windows.System.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs;
typedef interface __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics;
typedef interface __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics2 __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics2;
typedef interface __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList;
typedef interface __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList;
typedef interface __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2 __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2;
struct __x_ABI_CWindows_CStorage_CAccessCache_CAccessListEntry;
typedef interface __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry;
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry;
typedef struct __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry * This, __RPC__out struct __x_ABI_CWindows_CStorage_CAccessCache_CAccessListEntry *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CStorage_CAccessCache_CAccessListEntry *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntryVtbl;
interface __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntryVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry;
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry;
typedef struct __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry * This, __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry **first);
    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntryVtbl;
interface __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntryVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry;
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry;
typedef struct __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry * This,
                                                    unsigned int index,
                                                             __RPC__out struct __x_ABI_CWindows_CStorage_CAccessCache_CAccessListEntry *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry * This,
                       struct __x_ABI_CWindows_CStorage_CAccessCache_CAccessListEntry item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CStorage_CAccessCache_CAccessListEntry *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntryVtbl;
interface __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntryVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgs __FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList * sender, __RPC__in_opt __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CStorage_CIStorageItem __x_ABI_CWindows_CStorage_CIStorageItem;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CIStorageItem __FIAsyncOperation_1_Windows__CStorage__CIStorageItem;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CIStorageItem *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItemVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItemVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CIStorageItem __FIAsyncOperation_1_Windows__CStorage__CIStorageItem;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CIStorageItem;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CIStorageItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * This, __RPC__out __x_ABI_CWindows_CStorage_CIStorageItem * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CIStorageItemVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CIStorageItem
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CIStorageItemVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStorageFile __FIAsyncOperation_1_Windows__CStorage__CStorageFile;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFileVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStorageFile __FIAsyncOperation_1_Windows__CStorage__CStorageFile;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStorageFile;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, __RPC__out __x_ABI_CWindows_CStorage_CIStorageFile * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStorageFileVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CStorage_CIStorageFolder __x_ABI_CWindows_CStorage_CIStorageFolder;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStorageFolder __FIAsyncOperation_1_Windows__CStorage__CStorageFolder;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFolder *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolderVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolderVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStorageFolder __FIAsyncOperation_1_Windows__CStorage__CStorageFolder;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStorageFolder;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CStorageFolderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This, __RPC__out __x_ABI_CWindows_CStorage_CIStorageFolder * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStorageFolderVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CStorageFolder
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStorageFolderVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef enum __x_ABI_CWindows_CStorage_CAccessCache_CAccessCacheOptions __x_ABI_CWindows_CStorage_CAccessCache_CAccessCacheOptions;
typedef enum __x_ABI_CWindows_CStorage_CAccessCache_CRecentStorageItemVisibility __x_ABI_CWindows_CStorage_CAccessCache_CRecentStorageItemVisibility;
typedef struct __x_ABI_CWindows_CStorage_CAccessCache_CAccessListEntry __x_ABI_CWindows_CStorage_CAccessCache_CAccessListEntry;
enum __x_ABI_CWindows_CStorage_CAccessCache_CAccessCacheOptions
{
    AccessCacheOptions_None = 0,
    AccessCacheOptions_DisallowUserInput = 0x1,
    AccessCacheOptions_FastLocationsOnly = 0x2,
    AccessCacheOptions_UseReadOnlyCachedCopy = 0x4,
    AccessCacheOptions_SuppressAccessTimeUpdate = 0x8,
};
enum __x_ABI_CWindows_CStorage_CAccessCache_CRecentStorageItemVisibility
{
    RecentStorageItemVisibility_AppOnly = 0,
    RecentStorageItemVisibility_AppAndSystem = 1,
};
struct __x_ABI_CWindows_CStorage_CAccessCache_CAccessListEntry
{
    HSTRING Token;
    HSTRING Metadata;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_AccessCache_IItemRemovedEventArgs[] = L"Windows.Storage.AccessCache.IItemRemovedEventArgs";
typedef struct __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RemovedEntry )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CStorage_CAccessCache_CAccessListEntry * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgsVtbl;
interface __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RemovedEntry(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_AccessCache_IStorageApplicationPermissionsStatics[] = L"Windows.Storage.AccessCache.IStorageApplicationPermissionsStatics";
typedef struct __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FutureAccessList )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MostRecentlyUsedList )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStaticsVtbl;
interface __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FutureAccessList(This,value) )
    ( (This)->lpVtbl->get_MostRecentlyUsedList(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_AccessCache_IStorageApplicationPermissionsStatics2[] = L"Windows.Storage.AccessCache.IStorageApplicationPermissionsStatics2";
typedef struct __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetFutureAccessListForUser )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetMostRecentlyUsedListForUser )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics2Vtbl;
interface __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetFutureAccessListForUser(This,user,value) )
    ( (This)->lpVtbl->GetMostRecentlyUsedListForUser(This,user,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_AccessCache_IStorageItemAccessList[] = L"Windows.Storage.AccessCache.IStorageItemAccessList";
typedef struct __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *AddOverloadDefaultMetadata )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * file,
                           __RPC__deref_out_opt HSTRING * token
        );
                    HRESULT ( STDMETHODCALLTYPE *Add )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * file,
                  __RPC__in HSTRING metadata,
                           __RPC__deref_out_opt HSTRING * token
        );
                    HRESULT ( STDMETHODCALLTYPE *AddOrReplaceOverloadDefaultMetadata )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
                  __RPC__in HSTRING token,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * file
        );
                    HRESULT ( STDMETHODCALLTYPE *AddOrReplace )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
                  __RPC__in HSTRING token,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * file,
                  __RPC__in HSTRING metadata
        );
                    HRESULT ( STDMETHODCALLTYPE *GetItemAsync )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
                  __RPC__in HSTRING token,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetFileAsync )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
                  __RPC__in HSTRING token,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetFolderAsync )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
                  __RPC__in HSTRING token,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetItemWithOptionsAsync )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
                  __RPC__in HSTRING token,
                  __x_ABI_CWindows_CStorage_CAccessCache_CAccessCacheOptions options,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetFileWithOptionsAsync )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
                  __RPC__in HSTRING token,
                  __x_ABI_CWindows_CStorage_CAccessCache_CAccessCacheOptions options,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetFolderWithOptionsAsync )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
                  __RPC__in HSTRING token,
                  __x_ABI_CWindows_CStorage_CAccessCache_CAccessCacheOptions options,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *Remove )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
                  __RPC__in HSTRING token
        );
    HRESULT ( STDMETHODCALLTYPE *ContainsItem )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
                  __RPC__in HSTRING token,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *Clear )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This
        );
    HRESULT ( STDMETHODCALLTYPE *CheckAccess )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * file,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Entries )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry * * entries
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaximumItemsAllowed )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessListVtbl;
interface __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessListVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AddOverloadDefaultMetadata(This,file,token) )
    ( (This)->lpVtbl->Add(This,file,metadata,token) )
    ( (This)->lpVtbl->AddOrReplaceOverloadDefaultMetadata(This,token,file) )
    ( (This)->lpVtbl->AddOrReplace(This,token,file,metadata) )
    ( (This)->lpVtbl->GetItemAsync(This,token,operation) )
    ( (This)->lpVtbl->GetFileAsync(This,token,operation) )
    ( (This)->lpVtbl->GetFolderAsync(This,token,operation) )
    ( (This)->lpVtbl->GetItemWithOptionsAsync(This,token,options,operation) )
    ( (This)->lpVtbl->GetFileWithOptionsAsync(This,token,options,operation) )
    ( (This)->lpVtbl->GetFolderWithOptionsAsync(This,token,options,operation) )
    ( (This)->lpVtbl->Remove(This,token) )
    ( (This)->lpVtbl->ContainsItem(This,token,value) )
    ( (This)->lpVtbl->Clear(This) )
    ( (This)->lpVtbl->CheckAccess(This,file,value) )
    ( (This)->lpVtbl->get_Entries(This,entries) )
    ( (This)->lpVtbl->get_MaximumItemsAllowed(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_AccessCache_IStorageItemMostRecentlyUsedList[] = L"Windows.Storage.AccessCache.IStorageItemMostRecentlyUsedList";
typedef struct __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_ItemRemoved )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgs * handler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ItemRemoved )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList * This,
                  EventRegistrationToken eventCookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedListVtbl;
interface __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedListVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_ItemRemoved(This,handler,eventCookie) )
    ( (This)->lpVtbl->remove_ItemRemoved(This,eventCookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_AccessCache_IStorageItemMostRecentlyUsedList2[] = L"Windows.Storage.AccessCache.IStorageItemMostRecentlyUsedList2";
typedef struct __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *AddWithMetadataAndVisibility )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * file,
                  __RPC__in HSTRING metadata,
                  __x_ABI_CWindows_CStorage_CAccessCache_CRecentStorageItemVisibility visibility,
                           __RPC__deref_out_opt HSTRING * token
        );
                    HRESULT ( STDMETHODCALLTYPE *AddOrReplaceWithMetadataAndVisibility )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2 * This,
                  __RPC__in HSTRING token,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * file,
                  __RPC__in HSTRING metadata,
                  __x_ABI_CWindows_CStorage_CAccessCache_CRecentStorageItemVisibility visibility
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2Vtbl;
interface __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AddWithMetadataAndVisibility(This,file,metadata,visibility,token) )
    ( (This)->lpVtbl->AddOrReplaceWithMetadataAndVisibility(This,token,file,metadata,visibility) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_AccessCache_AccessListEntryView[] = L"Windows.Storage.AccessCache.AccessListEntryView";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_AccessCache_ItemRemovedEventArgs[] = L"Windows.Storage.AccessCache.ItemRemovedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_AccessCache_StorageApplicationPermissions[] = L"Windows.Storage.AccessCache.StorageApplicationPermissions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_AccessCache_StorageItemAccessList[] = L"Windows.Storage.AccessCache.StorageItemAccessList";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_AccessCache_StorageItemMostRecentlyUsedList[] = L"Windows.Storage.AccessCache.StorageItemMostRecentlyUsedList";
       
       
#pragma clang diagnostic pop
