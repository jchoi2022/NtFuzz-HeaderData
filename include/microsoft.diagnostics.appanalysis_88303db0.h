#pragma warning( disable: 4049 )
#include <rpc.h>
#include <rpcndr.h>
#error this stub requires an updated version of <rpcndr.h>
#include <windows.h>
#include <ole2.h>
       
       
#include "oaidl.h"
#include "inspectable.h"
#include "Windows.Foundation.h"
#include "eventtoken.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEvent __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEvent;
typedef interface __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventFactory __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventFactory;
typedef interface __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProvider __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProvider;
typedef interface __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProviderStatics __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProviderStatics;
typedef interface __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecordCallback __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecordCallback;
typedef interface __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventWatcher __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventWatcher;
typedef interface __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRule __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRule;
typedef interface __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRuleFactory __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRuleFactory;
typedef interface __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringFactory __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringFactory;
typedef interface __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceString __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceString;
typedef interface __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringView __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringView;
typedef interface __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRule __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRule;
typedef interface __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecord __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecord;
typedef interface __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgs __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgs;
typedef interface __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgsFactory __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgsFactory;
typedef interface __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent;
EXTERN_C const IID IID___FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent;
typedef struct __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEventVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This, __RPC__out __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEvent * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEvent * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEventVtbl;
interface __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent
{
    CONST_VTBL struct __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEventVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent;
EXTERN_C const IID IID___FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent;
typedef struct __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEventVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This, __RPC__deref_out_opt __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent **first);
    END_INTERFACE
} __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEventVtbl;
interface __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent
{
    CONST_VTBL struct __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEventVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent;
EXTERN_C const IID IID___FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent;
typedef struct __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEventVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEvent * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This,
                       __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEvent * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEvent * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEventVtbl;
interface __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent
{
    CONST_VTBL struct __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEventVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Microsoft__CDiagnostics__CAppAnalysis__CIRule_Microsoft__CDiagnostics__CAppAnalysis__CRuleTriggeredEventArgs __FITypedEventHandler_2_Microsoft__CDiagnostics__CAppAnalysis__CIRule_Microsoft__CDiagnostics__CAppAnalysis__CRuleTriggeredEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Microsoft__CDiagnostics__CAppAnalysis__CIRule_Microsoft__CDiagnostics__CAppAnalysis__CRuleTriggeredEventArgs;
typedef struct __FITypedEventHandler_2_Microsoft__CDiagnostics__CAppAnalysis__CIRule_Microsoft__CDiagnostics__CAppAnalysis__CRuleTriggeredEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Microsoft__CDiagnostics__CAppAnalysis__CIRule_Microsoft__CDiagnostics__CAppAnalysis__CRuleTriggeredEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Microsoft__CDiagnostics__CAppAnalysis__CIRule_Microsoft__CDiagnostics__CAppAnalysis__CRuleTriggeredEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Microsoft__CDiagnostics__CAppAnalysis__CIRule_Microsoft__CDiagnostics__CAppAnalysis__CRuleTriggeredEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Microsoft__CDiagnostics__CAppAnalysis__CIRule_Microsoft__CDiagnostics__CAppAnalysis__CRuleTriggeredEventArgs * This, __RPC__in_opt __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRule * sender, __RPC__in_opt __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Microsoft__CDiagnostics__CAppAnalysis__CIRule_Microsoft__CDiagnostics__CAppAnalysis__CRuleTriggeredEventArgsVtbl;
interface __FITypedEventHandler_2_Microsoft__CDiagnostics__CAppAnalysis__CIRule_Microsoft__CDiagnostics__CAppAnalysis__CRuleTriggeredEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Microsoft__CDiagnostics__CAppAnalysis__CIRule_Microsoft__CDiagnostics__CAppAnalysis__CRuleTriggeredEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule;
EXTERN_C const IID IID___FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule;
typedef struct __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRuleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This, __RPC__out __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRule * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRule * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRuleVtbl;
interface __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule
{
    CONST_VTBL struct __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRuleVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule;
EXTERN_C const IID IID___FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule;
typedef struct __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRuleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This, __RPC__deref_out_opt __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule **first);
    END_INTERFACE
} __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRuleVtbl;
interface __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule
{
    CONST_VTBL struct __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRuleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule;
EXTERN_C const IID IID___FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule;
typedef struct __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRuleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRule * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This,
                       __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRule * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRule * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRuleVtbl;
interface __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule
{
    CONST_VTBL struct __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRuleVtbl *lpVtbl;
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
typedef interface __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider;
EXTERN_C const IID IID___FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider;
typedef struct __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This, __RPC__out __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProvider * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProvider * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProviderVtbl;
interface __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider
{
    CONST_VTBL struct __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProviderVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider;
EXTERN_C const IID IID___FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider;
typedef struct __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This, __RPC__deref_out_opt __FIIterator_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider **first);
    END_INTERFACE
} __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProviderVtbl;
interface __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider
{
    CONST_VTBL struct __FIIterable_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProviderVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider;
EXTERN_C const IID IID___FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider;
typedef struct __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProvider * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This,
                       __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProvider * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProvider * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProviderVtbl;
interface __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider
{
    CONST_VTBL struct __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProviderVtbl *lpVtbl;
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
typedef interface __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider;
EXTERN_C const IID IID___FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider;
typedef struct __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This, __RPC__deref_out_opt __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProvider * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProvider * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This, __RPC__deref_out_opt __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This,
                   __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProvider * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProvider * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProvider * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This, __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProvider * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProvider * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProvider * *value);
    END_INTERFACE
} __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProviderVtbl;
interface __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProvider
{
    CONST_VTBL struct __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwProviderVtbl *lpVtbl;
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
typedef interface __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent;
EXTERN_C const IID IID___FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent;
typedef struct __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEventVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This, __RPC__deref_out_opt __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEvent * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEvent * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This, __RPC__deref_out_opt __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This,
                   __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEvent * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEvent * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEvent * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This, __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEvent * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEvent * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEvent * *value);
    END_INTERFACE
} __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEventVtbl;
interface __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent
{
    CONST_VTBL struct __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEventVtbl *lpVtbl;
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
typedef interface __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule;
EXTERN_C const IID IID___FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule;
typedef struct __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRuleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This, __RPC__deref_out_opt __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRule * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRule * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This, __RPC__deref_out_opt __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This,
                   __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRule * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRule * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRule * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This, __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRule * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRule * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRule * *value);
    END_INTERFACE
} __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRuleVtbl;
interface __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRule
{
    CONST_VTBL struct __FIVector_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwRuleVtbl *lpVtbl;
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
#pragma warning (push)
#pragma warning (disable:4668)
#pragma warning (disable:4001)
       
#pragma warning (pop)
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <evntcons.h>
_Check_return_ STDAPI ProcessEvent(_In_ PEVENT_RECORD eventRecord);
#endif
#pragma endregion
typedef
enum __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CMeasurementUnit
{
    MeasurementUnit_Milliseconds = 0,
    MeasurementUnit_Kilobytes,
    MeasurementUnit_Elements,
    MeasurementUnit_Percentage,
} __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CMeasurementUnit;
typedef
enum __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CRuleCategories
{
    RuleCategories_None = 0,
    RuleCategories_Performance = 0x1,
    RuleCategories_Accessibility = 0x2,
} __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CRuleCategories;
typedef
enum __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CProviderType
{
    ProviderType_Manifest = 0,
    ProviderType_Kernel,
} __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CProviderType;
typedef
struct __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CMeasurement
{
    DOUBLE Value;
    __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CMeasurementUnit Unit;
} __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CMeasurement;
typedef
struct __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CTimelineInfo
{
    INT64 Start;
    INT64 Stop;
} __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CTimelineInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Diagnostics_AppAnalysis_IEtwEvent[] = L"Microsoft.Diagnostics.AppAnalysis.IEtwEvent";
typedef struct __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEvent * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEvent * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEvent * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEvent * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEvent * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEvent * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EventId )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEvent * This,
                           __RPC__out UINT16 * eventId
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EventVersion )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEvent * This,
                           __RPC__out BYTE * eventVersion
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Provider )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEvent * This,
                           __RPC__deref_out_opt __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProvider * * provider
        );
    END_INTERFACE
} __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventVtbl;
interface __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEvent
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EventId(This,eventId) )
    ( (This)->lpVtbl->get_EventVersion(This,eventVersion) )
    ( (This)->lpVtbl->get_Provider(This,provider) )
