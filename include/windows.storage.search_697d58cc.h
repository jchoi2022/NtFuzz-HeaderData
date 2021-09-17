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
#include "Windows.Storage.h"
#include "Windows.Storage.FileProperties.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer;
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery;
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations;
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics;
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent;
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions;
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory;
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter;
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult;
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2 __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2;
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations;
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult;
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult;
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryChangeTrackerTriggerDetails __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryChangeTrackerTriggerDetails;
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails;
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase;
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage;
typedef interface __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent;
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent;
typedef struct __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent * This, __RPC__out __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContentVtbl;
interface __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContentVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent;
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent;
typedef struct __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent * This, __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent **first);
    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContentVtbl;
interface __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContentVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
struct __x_ABI_CWindows_CStorage_CSearch_CSortEntry;
typedef interface __FIIterator_1_Windows__CStorage__CSearch__CSortEntry __FIIterator_1_Windows__CStorage__CSearch__CSortEntry;
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CSearch__CSortEntry;
typedef struct __FIIterator_1_Windows__CStorage__CSearch__CSortEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CStorage__CSearch__CSortEntry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CSortEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CSortEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CSortEntry * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CSortEntry * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CSortEntry * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CSortEntry * This, __RPC__out struct __x_ABI_CWindows_CStorage_CSearch_CSortEntry *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CSortEntry * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CSortEntry * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CSortEntry * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CStorage_CSearch_CSortEntry *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CSearch__CSortEntryVtbl;
interface __FIIterator_1_Windows__CStorage__CSearch__CSortEntry
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CSearch__CSortEntryVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CStorage__CSearch__CSortEntry __FIIterable_1_Windows__CStorage__CSearch__CSortEntry;
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CSearch__CSortEntry;
typedef struct __FIIterable_1_Windows__CStorage__CSearch__CSortEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CStorage__CSearch__CSortEntry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CSearch__CSortEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CSearch__CSortEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CSearch__CSortEntry * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CSearch__CSortEntry * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CSearch__CSortEntry * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CSearch__CSortEntry * This, __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CSearch__CSortEntry **first);
    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CSearch__CSortEntryVtbl;
interface __FIIterable_1_Windows__CStorage__CSearch__CSortEntry
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CSearch__CSortEntryVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent;
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent;
typedef struct __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This,
                       __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContentVtbl;
interface __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContentVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry;
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CSearch__CSortEntry;
typedef struct __FIVectorView_1_Windows__CStorage__CSearch__CSortEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry * This,
                                                    unsigned int index,
                                                             __RPC__out struct __x_ABI_CWindows_CStorage_CSearch_CSortEntry *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry * This,
                       struct __x_ABI_CWindows_CStorage_CSearch_CSortEntry item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CStorage_CSearch_CSortEntry *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CSearch__CSortEntryVtbl;
