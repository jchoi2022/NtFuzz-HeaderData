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
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult;
typedef interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult;
typedef interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2 __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2;
typedef interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult;
typedef interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem;
typedef interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem2 __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem2;
typedef interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics;
typedef interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation;
typedef interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession;
typedef interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2 __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2;
typedef interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar;
typedef interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource;
typedef interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics;
typedef interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium;
typedef interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment;
typedef interface __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem;
typedef struct __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem * This, __RPC__out __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItemVtbl;
interface __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItemVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem;
typedef struct __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CImport__CPhotoImportItem **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItemVtbl;
interface __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItem
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CImport__CPhotoImportItemVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation;
typedef struct __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation * This, __RPC__out __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperationVtbl;
interface __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperationVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation;
typedef struct __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CImport__CPhotoImportOperation **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperationVtbl;
interface __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperation
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CImport__CPhotoImportOperationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar;
typedef struct __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar * This, __RPC__out __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecarVtbl;
interface __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecarVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar;
typedef struct __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSidecar **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecarVtbl;
interface __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecar
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSidecarVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource;
typedef struct __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource * This, __RPC__out __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl;
interface __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource;
typedef struct __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CImport__CPhotoImportSource **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl;
interface __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSource
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium;
typedef struct __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMediumVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This, __RPC__out __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMediumVtbl;
interface __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMediumVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium;
typedef struct __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMediumVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CImport__CPhotoImportStorageMedium **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMediumVtbl;
interface __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMedium
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CImport__CPhotoImportStorageMediumVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment;
typedef struct __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This, __RPC__out __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegmentVtbl;
interface __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegmentVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment;
typedef struct __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CImport__CPhotoImportVideoSegment **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegmentVtbl;
interface __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegment
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CImport__CPhotoImportVideoSegmentVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem;
typedef struct __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem * This,
                       __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItemVtbl;
interface __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItemVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation;
typedef struct __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation * This,
                       __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperationVtbl;
interface __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperationVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar;
typedef struct __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar * This,
                       __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecarVtbl;
interface __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecarVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource;
typedef struct __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This,
                       __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl;
interface __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium;
typedef struct __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMediumVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This,
                       __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMediumVtbl;
interface __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMediumVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment;
typedef struct __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This,
                       __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegmentVtbl;
