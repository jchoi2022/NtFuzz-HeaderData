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
#include "Windows.Graphics.Imaging.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem;
typedef interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent;
typedef interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem;
typedef interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem;
typedef interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail;
typedef interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo;
typedef interface __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem;
typedef struct __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem;
typedef struct __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail;
typedef struct __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnailVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnailVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnailVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail;
typedef struct __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnailVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnailVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnailVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                       __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnailVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
                       __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnailVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnailVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem;
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem;
typedef struct __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * *value);
    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl;
interface __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail;
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail;
typedef struct __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnailVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This, __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This, __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * *value);
    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnailVtbl;
interface __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnailVtbl *lpVtbl;
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
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;
typedef enum __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedItemStyle __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedItemStyle;
typedef enum __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedKind __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedKind;
typedef enum __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedUpdateMode __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedUpdateMode;
typedef enum __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialItemBadgeStyle __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialItemBadgeStyle;
enum
DEPRECATED("SocialFeedItemStyle is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedItemStyle
{
    SocialFeedItemStyle_Default = 0,
    SocialFeedItemStyle_Photo = 1,
};
enum
DEPRECATED("SocialFeedKind is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedKind
{
    SocialFeedKind_HomeFeed = 0,
    SocialFeedKind_ContactFeed = 1,
    SocialFeedKind_Dashboard = 2,
};
enum
DEPRECATED("SocialFeedUpdateMode is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedUpdateMode
{
    SocialFeedUpdateMode_Append = 0,
    SocialFeedUpdateMode_Replace = 1,
};
enum
DEPRECATED("SocialItemBadgeStyle is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialItemBadgeStyle
{
    SocialItemBadgeStyle_Hidden = 0,
    SocialItemBadgeStyle_Visible = 1,
    SocialItemBadgeStyle_VisibleWithCount = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_SocialInfo_ISocialFeedChildItem[] = L"Windows.ApplicationModel.SocialInfo.ISocialFeedChildItem";
typedef struct
DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Author )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo * * value
        );
    DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_PrimaryContent )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * * value
        );
    DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_SecondaryContent )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * * value
        );
    DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_Timestamp )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * This,
                  __x_ABI_CWindows_CFoundation_CDateTime value
        );
    DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_TargetUri )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_TargetUri )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Thumbnails )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * * value
        );
    DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_SharedItem )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * * value
        );
    DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_SharedItem )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItemVtbl;
interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItemVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Author(This,value) )
DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_PrimaryContent(This,value) )
DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_SecondaryContent(This,value) )
DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Timestamp(This,value) )
DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->put_Timestamp(This,value) )
DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_TargetUri(This,value) )
DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->put_TargetUri(This,value) )
DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Thumbnails(This,value) )
DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_SharedItem(This,value) )
DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->put_SharedItem(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_SocialInfo_ISocialFeedContent[] = L"Windows.ApplicationModel.SocialInfo.ISocialFeedContent";
typedef struct
DEPRECATED("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * This,
                  __RPC__in HSTRING value
        );
    DEPRECATED("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_Message )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * This,
                  __RPC__in HSTRING value
        );
    DEPRECATED("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_TargetUri )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    DEPRECATED("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_TargetUri )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContentVtbl;
interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Title(This,value) )
DEPRECATED("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->put_Title(This,value) )
DEPRECATED("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Message(This,value) )
DEPRECATED("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->put_Message(This,value) )
DEPRECATED("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_TargetUri(This,value) )
DEPRECATED("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->put_TargetUri(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_SocialInfo_ISocialFeedItem[] = L"Windows.ApplicationModel.SocialInfo.ISocialFeedItem";
typedef struct
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Author )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo * * value
        );
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_PrimaryContent )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * * value
        );
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_SecondaryContent )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * * value
        );
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_Timestamp )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
                  __x_ABI_CWindows_CFoundation_CDateTime value
        );
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_TargetUri )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_TargetUri )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Thumbnails )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * * value
        );
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_SharedItem )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * * value
        );
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_SharedItem )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * value
        );
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_BadgeStyle )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialItemBadgeStyle * value
        );
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_BadgeStyle )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
                  __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialItemBadgeStyle value
        );
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_BadgeCountValue )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
                           __RPC__out INT32 * value
        );
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_BadgeCountValue )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
                  INT32 value
        );
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_RemoteId )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_RemoteId )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
                  __RPC__in HSTRING value
        );
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_ChildItem )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * * value
        );
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_ChildItem )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * value
        );
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Style )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedItemStyle * value
        );
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_Style )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
                  __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedItemStyle value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItemVtbl;
interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItemVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Author(This,value) )
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_PrimaryContent(This,value) )
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_SecondaryContent(This,value) )
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Timestamp(This,value) )
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->put_Timestamp(This,value) )
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_TargetUri(This,value) )
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->put_TargetUri(This,value) )
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Thumbnails(This,value) )
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_SharedItem(This,value) )
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->put_SharedItem(This,value) )
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_BadgeStyle(This,value) )
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->put_BadgeStyle(This,value) )
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_BadgeCountValue(This,value) )
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->put_BadgeCountValue(This,value) )
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_RemoteId(This,value) )
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->put_RemoteId(This,value) )
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_ChildItem(This,value) )
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->put_ChildItem(This,value) )
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Style(This,value) )
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->put_Style(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_SocialInfo_ISocialFeedSharedItem[] = L"Windows.ApplicationModel.SocialInfo.ISocialFeedSharedItem";
typedef struct
DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_OriginalSource )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_OriginalSource )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * * value
        );
    DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_Timestamp )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * This,
                  __x_ABI_CWindows_CFoundation_CDateTime value
        );
    DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_TargetUri )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_TargetUri )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_Thumbnail )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * value
        );
    DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Thumbnail )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItemVtbl;
interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItemVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_OriginalSource(This,value) )
DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->put_OriginalSource(This,value) )
DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Content(This,value) )
DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Timestamp(This,value) )
DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->put_Timestamp(This,value) )
DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_TargetUri(This,value) )
DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->put_TargetUri(This,value) )
DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->put_Thumbnail(This,value) )
DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Thumbnail(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_SocialInfo_ISocialItemThumbnail[] = L"Windows.ApplicationModel.SocialInfo.ISocialItemThumbnail";
typedef struct
DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnailVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_TargetUri )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_TargetUri )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_ImageUri )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_ImageUri )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_BitmapSize )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize * value
        );
    DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_BitmapSize )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * This,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize value
        );
    DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *SetImageAsync )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * image,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnailVtbl;
interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnailVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_TargetUri(This,value) )
DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->put_TargetUri(This,value) )
DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_ImageUri(This,value) )
DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->put_ImageUri(This,value) )
DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_BitmapSize(This,value) )
DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->put_BitmapSize(This,value) )
DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->SetImageAsync(This,image,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_SocialInfo_ISocialUserInfo[] = L"Windows.ApplicationModel.SocialInfo.ISocialUserInfo";
typedef struct
DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo * This,
                  __RPC__in HSTRING value
        );
    DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_UserName )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_UserName )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo * This,
                  __RPC__in HSTRING value
        );
    DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_RemoteId )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_RemoteId )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo * This,
                  __RPC__in HSTRING value
        );
    DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_TargetUri )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_TargetUri )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfoVtbl;
interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_DisplayName(This,value) )
DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->put_DisplayName(This,value) )
DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_UserName(This,value) )
DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->put_UserName(This,value) )
DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_RemoteId(This,value) )
DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->put_RemoteId(This,value) )
DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_TargetUri(This,value) )
DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->put_TargetUri(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo;
DEPRECATED("SocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SocialInfo_SocialFeedChildItem[] = L"Windows.ApplicationModel.SocialInfo.SocialFeedChildItem";
DEPRECATED("SocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SocialInfo_SocialFeedContent[] = L"Windows.ApplicationModel.SocialInfo.SocialFeedContent";
DEPRECATED("SocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SocialInfo_SocialFeedItem[] = L"Windows.ApplicationModel.SocialInfo.SocialFeedItem";
DEPRECATED("SocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SocialInfo_SocialFeedSharedItem[] = L"Windows.ApplicationModel.SocialInfo.SocialFeedSharedItem";
DEPRECATED("SocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SocialInfo_SocialItemThumbnail[] = L"Windows.ApplicationModel.SocialInfo.SocialItemThumbnail";
DEPRECATED("SocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SocialInfo_SocialUserInfo[] = L"Windows.ApplicationModel.SocialInfo.SocialUserInfo";
       
       
#pragma clang diagnostic pop