interface __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CSearch__CSortEntryVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CStorage__CSearch__CSortEntry __FIVector_1_Windows__CStorage__CSearch__CSortEntry;
EXTERN_C const IID IID___FIVector_1_Windows__CStorage__CSearch__CSortEntry;
typedef struct __FIVector_1_Windows__CStorage__CSearch__CSortEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This, __RPC__deref_out_opt struct __x_ABI_CWindows_CStorage_CSearch_CSortEntry *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This,
                   unsigned int index,
                            __RPC__deref_out_opt struct __x_ABI_CWindows_CStorage_CSearch_CSortEntry *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This,
                   __RPC__in struct __x_ABI_CWindows_CStorage_CSearch_CSortEntry item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This,
                   unsigned int index,
                   __RPC__in struct __x_ABI_CWindows_CStorage_CSearch_CSortEntry item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This,
                   unsigned int index,
                   __RPC__in struct __x_ABI_CWindows_CStorage_CSearch_CSortEntry item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This, __RPC__in struct __x_ABI_CWindows_CStorage_CSearch_CSortEntry item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CStorage_CSearch_CSortEntry *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) struct __x_ABI_CWindows_CStorage_CSearch_CSortEntry *value);
    END_INTERFACE
} __FIVector_1_Windows__CStorage__CSearch__CSortEntryVtbl;
interface __FIVector_1_Windows__CStorage__CSearch__CSortEntry
{
    CONST_VTBL struct __FIVector_1_Windows__CStorage__CSearch__CSortEntryVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContentVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContentVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This, __RPC__out __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContentVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContentVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CStorage_CSearch_CIndexedState;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedStateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedStateVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedStateVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedStateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState * This, __RPC__out enum __x_ABI_CWindows_CStorage_CSearch_CIndexedState *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedStateVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedStateVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable __FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectableVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable;
typedef interface __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable;
typedef struct __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable * This, __RPC__in_opt __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectableVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable;
typedef struct __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable * This, __RPC__out __FIMapView_2_HSTRING_IInspectable * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectableVtbl;
interface __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectableVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_UINT32 __FIAsyncOperationCompletedHandler_1_UINT32;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_UINT32;
typedef interface __FIAsyncOperation_1_UINT32 __FIAsyncOperation_1_UINT32;
typedef struct __FIAsyncOperationCompletedHandler_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This, __RPC__in_opt __FIAsyncOperation_1_UINT32 *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_UINT32Vtbl;
interface __FIAsyncOperationCompletedHandler_1_UINT32
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_UINT32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_UINT32 __FIAsyncOperation_1_UINT32;
EXTERN_C const IID IID___FIAsyncOperation_1_UINT32;
typedef struct __FIAsyncOperation_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_UINT32 * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_UINT32 *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_UINT32 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__out unsigned int *results);
    END_INTERFACE
} __FIAsyncOperation_1_UINT32Vtbl;
interface __FIAsyncOperation_1_UINT32
{
    CONST_VTBL struct __FIAsyncOperation_1_UINT32Vtbl *lpVtbl;
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
typedef interface __FIIterator_1___FIMapView_2_HSTRING_IInspectable __FIIterator_1___FIMapView_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIIterator_1___FIMapView_2_HSTRING_IInspectable;
typedef struct __FIIterator_1___FIMapView_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIMapView_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIMapView_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIMapView_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIMapView_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIMapView_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIMapView_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIMapView_2_HSTRING_IInspectable * This, __RPC__out __FIMapView_2_HSTRING_IInspectable * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIMapView_2_HSTRING_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIMapView_2_HSTRING_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIMapView_2_HSTRING_IInspectable * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIMapView_2_HSTRING_IInspectable * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIMapView_2_HSTRING_IInspectableVtbl;
interface __FIIterator_1___FIMapView_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterator_1___FIMapView_2_HSTRING_IInspectableVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIMapView_2_HSTRING_IInspectable __FIIterable_1___FIMapView_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIIterable_1___FIMapView_2_HSTRING_IInspectable;
typedef struct __FIIterable_1___FIMapView_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIMapView_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIMapView_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIMapView_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIMapView_2_HSTRING_IInspectable * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIMapView_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIMapView_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIMapView_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIIterator_1___FIMapView_2_HSTRING_IInspectable **first);
    END_INTERFACE
} __FIIterable_1___FIMapView_2_HSTRING_IInspectableVtbl;
interface __FIIterable_1___FIMapView_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterable_1___FIMapView_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1___FIMapView_2_HSTRING_IInspectable __FIVectorView_1___FIMapView_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIVectorView_1___FIMapView_2_HSTRING_IInspectable;
typedef struct __FIVectorView_1___FIMapView_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This,
                                                    unsigned int index,
                                                             __RPC__out __FIMapView_2_HSTRING_IInspectable * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This,
                       __FIMapView_2_HSTRING_IInspectable * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __FIMapView_2_HSTRING_IInspectable * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1___FIMapView_2_HSTRING_IInspectableVtbl;
interface __FIVectorView_1___FIMapView_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIVectorView_1___FIMapView_2_HSTRING_IInspectableVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable __FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable;
typedef interface __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectableVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable;
typedef struct __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This, __RPC__out __FIVectorView_1___FIMapView_2_HSTRING_IInspectable * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectableVtbl;
interface __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectableVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;
typedef interface __FIIterator_1_Windows__CStorage__CStorageFile __FIIterator_1_Windows__CStorage__CStorageFile;
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CStorageFile;
typedef struct __FIIterator_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This, __RPC__out __x_ABI_CWindows_CStorage_CIStorageFile * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageFile * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CStorageFileVtbl;
interface __FIIterator_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CStorage__CStorageFile __FIIterable_1_Windows__CStorage__CStorageFile;
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CStorageFile;
typedef struct __FIIterable_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This, __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CStorageFile **first);
    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CStorageFileVtbl;