EXTERN_C const IID IID___x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEvent;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Diagnostics_AppAnalysis_IEtwEventFactory[] = L"Microsoft.Diagnostics.AppAnalysis.IEtwEventFactory";
typedef struct __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventFactory * This,
                  UINT16 eventId,
                  BYTE eventVersion,
                  __RPC__in_opt __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProvider * provider,
                           __RPC__deref_out_opt __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEvent * * instance
        );
    END_INTERFACE
} __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventFactoryVtbl;
interface __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,eventId,eventVersion,provider,instance) )
EXTERN_C const IID IID___x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Diagnostics_AppAnalysis_IEtwProvider[] = L"Microsoft.Diagnostics.AppAnalysis.IEtwProvider";
typedef struct __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ID )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProvider * This,
                           __RPC__out GUID * ID
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EnableFlags )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProvider * This,
                           __RPC__out UINT32 * enableFlags
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProviderType )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProvider * This,
                           __RPC__out __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CProviderType * providerType
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Manifest )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProvider * This,
                           __RPC__deref_out_opt HSTRING * manifest
        );
    END_INTERFACE
} __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProviderVtbl;
interface __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProvider
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ID(This,ID) )
    ( (This)->lpVtbl->get_EnableFlags(This,enableFlags) )
    ( (This)->lpVtbl->get_ProviderType(This,providerType) )
    ( (This)->lpVtbl->get_Manifest(This,manifest) )
