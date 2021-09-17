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
#include "Windows.Globalization.h"
#include "Windows.Networking.h"
#include "Windows.Storage.Streams.h"
#include "Windows.Web.Http.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCacheDirectiveHeaderValueCollection __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCacheDirectiveHeaderValueCollection;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValue __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValue;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueCollection __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueCollection;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueFactory __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueFactory;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueStatics __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueStatics;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValue __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValue;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueCollection __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueCollection;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueFactory __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueFactory;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueStatics __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueStatics;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValue __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValue;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueCollection __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueCollection;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueFactory __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueFactory;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueStatics __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueStatics;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValue __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValue;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueCollection __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueCollection;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueFactory __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueFactory;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueStatics __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueStatics;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValue __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValue;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValueFactory __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValueFactory;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValueStatics __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValueStatics;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValue __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValue;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValueFactory __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValueFactory;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValueStatics __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValueStatics;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValue __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValue;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueCollection __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueCollection;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueFactory __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueFactory;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueStatics __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueStatics;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValue __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValue;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValueFactory __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValueFactory;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValueStatics __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValueStatics;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpDateOrDeltaHeaderValue __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpDateOrDeltaHeaderValue;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpDateOrDeltaHeaderValueStatics __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpDateOrDeltaHeaderValueStatics;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValue __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValue;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueCollection __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueCollection;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueFactory __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueFactory;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueStatics __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueStatics;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageHeaderValueCollection __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageHeaderValueCollection;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValue __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValue;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueCollection __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueCollection;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueFactory __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueFactory;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueStatics __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueStatics;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValue __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValue;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValueFactory __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValueFactory;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValueStatics __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValueStatics;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValue __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValue;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueCollection __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueCollection;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueFactory __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueFactory;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueStatics __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueStatics;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMethodHeaderValueCollection __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMethodHeaderValueCollection;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValue __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValue;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValueFactory __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValueFactory;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValueStatics __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValueStatics;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValue __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValue;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValueFactory __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValueFactory;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValueStatics __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValueStatics;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValue __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValue;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueCollection __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueCollection;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueFactory __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueFactory;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueStatics __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueStatics;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValue __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValue;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueCollection __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueCollection;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueFactory __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueFactory;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueStatics __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueStatics;
typedef interface __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue;
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue;
typedef struct __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This, __RPC__out __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValue * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValue * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValueVtbl;
interface __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValueVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue;
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue;
typedef struct __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This, __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue **first);
    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValueVtbl;
interface __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValueVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue;
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue;
typedef struct __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This, __RPC__out __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValue * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValue * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValueVtbl;
interface __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValueVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue;
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue;
typedef struct __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This, __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue **first);
    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValueVtbl;
interface __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValueVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue;
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue;
typedef struct __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This, __RPC__out __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValue * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValue * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValueVtbl;
interface __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValueVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue;
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue;
typedef struct __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This, __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue **first);
    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValueVtbl;
interface __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValueVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue;
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue;
typedef struct __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This, __RPC__out __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValue * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValue * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValueVtbl;
interface __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValueVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue;
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue;
typedef struct __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This, __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue **first);
    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValueVtbl;
interface __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValueVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue;
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue;
typedef struct __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This, __RPC__out __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValue * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValue * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValueVtbl;
interface __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValueVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue;
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue;
typedef struct __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This, __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue **first);
    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValueVtbl;
interface __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValueVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue;
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue;
typedef struct __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This, __RPC__out __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValue * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValue * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValueVtbl;
interface __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValueVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue;
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue;
typedef struct __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This, __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue **first);
    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValueVtbl;
interface __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValueVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue;
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue;
typedef struct __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This, __RPC__out __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValue * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValue * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValueVtbl;
interface __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValueVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue;
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue;
typedef struct __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This, __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue **first);
    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValueVtbl;
interface __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValueVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue;
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue;
typedef struct __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This, __RPC__out __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValue * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValue * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValueVtbl;
interface __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValueVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue;
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue;
typedef struct __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This, __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue **first);
    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValueVtbl;
interface __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValueVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue;
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue;
typedef struct __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This, __RPC__out __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValue * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValue * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValueVtbl;
interface __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValueVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue;
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue;
typedef struct __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This, __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue **first);
    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValueVtbl;
interface __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValueVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue;
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue;
typedef struct __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This, __RPC__out __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValue * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValue * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValueVtbl;
interface __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValueVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue;
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue;
typedef struct __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This, __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue **first);
    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValueVtbl;
interface __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValueVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue;
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue;
typedef struct __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This, __RPC__out __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValue * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValue * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValueVtbl;
interface __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValueVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue;
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue;
typedef struct __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This, __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue **first);
    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValueVtbl;
interface __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValueVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue;
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue;
typedef struct __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValue * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This,
                       __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValue * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValue * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValueVtbl;
interface __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValueVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue;
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue;
typedef struct __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValue * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This,
                       __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValue * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValue * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValueVtbl;
interface __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValueVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue;
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue;
typedef struct __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValue * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This,
                       __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValue * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValue * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValueVtbl;
interface __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValueVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue;
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue;
typedef struct __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValue * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This,
                       __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValue * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValue * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValueVtbl;
interface __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValueVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue;
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue;
typedef struct __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValue * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This,
                       __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValue * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValue * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValueVtbl;
interface __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValueVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue;
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue;
typedef struct __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValue * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This,
                       __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValue * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValue * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValueVtbl;
interface __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValueVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue;
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue;
typedef struct __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValue * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This,
                       __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValue * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValue * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValueVtbl;
interface __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValueVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue;
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue;
typedef struct __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValue * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This,
                       __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValue * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValue * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValueVtbl;
interface __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValueVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue;
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue;
typedef struct __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValue * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This,
                       __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValue * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValue * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValueVtbl;
interface __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValueVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue;
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue;
typedef struct __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValue * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This,
                       __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValue * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValue * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValueVtbl;
interface __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValueVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue;
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue;
typedef struct __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValue * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This,
                       __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValue * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValue * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValueVtbl;