interface __FIIterable_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CStorage__CStorageFile __FIVectorView_1_Windows__CStorage__CStorageFile;
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CStorageFile;
typedef struct __FIVectorView_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CStorage_CIStorageFile * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
                       __x_ABI_CWindows_CStorage_CIStorageFile * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageFile * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CStorageFileVtbl;
interface __FIVectorView_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFileVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * This, __RPC__out __FIVectorView_1_Windows__CStorage__CStorageFile * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFileVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
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
typedef interface __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment;
typedef struct __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CData__CText__CTextSegment * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl;
interface __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__out __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment;
EXTERN_C const IID IID___FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment;
typedef struct __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt __FIVectorView_1_Windows__CData__CText__CTextSegment * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__deref_out_opt __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl;
interface __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment
{
    CONST_VTBL struct __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl *lpVtbl;
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
typedef interface __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment;
EXTERN_C const IID IID___FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment;
typedef struct __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                   HSTRING key,
                            __RPC__deref_out_opt __FIVectorView_1_Windows__CData__CText__CTextSegment * **value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, __RPC__deref_out_opt __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                   HSTRING key,
                   __RPC__in_opt __FIVectorView_1_Windows__CData__CText__CTextSegment * *value,
                            __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This);
    END_INTERFACE
} __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl;
interface __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment
{
    CONST_VTBL struct __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CStorage_CIStorageFolder __x_ABI_CWindows_CStorage_CIStorageFolder;
typedef interface __FIIterator_1_Windows__CStorage__CStorageFolder __FIIterator_1_Windows__CStorage__CStorageFolder;
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CStorageFolder;
typedef struct __FIIterator_1_Windows__CStorage__CStorageFolderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This, __RPC__out __x_ABI_CWindows_CStorage_CIStorageFolder * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageFolder * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CStorageFolderVtbl;
interface __FIIterator_1_Windows__CStorage__CStorageFolder
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CStorageFolderVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CStorage__CStorageFolder __FIIterable_1_Windows__CStorage__CStorageFolder;
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CStorageFolder;
typedef struct __FIIterable_1_Windows__CStorage__CStorageFolderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CStorage__CStorageFolder * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFolder * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFolder * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFolder * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFolder * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFolder * This, __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CStorageFolder **first);
    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CStorageFolderVtbl;
interface __FIIterable_1_Windows__CStorage__CStorageFolder
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CStorageFolderVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CStorage__CStorageFolder __FIVectorView_1_Windows__CStorage__CStorageFolder;
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CStorageFolder;
typedef struct __FIVectorView_1_Windows__CStorage__CStorageFolderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CStorage_CIStorageFolder * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This,
                       __x_ABI_CWindows_CStorage_CIStorageFolder * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageFolder * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CStorageFolderVtbl;
interface __FIVectorView_1_Windows__CStorage__CStorageFolder
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CStorageFolderVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolderVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolderVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This, __RPC__out __FIVectorView_1_Windows__CStorage__CStorageFolder * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolderVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolderVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CStorage_CIStorageItem __x_ABI_CWindows_CStorage_CIStorageItem;
typedef interface __FIIterator_1_Windows__CStorage__CIStorageItem __FIIterator_1_Windows__CStorage__CIStorageItem;
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CIStorageItem;
typedef struct __FIIterator_1_Windows__CStorage__CIStorageItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This, __RPC__out __x_ABI_CWindows_CStorage_CIStorageItem * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageItem * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CIStorageItemVtbl;
interface __FIIterator_1_Windows__CStorage__CIStorageItem
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CIStorageItemVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CStorage__CIStorageItem __FIIterable_1_Windows__CStorage__CIStorageItem;
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CIStorageItem;
typedef struct __FIIterable_1_Windows__CStorage__CIStorageItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This, __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CIStorageItem **first);
    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CIStorageItemVtbl;
interface __FIIterable_1_Windows__CStorage__CIStorageItem
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CIStorageItemVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CStorage__CIStorageItem __FIVectorView_1_Windows__CStorage__CIStorageItem;
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CIStorageItem;
typedef struct __FIVectorView_1_Windows__CStorage__CIStorageItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CStorage_CIStorageItem * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
                       __x_ABI_CWindows_CStorage_CIStorageItem * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageItem * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CIStorageItemVtbl;