EXTERN_C const IID IID___x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Diagnostics_AppAnalysis_IEtwProviderStatics[] = L"Microsoft.Diagnostics.AppAnalysis.IEtwProviderStatics";
typedef struct __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProviderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProviderStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProviderStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProviderStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProviderStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProviderStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProviderStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                                  HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProviderStatics * This,
                  GUID providerId,
                  __RPC__in HSTRING manifest,
                           __RPC__deref_out_opt __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProvider * * instance
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateKernelProvider )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProviderStatics * This,
                  GUID providerId,
                  UINT32 enableFlags,
                           __RPC__deref_out_opt __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProvider * * instance
        );
    END_INTERFACE
} __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProviderStaticsVtbl;
interface __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProviderStatics
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProviderStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,providerId,manifest,instance) )
    ( (This)->lpVtbl->CreateKernelProvider(This,providerId,enableFlags,instance) )
EXTERN_C const IID IID___x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwProviderStatics;
typedef struct __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecordCallbackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecordCallback * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecordCallback * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecordCallback * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecordCallback * This,
                  __RPC__in_opt __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecord * eventrecord
        );
    END_INTERFACE
} __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecordCallbackVtbl;
interface __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecordCallback
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecordCallbackVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,eventrecord) )
EXTERN_C const IID IID___x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecordCallback;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Diagnostics_AppAnalysis_IEtwEventWatcher[] = L"Microsoft.Diagnostics.AppAnalysis.IEtwEventWatcher";
typedef struct __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventWatcherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventWatcher * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventWatcher * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventWatcher * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventWatcher * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventWatcher * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventWatcher * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RegisterEvent )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventWatcher * This,
                  __RPC__in_opt __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEvent * etwEvent,
                  __RPC__in_opt __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecordCallback * eventCallback
        );
    END_INTERFACE
} __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventWatcherVtbl;
interface __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventWatcher
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventWatcherVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RegisterEvent(This,etwEvent,eventCallback) )
EXTERN_C const IID IID___x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventWatcher;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Diagnostics_AppAnalysis_IEtwRule[] = L"Microsoft.Diagnostics.AppAnalysis.IEtwRule";
typedef struct __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRuleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRule * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRule * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRule * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRule * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRule * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRule * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BackingRule )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRule * This,
                           __RPC__deref_out_opt __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRule * * backingRule
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RegisteredEvents )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRule * This,
                           __RPC__deref_out_opt __FIVectorView_1_Microsoft__CDiagnostics__CAppAnalysis__CEtwEvent * * registeredEvents
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRule * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRule * This
        );
    END_INTERFACE
} __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRuleVtbl;
interface __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRule
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRuleVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BackingRule(This,backingRule) )
    ( (This)->lpVtbl->get_RegisteredEvents(This,registeredEvents) )
    ( (This)->lpVtbl->Start(This) )
    ( (This)->lpVtbl->Stop(This) )
