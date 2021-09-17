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
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate;
typedef interface __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier;
typedef interface __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer;
typedef interface __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2 __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2;
typedef interface __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate;
typedef struct __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidateVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidateVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate;
typedef struct __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidateVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidateVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier;
typedef struct __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifierVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifierVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifierVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier;
typedef struct __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifierVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifierVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifierVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This,
                       __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidateVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidateVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifierVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This,
                       __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifierVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifierVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidateVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidateVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidateVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidateVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef enum __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIndexedResourceType __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIndexedResourceType;
enum __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIndexedResourceType
{
    IndexedResourceType_String = 0,
    IndexedResourceType_Path = 1,
    IndexedResourceType_EmbeddedData = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Management_IIndexedResourceCandidate[] = L"Windows.ApplicationModel.Resources.Management.IIndexedResourceCandidate";
typedef struct __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIndexedResourceType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Metadata )(
        __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Qualifiers )(
        __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceQualifier * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ValueAsString )(
        __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetQualifierValue )(
        __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * This,
                  __RPC__in HSTRING qualifierName,
                           __RPC__deref_out_opt HSTRING * qualifierValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidateVtbl;
interface __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidateVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Type(This,value) )
    ( (This)->lpVtbl->get_Uri(This,value) )
    ( (This)->lpVtbl->get_Metadata(This,value) )
    ( (This)->lpVtbl->get_Qualifiers(This,value) )
    ( (This)->lpVtbl->get_ValueAsString(This,value) )
    ( (This)->lpVtbl->GetQualifierValue(This,qualifierName,qualifierValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Management_IIndexedResourceQualifier[] = L"Windows.ApplicationModel.Resources.Management.IIndexedResourceQualifier";
typedef struct __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifierVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_QualifierName )(
        __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_QualifierValue )(
        __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifierVtbl;
interface __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifierVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_QualifierName(This,value) )
    ( (This)->lpVtbl->get_QualifierValue(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceQualifier;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Management_IResourceIndexer[] = L"Windows.ApplicationModel.Resources.Management.IResourceIndexer";
typedef struct
DEPRECATED("Use IndexFilePath in mrmsupport.dll instead of IResourceIndexer.  For more info, see MSDN.")
__x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Use IndexFilePath in mrmsupport.dll instead of IResourceIndexer.  For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *IndexFilePath )(
        __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * filePath,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIIndexedResourceCandidate * * candidate
        );
    DEPRECATED("Use IndexFilePath in mrmsupport.dll instead of IResourceIndexer.  For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *IndexFileContentsAsync )(
        __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * file,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CResources__CManagement__CIndexedResourceCandidate * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Use IndexFilePath in mrmsupport.dll instead of IResourceIndexer.  For more info, see MSDN.")
    ( (This)->lpVtbl->IndexFilePath(This,filePath,candidate) )
DEPRECATED("Use IndexFilePath in mrmsupport.dll instead of IResourceIndexer.  For more info, see MSDN.")
    ( (This)->lpVtbl->IndexFileContentsAsync(This,file,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Management_IResourceIndexerFactory[] = L"Windows.ApplicationModel.Resources.Management.IResourceIndexerFactory";
typedef struct
DEPRECATED("Use CreateResourceIndexer in mrmsupport.dll instead of IResourceIndexerFactory.  For more info, see MSDN.")
__x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Use CreateResourceIndexer in mrmsupport.dll instead of IResourceIndexerFactory.  For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *CreateResourceIndexer )(
        __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * projectRoot,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer * * indexer
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Use CreateResourceIndexer in mrmsupport.dll instead of IResourceIndexerFactory.  For more info, see MSDN.")
    ( (This)->lpVtbl->CreateResourceIndexer(This,projectRoot,indexer) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_Management_IResourceIndexerFactory2[] = L"Windows.ApplicationModel.Resources.Management.IResourceIndexerFactory2";
typedef struct
DEPRECATED("Use CreateResourceIndexer in mrmsupport.dll instead of IResourceIndexerFactory2.  For more info, see MSDN.")
__x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Use CreateResourceIndexer in mrmsupport.dll instead of IResourceIndexerFactory2.  For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *CreateResourceIndexerWithExtension )(
        __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * projectRoot,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * extensionDllPath,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexer * * indexer
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Use CreateResourceIndexer in mrmsupport.dll instead of IResourceIndexerFactory2.  For more info, see MSDN.")
    ( (This)->lpVtbl->CreateResourceIndexerWithExtension(This,projectRoot,extensionDllPath,indexer) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CManagement_CIResourceIndexerFactory2;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Management_IndexedResourceCandidate[] = L"Windows.ApplicationModel.Resources.Management.IndexedResourceCandidate";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Management_IndexedResourceQualifier[] = L"Windows.ApplicationModel.Resources.Management.IndexedResourceQualifier";
DEPRECATED("Use CreateResourceIndexer in mrmsupport.dll instead of ResourceIndexer.  For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_Management_ResourceIndexer[] = L"Windows.ApplicationModel.Resources.Management.ResourceIndexer";
       
       
#pragma clang diagnostic pop