interface __FIVectorView_1_Windows__CStorage__CIStorageItem
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CIStorageItemVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItemVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItemVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This, __RPC__out __FIVectorView_1_Windows__CStorage__CIStorageItem * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItemVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItemVtbl *lpVtbl;
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
typedef struct __x_ABI_CWindows_CData_CText_CTextSegment __x_ABI_CWindows_CData_CText_CTextSegment;
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef enum __x_ABI_CWindows_CStorage_CFileProperties_CPropertyPrefetchOptions __x_ABI_CWindows_CStorage_CFileProperties_CPropertyPrefetchOptions;
typedef enum __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailMode __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailMode;
typedef enum __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailOptions __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailOptions;
typedef interface __x_ABI_CWindows_CStorage_CIStorageLibraryChangeTracker __x_ABI_CWindows_CStorage_CIStorageLibraryChangeTracker;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;
typedef enum __x_ABI_CWindows_CStorage_CSearch_CCommonFileQuery __x_ABI_CWindows_CStorage_CSearch_CCommonFileQuery;
typedef enum __x_ABI_CWindows_CStorage_CSearch_CCommonFolderQuery __x_ABI_CWindows_CStorage_CSearch_CCommonFolderQuery;
typedef enum __x_ABI_CWindows_CStorage_CSearch_CDateStackOption __x_ABI_CWindows_CStorage_CSearch_CDateStackOption;
typedef enum __x_ABI_CWindows_CStorage_CSearch_CFolderDepth __x_ABI_CWindows_CStorage_CSearch_CFolderDepth;
typedef enum __x_ABI_CWindows_CStorage_CSearch_CIndexedState __x_ABI_CWindows_CStorage_CSearch_CIndexedState;
typedef enum __x_ABI_CWindows_CStorage_CSearch_CIndexerOption __x_ABI_CWindows_CStorage_CSearch_CIndexerOption;
typedef struct __x_ABI_CWindows_CStorage_CSearch_CSortEntry __x_ABI_CWindows_CStorage_CSearch_CSortEntry;
enum __x_ABI_CWindows_CStorage_CSearch_CCommonFileQuery
{
    CommonFileQuery_DefaultQuery = 0,
    CommonFileQuery_OrderByName = 1,
    CommonFileQuery_OrderByTitle = 2,
    CommonFileQuery_OrderByMusicProperties = 3,
    CommonFileQuery_OrderBySearchRank = 4,
    CommonFileQuery_OrderByDate = 5,
};
enum __x_ABI_CWindows_CStorage_CSearch_CCommonFolderQuery
{
    CommonFolderQuery_DefaultQuery = 0,
    CommonFolderQuery_GroupByYear = 100,
    CommonFolderQuery_GroupByMonth = 101,
    CommonFolderQuery_GroupByArtist = 102,
    CommonFolderQuery_GroupByAlbum = 103,
    CommonFolderQuery_GroupByAlbumArtist = 104,
    CommonFolderQuery_GroupByComposer = 105,
    CommonFolderQuery_GroupByGenre = 106,
    CommonFolderQuery_GroupByPublishedYear = 107,
    CommonFolderQuery_GroupByRating = 108,
    CommonFolderQuery_GroupByTag = 109,
    CommonFolderQuery_GroupByAuthor = 110,
    CommonFolderQuery_GroupByType = 111,
};
enum __x_ABI_CWindows_CStorage_CSearch_CDateStackOption
{
    DateStackOption_None = 0,
    DateStackOption_Year = 1,
    DateStackOption_Month = 2,
};
enum __x_ABI_CWindows_CStorage_CSearch_CFolderDepth
{
    FolderDepth_Shallow = 0,
    FolderDepth_Deep = 1,
};
enum __x_ABI_CWindows_CStorage_CSearch_CIndexedState
{
    IndexedState_Unknown = 0,
    IndexedState_NotIndexed = 1,
    IndexedState_PartiallyIndexed = 2,
    IndexedState_FullyIndexed = 3,
};
enum __x_ABI_CWindows_CStorage_CSearch_CIndexerOption
{
    IndexerOption_UseIndexerWhenAvailable = 0,
    IndexerOption_OnlyUseIndexer = 1,
    IndexerOption_DoNotUseIndexer = 2,
    IndexerOption_OnlyUseIndexerAndOptimizeForIndexedProperties = 3,
};
struct __x_ABI_CWindows_CStorage_CSearch_CSortEntry
{
    HSTRING PropertyName;
    boolean AscendingOrder;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IContentIndexer[] = L"Windows.Storage.Search.IContentIndexer";
typedef struct __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AddAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * indexableContent,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * indexableContent,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer * This,
                  __RPC__in HSTRING contentId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteMultipleAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * contentIds,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteAllAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RetrievePropertiesAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer * This,
                  __RPC__in HSTRING contentId,
                  __RPC__in_opt __FIIterable_1_HSTRING * propertiesToRetrieve,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Revision )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer * This,
                           __RPC__out UINT64 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerVtbl;
