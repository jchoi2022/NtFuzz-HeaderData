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
#include "Windows.Storage.FileProperties.h"
#include "Windows.Storage.Search.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactory __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactory;
typedef interface __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactoryFactory __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactoryFactory;
typedef interface __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation;
typedef interface __FIIterator_1_Windows__CStorage__CBulkAccess__CFileInformation __FIIterator_1_Windows__CStorage__CBulkAccess__CFileInformation;
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CBulkAccess__CFileInformation;
typedef struct __FIIterator_1_Windows__CStorage__CBulkAccess__CFileInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CStorage__CBulkAccess__CFileInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CBulkAccess__CFileInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CBulkAccess__CFileInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CBulkAccess__CFileInformation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CBulkAccess__CFileInformation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CBulkAccess__CFileInformation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CBulkAccess__CFileInformation * This, __RPC__out __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CBulkAccess__CFileInformation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CBulkAccess__CFileInformation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CBulkAccess__CFileInformation * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CBulkAccess__CFileInformationVtbl;
interface __FIIterator_1_Windows__CStorage__CBulkAccess__CFileInformation
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CBulkAccess__CFileInformationVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CStorage__CBulkAccess__CFileInformation __FIIterable_1_Windows__CStorage__CBulkAccess__CFileInformation;
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CBulkAccess__CFileInformation;
typedef struct __FIIterable_1_Windows__CStorage__CBulkAccess__CFileInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CStorage__CBulkAccess__CFileInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CBulkAccess__CFileInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CBulkAccess__CFileInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CBulkAccess__CFileInformation * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CBulkAccess__CFileInformation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CBulkAccess__CFileInformation * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CBulkAccess__CFileInformation * This, __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CBulkAccess__CFileInformation **first);
    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CBulkAccess__CFileInformationVtbl;
interface __FIIterable_1_Windows__CStorage__CBulkAccess__CFileInformation
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CBulkAccess__CFileInformationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CStorage__CBulkAccess__CFolderInformation __FIIterator_1_Windows__CStorage__CBulkAccess__CFolderInformation;
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CBulkAccess__CFolderInformation;
typedef struct __FIIterator_1_Windows__CStorage__CBulkAccess__CFolderInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CStorage__CBulkAccess__CFolderInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CBulkAccess__CFolderInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CBulkAccess__CFolderInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CBulkAccess__CFolderInformation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CBulkAccess__CFolderInformation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CBulkAccess__CFolderInformation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CBulkAccess__CFolderInformation * This, __RPC__out __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CBulkAccess__CFolderInformation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CBulkAccess__CFolderInformation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CBulkAccess__CFolderInformation * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CBulkAccess__CFolderInformationVtbl;
interface __FIIterator_1_Windows__CStorage__CBulkAccess__CFolderInformation
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CBulkAccess__CFolderInformationVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CStorage__CBulkAccess__CFolderInformation __FIIterable_1_Windows__CStorage__CBulkAccess__CFolderInformation;
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CBulkAccess__CFolderInformation;
typedef struct __FIIterable_1_Windows__CStorage__CBulkAccess__CFolderInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CStorage__CBulkAccess__CFolderInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CBulkAccess__CFolderInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CBulkAccess__CFolderInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CBulkAccess__CFolderInformation * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CBulkAccess__CFolderInformation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CBulkAccess__CFolderInformation * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CBulkAccess__CFolderInformation * This, __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CBulkAccess__CFolderInformation **first);
    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CBulkAccess__CFolderInformationVtbl;
interface __FIIterable_1_Windows__CStorage__CBulkAccess__CFolderInformation
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CBulkAccess__CFolderInformationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation __FIIterator_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation;
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation;
typedef struct __FIIterator_1_Windows__CStorage__CBulkAccess__CIStorageItemInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This, __RPC__out __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CBulkAccess__CIStorageItemInformationVtbl;
interface __FIIterator_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CBulkAccess__CIStorageItemInformationVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation __FIIterable_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation;
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation;
typedef struct __FIIterable_1_Windows__CStorage__CBulkAccess__CIStorageItemInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This, __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation **first);
    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CBulkAccess__CIStorageItemInformationVtbl;
interface __FIIterable_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CBulkAccess__CIStorageItemInformationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation __FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation;
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation;
typedef struct __FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation * This,
                       __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformationVtbl;