EXTERN_C const IID IID___x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRule;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Diagnostics_AppAnalysis_IEtwRuleFactory[] = L"Microsoft.Diagnostics.AppAnalysis.IEtwRuleFactory";
typedef struct __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRuleFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRuleFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRuleFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRuleFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRuleFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRuleFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRuleFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRuleFactory * This,
                  __RPC__in_opt __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRule * backingRule,
                  __RPC__in_opt __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventWatcher * watcher,
                           __RPC__deref_out_opt __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRule * * instance
        );
    END_INTERFACE
} __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRuleFactoryVtbl;
interface __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRuleFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRuleFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,backingRule,watcher,instance) )
EXTERN_C const IID IID___x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwRuleFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Diagnostics_AppAnalysis_IResourceStringFactory[] = L"Microsoft.Diagnostics.AppAnalysis.IResourceStringFactory";
typedef struct __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringFactory * This,
                  UINT32 identifier,
                           __RPC__deref_out_opt __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceString * * instance
        );
    END_INTERFACE
} __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringFactoryVtbl;
interface __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,identifier,instance) )
EXTERN_C const IID IID___x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Diagnostics_AppAnalysis_IResourceString[] = L"Microsoft.Diagnostics.AppAnalysis.IResourceString";
typedef struct __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceString * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceString * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceString * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceString * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceString * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceString * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Identifier )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceString * This,
                  UINT32 identifer
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Identifier )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceString * This,
                           __RPC__out UINT32 * identifer
        );
    HRESULT ( STDMETHODCALLTYPE *GetResourceStringView )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceString * This,
                           __RPC__deref_out_opt __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringView * * view
        );
    END_INTERFACE
} __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringVtbl;
interface __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceString
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Identifier(This,identifer) )
    ( (This)->lpVtbl->get_Identifier(This,identifer) )
    ( (This)->lpVtbl->GetResourceStringView(This,view) )
EXTERN_C const IID IID___x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceString;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Diagnostics_AppAnalysis_IResourceStringView[] = L"Microsoft.Diagnostics.AppAnalysis.IResourceStringView";
typedef struct __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringView * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringView * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringView * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringView * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringView * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringView * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Identifier )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringView * This,
                           __RPC__out UINT32 * identifer
        );
    END_INTERFACE
} __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringViewVtbl;
interface __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringView
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringViewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Identifier(This,identifer) )
EXTERN_C const IID IID___x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringView;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Diagnostics_AppAnalysis_IRule[] = L"Microsoft.Diagnostics.AppAnalysis.IRule";
typedef struct __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRule * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRule * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRule * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRule * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRule * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRule * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRule * This,
                           __RPC__deref_out_opt HSTRING * id
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRule * This,
                           __RPC__deref_out_opt HSTRING * title
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Impact )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRule * This,
                           __RPC__deref_out_opt HSTRING * impact
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LinkTitle )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRule * This,
                           __RPC__deref_out_opt HSTRING * linkTitle
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LinkUri )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRule * This,
                           __RPC__deref_out_opt HSTRING * linkUri
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Categories )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRule * This,
                           __RPC__out __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CRuleCategories * categories
        );
    HRESULT ( STDMETHODCALLTYPE *FormatString )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRule * This,
                  __RPC__in_opt __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringView * resourceString,
                           __RPC__deref_out_opt HSTRING * result
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Triggered )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRule * This,
                  __RPC__in_opt __FITypedEventHandler_2_Microsoft__CDiagnostics__CAppAnalysis__CIRule_Microsoft__CDiagnostics__CAppAnalysis__CRuleTriggeredEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Triggered )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRule * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleVtbl;