interface __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AddAsync(This,indexableContent,operation) )
    ( (This)->lpVtbl->UpdateAsync(This,indexableContent,operation) )
    ( (This)->lpVtbl->DeleteAsync(This,contentId,operation) )
    ( (This)->lpVtbl->DeleteMultipleAsync(This,contentIds,operation) )
    ( (This)->lpVtbl->DeleteAllAsync(This,operation) )
    ( (This)->lpVtbl->RetrievePropertiesAsync(This,contentId,propertiesToRetrieve,operation) )
    ( (This)->lpVtbl->get_Revision(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIContentIndexer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IContentIndexerQuery[] = L"Windows.Storage.Search.IContentIndexerQuery";
typedef struct __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCountAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetPropertiesAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetPropertiesRangeAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery * This,
                  UINT32 startIndex,
                  UINT32 maxItems,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetRangeAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery * This,
                  UINT32 startIndex,
                  UINT32 maxItems,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_QueryFolder )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryVtbl;
interface __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCountAsync(This,operation) )
    ( (This)->lpVtbl->GetPropertiesAsync(This,operation) )
    ( (This)->lpVtbl->GetPropertiesRangeAsync(This,startIndex,maxItems,operation) )
    ( (This)->lpVtbl->GetAsync(This,operation) )
    ( (This)->lpVtbl->GetRangeAsync(This,startIndex,maxItems,operation) )
    ( (This)->lpVtbl->get_QueryFolder(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IContentIndexerQueryOperations[] = L"Windows.Storage.Search.IContentIndexerQueryOperations";
typedef struct __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperationsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateQueryWithSortOrderAndLanguage )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations * This,
                  __RPC__in HSTRING searchFilter,
                  __RPC__in_opt __FIIterable_1_HSTRING * propertiesToRetrieve,
                  __RPC__in_opt __FIIterable_1_Windows__CStorage__CSearch__CSortEntry * sortOrder,
                  __RPC__in HSTRING searchFilterLanguage,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery * * query
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateQueryWithSortOrder )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations * This,
                  __RPC__in HSTRING searchFilter,
                  __RPC__in_opt __FIIterable_1_HSTRING * propertiesToRetrieve,
                  __RPC__in_opt __FIIterable_1_Windows__CStorage__CSearch__CSortEntry * sortOrder,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery * * query
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateQuery )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations * This,
                  __RPC__in HSTRING searchFilter,
                  __RPC__in_opt __FIIterable_1_HSTRING * propertiesToRetrieve,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery * * query
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperationsVtbl;
interface __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperationsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateQueryWithSortOrderAndLanguage(This,searchFilter,propertiesToRetrieve,sortOrder,searchFilterLanguage,query) )
    ( (This)->lpVtbl->CreateQueryWithSortOrder(This,searchFilter,propertiesToRetrieve,sortOrder,query) )
    ( (This)->lpVtbl->CreateQuery(This,searchFilter,propertiesToRetrieve,query) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IContentIndexerStatics[] = L"Windows.Storage.Search.IContentIndexerStatics";
typedef struct __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetIndexerWithName )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics * This,
                  __RPC__in HSTRING indexName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer * * index
        );
                    HRESULT ( STDMETHODCALLTYPE *GetIndexer )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer * * index
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStaticsVtbl;
interface __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetIndexerWithName(This,indexName,index) )
    ( (This)->lpVtbl->GetIndexer(This,index) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IIndexableContent[] = L"Windows.Storage.Search.IIndexableContent";
typedef struct __x_ABI_CWindows_CStorage_CSearch_CIIndexableContentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Id )(
        __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * This,
                           __RPC__deref_out_opt __FIMap_2_HSTRING_IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Stream )(
        __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Stream )(
        __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StreamContentType )(
        __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StreamContentType )(
        __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CSearch_CIIndexableContentVtbl;
interface __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CSearch_CIIndexableContentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->put_Id(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
    ( (This)->lpVtbl->get_Stream(This,value) )
    ( (This)->lpVtbl->put_Stream(This,value) )
    ( (This)->lpVtbl->get_StreamContentType(This,value) )
    ( (This)->lpVtbl->put_StreamContentType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIIndexableContent;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IQueryOptions[] = L"Windows.Storage.Search.IQueryOptions";
typedef struct __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FileTypeFilter )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FolderDepth )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
                           __RPC__out __x_ABI_CWindows_CStorage_CSearch_CFolderDepth * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FolderDepth )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
                  __x_ABI_CWindows_CStorage_CSearch_CFolderDepth value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ApplicationSearchFilter )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ApplicationSearchFilter )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UserSearchFilter )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_UserSearchFilter )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Language )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Language )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IndexerOption )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
                           __RPC__out __x_ABI_CWindows_CStorage_CSearch_CIndexerOption * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IndexerOption )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
                  __x_ABI_CWindows_CStorage_CSearch_CIndexerOption value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SortOrder )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CStorage__CSearch__CSortEntry * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GroupPropertyName )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DateStackOption )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
                           __RPC__out __x_ABI_CWindows_CStorage_CSearch_CDateStackOption * value
        );
    HRESULT ( STDMETHODCALLTYPE *SaveToString )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *LoadFromString )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
                  __RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *SetThumbnailPrefetch )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
                  __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailMode mode,
                  UINT32 requestedSize,
                  __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailOptions options
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyPrefetch )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
                  __x_ABI_CWindows_CStorage_CFileProperties_CPropertyPrefetchOptions options,
                  __RPC__in_opt __FIIterable_1_HSTRING * propertiesToRetrieve
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsVtbl;
interface __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FileTypeFilter(This,value) )
    ( (This)->lpVtbl->get_FolderDepth(This,value) )
    ( (This)->lpVtbl->put_FolderDepth(This,value) )
    ( (This)->lpVtbl->get_ApplicationSearchFilter(This,value) )
    ( (This)->lpVtbl->put_ApplicationSearchFilter(This,value) )
    ( (This)->lpVtbl->get_UserSearchFilter(This,value) )
    ( (This)->lpVtbl->put_UserSearchFilter(This,value) )
    ( (This)->lpVtbl->get_Language(This,value) )
    ( (This)->lpVtbl->put_Language(This,value) )
    ( (This)->lpVtbl->get_IndexerOption(This,value) )
    ( (This)->lpVtbl->put_IndexerOption(This,value) )
    ( (This)->lpVtbl->get_SortOrder(This,value) )
    ( (This)->lpVtbl->get_GroupPropertyName(This,value) )
    ( (This)->lpVtbl->get_DateStackOption(This,value) )
    ( (This)->lpVtbl->SaveToString(This,value) )
    ( (This)->lpVtbl->LoadFromString(This,value) )
    ( (This)->lpVtbl->SetThumbnailPrefetch(This,mode,requestedSize,options) )
    ( (This)->lpVtbl->SetPropertyPrefetch(This,options,propertiesToRetrieve) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIQueryOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IQueryOptionsFactory[] = L"Windows.Storage.Search.IQueryOptionsFactory";
typedef struct __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateCommonFileQuery )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory * This,
                  __x_ABI_CWindows_CStorage_CSearch_CCommonFileQuery query,
                  __RPC__in_opt __FIIterable_1_HSTRING * fileTypeFilter,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * * queryOptions
        );
    HRESULT ( STDMETHODCALLTYPE *CreateCommonFolderQuery )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory * This,
                  __x_ABI_CWindows_CStorage_CSearch_CCommonFolderQuery query,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * * queryOptions
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactoryVtbl;
interface __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateCommonFileQuery(This,query,fileTypeFilter,queryOptions) )
    ( (This)->lpVtbl->CreateCommonFolderQuery(This,query,queryOptions) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IQueryOptionsWithProviderFilter[] = L"Windows.Storage.Search.IQueryOptionsWithProviderFilter";
typedef struct __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StorageProviderIdFilter )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilterVtbl;
interface __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StorageProviderIdFilter(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IStorageFileQueryResult[] = L"Windows.Storage.Search.IStorageFileQueryResult";
typedef struct __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetFilesAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult * This,
                  UINT32 startIndex,
                  UINT32 maxNumberOfItems,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetFilesAsyncDefaultStartAndCount )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResultVtbl;
