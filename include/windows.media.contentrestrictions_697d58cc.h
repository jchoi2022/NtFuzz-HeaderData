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
typedef interface __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy;
typedef interface __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription;
typedef interface __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory;
typedef interface __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions;
typedef interface __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory;
enum __x_ABI_CWindows_CMedia_CContentRestrictions_CContentAccessRestrictionLevel;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevelVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevelVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel * This, __RPC__out enum __x_ABI_CWindows_CMedia_CContentRestrictions_CContentAccessRestrictionLevel *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevelVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevelVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicyVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicyVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy * This, __RPC__out __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicyVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicyVtbl *lpVtbl;
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
typedef interface __FIEventHandler_1_IInspectable __FIEventHandler_1_IInspectable;
EXTERN_C const IID IID___FIEventHandler_1_IInspectable;
typedef struct __FIEventHandler_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_IInspectable * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FIEventHandler_1_IInspectableVtbl;
interface __FIEventHandler_1_IInspectable
{
    CONST_VTBL struct __FIEventHandler_1_IInspectableVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;
typedef enum __x_ABI_CWindows_CMedia_CContentRestrictions_CContentAccessRestrictionLevel __x_ABI_CWindows_CMedia_CContentRestrictions_CContentAccessRestrictionLevel;
typedef enum __x_ABI_CWindows_CMedia_CContentRestrictions_CRatedContentCategory __x_ABI_CWindows_CMedia_CContentRestrictions_CRatedContentCategory;
enum __x_ABI_CWindows_CMedia_CContentRestrictions_CContentAccessRestrictionLevel
{
    ContentAccessRestrictionLevel_Allow = 0,
    ContentAccessRestrictionLevel_Warn = 1,
    ContentAccessRestrictionLevel_Block = 2,
    ContentAccessRestrictionLevel_Hide = 3,
};
enum __x_ABI_CWindows_CMedia_CContentRestrictions_CRatedContentCategory
{
    RatedContentCategory_General = 0,
    RatedContentCategory_Application = 1,
    RatedContentCategory_Game = 2,
    RatedContentCategory_Movie = 3,
    RatedContentCategory_Television = 4,
    RatedContentCategory_Music = 5,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ContentRestrictions_IContentRestrictionsBrowsePolicy[] = L"Windows.Media.ContentRestrictions.IContentRestrictionsBrowsePolicy";
typedef struct __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_GeographicRegion )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxBrowsableAgeRating )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PreferredAgeRating )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicyVtbl;
interface __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicyVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_GeographicRegion(This,value) )
    ( (This)->lpVtbl->get_MaxBrowsableAgeRating(This,value) )
    ( (This)->lpVtbl->get_PreferredAgeRating(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ContentRestrictions_IRatedContentDescription[] = L"Windows.Media.ContentRestrictions.IRatedContentDescription";
typedef struct __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Id )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Image )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Image )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Category )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CContentRestrictions_CRatedContentCategory * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Category )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * This,
                  __x_ABI_CWindows_CMedia_CContentRestrictions_CRatedContentCategory value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Ratings )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Ratings )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * This,
                  __RPC__in_opt __FIVector_1_HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionVtbl;
interface __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->put_Id(This,value) )
    ( (This)->lpVtbl->get_Title(This,value) )
    ( (This)->lpVtbl->put_Title(This,value) )
    ( (This)->lpVtbl->get_Image(This,value) )
    ( (This)->lpVtbl->put_Image(This,value) )
    ( (This)->lpVtbl->get_Category(This,value) )
    ( (This)->lpVtbl->put_Category(This,value) )
    ( (This)->lpVtbl->get_Ratings(This,value) )
    ( (This)->lpVtbl->put_Ratings(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ContentRestrictions_IRatedContentDescriptionFactory[] = L"Windows.Media.ContentRestrictions.IRatedContentDescriptionFactory";
typedef struct __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory * This,
                  __RPC__in HSTRING id,
                  __RPC__in HSTRING title,
                  __x_ABI_CWindows_CMedia_CContentRestrictions_CRatedContentCategory category,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * * RatedContentDescription
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,id,title,category,RatedContentDescription) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ContentRestrictions_IRatedContentRestrictions[] = L"Windows.Media.ContentRestrictions.IRatedContentRestrictions";
typedef struct __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetBrowsePolicyAsync )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetRestrictionLevelAsync )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * RatedContentDescription,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RequestContentAccessAsync )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * RatedContentDescription,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *add_RestrictionsChanged )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_RestrictionsChanged )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsVtbl;
interface __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetBrowsePolicyAsync(This,operation) )
    ( (This)->lpVtbl->GetRestrictionLevelAsync(This,RatedContentDescription,operation) )
    ( (This)->lpVtbl->RequestContentAccessAsync(This,RatedContentDescription,operation) )
    ( (This)->lpVtbl->add_RestrictionsChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_RestrictionsChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ContentRestrictions_IRatedContentRestrictionsFactory[] = L"Windows.Media.ContentRestrictions.IRatedContentRestrictionsFactory";
typedef struct __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithMaxAgeRating )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory * This,
                  UINT32 maxAgeRating,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions * * ratedContentRestrictions
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWithMaxAgeRating(This,maxAgeRating,ratedContentRestrictions) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_ContentRestrictions_ContentRestrictionsBrowsePolicy[] = L"Windows.Media.ContentRestrictions.ContentRestrictionsBrowsePolicy";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_ContentRestrictions_RatedContentDescription[] = L"Windows.Media.ContentRestrictions.RatedContentDescription";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_ContentRestrictions_RatedContentRestrictions[] = L"Windows.Media.ContentRestrictions.RatedContentRestrictions";
       
       
#pragma clang diagnostic pop