interface __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRule
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,id) )
    ( (This)->lpVtbl->get_Title(This,title) )
    ( (This)->lpVtbl->get_Impact(This,impact) )
    ( (This)->lpVtbl->get_LinkTitle(This,linkTitle) )
    ( (This)->lpVtbl->get_LinkUri(This,linkUri) )
    ( (This)->lpVtbl->get_Categories(This,categories) )
    ( (This)->lpVtbl->FormatString(This,resourceString,result) )
    ( (This)->lpVtbl->add_Triggered(This,handler,token) )
    ( (This)->lpVtbl->remove_Triggered(This,token) )
EXTERN_C const IID IID___x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRule;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Diagnostics_AppAnalysis_IEtwEventRecord[] = L"Microsoft.Diagnostics.AppAnalysis.IEtwEventRecord";
typedef struct __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecordVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecord * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecord * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecord * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecord * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecord * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecord * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecord * This,
                           __RPC__out INT64 * timestamp
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ThreadId )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecord * This,
                           __RPC__out UINT32 * threadId
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EventId )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecord * This,
                           __RPC__out UINT16 * eventId
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EventVersion )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecord * This,
                           __RPC__out BYTE * eventVersion
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProviderId )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecord * This,
                           __RPC__out GUID * providerId
        );
    HRESULT ( STDMETHODCALLTYPE *GetBooleanProperty )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecord * This,
                  __RPC__in HSTRING propertyName,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetFloatProperty )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecord * This,
                  __RPC__in HSTRING propertyName,
                           __RPC__out float * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDoubleProperty )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecord * This,
                  __RPC__in HSTRING propertyName,
                           __RPC__out double * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetInt32Property )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecord * This,
                  __RPC__in HSTRING propertyName,
                           __RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetUInt32Property )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecord * This,
                  __RPC__in HSTRING propertyName,
                           __RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetInt64Property )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecord * This,
                  __RPC__in HSTRING propertyName,
                           __RPC__out INT64 * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetUInt64Property )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecord * This,
                  __RPC__in HSTRING propertyName,
                           __RPC__out UINT64 * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetUnicodeStringProperty )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecord * This,
                  __RPC__in HSTRING propertyName,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecordVtbl;
interface __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecord
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecordVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Timestamp(This,timestamp) )
    ( (This)->lpVtbl->get_ThreadId(This,threadId) )
    ( (This)->lpVtbl->get_EventId(This,eventId) )
    ( (This)->lpVtbl->get_EventVersion(This,eventVersion) )
    ( (This)->lpVtbl->get_ProviderId(This,providerId) )
    ( (This)->lpVtbl->GetBooleanProperty(This,propertyName,value) )
    ( (This)->lpVtbl->GetFloatProperty(This,propertyName,value) )
    ( (This)->lpVtbl->GetDoubleProperty(This,propertyName,value) )
    ( (This)->lpVtbl->GetInt32Property(This,propertyName,value) )
    ( (This)->lpVtbl->GetUInt32Property(This,propertyName,value) )
    ( (This)->lpVtbl->GetInt64Property(This,propertyName,value) )
    ( (This)->lpVtbl->GetUInt64Property(This,propertyName,value) )
    ( (This)->lpVtbl->GetUnicodeStringProperty(This,propertyName,value) )
