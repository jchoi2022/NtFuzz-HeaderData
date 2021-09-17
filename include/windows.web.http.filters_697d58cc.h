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
#include "Windows.Networking.Sockets.h"
#include "Windows.Security.Credentials.h"
#include "Windows.Security.Cryptography.Certificates.h"
#include "Windows.System.h"
#include "Windows.Web.Http.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2 __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3 __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4 __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter5 __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter5;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilterStatics __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilterStatics;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs;
typedef interface __FIReference_1_UINT64 __FIReference_1_UINT64;
EXTERN_C const IID IID___FIReference_1_UINT64;
typedef struct __FIReference_1_UINT64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_UINT64 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_UINT64 * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_UINT64 * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_UINT64 * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_UINT64 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_UINT64 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_UINT64 * This, __RPC__out unsigned __int64 *value);
    END_INTERFACE
} __FIReference_1_UINT64Vtbl;
interface __FIReference_1_UINT64
{
    CONST_VTBL struct __FIReference_1_UINT64Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgs __FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * sender, __RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult;
typedef interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;
EXTERN_C const IID IID___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;
typedef struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, __RPC__out enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl;
interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult
{
    CONST_VTBL struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;
EXTERN_C const IID IID___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;
typedef struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, __RPC__deref_out_opt __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult **first);
    END_INTERFACE
} __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl;
interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult
{
    CONST_VTBL struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;
EXTERN_C const IID IID___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;
typedef struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                       enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl;
interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;
EXTERN_C const IID IID___FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;
typedef struct __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, __RPC__deref_out_opt enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                   unsigned int index,
                            __RPC__deref_out_opt enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                   __RPC__in enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                   unsigned int index,
                   __RPC__in enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                   unsigned int index,
                   __RPC__in enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, __RPC__in enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *value);
    END_INTERFACE
} __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl;
interface __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult
{
    CONST_VTBL struct __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage;
struct __x_ABI_CWindows_CWeb_CHttp_CHttpProgress;
typedef interface __FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress __FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress;
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress;
typedef struct __FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress *asyncInfo, struct __x_ABI_CWindows_CWeb_CHttp_CHttpProgress progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgressVtbl;
interface __FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgressVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) )
typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress;
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress;
typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgressVtbl;
interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgressVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress;
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress;
typedef struct __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This, __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This, __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress **handler);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This, __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This, __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * This, __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgressVtbl;
interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgressVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate;
typedef interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;
EXTERN_C const IID IID___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;
typedef struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl;
interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate
{
    CONST_VTBL struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;
EXTERN_C const IID IID___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;
typedef struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, __RPC__deref_out_opt __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate **first);
    END_INTERFACE
} __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl;
interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate
{
    CONST_VTBL struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;
EXTERN_C const IID IID___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;
typedef struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                       __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl;
interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef enum __x_ABI_CWindows_CNetworking_CSockets_CSocketSslErrorSeverity __x_ABI_CWindows_CNetworking_CSockets_CSocketSslErrorSeverity;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential;
typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult;
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager;
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHttpProgress __x_ABI_CWindows_CWeb_CHttp_CHttpProgress;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage;
typedef enum __x_ABI_CWindows_CWeb_CHttp_CHttpVersion __x_ABI_CWindows_CWeb_CHttp_CHttpVersion;
typedef enum __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCacheReadBehavior __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCacheReadBehavior;
typedef enum __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCacheWriteBehavior __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCacheWriteBehavior;
typedef enum __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCookieUsageBehavior __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCookieUsageBehavior;
enum __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCacheReadBehavior
{
    HttpCacheReadBehavior_Default = 0,
    HttpCacheReadBehavior_MostRecent = 1,
    HttpCacheReadBehavior_OnlyFromCache = 2,
    HttpCacheReadBehavior_NoCache = 3,
};
enum __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCacheWriteBehavior
{
    HttpCacheWriteBehavior_Default = 0,
    HttpCacheWriteBehavior_NoCache = 1,
};
enum __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCookieUsageBehavior
{
    HttpCookieUsageBehavior_Default = 0,
    HttpCookieUsageBehavior_NoCookies = 1,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Filters_IHttpBaseProtocolFilter[] = L"Windows.Web.Http.Filters.IHttpBaseProtocolFilter";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AllowAutoRedirect )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllowAutoRedirect )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowUI )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllowUI )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AutomaticDecompression )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AutomaticDecompression )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CacheControl )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CookieManager )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpCookieManager * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ClientCertificate )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ClientCertificate )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IgnorableServerCertificateErrors )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxConnectionsPerServer )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxConnectionsPerServer )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProxyCredential )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ProxyCredential )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServerCredential )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ServerCredential )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UseProxy )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_UseProxy )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilterVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AllowAutoRedirect(This,value) )
    ( (This)->lpVtbl->put_AllowAutoRedirect(This,value) )
    ( (This)->lpVtbl->get_AllowUI(This,value) )
    ( (This)->lpVtbl->put_AllowUI(This,value) )
    ( (This)->lpVtbl->get_AutomaticDecompression(This,value) )
    ( (This)->lpVtbl->put_AutomaticDecompression(This,value) )
    ( (This)->lpVtbl->get_CacheControl(This,value) )
    ( (This)->lpVtbl->get_CookieManager(This,value) )
    ( (This)->lpVtbl->get_ClientCertificate(This,value) )
    ( (This)->lpVtbl->put_ClientCertificate(This,value) )
    ( (This)->lpVtbl->get_IgnorableServerCertificateErrors(This,value) )
    ( (This)->lpVtbl->get_MaxConnectionsPerServer(This,value) )
    ( (This)->lpVtbl->put_MaxConnectionsPerServer(This,value) )
    ( (This)->lpVtbl->get_ProxyCredential(This,value) )
    ( (This)->lpVtbl->put_ProxyCredential(This,value) )
    ( (This)->lpVtbl->get_ServerCredential(This,value) )
    ( (This)->lpVtbl->put_ServerCredential(This,value) )
    ( (This)->lpVtbl->get_UseProxy(This,value) )
    ( (This)->lpVtbl->put_UseProxy(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Filters_IHttpBaseProtocolFilter2[] = L"Windows.Web.Http.Filters.IHttpBaseProtocolFilter2";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MaxVersion )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2 * This,
                           __RPC__out __x_ABI_CWindows_CWeb_CHttp_CHttpVersion * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxVersion )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2 * This,
                  __x_ABI_CWindows_CWeb_CHttp_CHttpVersion value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2Vtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MaxVersion(This,value) )
    ( (This)->lpVtbl->put_MaxVersion(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Filters_IHttpBaseProtocolFilter3[] = L"Windows.Web.Http.Filters.IHttpBaseProtocolFilter3";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CookieUsageBehavior )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3 * This,
                           __RPC__out __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCookieUsageBehavior * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CookieUsageBehavior )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3 * This,
                  __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCookieUsageBehavior value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3Vtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CookieUsageBehavior(This,value) )
    ( (This)->lpVtbl->put_CookieUsageBehavior(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Filters_IHttpBaseProtocolFilter4[] = L"Windows.Web.Http.Filters.IHttpBaseProtocolFilter4";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_ServerCustomValidationRequested )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CWeb__CHttp__CFilters__CHttpBaseProtocolFilter_Windows__CWeb__CHttp__CFilters__CHttpServerCustomValidationRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ServerCustomValidationRequested )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4 * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *ClearAuthenticationCache )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4 * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4Vtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_ServerCustomValidationRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_ServerCustomValidationRequested(This,token) )
    ( (This)->lpVtbl->ClearAuthenticationCache(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Filters_IHttpBaseProtocolFilter5[] = L"Windows.Web.Http.Filters.IHttpBaseProtocolFilter5";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter5Vtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter5
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_User(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Filters_IHttpBaseProtocolFilterStatics[] = L"Windows.Web.Http.Filters.IHttpBaseProtocolFilterStatics";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilterStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilterStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilterStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilterStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilterStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilterStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilterStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateForUser )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilterStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilter * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilterStaticsVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilterStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilterStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateForUser(This,user,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpBaseProtocolFilterStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Filters_IHttpCacheControl[] = L"Windows.Web.Http.Filters.IHttpCacheControl";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ReadBehavior )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl * This,
                           __RPC__out __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCacheReadBehavior * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ReadBehavior )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl * This,
                  __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCacheReadBehavior value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WriteBehavior )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl * This,
                           __RPC__out __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCacheWriteBehavior * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_WriteBehavior )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl * This,
                  __x_ABI_CWindows_CWeb_CHttp_CFilters_CHttpCacheWriteBehavior value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControlVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ReadBehavior(This,value) )
    ( (This)->lpVtbl->put_ReadBehavior(This,value) )
    ( (This)->lpVtbl->get_WriteBehavior(This,value) )
    ( (This)->lpVtbl->put_WriteBehavior(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpCacheControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Filters_IHttpFilter[] = L"Windows.Web.Http.Filters.IHttpFilter";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SendRequestAsync )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter * This,
                  __RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage * request,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CHttp__CHttpResponseMessage_Windows__CWeb__CHttp__CHttpProgress * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilterVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SendRequestAsync(This,request,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpFilter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Filters_IHttpServerCustomValidationRequestedEventArgs[] = L"Windows.Web.Http.Filters.IHttpServerCustomValidationRequestedEventArgs";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RequestMessage )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServerCertificate )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServerCertificateErrorSeverity )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketSslErrorSeverity * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServerCertificateErrors )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServerIntermediateCertificates )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Reject )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs * This
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RequestMessage(This,value) )
    ( (This)->lpVtbl->get_ServerCertificate(This,value) )
    ( (This)->lpVtbl->get_ServerCertificateErrorSeverity(This,value) )
    ( (This)->lpVtbl->get_ServerCertificateErrors(This,value) )
    ( (This)->lpVtbl->get_ServerIntermediateCertificates(This,value) )
    ( (This)->lpVtbl->Reject(This) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CFilters_CIHttpServerCustomValidationRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Filters_HttpBaseProtocolFilter[] = L"Windows.Web.Http.Filters.HttpBaseProtocolFilter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Filters_HttpCacheControl[] = L"Windows.Web.Http.Filters.HttpCacheControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Filters_HttpServerCustomValidationRequestedEventArgs[] = L"Windows.Web.Http.Filters.HttpServerCustomValidationRequestedEventArgs";
       
       
#pragma clang diagnostic pop