interface __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegmentVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double;
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double;
typedef struct __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double *asyncInfo, double progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_doubleVtbl;
interface __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_doubleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) )
typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double;
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double;
typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_doubleVtbl;
interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_doubleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double;
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double;
typedef struct __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This, __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This, __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double **handler);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This, __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This, __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * This, __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_doubleVtbl;
interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_doubleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Progress(This,handler) )
    ( (This)->lpVtbl -> get_Progress(This,handler) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32;
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32;
typedef struct __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 *asyncInfo, unsigned int progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32Vtbl;
interface __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) )
typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32;
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32;
typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32Vtbl;
interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32;
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32;
typedef struct __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This, __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This, __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 **handler);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This, __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This, __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * This, __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32Vtbl;
interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Progress(This,handler) )
    ( (This)->lpVtbl -> get_Progress(This,handler) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
struct __x_ABI_CWindows_CMedia_CImport_CPhotoImportProgress;
typedef interface __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress;
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress;
typedef struct __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress *asyncInfo, struct __x_ABI_CWindows_CMedia_CImport_CPhotoImportProgress progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgressVtbl;
interface __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgressVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) )
typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress;
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress;
typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgressVtbl;
interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgressVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress;
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress;
typedef struct __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This, __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This, __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress **handler);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This, __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This, __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * This, __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgressVtbl;
interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgressVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Progress(This,handler) )
    ( (This)->lpVtbl -> get_Progress(This,handler) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * This, __RPC__out __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CImport__CPhotoImportSource **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource * This, __RPC__out __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSourceVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgs __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgs __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgsVtbl *lpVtbl;
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
typedef interface __FIReference_1_boolean __FIReference_1_boolean;
EXTERN_C const IID IID___FIReference_1_boolean;
typedef struct __FIReference_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_boolean * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_boolean * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_boolean * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_boolean * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_boolean * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_boolean * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_boolean * This, __RPC__out boolean *value);
    END_INTERFACE
} __FIReference_1_booleanVtbl;
interface __FIReference_1_boolean
{
    CONST_VTBL struct __FIReference_1_booleanVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFolder __x_ABI_CWindows_CStorage_CIStorageFolder;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;
typedef enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportAccessMode __x_ABI_CWindows_CMedia_CImport_CPhotoImportAccessMode;
typedef enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportConnectionTransport __x_ABI_CWindows_CMedia_CImport_CPhotoImportConnectionTransport;
typedef enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportContentType __x_ABI_CWindows_CMedia_CImport_CPhotoImportContentType;
typedef enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportContentTypeFilter __x_ABI_CWindows_CMedia_CImport_CPhotoImportContentTypeFilter;
typedef enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportImportMode __x_ABI_CWindows_CMedia_CImport_CPhotoImportImportMode;
typedef enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportItemSelectionMode __x_ABI_CWindows_CMedia_CImport_CPhotoImportItemSelectionMode;
typedef enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportPowerSource __x_ABI_CWindows_CMedia_CImport_CPhotoImportPowerSource;
typedef enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportSourceType __x_ABI_CWindows_CMedia_CImport_CPhotoImportSourceType;
typedef enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportStage __x_ABI_CWindows_CMedia_CImport_CPhotoImportStage;
typedef enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportStorageMediumType __x_ABI_CWindows_CMedia_CImport_CPhotoImportStorageMediumType;
typedef enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportSubfolderCreationMode __x_ABI_CWindows_CMedia_CImport_CPhotoImportSubfolderCreationMode;
typedef enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportSubfolderDateFormat __x_ABI_CWindows_CMedia_CImport_CPhotoImportSubfolderDateFormat;
typedef struct __x_ABI_CWindows_CMedia_CImport_CPhotoImportProgress __x_ABI_CWindows_CMedia_CImport_CPhotoImportProgress;
enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportAccessMode
{
    PhotoImportAccessMode_ReadWrite = 0,
    PhotoImportAccessMode_ReadOnly = 1,
    PhotoImportAccessMode_ReadAndDelete = 2,
};
enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportConnectionTransport
{
    PhotoImportConnectionTransport_Unknown = 0,
    PhotoImportConnectionTransport_Usb = 1,
    PhotoImportConnectionTransport_IP = 2,
    PhotoImportConnectionTransport_Bluetooth = 3,
};
enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportContentType
{
    PhotoImportContentType_Unknown = 0,
    PhotoImportContentType_Image = 1,
    PhotoImportContentType_Video = 2,
};
enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportContentTypeFilter
{
    PhotoImportContentTypeFilter_OnlyImages = 0,
    PhotoImportContentTypeFilter_OnlyVideos = 1,
    PhotoImportContentTypeFilter_ImagesAndVideos = 2,
    PhotoImportContentTypeFilter_ImagesAndVideosFromCameraRoll = 3,
};
enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportImportMode
{
    PhotoImportImportMode_ImportEverything = 0,
    PhotoImportImportMode_IgnoreSidecars = 1,
    PhotoImportImportMode_IgnoreSiblings = 2,
    PhotoImportImportMode_IgnoreSidecarsAndSiblings = 3,
};
enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportItemSelectionMode
{
    PhotoImportItemSelectionMode_SelectAll = 0,
    PhotoImportItemSelectionMode_SelectNone = 1,
    PhotoImportItemSelectionMode_SelectNew = 2,
};
enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportPowerSource
{
    PhotoImportPowerSource_Unknown = 0,
    PhotoImportPowerSource_Battery = 1,
    PhotoImportPowerSource_External = 2,
};
enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportSourceType
{
    PhotoImportSourceType_Generic = 0,
    PhotoImportSourceType_Camera = 1,
    PhotoImportSourceType_MediaPlayer = 2,
    PhotoImportSourceType_Phone = 3,
    PhotoImportSourceType_Video = 4,
    PhotoImportSourceType_PersonalInfoManager = 5,
    PhotoImportSourceType_AudioRecorder = 6,
};
enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportStage
{
    PhotoImportStage_NotStarted = 0,
    PhotoImportStage_FindingItems = 1,
    PhotoImportStage_ImportingItems = 2,
    PhotoImportStage_DeletingImportedItemsFromSource = 3,
};
enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportStorageMediumType
{
    PhotoImportStorageMediumType_Undefined = 0,
    PhotoImportStorageMediumType_Fixed = 1,
    PhotoImportStorageMediumType_Removable = 2,
};
enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportSubfolderCreationMode
{
    PhotoImportSubfolderCreationMode_DoNotCreateSubfolders = 0,
    PhotoImportSubfolderCreationMode_CreateSubfoldersFromFileDate = 1,
    PhotoImportSubfolderCreationMode_CreateSubfoldersFromExifDate = 2,
    PhotoImportSubfolderCreationMode_KeepOriginalFolderStructure = 3,
};
enum __x_ABI_CWindows_CMedia_CImport_CPhotoImportSubfolderDateFormat
{
    PhotoImportSubfolderDateFormat_Year = 0,
    PhotoImportSubfolderDateFormat_YearMonth = 1,
    PhotoImportSubfolderDateFormat_YearMonthDay = 2,
};
struct __x_ABI_CWindows_CMedia_CImport_CPhotoImportProgress
{
    UINT32 ItemsImported;
    UINT32 TotalItemsToImport;
    UINT64 BytesImported;
    UINT64 TotalBytesToImport;
    DOUBLE ImportProgress;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportDeleteImportedItemsFromSourceResult[] = L"Windows.Media.Import.IPhotoImportDeleteImportedItemsFromSourceResult";
typedef struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Session )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasSucceeded )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeletedItems )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhotosCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhotosSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideosCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideosSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SidecarsCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SidecarsSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SiblingsCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SiblingsSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TotalCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TotalSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult * This,
                           __RPC__out UINT64 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResultVtbl;
interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Session(This,value) )
    ( (This)->lpVtbl->get_HasSucceeded(This,value) )
    ( (This)->lpVtbl->get_DeletedItems(This,value) )
    ( (This)->lpVtbl->get_PhotosCount(This,value) )
    ( (This)->lpVtbl->get_PhotosSizeInBytes(This,value) )
    ( (This)->lpVtbl->get_VideosCount(This,value) )
    ( (This)->lpVtbl->get_VideosSizeInBytes(This,value) )
    ( (This)->lpVtbl->get_SidecarsCount(This,value) )
    ( (This)->lpVtbl->get_SidecarsSizeInBytes(This,value) )
    ( (This)->lpVtbl->get_SiblingsCount(This,value) )
    ( (This)->lpVtbl->get_SiblingsSizeInBytes(This,value) )
    ( (This)->lpVtbl->get_TotalCount(This,value) )
    ( (This)->lpVtbl->get_TotalSizeInBytes(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportDeleteImportedItemsFromSourceResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportFindItemsResult[] = L"Windows.Media.Import.IPhotoImportFindItemsResult";
typedef struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Session )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasSucceeded )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FoundItems )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhotosCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhotosSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideosCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideosSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SidecarsCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SidecarsSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SiblingsCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SiblingsSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TotalCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TotalSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
                           __RPC__out UINT64 * value
        );
    HRESULT ( STDMETHODCALLTYPE *SelectAll )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This
        );
    HRESULT ( STDMETHODCALLTYPE *SelectNone )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This
        );
    HRESULT ( STDMETHODCALLTYPE *SelectNewAsync )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    HRESULT ( STDMETHODCALLTYPE *SetImportMode )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
                  __x_ABI_CWindows_CMedia_CImport_CPhotoImportImportMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ImportMode )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CImport_CPhotoImportImportMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedPhotosCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedPhotosSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedVideosCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedVideosSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedSidecarsCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedSidecarsSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedSiblingsCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedSiblingsSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedTotalCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedTotalSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
                           __RPC__out UINT64 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SelectionChanged )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportSelectionChangedEventArgs * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SelectionChanged )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *ImportItemsAsync )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ItemImported )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_Windows__CMedia__CImport__CPhotoImportItemImportedEventArgs * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ItemImported )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResultVtbl;
interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Session(This,value) )
    ( (This)->lpVtbl->get_HasSucceeded(This,value) )
    ( (This)->lpVtbl->get_FoundItems(This,value) )
    ( (This)->lpVtbl->get_PhotosCount(This,value) )
    ( (This)->lpVtbl->get_PhotosSizeInBytes(This,value) )
    ( (This)->lpVtbl->get_VideosCount(This,value) )
    ( (This)->lpVtbl->get_VideosSizeInBytes(This,value) )
    ( (This)->lpVtbl->get_SidecarsCount(This,value) )
    ( (This)->lpVtbl->get_SidecarsSizeInBytes(This,value) )
    ( (This)->lpVtbl->get_SiblingsCount(This,value) )
    ( (This)->lpVtbl->get_SiblingsSizeInBytes(This,value) )
    ( (This)->lpVtbl->get_TotalCount(This,value) )
    ( (This)->lpVtbl->get_TotalSizeInBytes(This,value) )
    ( (This)->lpVtbl->SelectAll(This) )
    ( (This)->lpVtbl->SelectNone(This) )
    ( (This)->lpVtbl->SelectNewAsync(This,action) )
    ( (This)->lpVtbl->SetImportMode(This,value) )
    ( (This)->lpVtbl->get_ImportMode(This,value) )
    ( (This)->lpVtbl->get_SelectedPhotosCount(This,value) )
    ( (This)->lpVtbl->get_SelectedPhotosSizeInBytes(This,value) )
    ( (This)->lpVtbl->get_SelectedVideosCount(This,value) )
    ( (This)->lpVtbl->get_SelectedVideosSizeInBytes(This,value) )
    ( (This)->lpVtbl->get_SelectedSidecarsCount(This,value) )
    ( (This)->lpVtbl->get_SelectedSidecarsSizeInBytes(This,value) )
    ( (This)->lpVtbl->get_SelectedSiblingsCount(This,value) )
    ( (This)->lpVtbl->get_SelectedSiblingsSizeInBytes(This,value) )
    ( (This)->lpVtbl->get_SelectedTotalCount(This,value) )
    ( (This)->lpVtbl->get_SelectedTotalSizeInBytes(This,value) )
    ( (This)->lpVtbl->add_SelectionChanged(This,value,token) )
    ( (This)->lpVtbl->remove_SelectionChanged(This,token) )
    ( (This)->lpVtbl->ImportItemsAsync(This,operation) )
    ( (This)->lpVtbl->add_ItemImported(This,value,token) )
    ( (This)->lpVtbl->remove_ItemImported(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportFindItemsResult2[] = L"Windows.Media.Import.IPhotoImportFindItemsResult2";
typedef struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AddItemsInDateRangeToSelection )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2 * This,
                  __x_ABI_CWindows_CFoundation_CDateTime rangeStart,
                  __x_ABI_CWindows_CFoundation_CTimeSpan rangeLength
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2Vtbl;
interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AddItemsInDateRangeToSelection(This,rangeStart,rangeLength) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportFindItemsResult2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportImportItemsResult[] = L"Windows.Media.Import.IPhotoImportImportItemsResult";
typedef struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Session )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasSucceeded )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ImportedItems )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportItem * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhotosCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhotosSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideosCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideosSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SidecarsCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SidecarsSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SiblingsCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SiblingsSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TotalCount )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TotalSizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
                           __RPC__out UINT64 * value
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteImportedItemsFromSourceAsync )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult * This,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResultVtbl;
interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Session(This,value) )
    ( (This)->lpVtbl->get_HasSucceeded(This,value) )
    ( (This)->lpVtbl->get_ImportedItems(This,value) )
    ( (This)->lpVtbl->get_PhotosCount(This,value) )
    ( (This)->lpVtbl->get_PhotosSizeInBytes(This,value) )
    ( (This)->lpVtbl->get_VideosCount(This,value) )
    ( (This)->lpVtbl->get_VideosSizeInBytes(This,value) )
    ( (This)->lpVtbl->get_SidecarsCount(This,value) )
    ( (This)->lpVtbl->get_SidecarsSizeInBytes(This,value) )
    ( (This)->lpVtbl->get_SiblingsCount(This,value) )
    ( (This)->lpVtbl->get_SiblingsSizeInBytes(This,value) )
    ( (This)->lpVtbl->get_TotalCount(This,value) )
    ( (This)->lpVtbl->get_TotalSizeInBytes(This,value) )
    ( (This)->lpVtbl->DeleteImportedItemsFromSourceAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportImportItemsResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportItem[] = L"Windows.Media.Import.IPhotoImportItem";
typedef struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ItemKey )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContentType )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CImport_CPhotoImportContentType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Date )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Sibling )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Sidecars )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoSegments )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportVideoSegment * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSelected )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsSelected )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Thumbnail )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ImportedFileNames )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeletedFileNames )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemVtbl;
interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_ItemKey(This,value) )
    ( (This)->lpVtbl->get_ContentType(This,value) )
    ( (This)->lpVtbl->get_SizeInBytes(This,value) )
    ( (This)->lpVtbl->get_Date(This,value) )
    ( (This)->lpVtbl->get_Sibling(This,value) )
    ( (This)->lpVtbl->get_Sidecars(This,value) )
    ( (This)->lpVtbl->get_VideoSegments(This,value) )
    ( (This)->lpVtbl->get_IsSelected(This,value) )
    ( (This)->lpVtbl->put_IsSelected(This,value) )
    ( (This)->lpVtbl->get_Thumbnail(This,value) )
    ( (This)->lpVtbl->get_ImportedFileNames(This,value) )
    ( (This)->lpVtbl->get_DeletedFileNames(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportItem2[] = L"Windows.Media.Import.IPhotoImportItem2";
typedef struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Path )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem2Vtbl;
interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Path(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportItemImportedEventArgs[] = L"Windows.Media.Import.IPhotoImportItemImportedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ImportedItem )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItem * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ImportedItem(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportItemImportedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportManagerStatics[] = L"Windows.Media.Import.IPhotoImportManagerStatics";
typedef struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsSupportedAsync )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *FindAllSourcesAsync )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSource * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetPendingOperations )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportOperation * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsSupportedAsync(This,operation) )
    ( (This)->lpVtbl->FindAllSourcesAsync(This,operation) )
    ( (This)->lpVtbl->GetPendingOperations(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportOperation[] = L"Windows.Media.Import.IPhotoImportOperation";
typedef struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Stage )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CImport_CPhotoImportStage * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Session )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContinueFindingItemsAsync )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation * This,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContinueImportingItemsAsync )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation * This,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportImportItemsResult_Windows__CMedia__CImport__CPhotoImportProgress * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContinueDeletingImportedItemsFromSourceAsync )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation * This,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportDeleteImportedItemsFromSourceResult_double * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperationVtbl;
interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Stage(This,value) )
    ( (This)->lpVtbl->get_Session(This,value) )
    ( (This)->lpVtbl->get_ContinueFindingItemsAsync(This,operation) )
    ( (This)->lpVtbl->get_ContinueImportingItemsAsync(This,operation) )
    ( (This)->lpVtbl->get_ContinueDeletingImportedItemsFromSourceAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportOperation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportSelectionChangedEventArgs[] = L"Windows.Media.Import.IPhotoImportSelectionChangedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsSelectionEmpty )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsSelectionEmpty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportSelectionChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportSession[] = L"Windows.Media.Import.IPhotoImportSession";
typedef struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SessionId )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DestinationFolder )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFolder * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DestinationFolder )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AppendSessionDateToDestinationFolder )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppendSessionDateToDestinationFolder )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SubfolderCreationMode )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * This,
                  __x_ABI_CWindows_CMedia_CImport_CPhotoImportSubfolderCreationMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SubfolderCreationMode )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CImport_CPhotoImportSubfolderCreationMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DestinationFileNamePrefix )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DestinationFileNamePrefix )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *FindItemsAsync )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * This,
                  __x_ABI_CWindows_CMedia_CImport_CPhotoImportContentTypeFilter contentTypeFilter,
                  __x_ABI_CWindows_CMedia_CImport_CPhotoImportItemSelectionMode itemSelectionMode,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CImport__CPhotoImportFindItemsResult_UINT32 * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSessionVtbl;
interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSessionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Source(This,value) )
    ( (This)->lpVtbl->get_SessionId(This,value) )
    ( (This)->lpVtbl->put_DestinationFolder(This,value) )
    ( (This)->lpVtbl->get_DestinationFolder(This,value) )
    ( (This)->lpVtbl->put_AppendSessionDateToDestinationFolder(This,value) )
    ( (This)->lpVtbl->get_AppendSessionDateToDestinationFolder(This,value) )
    ( (This)->lpVtbl->put_SubfolderCreationMode(This,value) )
    ( (This)->lpVtbl->get_SubfolderCreationMode(This,value) )
    ( (This)->lpVtbl->put_DestinationFileNamePrefix(This,value) )
    ( (This)->lpVtbl->get_DestinationFileNamePrefix(This,value) )
    ( (This)->lpVtbl->FindItemsAsync(This,contentTypeFilter,itemSelectionMode,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportSession2[] = L"Windows.Media.Import.IPhotoImportSession2";
typedef struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_SubfolderDateFormat )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2 * This,
                  __x_ABI_CWindows_CMedia_CImport_CPhotoImportSubfolderDateFormat value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SubfolderDateFormat )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CImport_CPhotoImportSubfolderDateFormat * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RememberDeselectedItems )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RememberDeselectedItems )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2Vtbl;
interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_SubfolderDateFormat(This,value) )
    ( (This)->lpVtbl->get_SubfolderDateFormat(This,value) )
    ( (This)->lpVtbl->put_RememberDeselectedItems(This,value) )
    ( (This)->lpVtbl->get_RememberDeselectedItems(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportSidecar[] = L"Windows.Media.Import.IPhotoImportSidecar";
typedef struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Date )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecarVtbl;
interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecarVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_SizeInBytes(This,value) )
    ( (This)->lpVtbl->get_Date(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportSource[] = L"Windows.Media.Import.IPhotoImportSource";
typedef struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Manufacturer )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Model )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SerialNumber )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ConnectionProtocol )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ConnectionTransport )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CImport_CPhotoImportConnectionTransport * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CImport_CPhotoImportSourceType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PowerSource )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CImport_CPhotoImportPowerSource * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BatteryLevelPercent )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DateTime )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StorageMedia )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportStorageMedium * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsLocked )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
                           __RPC__deref_out_opt __FIReference_1_boolean * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsMassStorage )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Thumbnail )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateImportSession )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSession * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceVtbl;
interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->get_Manufacturer(This,value) )
    ( (This)->lpVtbl->get_Model(This,value) )
    ( (This)->lpVtbl->get_SerialNumber(This,value) )
    ( (This)->lpVtbl->get_ConnectionProtocol(This,value) )
    ( (This)->lpVtbl->get_ConnectionTransport(This,value) )
    ( (This)->lpVtbl->get_Type(This,value) )
    ( (This)->lpVtbl->get_PowerSource(This,value) )
    ( (This)->lpVtbl->get_BatteryLevelPercent(This,value) )
    ( (This)->lpVtbl->get_DateTime(This,value) )
    ( (This)->lpVtbl->get_StorageMedia(This,value) )
    ( (This)->lpVtbl->get_IsLocked(This,value) )
    ( (This)->lpVtbl->get_IsMassStorage(This,value) )
    ( (This)->lpVtbl->get_Thumbnail(This,value) )
    ( (This)->lpVtbl->CreateImportSession(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportSourceStatics[] = L"Windows.Media.Import.IPhotoImportSourceStatics";
typedef struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics * This,
                  __RPC__in HSTRING sourceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *FromFolderAsync )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFolder * sourceRootFolder,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CImport__CPhotoImportSource * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromIdAsync(This,sourceId,operation) )
    ( (This)->lpVtbl->FromFolderAsync(This,sourceRootFolder,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportSourceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportStorageMedium[] = L"Windows.Media.Import.IPhotoImportStorageMedium";
typedef struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMediumVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SerialNumber )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StorageMediumType )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CImport_CPhotoImportStorageMediumType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedAccessMode )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CImport_CPhotoImportAccessMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CapacityInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AvailableSpaceInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * This,
                           __RPC__out UINT64 * value
        );
    HRESULT ( STDMETHODCALLTYPE *Refresh )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMediumVtbl;
interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMediumVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->get_SerialNumber(This,value) )
    ( (This)->lpVtbl->get_StorageMediumType(This,value) )
    ( (This)->lpVtbl->get_SupportedAccessMode(This,value) )
    ( (This)->lpVtbl->get_CapacityInBytes(This,value) )
    ( (This)->lpVtbl->get_AvailableSpaceInBytes(This,value) )
    ( (This)->lpVtbl->Refresh(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportStorageMedium;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Import_IPhotoImportVideoSegment[] = L"Windows.Media.Import.IPhotoImportVideoSegment";
typedef struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SizeInBytes )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Date )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Sibling )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CImport_CIPhotoImportSidecar * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Sidecars )(
        __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CImport__CPhotoImportSidecar * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegmentVtbl;
interface __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegmentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_SizeInBytes(This,value) )
    ( (This)->lpVtbl->get_Date(This,value) )
    ( (This)->lpVtbl->get_Sibling(This,value) )
    ( (This)->lpVtbl->get_Sidecars(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CImport_CIPhotoImportVideoSegment;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportDeleteImportedItemsFromSourceResult[] = L"Windows.Media.Import.PhotoImportDeleteImportedItemsFromSourceResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportFindItemsResult[] = L"Windows.Media.Import.PhotoImportFindItemsResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportImportItemsResult[] = L"Windows.Media.Import.PhotoImportImportItemsResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportItem[] = L"Windows.Media.Import.PhotoImportItem";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportItemImportedEventArgs[] = L"Windows.Media.Import.PhotoImportItemImportedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportManager[] = L"Windows.Media.Import.PhotoImportManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportOperation[] = L"Windows.Media.Import.PhotoImportOperation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportSelectionChangedEventArgs[] = L"Windows.Media.Import.PhotoImportSelectionChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportSession[] = L"Windows.Media.Import.PhotoImportSession";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportSidecar[] = L"Windows.Media.Import.PhotoImportSidecar";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportSource[] = L"Windows.Media.Import.PhotoImportSource";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportStorageMedium[] = L"Windows.Media.Import.PhotoImportStorageMedium";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Import_PhotoImportVideoSegment[] = L"Windows.Media.Import.PhotoImportVideoSegment";
       
       
#pragma clang diagnostic pop