EXTERN_C const IID IID___x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIEtwEventRecord;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Diagnostics_AppAnalysis_IRuleTriggeredEventArgs[] = L"Microsoft.Diagnostics.AppAnalysis.IRuleTriggeredEventArgs";
typedef struct __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TimelineStart )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgs * This,
                           __RPC__out INT64 * timelineStart
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TimelineStop )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgs * This,
                           __RPC__out INT64 * timelineStop
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FileName )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgs * This,
                           __RPC__deref_out_opt HSTRING * fileName
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LineNumber )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgs * This,
                           __RPC__out UINT32 * lineNumber
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ColumnNumber )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgs * This,
                           __RPC__out UINT32 * columnNumber
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ElementId )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgs * This,
                           __RPC__out UINT64 * elementId
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MeasurementUnit )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgs * This,
                           __RPC__out __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CMeasurementUnit * measurementUnit
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MeasurementValue )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgs * This,
                           __RPC__out double * measurementValue
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringView * * description
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Solution )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceStringView * * solution
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FileHash )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgs * This,
                           __RPC__deref_out_opt HSTRING * hash
        );
    END_INTERFACE
} __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgsVtbl;
interface __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgs
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TimelineStart(This,timelineStart) )
    ( (This)->lpVtbl->get_TimelineStop(This,timelineStop) )
    ( (This)->lpVtbl->get_FileName(This,fileName) )
    ( (This)->lpVtbl->get_LineNumber(This,lineNumber) )
    ( (This)->lpVtbl->get_ColumnNumber(This,columnNumber) )
    ( (This)->lpVtbl->get_ElementId(This,elementId) )
    ( (This)->lpVtbl->get_MeasurementUnit(This,measurementUnit) )
    ( (This)->lpVtbl->get_MeasurementValue(This,measurementValue) )
    ( (This)->lpVtbl->get_Description(This,description) )
    ( (This)->lpVtbl->get_Solution(This,solution) )
    ( (This)->lpVtbl->get_FileHash(This,hash) )
EXTERN_C const IID IID___x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Microsoft_Diagnostics_AppAnalysis_IRuleTriggeredEventArgsFactory[] = L"Microsoft.Diagnostics.AppAnalysis.IRuleTriggeredEventArgsFactory";
typedef struct __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgsFactory * This,
                  UINT64 elementId,
                  __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CTimelineInfo timelineInfo,
                  __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CMeasurement measurement,
                  __RPC__in_opt __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceString * description,
                  __RPC__in_opt __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIResourceString * solution,
                           __RPC__deref_out_opt __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgs * * instance
        );
    END_INTERFACE
} __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgsFactoryVtbl;
interface __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,elementId,timelineInfo,measurement,description,solution,instance) )
EXTERN_C const IID IID___x_ABI_CMicrosoft_CDiagnostics_CAppAnalysis_CIRuleTriggeredEventArgsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Diagnostics_AppAnalysis_RuleTriggeredEventArgs[] = L"Microsoft.Diagnostics.AppAnalysis.RuleTriggeredEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Diagnostics_AppAnalysis_EtwEventWatcher[] = L"Microsoft.Diagnostics.AppAnalysis.EtwEventWatcher";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Diagnostics_AppAnalysis_EtwRuleSet[] = L"Microsoft.Diagnostics.AppAnalysis.EtwRuleSet";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Diagnostics_AppAnalysis_EtwEvent[] = L"Microsoft.Diagnostics.AppAnalysis.EtwEvent";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Diagnostics_AppAnalysis_EtwProvider[] = L"Microsoft.Diagnostics.AppAnalysis.EtwProvider";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Diagnostics_AppAnalysis_EtwEventRecord[] = L"Microsoft.Diagnostics.AppAnalysis.EtwEventRecord";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Diagnostics_AppAnalysis_EtwRule[] = L"Microsoft.Diagnostics.AppAnalysis.EtwRule";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Microsoft_Diagnostics_AppAnalysis_ResourceString[] = L"Microsoft.Diagnostics.AppAnalysis.ResourceString";
       