interface __FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformationVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation __FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation;
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation;
typedef struct __FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation * This,
                       __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformationVtbl;
interface __FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformationVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation __FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation;
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation;
typedef struct __FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This,
                       __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformationVtbl;
interface __FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformationVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformationVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation * This, __RPC__out __FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformationVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformationVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformationVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation * This, __RPC__out __FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformationVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformationVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformationVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * This, __RPC__out __FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformationVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformationVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CStorage__CBulkAccess__CIStorageItemInformation_IInspectable __FITypedEventHandler_2_Windows__CStorage__CBulkAccess__CIStorageItemInformation_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CStorage__CBulkAccess__CIStorageItemInformation_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CStorage__CBulkAccess__CIStorageItemInformation_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CBulkAccess__CIStorageItemInformation_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CBulkAccess__CIStorageItemInformation_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CBulkAccess__CIStorageItemInformation_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CBulkAccess__CIStorageItemInformation_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CStorage__CBulkAccess__CIStorageItemInformation_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CStorage__CBulkAccess__CIStorageItemInformation_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CStorage__CBulkAccess__CIStorageItemInformation_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CStorage_CFileProperties_CIBasicProperties __x_ABI_CWindows_CStorage_CFileProperties_CIBasicProperties;
typedef interface __x_ABI_CWindows_CStorage_CFileProperties_CIDocumentProperties __x_ABI_CWindows_CStorage_CFileProperties_CIDocumentProperties;
typedef interface __x_ABI_CWindows_CStorage_CFileProperties_CIImageProperties __x_ABI_CWindows_CStorage_CFileProperties_CIImageProperties;
typedef interface __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType;
typedef enum __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailMode __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailMode;
typedef enum __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailOptions __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailOptions;
typedef interface __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile2 __x_ABI_CWindows_CStorage_CIStorageFile2;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFilePropertiesWithAvailability __x_ABI_CWindows_CStorage_CIStorageFilePropertiesWithAvailability;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFolder __x_ABI_CWindows_CStorage_CIStorageFolder;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFolder2 __x_ABI_CWindows_CStorage_CIStorageFolder2;
typedef interface __x_ABI_CWindows_CStorage_CIStorageItem __x_ABI_CWindows_CStorage_CIStorageItem;
typedef interface __x_ABI_CWindows_CStorage_CIStorageItem2 __x_ABI_CWindows_CStorage_CIStorageItem2;
typedef interface __x_ABI_CWindows_CStorage_CIStorageItemProperties __x_ABI_CWindows_CStorage_CIStorageItemProperties;
typedef interface __x_ABI_CWindows_CStorage_CIStorageItemPropertiesWithProvider __x_ABI_CWindows_CStorage_CIStorageItemPropertiesWithProvider;
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations;
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference __x_ABI_CWindows_CStorage_CStreams_CIInputStreamReference;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_BulkAccess_IFileInformationFactory[] = L"Windows.Storage.BulkAccess.IFileInformationFactory";
typedef struct __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetItemsAsync )(
        __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactory * This,
                  UINT32 startIndex,
                  UINT32 maxItemsToRetrieve,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetItemsAsyncDefaultStartAndCount )(
        __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactory * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CIStorageItemInformation * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetFilesAsync )(
        __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactory * This,
                  UINT32 startIndex,
                  UINT32 maxItemsToRetrieve,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetFilesAsyncDefaultStartAndCount )(
        __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactory * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFileInformation * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetFoldersAsync )(
        __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactory * This,
                  UINT32 startIndex,
                  UINT32 maxItemsToRetrieve,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetFoldersAsyncDefaultStartAndCount )(
        __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactory * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CBulkAccess__CFolderInformation * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetVirtualizedItemsVector )(
        __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactory * This,
                           __RPC__deref_out_opt IInspectable * * vector
        );
    HRESULT ( STDMETHODCALLTYPE *GetVirtualizedFilesVector )(
        __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactory * This,
                           __RPC__deref_out_opt IInspectable * * vector
        );
    HRESULT ( STDMETHODCALLTYPE *GetVirtualizedFoldersVector )(
        __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactory * This,
                           __RPC__deref_out_opt IInspectable * * vector
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactoryVtbl;
interface __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetItemsAsync(This,startIndex,maxItemsToRetrieve,operation) )
    ( (This)->lpVtbl->GetItemsAsyncDefaultStartAndCount(This,operation) )
    ( (This)->lpVtbl->GetFilesAsync(This,startIndex,maxItemsToRetrieve,operation) )
    ( (This)->lpVtbl->GetFilesAsyncDefaultStartAndCount(This,operation) )
    ( (This)->lpVtbl->GetFoldersAsync(This,startIndex,maxItemsToRetrieve,operation) )
    ( (This)->lpVtbl->GetFoldersAsyncDefaultStartAndCount(This,operation) )
    ( (This)->lpVtbl->GetVirtualizedItemsVector(This,vector) )
    ( (This)->lpVtbl->GetVirtualizedFilesVector(This,vector) )
    ( (This)->lpVtbl->GetVirtualizedFoldersVector(This,vector) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_BulkAccess_IFileInformationFactoryFactory[] = L"Windows.Storage.BulkAccess.IFileInformationFactoryFactory";
typedef struct __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactoryFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactoryFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactoryFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactoryFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactoryFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactoryFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactoryFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithMode )(
        __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactoryFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * queryResult,
                  __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailMode mode,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactory * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithModeAndSize )(
        __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactoryFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * queryResult,
                  __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailMode mode,
                  UINT32 requestedThumbnailSize,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactory * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithModeAndSizeAndOptions )(
        __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactoryFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * queryResult,
                  __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailMode mode,
                  UINT32 requestedThumbnailSize,
                  __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailOptions thumbnailOptions,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactory * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithModeAndSizeAndOptionsAndFlags )(
        __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactoryFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * queryResult,
                  __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailMode mode,
                  UINT32 requestedThumbnailSize,
                  __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailOptions thumbnailOptions,
                  boolean delayLoad,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactory * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactoryFactoryVtbl;
interface __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactoryFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactoryFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWithMode(This,queryResult,mode,value) )
    ( (This)->lpVtbl->CreateWithModeAndSize(This,queryResult,mode,requestedThumbnailSize,value) )
    ( (This)->lpVtbl->CreateWithModeAndSizeAndOptions(This,queryResult,mode,requestedThumbnailSize,thumbnailOptions,value) )
    ( (This)->lpVtbl->CreateWithModeAndSizeAndOptionsAndFlags(This,queryResult,mode,requestedThumbnailSize,thumbnailOptions,delayLoad,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CBulkAccess_CIFileInformationFactoryFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_BulkAccess_IStorageItemInformation[] = L"Windows.Storage.BulkAccess.IStorageItemInformation";
typedef struct __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MusicProperties )(
        __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoProperties )(
        __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ImageProperties )(
        __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CFileProperties_CIImageProperties * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DocumentProperties )(
        __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CFileProperties_CIDocumentProperties * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BasicProperties )(
        __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CFileProperties_CIBasicProperties * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Thumbnail )(
        __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ThumbnailUpdated )(
        __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CStorage__CBulkAccess__CIStorageItemInformation_IInspectable * changedHandler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ThumbnailUpdated )(
        __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation * This,
                  EventRegistrationToken eventCookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PropertiesUpdated )(
        __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CStorage__CBulkAccess__CIStorageItemInformation_IInspectable * changedHandler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PropertiesUpdated )(
        __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation * This,
                  EventRegistrationToken eventCookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformationVtbl;
interface __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MusicProperties(This,value) )
    ( (This)->lpVtbl->get_VideoProperties(This,value) )
    ( (This)->lpVtbl->get_ImageProperties(This,value) )
    ( (This)->lpVtbl->get_DocumentProperties(This,value) )
    ( (This)->lpVtbl->get_BasicProperties(This,value) )
    ( (This)->lpVtbl->get_Thumbnail(This,value) )
    ( (This)->lpVtbl->add_ThumbnailUpdated(This,changedHandler,eventCookie) )
    ( (This)->lpVtbl->remove_ThumbnailUpdated(This,eventCookie) )
    ( (This)->lpVtbl->add_PropertiesUpdated(This,changedHandler,eventCookie) )
    ( (This)->lpVtbl->remove_PropertiesUpdated(This,eventCookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CBulkAccess_CIStorageItemInformation;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_BulkAccess_FileInformation[] = L"Windows.Storage.BulkAccess.FileInformation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_BulkAccess_FileInformationFactory[] = L"Windows.Storage.BulkAccess.FileInformationFactory";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_BulkAccess_FolderInformation[] = L"Windows.Storage.BulkAccess.FolderInformation";
       
       
#pragma clang diagnostic pop