interface __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetFilesAsync(This,startIndex,maxNumberOfItems,operation) )
    ( (This)->lpVtbl->GetFilesAsyncDefaultStartAndCount(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IStorageFileQueryResult2[] = L"Windows.Storage.Search.IStorageFileQueryResult2";
typedef struct __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetMatchingPropertiesWithRanges )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                           __RPC__deref_out_opt __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2Vtbl;
interface __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetMatchingPropertiesWithRanges(This,file,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IStorageFolderQueryOperations[] = L"Windows.Storage.Search.IStorageFolderQueryOperations";
typedef struct __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperationsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetIndexedStateAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFileQueryOverloadDefault )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFileQuery )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
                  __x_ABI_CWindows_CStorage_CSearch_CCommonFileQuery query,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFileQueryWithOptions )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * queryOptions,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFolderQueryOverloadDefault )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFolderQuery )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
                  __x_ABI_CWindows_CStorage_CSearch_CCommonFolderQuery query,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFolderQueryWithOptions )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * queryOptions,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateItemQuery )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateItemQueryWithOptions )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * queryOptions,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *GetFilesAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
                  __x_ABI_CWindows_CStorage_CSearch_CCommonFileQuery query,
                  UINT32 startIndex,
                  UINT32 maxItemsToRetrieve,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetFilesAsyncOverloadDefaultStartAndCount )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
                  __x_ABI_CWindows_CStorage_CSearch_CCommonFileQuery query,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetFoldersAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
                  __x_ABI_CWindows_CStorage_CSearch_CCommonFolderQuery query,
                  UINT32 startIndex,
                  UINT32 maxItemsToRetrieve,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetFoldersAsyncOverloadDefaultStartAndCount )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
                  __x_ABI_CWindows_CStorage_CSearch_CCommonFolderQuery query,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetItemsAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
                  UINT32 startIndex,
                  UINT32 maxItemsToRetrieve,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *AreQueryOptionsSupported )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * queryOptions,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsCommonFolderQuerySupported )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
                  __x_ABI_CWindows_CStorage_CSearch_CCommonFolderQuery query,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsCommonFileQuerySupported )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
                  __x_ABI_CWindows_CStorage_CSearch_CCommonFileQuery query,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperationsVtbl;