interface __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValueVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue;
EXTERN_C const IID IID___FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue;
typedef struct __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This, __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValue * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValue * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValue * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValue * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValue * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This, __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValue * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValue * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValue * *value);
    END_INTERFACE
} __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValueVtbl;
interface __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValue
{
    CONST_VTBL struct __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpChallengeHeaderValueVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue;
EXTERN_C const IID IID___FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue;
typedef struct __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This, __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValue * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValue * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValue * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValue * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValue * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This, __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValue * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValue * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValue * *value);
    END_INTERFACE
} __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValueVtbl;
interface __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValue
{
    CONST_VTBL struct __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpConnectionOptionHeaderValueVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue;
EXTERN_C const IID IID___FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue;
typedef struct __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This, __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValue * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValue * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValue * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValue * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValue * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This, __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValue * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValue * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValue * *value);
    END_INTERFACE
} __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValueVtbl;
interface __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValue
{
    CONST_VTBL struct __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingHeaderValueVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue;
EXTERN_C const IID IID___FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue;
typedef struct __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This, __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValue * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValue * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValue * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValue * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValue * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This, __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValue * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValue * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValue * *value);
    END_INTERFACE
} __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValueVtbl;
interface __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValue
{
    CONST_VTBL struct __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpContentCodingWithQualityHeaderValueVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue;
EXTERN_C const IID IID___FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue;
typedef struct __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This, __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValue * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValue * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValue * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValue * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValue * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This, __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValue * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValue * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValue * *value);
    END_INTERFACE
} __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValueVtbl;
interface __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValue
{
    CONST_VTBL struct __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpCookiePairHeaderValueVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue;
EXTERN_C const IID IID___FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue;
typedef struct __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This, __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValue * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValue * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValue * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValue * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValue * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This, __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValue * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValue * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValue * *value);
    END_INTERFACE
} __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValueVtbl;
interface __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValue
{
    CONST_VTBL struct __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpExpectationHeaderValueVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue;
EXTERN_C const IID IID___FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue;
typedef struct __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This, __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValue * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValue * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValue * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValue * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValue * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This, __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValue * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValue * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValue * *value);
    END_INTERFACE
} __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValueVtbl;
interface __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValue
{
    CONST_VTBL struct __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpLanguageRangeWithQualityHeaderValueVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue;
EXTERN_C const IID IID___FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue;
typedef struct __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This, __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValue * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValue * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValue * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValue * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValue * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This, __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValue * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValue * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValue * *value);
    END_INTERFACE
} __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValueVtbl;
interface __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValue
{
    CONST_VTBL struct __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpMediaTypeWithQualityHeaderValueVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue;
EXTERN_C const IID IID___FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue;
typedef struct __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This, __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValue * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValue * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValue * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValue * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValue * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This, __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValue * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValue * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValue * *value);
    END_INTERFACE
} __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValueVtbl;
interface __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue
{
    CONST_VTBL struct __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValueVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue;
EXTERN_C const IID IID___FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue;
typedef struct __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This, __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValue * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValue * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValue * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValue * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValue * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This, __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValue * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValue * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValue * *value);
    END_INTERFACE
} __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValueVtbl;
interface __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValue
{
    CONST_VTBL struct __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpProductInfoHeaderValueVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue;
EXTERN_C const IID IID___FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue;
typedef struct __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This, __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValue * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValue * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValue * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValue * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValue * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This, __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValue * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValue * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValue * *value);
    END_INTERFACE
} __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValueVtbl;
interface __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValue
{
    CONST_VTBL struct __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpTransferCodingHeaderValueVtbl *lpVtbl;
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
struct __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __FIReference_1_Windows__CFoundation__CTimeSpan __FIReference_1_Windows__CFoundation__CTimeSpan;
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CTimeSpan;
typedef struct __FIReference_1_Windows__CFoundation__CTimeSpanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, __RPC__out struct __x_ABI_CWindows_CFoundation_CTimeSpan *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CTimeSpanVtbl;
interface __FIReference_1_Windows__CFoundation__CTimeSpan
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CTimeSpanVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIReference_1_double __FIReference_1_double;
EXTERN_C const IID IID___FIReference_1_double;
typedef struct __FIReference_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_double * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_double * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_double * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_double * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_double * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_double * This, __RPC__out double *value);
    END_INTERFACE
} __FIReference_1_doubleVtbl;
interface __FIReference_1_double
{
    CONST_VTBL struct __FIReference_1_doubleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
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
typedef interface __x_ABI_CWindows_CGlobalization_CILanguage __x_ABI_CWindows_CGlobalization_CILanguage;
typedef interface __FIIterator_1_Windows__CGlobalization__CLanguage __FIIterator_1_Windows__CGlobalization__CLanguage;
EXTERN_C const IID IID___FIIterator_1_Windows__CGlobalization__CLanguage;
typedef struct __FIIterator_1_Windows__CGlobalization__CLanguageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This, __RPC__out __x_ABI_CWindows_CGlobalization_CILanguage * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGlobalization_CILanguage * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGlobalization__CLanguageVtbl;
interface __FIIterator_1_Windows__CGlobalization__CLanguage
{
    CONST_VTBL struct __FIIterator_1_Windows__CGlobalization__CLanguageVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGlobalization__CLanguage __FIIterable_1_Windows__CGlobalization__CLanguage;
EXTERN_C const IID IID___FIIterable_1_Windows__CGlobalization__CLanguage;
typedef struct __FIIterable_1_Windows__CGlobalization__CLanguageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGlobalization__CLanguage **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGlobalization__CLanguageVtbl;
interface __FIIterable_1_Windows__CGlobalization__CLanguage
{
    CONST_VTBL struct __FIIterable_1_Windows__CGlobalization__CLanguageVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CGlobalization__CLanguage __FIVectorView_1_Windows__CGlobalization__CLanguage;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGlobalization__CLanguage;
typedef struct __FIVectorView_1_Windows__CGlobalization__CLanguageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGlobalization_CILanguage * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
                       __x_ABI_CWindows_CGlobalization_CILanguage * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGlobalization_CILanguage * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGlobalization__CLanguageVtbl;
interface __FIVectorView_1_Windows__CGlobalization__CLanguage
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGlobalization__CLanguageVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CGlobalization__CLanguage __FIVector_1_Windows__CGlobalization__CLanguage;
EXTERN_C const IID IID___FIVector_1_Windows__CGlobalization__CLanguage;
typedef struct __FIVector_1_Windows__CGlobalization__CLanguageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This, __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CILanguage * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CILanguage * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CGlobalization__CLanguage **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This,
                   __RPC__in __x_ABI_CWindows_CGlobalization_CILanguage * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGlobalization_CILanguage * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CGlobalization_CILanguage * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This, __RPC__in __x_ABI_CWindows_CGlobalization_CILanguage * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGlobalization_CILanguage * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CGlobalization__CLanguage * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CGlobalization_CILanguage * *value);
    END_INTERFACE
} __FIVector_1_Windows__CGlobalization__CLanguageVtbl;
interface __FIVector_1_Windows__CGlobalization__CLanguage
{
    CONST_VTBL struct __FIVector_1_Windows__CGlobalization__CLanguageVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod;
typedef interface __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod;
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CHttp__CHttpMethod;
typedef struct __FIIterator_1_Windows__CWeb__CHttp__CHttpMethodVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod * This, __RPC__out __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CHttp__CHttpMethodVtbl;
interface __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CHttp__CHttpMethodVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CWeb__CHttp__CHttpMethod __FIIterable_1_Windows__CWeb__CHttp__CHttpMethod;
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CHttp__CHttpMethod;
typedef struct __FIIterable_1_Windows__CWeb__CHttp__CHttpMethodVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHttpMethod * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHttpMethod * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHttpMethod * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHttpMethod * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHttpMethod * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHttpMethod * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CHttp__CHttpMethod * This, __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CHttp__CHttpMethod **first);
    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CHttp__CHttpMethodVtbl;
interface __FIIterable_1_Windows__CWeb__CHttp__CHttpMethod
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CHttp__CHttpMethodVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod;
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod;
typedef struct __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethodVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod * This,
                       __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethodVtbl;
interface __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethodVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CWeb__CHttp__CHttpMethod __FIVector_1_Windows__CWeb__CHttp__CHttpMethod;
EXTERN_C const IID IID___FIVector_1_Windows__CWeb__CHttp__CHttpMethod;
typedef struct __FIVector_1_Windows__CWeb__CHttp__CHttpMethodVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This, __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CHttp__CHttpMethod **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This, __RPC__in __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CWeb__CHttp__CHttpMethod * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CWeb_CHttp_CIHttpMethod * *value);
    END_INTERFACE
} __FIVector_1_Windows__CWeb__CHttp__CHttpMethodVtbl;
interface __FIVector_1_Windows__CWeb__CHttp__CHttpMethod
{
    CONST_VTBL struct __FIVector_1_Windows__CWeb__CHttp__CHttpMethodVtbl *lpVtbl;
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
typedef interface __FIMap_2_HSTRING_HSTRING __FIMap_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIMap_2_HSTRING_HSTRING;
typedef struct __FIMap_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
                   HSTRING key,
                            __RPC__deref_out_opt HSTRING **value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
                   HSTRING key,
                   __RPC__in_opt HSTRING *value,
                            __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    END_INTERFACE
} __FIMap_2_HSTRING_HSTRINGVtbl;
interface __FIMap_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMap_2_HSTRING_HSTRINGVtbl *lpVtbl;
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
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIStringable __x_ABI_CWindows_CFoundation_CIStringable;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CNetworking_CIHostName __x_ABI_CWindows_CNetworking_CIHostName;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpCacheDirectiveHeaderValueCollection[] = L"Windows.Web.Http.Headers.IHttpCacheDirectiveHeaderValueCollection";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCacheDirectiveHeaderValueCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCacheDirectiveHeaderValueCollection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCacheDirectiveHeaderValueCollection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCacheDirectiveHeaderValueCollection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCacheDirectiveHeaderValueCollection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCacheDirectiveHeaderValueCollection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCacheDirectiveHeaderValueCollection * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MaxAge )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCacheDirectiveHeaderValueCollection * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxAge )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCacheDirectiveHeaderValueCollection * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxStale )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCacheDirectiveHeaderValueCollection * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxStale )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCacheDirectiveHeaderValueCollection * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinFresh )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCacheDirectiveHeaderValueCollection * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MinFresh )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCacheDirectiveHeaderValueCollection * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SharedMaxAge )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCacheDirectiveHeaderValueCollection * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SharedMaxAge )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCacheDirectiveHeaderValueCollection * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
    HRESULT ( STDMETHODCALLTYPE *ParseAdd )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCacheDirectiveHeaderValueCollection * This,
                  __RPC__in HSTRING input
        );
    HRESULT ( STDMETHODCALLTYPE *TryParseAdd )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCacheDirectiveHeaderValueCollection * This,
                  __RPC__in HSTRING input,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCacheDirectiveHeaderValueCollectionVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCacheDirectiveHeaderValueCollection
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCacheDirectiveHeaderValueCollectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MaxAge(This,value) )
    ( (This)->lpVtbl->put_MaxAge(This,value) )
    ( (This)->lpVtbl->get_MaxStale(This,value) )
    ( (This)->lpVtbl->put_MaxStale(This,value) )
    ( (This)->lpVtbl->get_MinFresh(This,value) )
    ( (This)->lpVtbl->put_MinFresh(This,value) )
    ( (This)->lpVtbl->get_SharedMaxAge(This,value) )
    ( (This)->lpVtbl->put_SharedMaxAge(This,value) )
    ( (This)->lpVtbl->ParseAdd(This,input) )
    ( (This)->lpVtbl->TryParseAdd(This,input,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCacheDirectiveHeaderValueCollection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpChallengeHeaderValue[] = L"Windows.Web.Http.Headers.IHttpChallengeHeaderValue";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValue * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValue * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValue * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValue * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValue * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValue * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Parameters )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValue * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Scheme )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValue * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Token )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValue * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValue
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Parameters(This,value) )
    ( (This)->lpVtbl->get_Scheme(This,value) )
    ( (This)->lpVtbl->get_Token(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValue;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpChallengeHeaderValueCollection[] = L"Windows.Web.Http.Headers.IHttpChallengeHeaderValueCollection";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueCollection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueCollection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueCollection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueCollection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueCollection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueCollection * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ParseAdd )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueCollection * This,
                  __RPC__in HSTRING input
        );
    HRESULT ( STDMETHODCALLTYPE *TryParseAdd )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueCollection * This,
                  __RPC__in HSTRING input,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueCollectionVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueCollection
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueCollectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ParseAdd(This,input) )
    ( (This)->lpVtbl->TryParseAdd(This,input,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueCollection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpChallengeHeaderValueFactory[] = L"Windows.Web.Http.Headers.IHttpChallengeHeaderValueFactory";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromScheme )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueFactory * This,
                  __RPC__in HSTRING scheme,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValue * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromSchemeWithToken )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueFactory * This,
                  __RPC__in HSTRING scheme,
                  __RPC__in HSTRING token,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValue * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueFactoryVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromScheme(This,scheme,value) )
    ( (This)->lpVtbl->CreateFromSchemeWithToken(This,scheme,token,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpChallengeHeaderValueStatics[] = L"Windows.Web.Http.Headers.IHttpChallengeHeaderValueStatics";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Parse )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueStatics * This,
                  __RPC__in HSTRING input,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValue * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryParse )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueStatics * This,
                  __RPC__in HSTRING input,
                   __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValue * * challengeHeaderValue,
                           __RPC__out boolean * succeeded
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueStaticsVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Parse(This,input,result) )
    ( (This)->lpVtbl->TryParse(This,input,challengeHeaderValue,succeeded) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpConnectionOptionHeaderValue[] = L"Windows.Web.Http.Headers.IHttpConnectionOptionHeaderValue";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValue * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValue * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValue * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValue * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValue * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValue * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Token )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValue * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValue
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Token(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValue;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpConnectionOptionHeaderValueCollection[] = L"Windows.Web.Http.Headers.IHttpConnectionOptionHeaderValueCollection";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueCollection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueCollection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueCollection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueCollection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueCollection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueCollection * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ParseAdd )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueCollection * This,
                  __RPC__in HSTRING input
        );
    HRESULT ( STDMETHODCALLTYPE *TryParseAdd )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueCollection * This,
                  __RPC__in HSTRING input,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueCollectionVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueCollection
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueCollectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ParseAdd(This,input) )
    ( (This)->lpVtbl->TryParseAdd(This,input,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueCollection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpConnectionOptionHeaderValueFactory[] = L"Windows.Web.Http.Headers.IHttpConnectionOptionHeaderValueFactory";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueFactory * This,
                  __RPC__in HSTRING token,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValue * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueFactoryVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,token,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpConnectionOptionHeaderValueStatics[] = L"Windows.Web.Http.Headers.IHttpConnectionOptionHeaderValueStatics";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Parse )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueStatics * This,
                  __RPC__in HSTRING input,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValue * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryParse )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueStatics * This,
                  __RPC__in HSTRING input,
                   __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValue * * connectionOptionHeaderValue,
                           __RPC__out boolean * succeeded
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueStaticsVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Parse(This,input,result) )
    ( (This)->lpVtbl->TryParse(This,input,connectionOptionHeaderValue,succeeded) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpContentCodingHeaderValue[] = L"Windows.Web.Http.Headers.IHttpContentCodingHeaderValue";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValue * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValue * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValue * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValue * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValue * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValue * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ContentCoding )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValue * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValue
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ContentCoding(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValue;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpContentCodingHeaderValueCollection[] = L"Windows.Web.Http.Headers.IHttpContentCodingHeaderValueCollection";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueCollection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueCollection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueCollection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueCollection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueCollection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueCollection * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ParseAdd )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueCollection * This,
                  __RPC__in HSTRING input
        );
    HRESULT ( STDMETHODCALLTYPE *TryParseAdd )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueCollection * This,
                  __RPC__in HSTRING input,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueCollectionVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueCollection
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueCollectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ParseAdd(This,input) )
    ( (This)->lpVtbl->TryParseAdd(This,input,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueCollection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpContentCodingHeaderValueFactory[] = L"Windows.Web.Http.Headers.IHttpContentCodingHeaderValueFactory";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueFactory * This,
                  __RPC__in HSTRING contentCoding,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValue * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueFactoryVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,contentCoding,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpContentCodingHeaderValueStatics[] = L"Windows.Web.Http.Headers.IHttpContentCodingHeaderValueStatics";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Parse )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueStatics * This,
                  __RPC__in HSTRING input,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValue * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryParse )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueStatics * This,
                  __RPC__in HSTRING input,
                   __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValue * * contentCodingHeaderValue,
                           __RPC__out boolean * succeeded
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueStaticsVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Parse(This,input,result) )
    ( (This)->lpVtbl->TryParse(This,input,contentCodingHeaderValue,succeeded) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpContentCodingWithQualityHeaderValue[] = L"Windows.Web.Http.Headers.IHttpContentCodingWithQualityHeaderValue";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValue * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValue * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValue * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValue * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValue * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValue * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ContentCoding )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValue * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Quality )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValue * This,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValue
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ContentCoding(This,value) )
    ( (This)->lpVtbl->get_Quality(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValue;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpContentCodingWithQualityHeaderValueCollection[] = L"Windows.Web.Http.Headers.IHttpContentCodingWithQualityHeaderValueCollection";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueCollection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueCollection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueCollection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueCollection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueCollection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueCollection * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ParseAdd )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueCollection * This,
                  __RPC__in HSTRING input
        );
    HRESULT ( STDMETHODCALLTYPE *TryParseAdd )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueCollection * This,
                  __RPC__in HSTRING input,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueCollectionVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueCollection
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueCollectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ParseAdd(This,input) )
    ( (This)->lpVtbl->TryParseAdd(This,input,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueCollection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpContentCodingWithQualityHeaderValueFactory[] = L"Windows.Web.Http.Headers.IHttpContentCodingWithQualityHeaderValueFactory";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromValue )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueFactory * This,
                  __RPC__in HSTRING contentCoding,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValue * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromValueWithQuality )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueFactory * This,
                  __RPC__in HSTRING contentCoding,
                  DOUBLE quality,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValue * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueFactoryVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromValue(This,contentCoding,value) )
    ( (This)->lpVtbl->CreateFromValueWithQuality(This,contentCoding,quality,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpContentCodingWithQualityHeaderValueStatics[] = L"Windows.Web.Http.Headers.IHttpContentCodingWithQualityHeaderValueStatics";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Parse )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueStatics * This,
                  __RPC__in HSTRING input,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValue * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryParse )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueStatics * This,
                  __RPC__in HSTRING input,
                   __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValue * * contentCodingWithQualityHeaderValue,
                           __RPC__out boolean * succeeded
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueStaticsVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Parse(This,input,result) )
    ( (This)->lpVtbl->TryParse(This,input,contentCodingWithQualityHeaderValue,succeeded) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValue[] = L"Windows.Web.Http.Headers.IHttpContentDispositionHeaderValue";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValue * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValue * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValue * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValue * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValue * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValue * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DispositionType )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValue * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DispositionType )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValue * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FileName )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValue * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FileName )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValue * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FileNameStar )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValue * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FileNameStar )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValue * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValue * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Name )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValue * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Parameters )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValue * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValue * This,
                           __RPC__deref_out_opt __FIReference_1_UINT64 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Size )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValue * This,
                  __RPC__in_opt __FIReference_1_UINT64 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValueVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValue
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValueVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DispositionType(This,value) )
    ( (This)->lpVtbl->put_DispositionType(This,value) )
    ( (This)->lpVtbl->get_FileName(This,value) )
    ( (This)->lpVtbl->put_FileName(This,value) )
    ( (This)->lpVtbl->get_FileNameStar(This,value) )
    ( (This)->lpVtbl->put_FileNameStar(This,value) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->put_Name(This,value) )
    ( (This)->lpVtbl->get_Parameters(This,value) )
    ( (This)->lpVtbl->get_Size(This,value) )
    ( (This)->lpVtbl->put_Size(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValue;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValueFactory[] = L"Windows.Web.Http.Headers.IHttpContentDispositionHeaderValueFactory";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValueFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValueFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValueFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValueFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValueFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValueFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValueFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValueFactory * This,
                  __RPC__in HSTRING dispositionType,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValue * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValueFactoryVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValueFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValueFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,dispositionType,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValueFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpContentDispositionHeaderValueStatics[] = L"Windows.Web.Http.Headers.IHttpContentDispositionHeaderValueStatics";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValueStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValueStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValueStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValueStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValueStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValueStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValueStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Parse )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValueStatics * This,
                  __RPC__in HSTRING input,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValue * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryParse )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValueStatics * This,
                  __RPC__in HSTRING input,
                   __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValue * * contentDispositionHeaderValue,
                           __RPC__out boolean * succeeded
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValueStaticsVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValueStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValueStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Parse(This,input,result) )
    ( (This)->lpVtbl->TryParse(This,input,contentDispositionHeaderValue,succeeded) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValueStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpContentHeaderCollection[] = L"Windows.Web.Http.Headers.IHttpContentHeaderCollection";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ContentDisposition )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValue * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ContentDisposition )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection * This,
                  __RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentDispositionHeaderValue * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContentEncoding )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingHeaderValueCollection * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContentLanguage )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageHeaderValueCollection * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContentLength )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection * This,
                           __RPC__deref_out_opt __FIReference_1_UINT64 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ContentLength )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection * This,
                  __RPC__in_opt __FIReference_1_UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContentLocation )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ContentLocation )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContentMD5 )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ContentMD5 )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContentRange )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValue * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ContentRange )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection * This,
                  __RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValue * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContentType )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValue * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ContentType )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection * This,
                  __RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValue * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Expires )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Expires )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastModified )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LastModified )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
    HRESULT ( STDMETHODCALLTYPE *Append )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection * This,
                  __RPC__in HSTRING name,
                  __RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *TryAppendWithoutValidation )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection * This,
                  __RPC__in HSTRING name,
                  __RPC__in HSTRING value,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollectionVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ContentDisposition(This,value) )
    ( (This)->lpVtbl->put_ContentDisposition(This,value) )
    ( (This)->lpVtbl->get_ContentEncoding(This,value) )
    ( (This)->lpVtbl->get_ContentLanguage(This,value) )
    ( (This)->lpVtbl->get_ContentLength(This,value) )
    ( (This)->lpVtbl->put_ContentLength(This,value) )
    ( (This)->lpVtbl->get_ContentLocation(This,value) )
    ( (This)->lpVtbl->put_ContentLocation(This,value) )
    ( (This)->lpVtbl->get_ContentMD5(This,value) )
    ( (This)->lpVtbl->put_ContentMD5(This,value) )
    ( (This)->lpVtbl->get_ContentRange(This,value) )
    ( (This)->lpVtbl->put_ContentRange(This,value) )
    ( (This)->lpVtbl->get_ContentType(This,value) )
    ( (This)->lpVtbl->put_ContentType(This,value) )
    ( (This)->lpVtbl->get_Expires(This,value) )
    ( (This)->lpVtbl->put_Expires(This,value) )
    ( (This)->lpVtbl->get_LastModified(This,value) )
    ( (This)->lpVtbl->put_LastModified(This,value) )
    ( (This)->lpVtbl->Append(This,name,value) )
    ( (This)->lpVtbl->TryAppendWithoutValidation(This,name,value,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentHeaderCollection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpContentRangeHeaderValue[] = L"Windows.Web.Http.Headers.IHttpContentRangeHeaderValue";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValue * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValue * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValue * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValue * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValue * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValue * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FirstBytePosition )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValue * This,
                           __RPC__deref_out_opt __FIReference_1_UINT64 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastBytePosition )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValue * This,
                           __RPC__deref_out_opt __FIReference_1_UINT64 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Length )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValue * This,
                           __RPC__deref_out_opt __FIReference_1_UINT64 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Unit )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValue * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Unit )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValue * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValueVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValue
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValueVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FirstBytePosition(This,value) )
    ( (This)->lpVtbl->get_LastBytePosition(This,value) )
    ( (This)->lpVtbl->get_Length(This,value) )
    ( (This)->lpVtbl->get_Unit(This,value) )
    ( (This)->lpVtbl->put_Unit(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValue;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpContentRangeHeaderValueFactory[] = L"Windows.Web.Http.Headers.IHttpContentRangeHeaderValueFactory";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValueFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValueFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValueFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValueFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValueFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValueFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValueFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromLength )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValueFactory * This,
                  UINT64 length,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValue * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromRange )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValueFactory * This,
                  UINT64 from,
                  UINT64 to,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValue * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromRangeWithLength )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValueFactory * This,
                  UINT64 from,
                  UINT64 to,
                  UINT64 length,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValue * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValueFactoryVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValueFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValueFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromLength(This,length,value) )
    ( (This)->lpVtbl->CreateFromRange(This,from,to,value) )
    ( (This)->lpVtbl->CreateFromRangeWithLength(This,from,to,length,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValueFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpContentRangeHeaderValueStatics[] = L"Windows.Web.Http.Headers.IHttpContentRangeHeaderValueStatics";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValueStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValueStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValueStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValueStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValueStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValueStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValueStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Parse )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValueStatics * This,
                  __RPC__in HSTRING input,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValue * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryParse )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValueStatics * This,
                  __RPC__in HSTRING input,
                   __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValue * * contentRangeHeaderValue,
                           __RPC__out boolean * succeeded
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValueStaticsVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValueStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValueStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Parse(This,input,result) )
    ( (This)->lpVtbl->TryParse(This,input,contentRangeHeaderValue,succeeded) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentRangeHeaderValueStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpCookiePairHeaderValue[] = L"Windows.Web.Http.Headers.IHttpCookiePairHeaderValue";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValue * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValue * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValue * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValue * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValue * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValue * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValue * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValue * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValue * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValue
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->put_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValue;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpCookiePairHeaderValueCollection[] = L"Windows.Web.Http.Headers.IHttpCookiePairHeaderValueCollection";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueCollection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueCollection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueCollection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueCollection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueCollection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueCollection * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ParseAdd )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueCollection * This,
                  __RPC__in HSTRING input
        );
    HRESULT ( STDMETHODCALLTYPE *TryParseAdd )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueCollection * This,
                  __RPC__in HSTRING input,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueCollectionVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueCollection
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueCollectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ParseAdd(This,input) )
    ( (This)->lpVtbl->TryParseAdd(This,input,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueCollection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpCookiePairHeaderValueFactory[] = L"Windows.Web.Http.Headers.IHttpCookiePairHeaderValueFactory";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromName )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueFactory * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValue * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromNameWithValue )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueFactory * This,
                  __RPC__in HSTRING name,
                  __RPC__in HSTRING value,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValue * * cookiePairHeaderValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueFactoryVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromName(This,name,value) )
    ( (This)->lpVtbl->CreateFromNameWithValue(This,name,value,cookiePairHeaderValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpCookiePairHeaderValueStatics[] = L"Windows.Web.Http.Headers.IHttpCookiePairHeaderValueStatics";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Parse )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueStatics * This,
                  __RPC__in HSTRING input,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValue * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryParse )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueStatics * This,
                  __RPC__in HSTRING input,
                   __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValue * * cookiePairHeaderValue,
                           __RPC__out boolean * succeeded
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueStaticsVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Parse(This,input,result) )
    ( (This)->lpVtbl->TryParse(This,input,cookiePairHeaderValue,succeeded) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpCredentialsHeaderValue[] = L"Windows.Web.Http.Headers.IHttpCredentialsHeaderValue";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValue * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValue * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValue * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValue * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValue * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValue * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Parameters )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValue * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Scheme )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValue * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Token )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValue * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValueVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValue
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValueVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Parameters(This,value) )
    ( (This)->lpVtbl->get_Scheme(This,value) )
    ( (This)->lpVtbl->get_Token(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValue;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpCredentialsHeaderValueFactory[] = L"Windows.Web.Http.Headers.IHttpCredentialsHeaderValueFactory";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValueFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValueFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValueFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValueFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValueFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValueFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValueFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromScheme )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValueFactory * This,
                  __RPC__in HSTRING scheme,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValue * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromSchemeWithToken )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValueFactory * This,
                  __RPC__in HSTRING scheme,
                  __RPC__in HSTRING token,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValue * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValueFactoryVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValueFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValueFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromScheme(This,scheme,value) )
    ( (This)->lpVtbl->CreateFromSchemeWithToken(This,scheme,token,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValueFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpCredentialsHeaderValueStatics[] = L"Windows.Web.Http.Headers.IHttpCredentialsHeaderValueStatics";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValueStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValueStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValueStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValueStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValueStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValueStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValueStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Parse )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValueStatics * This,
                  __RPC__in HSTRING input,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValue * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryParse )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValueStatics * This,
                  __RPC__in HSTRING input,
                   __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValue * * credentialsHeaderValue,
                           __RPC__out boolean * succeeded
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValueStaticsVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValueStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValueStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Parse(This,input,result) )
    ( (This)->lpVtbl->TryParse(This,input,credentialsHeaderValue,succeeded) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValueStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpDateOrDeltaHeaderValue[] = L"Windows.Web.Http.Headers.IHttpDateOrDeltaHeaderValue";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpDateOrDeltaHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpDateOrDeltaHeaderValue * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpDateOrDeltaHeaderValue * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpDateOrDeltaHeaderValue * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpDateOrDeltaHeaderValue * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpDateOrDeltaHeaderValue * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpDateOrDeltaHeaderValue * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Date )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpDateOrDeltaHeaderValue * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Delta )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpDateOrDeltaHeaderValue * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpDateOrDeltaHeaderValueVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpDateOrDeltaHeaderValue
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpDateOrDeltaHeaderValueVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Date(This,value) )
    ( (This)->lpVtbl->get_Delta(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpDateOrDeltaHeaderValue;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpDateOrDeltaHeaderValueStatics[] = L"Windows.Web.Http.Headers.IHttpDateOrDeltaHeaderValueStatics";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpDateOrDeltaHeaderValueStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpDateOrDeltaHeaderValueStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpDateOrDeltaHeaderValueStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpDateOrDeltaHeaderValueStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpDateOrDeltaHeaderValueStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpDateOrDeltaHeaderValueStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpDateOrDeltaHeaderValueStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Parse )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpDateOrDeltaHeaderValueStatics * This,
                  __RPC__in HSTRING input,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpDateOrDeltaHeaderValue * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryParse )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpDateOrDeltaHeaderValueStatics * This,
                  __RPC__in HSTRING input,
                   __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpDateOrDeltaHeaderValue * * dateOrDeltaHeaderValue,
                           __RPC__out boolean * succeeded
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpDateOrDeltaHeaderValueStaticsVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpDateOrDeltaHeaderValueStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpDateOrDeltaHeaderValueStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Parse(This,input,result) )
    ( (This)->lpVtbl->TryParse(This,input,dateOrDeltaHeaderValue,succeeded) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpDateOrDeltaHeaderValueStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpExpectationHeaderValue[] = L"Windows.Web.Http.Headers.IHttpExpectationHeaderValue";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValue * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValue * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValue * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValue * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValue * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValue * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValue * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValue * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValue * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Parameters )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValue * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValue
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->put_Value(This,value) )
    ( (This)->lpVtbl->get_Parameters(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValue;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpExpectationHeaderValueCollection[] = L"Windows.Web.Http.Headers.IHttpExpectationHeaderValueCollection";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueCollection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueCollection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueCollection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueCollection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueCollection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueCollection * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ParseAdd )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueCollection * This,
                  __RPC__in HSTRING input
        );
    HRESULT ( STDMETHODCALLTYPE *TryParseAdd )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueCollection * This,
                  __RPC__in HSTRING input,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueCollectionVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueCollection
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueCollectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ParseAdd(This,input) )
    ( (This)->lpVtbl->TryParseAdd(This,input,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueCollection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpExpectationHeaderValueFactory[] = L"Windows.Web.Http.Headers.IHttpExpectationHeaderValueFactory";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromName )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueFactory * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValue * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromNameWithValue )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueFactory * This,
                  __RPC__in HSTRING name,
                  __RPC__in HSTRING value,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValue * * expectationHeaderValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueFactoryVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromName(This,name,value) )
    ( (This)->lpVtbl->CreateFromNameWithValue(This,name,value,expectationHeaderValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpExpectationHeaderValueStatics[] = L"Windows.Web.Http.Headers.IHttpExpectationHeaderValueStatics";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Parse )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueStatics * This,
                  __RPC__in HSTRING input,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValue * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryParse )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueStatics * This,
                  __RPC__in HSTRING input,
                   __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValue * * expectationHeaderValue,
                           __RPC__out boolean * succeeded
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueStaticsVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Parse(This,input,result) )
    ( (This)->lpVtbl->TryParse(This,input,expectationHeaderValue,succeeded) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpLanguageHeaderValueCollection[] = L"Windows.Web.Http.Headers.IHttpLanguageHeaderValueCollection";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageHeaderValueCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageHeaderValueCollection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageHeaderValueCollection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageHeaderValueCollection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageHeaderValueCollection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageHeaderValueCollection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageHeaderValueCollection * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ParseAdd )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageHeaderValueCollection * This,
                  __RPC__in HSTRING input
        );
    HRESULT ( STDMETHODCALLTYPE *TryParseAdd )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageHeaderValueCollection * This,
                  __RPC__in HSTRING input,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageHeaderValueCollectionVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageHeaderValueCollection
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageHeaderValueCollectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ParseAdd(This,input) )
    ( (This)->lpVtbl->TryParseAdd(This,input,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageHeaderValueCollection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpLanguageRangeWithQualityHeaderValue[] = L"Windows.Web.Http.Headers.IHttpLanguageRangeWithQualityHeaderValue";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValue * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValue * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValue * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValue * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValue * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValue * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LanguageRange )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValue * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Quality )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValue * This,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValue
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LanguageRange(This,value) )
    ( (This)->lpVtbl->get_Quality(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValue;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpLanguageRangeWithQualityHeaderValueCollection[] = L"Windows.Web.Http.Headers.IHttpLanguageRangeWithQualityHeaderValueCollection";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueCollection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueCollection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueCollection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueCollection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueCollection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueCollection * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ParseAdd )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueCollection * This,
                  __RPC__in HSTRING input
        );
    HRESULT ( STDMETHODCALLTYPE *TryParseAdd )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueCollection * This,
                  __RPC__in HSTRING input,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueCollectionVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueCollection
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueCollectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ParseAdd(This,input) )
    ( (This)->lpVtbl->TryParseAdd(This,input,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueCollection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpLanguageRangeWithQualityHeaderValueFactory[] = L"Windows.Web.Http.Headers.IHttpLanguageRangeWithQualityHeaderValueFactory";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromLanguageRange )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueFactory * This,
                  __RPC__in HSTRING languageRange,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValue * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromLanguageRangeWithQuality )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueFactory * This,
                  __RPC__in HSTRING languageRange,
                  DOUBLE quality,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValue * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueFactoryVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromLanguageRange(This,languageRange,value) )
    ( (This)->lpVtbl->CreateFromLanguageRangeWithQuality(This,languageRange,quality,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpLanguageRangeWithQualityHeaderValueStatics[] = L"Windows.Web.Http.Headers.IHttpLanguageRangeWithQualityHeaderValueStatics";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Parse )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueStatics * This,
                  __RPC__in HSTRING input,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValue * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryParse )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueStatics * This,
                  __RPC__in HSTRING input,
                   __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValue * * languageRangeWithQualityHeaderValue,
                           __RPC__out boolean * succeeded
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueStaticsVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Parse(This,input,result) )
    ( (This)->lpVtbl->TryParse(This,input,languageRangeWithQualityHeaderValue,succeeded) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpMediaTypeHeaderValue[] = L"Windows.Web.Http.Headers.IHttpMediaTypeHeaderValue";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValue * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValue * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValue * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValue * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValue * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValue * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CharSet )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValue * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CharSet )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValue * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediaType )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValue * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MediaType )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValue * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Parameters )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValue * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValueVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValue
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValueVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CharSet(This,value) )
    ( (This)->lpVtbl->put_CharSet(This,value) )
    ( (This)->lpVtbl->get_MediaType(This,value) )
    ( (This)->lpVtbl->put_MediaType(This,value) )
    ( (This)->lpVtbl->get_Parameters(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValue;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpMediaTypeHeaderValueFactory[] = L"Windows.Web.Http.Headers.IHttpMediaTypeHeaderValueFactory";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValueFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValueFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValueFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValueFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValueFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValueFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValueFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValueFactory * This,
                  __RPC__in HSTRING mediaType,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValue * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValueFactoryVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValueFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValueFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,mediaType,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValueFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpMediaTypeHeaderValueStatics[] = L"Windows.Web.Http.Headers.IHttpMediaTypeHeaderValueStatics";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValueStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValueStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValueStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValueStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValueStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValueStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValueStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Parse )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValueStatics * This,
                  __RPC__in HSTRING input,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValue * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryParse )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValueStatics * This,
                  __RPC__in HSTRING input,
                   __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValue * * mediaTypeHeaderValue,
                           __RPC__out boolean * succeeded
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValueStaticsVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValueStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValueStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Parse(This,input,result) )
    ( (This)->lpVtbl->TryParse(This,input,mediaTypeHeaderValue,succeeded) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeHeaderValueStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValue[] = L"Windows.Web.Http.Headers.IHttpMediaTypeWithQualityHeaderValue";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValue * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValue * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValue * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValue * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValue * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValue * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CharSet )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValue * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CharSet )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValue * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediaType )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValue * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MediaType )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValue * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Parameters )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValue * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Quality )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValue * This,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Quality )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValue * This,
                  __RPC__in_opt __FIReference_1_double * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValue
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CharSet(This,value) )
    ( (This)->lpVtbl->put_CharSet(This,value) )
    ( (This)->lpVtbl->get_MediaType(This,value) )
    ( (This)->lpVtbl->put_MediaType(This,value) )
    ( (This)->lpVtbl->get_Parameters(This,value) )
    ( (This)->lpVtbl->get_Quality(This,value) )
    ( (This)->lpVtbl->put_Quality(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValue;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValueCollection[] = L"Windows.Web.Http.Headers.IHttpMediaTypeWithQualityHeaderValueCollection";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueCollection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueCollection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueCollection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueCollection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueCollection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueCollection * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ParseAdd )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueCollection * This,
                  __RPC__in HSTRING input
        );
    HRESULT ( STDMETHODCALLTYPE *TryParseAdd )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueCollection * This,
                  __RPC__in HSTRING input,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueCollectionVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueCollection
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueCollectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ParseAdd(This,input) )
    ( (This)->lpVtbl->TryParseAdd(This,input,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueCollection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValueFactory[] = L"Windows.Web.Http.Headers.IHttpMediaTypeWithQualityHeaderValueFactory";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromMediaType )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueFactory * This,
                  __RPC__in HSTRING mediaType,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValue * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromMediaTypeWithQuality )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueFactory * This,
                  __RPC__in HSTRING mediaType,
                  DOUBLE quality,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValue * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueFactoryVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromMediaType(This,mediaType,value) )
    ( (This)->lpVtbl->CreateFromMediaTypeWithQuality(This,mediaType,quality,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpMediaTypeWithQualityHeaderValueStatics[] = L"Windows.Web.Http.Headers.IHttpMediaTypeWithQualityHeaderValueStatics";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Parse )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueStatics * This,
                  __RPC__in HSTRING input,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValue * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryParse )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueStatics * This,
                  __RPC__in HSTRING input,
                   __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValue * * mediaTypeWithQualityHeaderValue,
                           __RPC__out boolean * succeeded
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueStaticsVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Parse(This,input,result) )
    ( (This)->lpVtbl->TryParse(This,input,mediaTypeWithQualityHeaderValue,succeeded) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpMethodHeaderValueCollection[] = L"Windows.Web.Http.Headers.IHttpMethodHeaderValueCollection";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMethodHeaderValueCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMethodHeaderValueCollection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMethodHeaderValueCollection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMethodHeaderValueCollection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMethodHeaderValueCollection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMethodHeaderValueCollection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMethodHeaderValueCollection * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ParseAdd )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMethodHeaderValueCollection * This,
                  __RPC__in HSTRING input
        );
    HRESULT ( STDMETHODCALLTYPE *TryParseAdd )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMethodHeaderValueCollection * This,
                  __RPC__in HSTRING input,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMethodHeaderValueCollectionVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMethodHeaderValueCollection
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMethodHeaderValueCollectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ParseAdd(This,input) )
    ( (This)->lpVtbl->TryParseAdd(This,input,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMethodHeaderValueCollection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpNameValueHeaderValue[] = L"Windows.Web.Http.Headers.IHttpNameValueHeaderValue";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValue * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValue * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValue * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValue * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValue * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValue * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValue * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValue * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValue * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValueVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValue
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValueVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->put_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValue;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpNameValueHeaderValueFactory[] = L"Windows.Web.Http.Headers.IHttpNameValueHeaderValueFactory";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValueFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValueFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValueFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValueFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValueFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValueFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValueFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromName )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValueFactory * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValue * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromNameWithValue )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValueFactory * This,
                  __RPC__in HSTRING name,
                  __RPC__in HSTRING value,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValue * * nameValueHeaderValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValueFactoryVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValueFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValueFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromName(This,name,value) )
    ( (This)->lpVtbl->CreateFromNameWithValue(This,name,value,nameValueHeaderValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValueFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpNameValueHeaderValueStatics[] = L"Windows.Web.Http.Headers.IHttpNameValueHeaderValueStatics";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValueStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValueStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValueStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValueStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValueStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValueStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValueStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Parse )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValueStatics * This,
                  __RPC__in HSTRING input,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValue * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryParse )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValueStatics * This,
                  __RPC__in HSTRING input,
                   __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValue * * nameValueHeaderValue,
                           __RPC__out boolean * succeeded
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValueStaticsVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValueStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValueStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Parse(This,input,result) )
    ( (This)->lpVtbl->TryParse(This,input,nameValueHeaderValue,succeeded) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpNameValueHeaderValueStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpProductHeaderValue[] = L"Windows.Web.Http.Headers.IHttpProductHeaderValue";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValue * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValue * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValue * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValue * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValue * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValue * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValue * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Version )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValue * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValueVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValue
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValueVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_Version(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValue;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpProductHeaderValueFactory[] = L"Windows.Web.Http.Headers.IHttpProductHeaderValueFactory";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValueFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValueFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValueFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValueFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValueFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValueFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValueFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromName )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValueFactory * This,
                  __RPC__in HSTRING productName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValue * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromNameWithVersion )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValueFactory * This,
                  __RPC__in HSTRING productName,
                  __RPC__in HSTRING productVersion,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValue * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValueFactoryVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValueFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValueFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromName(This,productName,value) )
    ( (This)->lpVtbl->CreateFromNameWithVersion(This,productName,productVersion,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValueFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpProductHeaderValueStatics[] = L"Windows.Web.Http.Headers.IHttpProductHeaderValueStatics";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValueStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValueStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValueStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValueStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValueStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValueStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValueStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Parse )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValueStatics * This,
                  __RPC__in HSTRING input,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValue * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryParse )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValueStatics * This,
                  __RPC__in HSTRING input,
                   __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValue * * productHeaderValue,
                           __RPC__out boolean * succeeded
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValueStaticsVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValueStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValueStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Parse(This,input,result) )
    ( (This)->lpVtbl->TryParse(This,input,productHeaderValue,succeeded) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValueStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpProductInfoHeaderValue[] = L"Windows.Web.Http.Headers.IHttpProductInfoHeaderValue";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValue * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValue * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValue * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValue * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValue * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValue * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Product )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValue * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductHeaderValue * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Comment )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValue * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValue
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Product(This,value) )
    ( (This)->lpVtbl->get_Comment(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValue;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpProductInfoHeaderValueCollection[] = L"Windows.Web.Http.Headers.IHttpProductInfoHeaderValueCollection";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueCollection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueCollection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueCollection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueCollection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueCollection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueCollection * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ParseAdd )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueCollection * This,
                  __RPC__in HSTRING input
        );
    HRESULT ( STDMETHODCALLTYPE *TryParseAdd )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueCollection * This,
                  __RPC__in HSTRING input,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueCollectionVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueCollection
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueCollectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ParseAdd(This,input) )
    ( (This)->lpVtbl->TryParseAdd(This,input,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueCollection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpProductInfoHeaderValueFactory[] = L"Windows.Web.Http.Headers.IHttpProductInfoHeaderValueFactory";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromComment )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueFactory * This,
                  __RPC__in HSTRING productComment,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValue * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromNameWithVersion )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueFactory * This,
                  __RPC__in HSTRING productName,
                  __RPC__in HSTRING productVersion,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValue * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueFactoryVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromComment(This,productComment,value) )
    ( (This)->lpVtbl->CreateFromNameWithVersion(This,productName,productVersion,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpProductInfoHeaderValueStatics[] = L"Windows.Web.Http.Headers.IHttpProductInfoHeaderValueStatics";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Parse )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueStatics * This,
                  __RPC__in HSTRING input,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValue * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryParse )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueStatics * This,
                  __RPC__in HSTRING input,
                   __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValue * * productInfoHeaderValue,
                           __RPC__out boolean * succeeded
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueStaticsVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Parse(This,input,result) )
    ( (This)->lpVtbl->TryParse(This,input,productInfoHeaderValue,succeeded) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpRequestHeaderCollection[] = L"Windows.Web.Http.Headers.IHttpRequestHeaderCollection";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Accept )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMediaTypeWithQualityHeaderValueCollection * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AcceptEncoding )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpContentCodingWithQualityHeaderValueCollection * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AcceptLanguage )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpLanguageRangeWithQualityHeaderValueCollection * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Authorization )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValue * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Authorization )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This,
                  __RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValue * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CacheControl )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCacheDirectiveHeaderValueCollection * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Connection )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueCollection * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Cookie )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCookiePairHeaderValueCollection * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Date )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Date )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Expect )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpExpectationHeaderValueCollection * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_From )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_From )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Host )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Host )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IfModifiedSince )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IfModifiedSince )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IfUnmodifiedSince )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IfUnmodifiedSince )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxForwards )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxForwards )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This,
                  __RPC__in_opt __FIReference_1_UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProxyAuthorization )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValue * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ProxyAuthorization )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This,
                  __RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCredentialsHeaderValue * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Referer )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Referer )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransferEncoding )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueCollection * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UserAgent )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpProductInfoHeaderValueCollection * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Append )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This,
                  __RPC__in HSTRING name,
                  __RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *TryAppendWithoutValidation )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection * This,
                  __RPC__in HSTRING name,
                  __RPC__in HSTRING value,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollectionVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Accept(This,value) )
    ( (This)->lpVtbl->get_AcceptEncoding(This,value) )
    ( (This)->lpVtbl->get_AcceptLanguage(This,value) )
    ( (This)->lpVtbl->get_Authorization(This,value) )
    ( (This)->lpVtbl->put_Authorization(This,value) )
    ( (This)->lpVtbl->get_CacheControl(This,value) )
    ( (This)->lpVtbl->get_Connection(This,value) )
    ( (This)->lpVtbl->get_Cookie(This,value) )
    ( (This)->lpVtbl->get_Date(This,value) )
    ( (This)->lpVtbl->put_Date(This,value) )
    ( (This)->lpVtbl->get_Expect(This,value) )
    ( (This)->lpVtbl->get_From(This,value) )
    ( (This)->lpVtbl->put_From(This,value) )
    ( (This)->lpVtbl->get_Host(This,value) )
    ( (This)->lpVtbl->put_Host(This,value) )
    ( (This)->lpVtbl->get_IfModifiedSince(This,value) )
    ( (This)->lpVtbl->put_IfModifiedSince(This,value) )
    ( (This)->lpVtbl->get_IfUnmodifiedSince(This,value) )
    ( (This)->lpVtbl->put_IfUnmodifiedSince(This,value) )
    ( (This)->lpVtbl->get_MaxForwards(This,value) )
    ( (This)->lpVtbl->put_MaxForwards(This,value) )
    ( (This)->lpVtbl->get_ProxyAuthorization(This,value) )
    ( (This)->lpVtbl->put_ProxyAuthorization(This,value) )
    ( (This)->lpVtbl->get_Referer(This,value) )
    ( (This)->lpVtbl->put_Referer(This,value) )
    ( (This)->lpVtbl->get_TransferEncoding(This,value) )
    ( (This)->lpVtbl->get_UserAgent(This,value) )
    ( (This)->lpVtbl->Append(This,name,value) )
    ( (This)->lpVtbl->TryAppendWithoutValidation(This,name,value,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpRequestHeaderCollection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpResponseHeaderCollection[] = L"Windows.Web.Http.Headers.IHttpResponseHeaderCollection";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Age )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Age )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Allow )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpMethodHeaderValueCollection * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CacheControl )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpCacheDirectiveHeaderValueCollection * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Connection )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpConnectionOptionHeaderValueCollection * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Date )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Date )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Location )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Location )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProxyAuthenticate )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueCollection * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RetryAfter )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpDateOrDeltaHeaderValue * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RetryAfter )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection * This,
                  __RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpDateOrDeltaHeaderValue * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransferEncoding )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueCollection * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WwwAuthenticate )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpChallengeHeaderValueCollection * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Append )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection * This,
                  __RPC__in HSTRING name,
                  __RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *TryAppendWithoutValidation )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection * This,
                  __RPC__in HSTRING name,
                  __RPC__in HSTRING value,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollectionVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Age(This,value) )
    ( (This)->lpVtbl->put_Age(This,value) )
    ( (This)->lpVtbl->get_Allow(This,value) )
    ( (This)->lpVtbl->get_CacheControl(This,value) )
    ( (This)->lpVtbl->get_Connection(This,value) )
    ( (This)->lpVtbl->get_Date(This,value) )
    ( (This)->lpVtbl->put_Date(This,value) )
    ( (This)->lpVtbl->get_Location(This,value) )
    ( (This)->lpVtbl->put_Location(This,value) )
    ( (This)->lpVtbl->get_ProxyAuthenticate(This,value) )
    ( (This)->lpVtbl->get_RetryAfter(This,value) )
    ( (This)->lpVtbl->put_RetryAfter(This,value) )
    ( (This)->lpVtbl->get_TransferEncoding(This,value) )
    ( (This)->lpVtbl->get_WwwAuthenticate(This,value) )
    ( (This)->lpVtbl->Append(This,name,value) )
    ( (This)->lpVtbl->TryAppendWithoutValidation(This,name,value,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpResponseHeaderCollection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpTransferCodingHeaderValue[] = L"Windows.Web.Http.Headers.IHttpTransferCodingHeaderValue";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValue * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValue * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValue * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValue * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValue * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValue * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Parameters )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValue * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CWeb__CHttp__CHeaders__CHttpNameValueHeaderValue * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValue * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValue
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Parameters(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValue;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpTransferCodingHeaderValueCollection[] = L"Windows.Web.Http.Headers.IHttpTransferCodingHeaderValueCollection";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueCollection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueCollection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueCollection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueCollection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueCollection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueCollection * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ParseAdd )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueCollection * This,
                  __RPC__in HSTRING input
        );
    HRESULT ( STDMETHODCALLTYPE *TryParseAdd )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueCollection * This,
                  __RPC__in HSTRING input,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueCollectionVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueCollection
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueCollectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ParseAdd(This,input) )
    ( (This)->lpVtbl->TryParseAdd(This,input,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueCollection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpTransferCodingHeaderValueFactory[] = L"Windows.Web.Http.Headers.IHttpTransferCodingHeaderValueFactory";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueFactory * This,
                  __RPC__in HSTRING input,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValue * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueFactoryVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,input,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Http_Headers_IHttpTransferCodingHeaderValueStatics[] = L"Windows.Web.Http.Headers.IHttpTransferCodingHeaderValueStatics";
typedef struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Parse )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueStatics * This,
                  __RPC__in HSTRING input,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValue * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryParse )(
        __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueStatics * This,
                  __RPC__in HSTRING input,
                   __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValue * * transferCodingHeaderValue,
                           __RPC__out boolean * succeeded
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueStaticsVtbl;
interface __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Parse(This,input,result) )
    ( (This)->lpVtbl->TryParse(This,input,transferCodingHeaderValue,succeeded) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CHttp_CHeaders_CIHttpTransferCodingHeaderValueStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Headers_HttpCacheDirectiveHeaderValueCollection[] = L"Windows.Web.Http.Headers.HttpCacheDirectiveHeaderValueCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Headers_HttpChallengeHeaderValue[] = L"Windows.Web.Http.Headers.HttpChallengeHeaderValue";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Headers_HttpChallengeHeaderValueCollection[] = L"Windows.Web.Http.Headers.HttpChallengeHeaderValueCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Headers_HttpConnectionOptionHeaderValue[] = L"Windows.Web.Http.Headers.HttpConnectionOptionHeaderValue";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Headers_HttpConnectionOptionHeaderValueCollection[] = L"Windows.Web.Http.Headers.HttpConnectionOptionHeaderValueCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Headers_HttpContentCodingHeaderValue[] = L"Windows.Web.Http.Headers.HttpContentCodingHeaderValue";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Headers_HttpContentCodingHeaderValueCollection[] = L"Windows.Web.Http.Headers.HttpContentCodingHeaderValueCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Headers_HttpContentCodingWithQualityHeaderValue[] = L"Windows.Web.Http.Headers.HttpContentCodingWithQualityHeaderValue";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Headers_HttpContentCodingWithQualityHeaderValueCollection[] = L"Windows.Web.Http.Headers.HttpContentCodingWithQualityHeaderValueCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Headers_HttpContentDispositionHeaderValue[] = L"Windows.Web.Http.Headers.HttpContentDispositionHeaderValue";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Headers_HttpContentHeaderCollection[] = L"Windows.Web.Http.Headers.HttpContentHeaderCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Headers_HttpContentRangeHeaderValue[] = L"Windows.Web.Http.Headers.HttpContentRangeHeaderValue";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Headers_HttpCookiePairHeaderValue[] = L"Windows.Web.Http.Headers.HttpCookiePairHeaderValue";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Headers_HttpCookiePairHeaderValueCollection[] = L"Windows.Web.Http.Headers.HttpCookiePairHeaderValueCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Headers_HttpCredentialsHeaderValue[] = L"Windows.Web.Http.Headers.HttpCredentialsHeaderValue";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Headers_HttpDateOrDeltaHeaderValue[] = L"Windows.Web.Http.Headers.HttpDateOrDeltaHeaderValue";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Headers_HttpExpectationHeaderValue[] = L"Windows.Web.Http.Headers.HttpExpectationHeaderValue";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Headers_HttpExpectationHeaderValueCollection[] = L"Windows.Web.Http.Headers.HttpExpectationHeaderValueCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Headers_HttpLanguageHeaderValueCollection[] = L"Windows.Web.Http.Headers.HttpLanguageHeaderValueCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Headers_HttpLanguageRangeWithQualityHeaderValue[] = L"Windows.Web.Http.Headers.HttpLanguageRangeWithQualityHeaderValue";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Headers_HttpLanguageRangeWithQualityHeaderValueCollection[] = L"Windows.Web.Http.Headers.HttpLanguageRangeWithQualityHeaderValueCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Headers_HttpMediaTypeHeaderValue[] = L"Windows.Web.Http.Headers.HttpMediaTypeHeaderValue";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Headers_HttpMediaTypeWithQualityHeaderValue[] = L"Windows.Web.Http.Headers.HttpMediaTypeWithQualityHeaderValue";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Headers_HttpMediaTypeWithQualityHeaderValueCollection[] = L"Windows.Web.Http.Headers.HttpMediaTypeWithQualityHeaderValueCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Headers_HttpMethodHeaderValueCollection[] = L"Windows.Web.Http.Headers.HttpMethodHeaderValueCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Headers_HttpNameValueHeaderValue[] = L"Windows.Web.Http.Headers.HttpNameValueHeaderValue";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Headers_HttpProductHeaderValue[] = L"Windows.Web.Http.Headers.HttpProductHeaderValue";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Headers_HttpProductInfoHeaderValue[] = L"Windows.Web.Http.Headers.HttpProductInfoHeaderValue";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Headers_HttpProductInfoHeaderValueCollection[] = L"Windows.Web.Http.Headers.HttpProductInfoHeaderValueCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Headers_HttpRequestHeaderCollection[] = L"Windows.Web.Http.Headers.HttpRequestHeaderCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Headers_HttpResponseHeaderCollection[] = L"Windows.Web.Http.Headers.HttpResponseHeaderCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Headers_HttpTransferCodingHeaderValue[] = L"Windows.Web.Http.Headers.HttpTransferCodingHeaderValue";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Http_Headers_HttpTransferCodingHeaderValueCollection[] = L"Windows.Web.Http.Headers.HttpTransferCodingHeaderValueCollection";
       
       
#pragma clang diagnostic pop