interface __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperationsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetIndexedStateAsync(This,operation) )
    ( (This)->lpVtbl->CreateFileQueryOverloadDefault(This,value) )
    ( (This)->lpVtbl->CreateFileQuery(This,query,value) )
    ( (This)->lpVtbl->CreateFileQueryWithOptions(This,queryOptions,value) )
    ( (This)->lpVtbl->CreateFolderQueryOverloadDefault(This,value) )
    ( (This)->lpVtbl->CreateFolderQuery(This,query,value) )
    ( (This)->lpVtbl->CreateFolderQueryWithOptions(This,queryOptions,value) )
    ( (This)->lpVtbl->CreateItemQuery(This,value) )
    ( (This)->lpVtbl->CreateItemQueryWithOptions(This,queryOptions,value) )
    ( (This)->lpVtbl->GetFilesAsync(This,query,startIndex,maxItemsToRetrieve,operation) )
    ( (This)->lpVtbl->GetFilesAsyncOverloadDefaultStartAndCount(This,query,operation) )
    ( (This)->lpVtbl->GetFoldersAsync(This,query,startIndex,maxItemsToRetrieve,operation) )
    ( (This)->lpVtbl->GetFoldersAsyncOverloadDefaultStartAndCount(This,query,operation) )
    ( (This)->lpVtbl->GetItemsAsync(This,startIndex,maxItemsToRetrieve,operation) )
    ( (This)->lpVtbl->AreQueryOptionsSupported(This,queryOptions,value) )
    ( (This)->lpVtbl->IsCommonFolderQuerySupported(This,query,value) )
    ( (This)->lpVtbl->IsCommonFileQuerySupported(This,query,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IStorageFolderQueryResult[] = L"Windows.Storage.Search.IStorageFolderQueryResult";
typedef struct __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetFoldersAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult * This,
                  UINT32 startIndex,
                  UINT32 maxNumberOfItems,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetFoldersAsyncDefaultStartAndCount )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResultVtbl;
interface __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetFoldersAsync(This,startIndex,maxNumberOfItems,operation) )
    ( (This)->lpVtbl->GetFoldersAsyncDefaultStartAndCount(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IStorageItemQueryResult[] = L"Windows.Storage.Search.IStorageItemQueryResult";
typedef struct __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetItemsAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult * This,
                  UINT32 startIndex,
                  UINT32 maxNumberOfItems,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetItemsAsyncDefaultStartAndCount )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResultVtbl;
interface __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetItemsAsync(This,startIndex,maxNumberOfItems,operation) )
    ( (This)->lpVtbl->GetItemsAsyncDefaultStartAndCount(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IStorageLibraryChangeTrackerTriggerDetails[] = L"Windows.Storage.Search.IStorageLibraryChangeTrackerTriggerDetails";
typedef struct __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryChangeTrackerTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryChangeTrackerTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryChangeTrackerTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryChangeTrackerTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryChangeTrackerTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryChangeTrackerTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryChangeTrackerTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Folder )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryChangeTrackerTriggerDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChangeTracker )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryChangeTrackerTriggerDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageLibraryChangeTracker * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryChangeTrackerTriggerDetailsVtbl;
interface __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryChangeTrackerTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryChangeTrackerTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Folder(This,value) )
    ( (This)->lpVtbl->get_ChangeTracker(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryChangeTrackerTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IStorageLibraryContentChangedTriggerDetails[] = L"Windows.Storage.Search.IStorageLibraryContentChangedTriggerDetails";
typedef struct __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Folder )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateModifiedSinceQuery )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails * This,
                  __x_ABI_CWindows_CFoundation_CDateTime lastQueryTime,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetailsVtbl;
interface __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Folder(This,value) )
    ( (This)->lpVtbl->CreateModifiedSinceQuery(This,lastQueryTime,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IStorageQueryResultBase[] = L"Windows.Storage.Search.IStorageQueryResultBase";
typedef struct __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetItemCountAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Folder )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * container
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ContentsChanged )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable * handler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ContentsChanged )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * This,
                  EventRegistrationToken eventCookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_OptionsChanged )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable * changedHandler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_OptionsChanged )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * This,
                  EventRegistrationToken eventCookie
        );
    HRESULT ( STDMETHODCALLTYPE *FindStartIndexAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * This,
                  __RPC__in_opt IInspectable * value,
                           __RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentQueryOptions )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ApplyNewQueryOptions )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * newQueryOptions
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBaseVtbl;
interface __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBaseVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetItemCountAsync(This,operation) )
    ( (This)->lpVtbl->get_Folder(This,container) )
    ( (This)->lpVtbl->add_ContentsChanged(This,handler,eventCookie) )
    ( (This)->lpVtbl->remove_ContentsChanged(This,eventCookie) )
    ( (This)->lpVtbl->add_OptionsChanged(This,changedHandler,eventCookie) )
    ( (This)->lpVtbl->remove_OptionsChanged(This,eventCookie) )
    ( (This)->lpVtbl->FindStartIndexAsync(This,value,operation) )
    ( (This)->lpVtbl->GetCurrentQueryOptions(This,value) )
    ( (This)->lpVtbl->ApplyNewQueryOptions(This,newQueryOptions) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IValueAndLanguage[] = L"Windows.Storage.Search.IValueAndLanguage";
typedef struct __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Language )(
        __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Language )(
        __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage * This,
                  __RPC__in_opt IInspectable * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguageVtbl;
interface __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Language(This,value) )
    ( (This)->lpVtbl->put_Language(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->put_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Search_ContentIndexer[] = L"Windows.Storage.Search.ContentIndexer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Search_ContentIndexerQuery[] = L"Windows.Storage.Search.ContentIndexerQuery";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Search_IndexableContent[] = L"Windows.Storage.Search.IndexableContent";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Search_QueryOptions[] = L"Windows.Storage.Search.QueryOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Search_SortEntryVector[] = L"Windows.Storage.Search.SortEntryVector";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Search_StorageFileQueryResult[] = L"Windows.Storage.Search.StorageFileQueryResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Search_StorageFolderQueryResult[] = L"Windows.Storage.Search.StorageFolderQueryResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Search_StorageItemQueryResult[] = L"Windows.Storage.Search.StorageItemQueryResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Search_StorageLibraryChangeTrackerTriggerDetails[] = L"Windows.Storage.Search.StorageLibraryChangeTrackerTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Search_StorageLibraryContentChangedTriggerDetails[] = L"Windows.Storage.Search.StorageLibraryContentChangedTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Search_ValueAndLanguage[] = L"Windows.Storage.Search.ValueAndLanguage";
       
       
#pragma clang diagnostic pop
