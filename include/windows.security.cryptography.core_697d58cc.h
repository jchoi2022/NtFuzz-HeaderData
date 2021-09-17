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
#include "Windows.Security.Cryptography.Certificates.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2 __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2 __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2 __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2 __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2 __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2 __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2 __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKeyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKeyVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKeyVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKeyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This, __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKeyVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKeyVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBufferVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate;
typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCapi1KdfTargetAlgorithm __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCapi1KdfTargetAlgorithm;
typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPadding __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPadding;
typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPrivateKeyBlobType __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPrivateKeyBlobType;
typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPublicKeyBlobType __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPublicKeyBlobType;
enum __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCapi1KdfTargetAlgorithm
{
    Capi1KdfTargetAlgorithm_NotAes = 0,
    Capi1KdfTargetAlgorithm_Aes = 1,
};
enum __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPadding
{
    CryptographicPadding_None = 0,
    CryptographicPadding_RsaOaep = 1,
    CryptographicPadding_RsaPkcs1V15 = 2,
    CryptographicPadding_RsaPss = 3,
};
enum __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPrivateKeyBlobType
{
    CryptographicPrivateKeyBlobType_Pkcs8RawPrivateKeyInfo = 0,
    CryptographicPrivateKeyBlobType_Pkcs1RsaPrivateKey = 1,
    CryptographicPrivateKeyBlobType_BCryptPrivateKey = 2,
    CryptographicPrivateKeyBlobType_Capi1PrivateKey = 3,
    CryptographicPrivateKeyBlobType_BCryptEccFullPrivateKey = 4,
};
enum __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPublicKeyBlobType
{
    CryptographicPublicKeyBlobType_X509SubjectPublicKeyInfo = 0,
    CryptographicPublicKeyBlobType_Pkcs1RsaPublicKey = 1,
    CryptographicPublicKeyBlobType_BCryptPublicKey = 2,
    CryptographicPublicKeyBlobType_Capi1PublicKey = 3,
    CryptographicPublicKeyBlobType_BCryptEccFullPublicKey = 4,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics[] = L"Windows.Security.Cryptography.Core.IAsymmetricAlgorithmNamesStatics";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RsaPkcs1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RsaOaepSha1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RsaOaepSha256 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RsaOaepSha384 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RsaOaepSha512 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EcdsaP256Sha256 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EcdsaP384Sha384 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EcdsaP521Sha512 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DsaSha1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DsaSha256 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RsaSignPkcs1Sha1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RsaSignPkcs1Sha256 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RsaSignPkcs1Sha384 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RsaSignPkcs1Sha512 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RsaSignPssSha1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RsaSignPssSha256 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RsaSignPssSha384 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RsaSignPssSha512 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RsaPkcs1(This,value) )
    ( (This)->lpVtbl->get_RsaOaepSha1(This,value) )
    ( (This)->lpVtbl->get_RsaOaepSha256(This,value) )
    ( (This)->lpVtbl->get_RsaOaepSha384(This,value) )
    ( (This)->lpVtbl->get_RsaOaepSha512(This,value) )
    ( (This)->lpVtbl->get_EcdsaP256Sha256(This,value) )
    ( (This)->lpVtbl->get_EcdsaP384Sha384(This,value) )
    ( (This)->lpVtbl->get_EcdsaP521Sha512(This,value) )
    ( (This)->lpVtbl->get_DsaSha1(This,value) )
    ( (This)->lpVtbl->get_DsaSha256(This,value) )
    ( (This)->lpVtbl->get_RsaSignPkcs1Sha1(This,value) )
    ( (This)->lpVtbl->get_RsaSignPkcs1Sha256(This,value) )
    ( (This)->lpVtbl->get_RsaSignPkcs1Sha384(This,value) )
    ( (This)->lpVtbl->get_RsaSignPkcs1Sha512(This,value) )
    ( (This)->lpVtbl->get_RsaSignPssSha1(This,value) )
    ( (This)->lpVtbl->get_RsaSignPssSha256(This,value) )
    ( (This)->lpVtbl->get_RsaSignPssSha384(This,value) )
    ( (This)->lpVtbl->get_RsaSignPssSha512(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics2[] = L"Windows.Security.Cryptography.Core.IAsymmetricAlgorithmNamesStatics2";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EcdsaSha256 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EcdsaSha384 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EcdsaSha512 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2Vtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EcdsaSha256(This,value) )
    ( (This)->lpVtbl->get_EcdsaSha384(This,value) )
    ( (This)->lpVtbl->get_EcdsaSha512(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProvider[] = L"Windows.Security.Cryptography.Core.IAsymmetricKeyAlgorithmProvider";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AlgorithmName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateKeyPair )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider * This,
                  UINT32 keySize,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * * key
        );
                    HRESULT ( STDMETHODCALLTYPE *ImportDefaultPrivateKeyBlob )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * keyBlob,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * * key
        );
                    HRESULT ( STDMETHODCALLTYPE *ImportKeyPairWithBlobType )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * keyBlob,
                  __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPrivateKeyBlobType BlobType,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * * key
        );
                    HRESULT ( STDMETHODCALLTYPE *ImportDefaultPublicKeyBlob )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * keyBlob,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * * key
        );
                    HRESULT ( STDMETHODCALLTYPE *ImportPublicKeyWithBlobType )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * keyBlob,
                  __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPublicKeyBlobType BlobType,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * * key
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AlgorithmName(This,value) )
    ( (This)->lpVtbl->CreateKeyPair(This,keySize,key) )
    ( (This)->lpVtbl->ImportDefaultPrivateKeyBlob(This,keyBlob,key) )
    ( (This)->lpVtbl->ImportKeyPairWithBlobType(This,keyBlob,BlobType,key) )
    ( (This)->lpVtbl->ImportDefaultPublicKeyBlob(This,keyBlob,key) )
    ( (This)->lpVtbl->ImportPublicKeyWithBlobType(This,keyBlob,BlobType,key) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProvider2[] = L"Windows.Security.Cryptography.Core.IAsymmetricKeyAlgorithmProvider2";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateKeyPairWithCurveName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2 * This,
                  __RPC__in HSTRING curveName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * * key
        );
    HRESULT ( STDMETHODCALLTYPE *CreateKeyPairWithCurveParameters )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2 * This,
                                   __RPC__in_range(0,0x10000) UINT32 __parametersSize,
                                             __RPC__in_ecount_full(__parametersSize) BYTE * parameters,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * * key
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2Vtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateKeyPairWithCurveName(This,curveName,key) )
    ( (This)->lpVtbl->CreateKeyPairWithCurveParameters(This,__parametersSize,parameters,key) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProviderStatics[] = L"Windows.Security.Cryptography.Core.IAsymmetricKeyAlgorithmProviderStatics";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OpenAlgorithm )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics * This,
                  __RPC__in HSTRING algorithm,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider * * provider
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->OpenAlgorithm(This,algorithm,provider) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_ICryptographicEngineStatics[] = L"Windows.Security.Cryptography.Core.ICryptographicEngineStatics";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Encrypt )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * key,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * iv,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Decrypt )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * key,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * iv,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *EncryptAndAuthenticate )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * key,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * nonce,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * authenticatedData,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData * * value
        );
    HRESULT ( STDMETHODCALLTYPE *DecryptAndAuthenticate )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * key,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * nonce,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * authenticationTag,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * authenticatedData,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Sign )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * key,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *VerifySignature )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * key,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * signature,
                           __RPC__out boolean * isAuthenticated
        );
    HRESULT ( STDMETHODCALLTYPE *DeriveKeyMaterial )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * key,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters * parameters,
                  UINT32 desiredKeySize,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * keyMaterial
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Encrypt(This,key,data,iv,value) )
    ( (This)->lpVtbl->Decrypt(This,key,data,iv,value) )
    ( (This)->lpVtbl->EncryptAndAuthenticate(This,key,data,nonce,authenticatedData,value) )
    ( (This)->lpVtbl->DecryptAndAuthenticate(This,key,data,nonce,authenticationTag,authenticatedData,value) )
    ( (This)->lpVtbl->Sign(This,key,data,value) )
    ( (This)->lpVtbl->VerifySignature(This,key,data,signature,isAuthenticated) )
    ( (This)->lpVtbl->DeriveKeyMaterial(This,key,parameters,desiredKeySize,keyMaterial) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_ICryptographicEngineStatics2[] = L"Windows.Security.Cryptography.Core.ICryptographicEngineStatics2";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SignHashedData )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * key,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *VerifySignatureWithHashInput )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * key,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * signature,
                           __RPC__out boolean * isAuthenticated
        );
    HRESULT ( STDMETHODCALLTYPE *DecryptAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * key,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * iv,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SignAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * key,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SignHashedDataAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * key,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2Vtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SignHashedData(This,key,data,value) )
    ( (This)->lpVtbl->VerifySignatureWithHashInput(This,key,data,signature,isAuthenticated) )
    ( (This)->lpVtbl->DecryptAsync(This,key,data,iv,value) )
    ( (This)->lpVtbl->SignAsync(This,key,data,value) )
    ( (This)->lpVtbl->SignHashedDataAsync(This,key,data,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_ICryptographicKey[] = L"Windows.Security.Cryptography.Core.ICryptographicKey";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKeyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_KeySize )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * This,
                           __RPC__out UINT32 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *ExportDefaultPrivateKeyBlobType )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *ExportPrivateKeyWithBlobType )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * This,
                  __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPrivateKeyBlobType BlobType,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *ExportDefaultPublicKeyBlobType )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *ExportPublicKeyWithBlobType )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * This,
                  __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPublicKeyBlobType BlobType,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKeyVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKeyVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_KeySize(This,value) )
    ( (This)->lpVtbl->ExportDefaultPrivateKeyBlobType(This,value) )
    ( (This)->lpVtbl->ExportPrivateKeyWithBlobType(This,BlobType,value) )
    ( (This)->lpVtbl->ExportDefaultPublicKeyBlobType(This,value) )
    ( (This)->lpVtbl->ExportPublicKeyWithBlobType(This,BlobType,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IEccCurveNamesStatics[] = L"Windows.Security.Cryptography.Core.IEccCurveNamesStatics";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BrainpoolP160r1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BrainpoolP160t1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BrainpoolP192r1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BrainpoolP192t1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BrainpoolP224r1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BrainpoolP224t1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BrainpoolP256r1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BrainpoolP256t1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BrainpoolP320r1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BrainpoolP320t1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BrainpoolP384r1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BrainpoolP384t1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BrainpoolP512r1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BrainpoolP512t1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Curve25519 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Ec192wapi )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NistP192 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NistP224 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NistP256 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NistP384 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NistP521 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NumsP256t1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NumsP384t1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NumsP512t1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SecP160k1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SecP160r1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SecP160r2 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SecP192k1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SecP192r1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SecP224k1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SecP224r1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SecP256k1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SecP256r1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SecP384r1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SecP521r1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Wtls7 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Wtls9 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Wtls12 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_X962P192v1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_X962P192v2 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_X962P192v3 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_X962P239v1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_X962P239v2 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_X962P239v3 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_X962P256v1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllEccCurveNames )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BrainpoolP160r1(This,value) )
    ( (This)->lpVtbl->get_BrainpoolP160t1(This,value) )
    ( (This)->lpVtbl->get_BrainpoolP192r1(This,value) )
    ( (This)->lpVtbl->get_BrainpoolP192t1(This,value) )
    ( (This)->lpVtbl->get_BrainpoolP224r1(This,value) )
    ( (This)->lpVtbl->get_BrainpoolP224t1(This,value) )
    ( (This)->lpVtbl->get_BrainpoolP256r1(This,value) )
    ( (This)->lpVtbl->get_BrainpoolP256t1(This,value) )
    ( (This)->lpVtbl->get_BrainpoolP320r1(This,value) )
    ( (This)->lpVtbl->get_BrainpoolP320t1(This,value) )
    ( (This)->lpVtbl->get_BrainpoolP384r1(This,value) )
    ( (This)->lpVtbl->get_BrainpoolP384t1(This,value) )
    ( (This)->lpVtbl->get_BrainpoolP512r1(This,value) )
    ( (This)->lpVtbl->get_BrainpoolP512t1(This,value) )
    ( (This)->lpVtbl->get_Curve25519(This,value) )
    ( (This)->lpVtbl->get_Ec192wapi(This,value) )
    ( (This)->lpVtbl->get_NistP192(This,value) )
    ( (This)->lpVtbl->get_NistP224(This,value) )
    ( (This)->lpVtbl->get_NistP256(This,value) )
    ( (This)->lpVtbl->get_NistP384(This,value) )
    ( (This)->lpVtbl->get_NistP521(This,value) )
    ( (This)->lpVtbl->get_NumsP256t1(This,value) )
    ( (This)->lpVtbl->get_NumsP384t1(This,value) )
    ( (This)->lpVtbl->get_NumsP512t1(This,value) )
    ( (This)->lpVtbl->get_SecP160k1(This,value) )
    ( (This)->lpVtbl->get_SecP160r1(This,value) )
    ( (This)->lpVtbl->get_SecP160r2(This,value) )
    ( (This)->lpVtbl->get_SecP192k1(This,value) )
    ( (This)->lpVtbl->get_SecP192r1(This,value) )
    ( (This)->lpVtbl->get_SecP224k1(This,value) )
    ( (This)->lpVtbl->get_SecP224r1(This,value) )
    ( (This)->lpVtbl->get_SecP256k1(This,value) )
    ( (This)->lpVtbl->get_SecP256r1(This,value) )
    ( (This)->lpVtbl->get_SecP384r1(This,value) )
    ( (This)->lpVtbl->get_SecP521r1(This,value) )
    ( (This)->lpVtbl->get_Wtls7(This,value) )
    ( (This)->lpVtbl->get_Wtls9(This,value) )
    ( (This)->lpVtbl->get_Wtls12(This,value) )
    ( (This)->lpVtbl->get_X962P192v1(This,value) )
    ( (This)->lpVtbl->get_X962P192v2(This,value) )
    ( (This)->lpVtbl->get_X962P192v3(This,value) )
    ( (This)->lpVtbl->get_X962P239v1(This,value) )
    ( (This)->lpVtbl->get_X962P239v2(This,value) )
    ( (This)->lpVtbl->get_X962P239v3(This,value) )
    ( (This)->lpVtbl->get_X962P256v1(This,value) )
    ( (This)->lpVtbl->get_AllEccCurveNames(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IEncryptedAndAuthenticatedData[] = L"Windows.Security.Cryptography.Core.IEncryptedAndAuthenticatedData";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedDataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EncryptedData )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AuthenticationTag )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedDataVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedDataVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EncryptedData(This,value) )
    ( (This)->lpVtbl->get_AuthenticationTag(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IHashAlgorithmNamesStatics[] = L"Windows.Security.Cryptography.Core.IHashAlgorithmNamesStatics";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Md5 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Sha1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Sha256 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Sha384 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Sha512 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Md5(This,value) )
    ( (This)->lpVtbl->get_Sha1(This,value) )
    ( (This)->lpVtbl->get_Sha256(This,value) )
    ( (This)->lpVtbl->get_Sha384(This,value) )
    ( (This)->lpVtbl->get_Sha512(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IHashAlgorithmProvider[] = L"Windows.Security.Cryptography.Core.IHashAlgorithmProvider";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AlgorithmName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HashLength )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider * This,
                           __RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *HashData )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateHash )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation * * Value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AlgorithmName(This,value) )
    ( (This)->lpVtbl->get_HashLength(This,value) )
    ( (This)->lpVtbl->HashData(This,data,value) )
    ( (This)->lpVtbl->CreateHash(This,Value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IHashAlgorithmProviderStatics[] = L"Windows.Security.Cryptography.Core.IHashAlgorithmProviderStatics";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OpenAlgorithm )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics * This,
                  __RPC__in HSTRING algorithm,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider * * provider
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->OpenAlgorithm(This,algorithm,provider) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IHashComputation[] = L"Windows.Security.Cryptography.Core.IHashComputation";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Append )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data
        );
    HRESULT ( STDMETHODCALLTYPE *GetValueAndReset )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputationVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Append(This,data) )
    ( (This)->lpVtbl->GetValueAndReset(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics[] = L"Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmNamesStatics";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Pbkdf2Md5 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Pbkdf2Sha1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Pbkdf2Sha256 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Pbkdf2Sha384 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Pbkdf2Sha512 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Sp800108CtrHmacMd5 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Sp800108CtrHmacSha1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Sp800108CtrHmacSha256 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Sp800108CtrHmacSha384 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Sp800108CtrHmacSha512 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Sp80056aConcatMd5 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Sp80056aConcatSha1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Sp80056aConcatSha256 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Sp80056aConcatSha384 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Sp80056aConcatSha512 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Pbkdf2Md5(This,value) )
    ( (This)->lpVtbl->get_Pbkdf2Sha1(This,value) )
    ( (This)->lpVtbl->get_Pbkdf2Sha256(This,value) )
    ( (This)->lpVtbl->get_Pbkdf2Sha384(This,value) )
    ( (This)->lpVtbl->get_Pbkdf2Sha512(This,value) )
    ( (This)->lpVtbl->get_Sp800108CtrHmacMd5(This,value) )
    ( (This)->lpVtbl->get_Sp800108CtrHmacSha1(This,value) )
    ( (This)->lpVtbl->get_Sp800108CtrHmacSha256(This,value) )
    ( (This)->lpVtbl->get_Sp800108CtrHmacSha384(This,value) )
    ( (This)->lpVtbl->get_Sp800108CtrHmacSha512(This,value) )
    ( (This)->lpVtbl->get_Sp80056aConcatMd5(This,value) )
    ( (This)->lpVtbl->get_Sp80056aConcatSha1(This,value) )
    ( (This)->lpVtbl->get_Sp80056aConcatSha256(This,value) )
    ( (This)->lpVtbl->get_Sp80056aConcatSha384(This,value) )
    ( (This)->lpVtbl->get_Sp80056aConcatSha512(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics2[] = L"Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmNamesStatics2";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CapiKdfMd5 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CapiKdfSha1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CapiKdfSha256 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CapiKdfSha384 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CapiKdfSha512 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2Vtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CapiKdfMd5(This,value) )
    ( (This)->lpVtbl->get_CapiKdfSha1(This,value) )
    ( (This)->lpVtbl->get_CapiKdfSha256(This,value) )
    ( (This)->lpVtbl->get_CapiKdfSha384(This,value) )
    ( (This)->lpVtbl->get_CapiKdfSha512(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmProvider[] = L"Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmProvider";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AlgorithmName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateKey )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * keyMaterial,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * * key
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AlgorithmName(This,value) )
    ( (This)->lpVtbl->CreateKey(This,keyMaterial,key) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmProviderStatics[] = L"Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmProviderStatics";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OpenAlgorithm )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics * This,
                  __RPC__in HSTRING algorithm,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider * * provider
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->OpenAlgorithm(This,algorithm,provider) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IKeyDerivationParameters[] = L"Windows.Security.Cryptography.Core.IKeyDerivationParameters";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_KdfGenericBinary )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_KdfGenericBinary )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IterationCount )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_KdfGenericBinary(This,value) )
    ( (This)->lpVtbl->put_KdfGenericBinary(This,value) )
    ( (This)->lpVtbl->get_IterationCount(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IKeyDerivationParameters2[] = L"Windows.Security.Cryptography.Core.IKeyDerivationParameters2";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Capi1KdfTargetAlgorithm )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2 * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCapi1KdfTargetAlgorithm * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Capi1KdfTargetAlgorithm )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2 * This,
                  __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCapi1KdfTargetAlgorithm value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2Vtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Capi1KdfTargetAlgorithm(This,value) )
    ( (This)->lpVtbl->put_Capi1KdfTargetAlgorithm(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IKeyDerivationParametersStatics[] = L"Windows.Security.Cryptography.Core.IKeyDerivationParametersStatics";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *BuildForPbkdf2 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * pbkdf2Salt,
                  UINT32 iterationCount,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters * * value
        );
    HRESULT ( STDMETHODCALLTYPE *BuildForSP800108 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * label,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * context,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters * * value
        );
    HRESULT ( STDMETHODCALLTYPE *BuildForSP80056a )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * algorithmId,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * partyUInfo,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * partyVInfo,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * suppPubInfo,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * suppPrivInfo,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->BuildForPbkdf2(This,pbkdf2Salt,iterationCount,value) )
    ( (This)->lpVtbl->BuildForSP800108(This,label,context,value) )
    ( (This)->lpVtbl->BuildForSP80056a(This,algorithmId,partyUInfo,partyVInfo,suppPubInfo,suppPrivInfo,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IKeyDerivationParametersStatics2[] = L"Windows.Security.Cryptography.Core.IKeyDerivationParametersStatics2";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *BuildForCapi1Kdf )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2 * This,
                  __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCapi1KdfTargetAlgorithm capi1KdfTargetAlgorithm,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2Vtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->BuildForCapi1Kdf(This,capi1KdfTargetAlgorithm,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IMacAlgorithmNamesStatics[] = L"Windows.Security.Cryptography.Core.IMacAlgorithmNamesStatics";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HmacMd5 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HmacSha1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HmacSha256 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HmacSha384 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HmacSha512 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AesCmac )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HmacMd5(This,value) )
    ( (This)->lpVtbl->get_HmacSha1(This,value) )
    ( (This)->lpVtbl->get_HmacSha256(This,value) )
    ( (This)->lpVtbl->get_HmacSha384(This,value) )
    ( (This)->lpVtbl->get_HmacSha512(This,value) )
    ( (This)->lpVtbl->get_AesCmac(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IMacAlgorithmProvider[] = L"Windows.Security.Cryptography.Core.IMacAlgorithmProvider";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AlgorithmName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MacLength )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider * This,
                           __RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateKey )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * keyMaterial,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * * macKey
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AlgorithmName(This,value) )
    ( (This)->lpVtbl->get_MacLength(This,value) )
    ( (This)->lpVtbl->CreateKey(This,keyMaterial,macKey) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IMacAlgorithmProvider2[] = L"Windows.Security.Cryptography.Core.IMacAlgorithmProvider2";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateHash )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * keyMaterial,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2Vtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateHash(This,keyMaterial,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IMacAlgorithmProviderStatics[] = L"Windows.Security.Cryptography.Core.IMacAlgorithmProviderStatics";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OpenAlgorithm )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics * This,
                  __RPC__in HSTRING algorithm,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider * * provider
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->OpenAlgorithm(This,algorithm,provider) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IPersistedKeyProviderStatics[] = L"Windows.Security.Cryptography.Core.IPersistedKeyProviderStatics";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OpenKeyPairFromCertificateAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * certificate,
                  __RPC__in HSTRING hashAlgorithmName,
                  __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPadding padding,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *OpenPublicKeyFromCertificate )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * certificate,
                  __RPC__in HSTRING hashAlgorithmName,
                  __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPadding padding,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * * key
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->OpenKeyPairFromCertificateAsync(This,certificate,hashAlgorithmName,padding,operation) )
    ( (This)->lpVtbl->OpenPublicKeyFromCertificate(This,certificate,hashAlgorithmName,padding,key) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics[] = L"Windows.Security.Cryptography.Core.ISymmetricAlgorithmNamesStatics";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DesCbc )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DesEcb )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TripleDesCbc )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TripleDesEcb )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Rc2Cbc )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Rc2Ecb )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AesCbc )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AesEcb )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AesGcm )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AesCcm )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AesCbcPkcs7 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AesEcbPkcs7 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DesCbcPkcs7 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DesEcbPkcs7 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TripleDesCbcPkcs7 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TripleDesEcbPkcs7 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Rc2CbcPkcs7 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Rc2EcbPkcs7 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Rc4 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DesCbc(This,value) )
    ( (This)->lpVtbl->get_DesEcb(This,value) )
    ( (This)->lpVtbl->get_TripleDesCbc(This,value) )
    ( (This)->lpVtbl->get_TripleDesEcb(This,value) )
    ( (This)->lpVtbl->get_Rc2Cbc(This,value) )
    ( (This)->lpVtbl->get_Rc2Ecb(This,value) )
    ( (This)->lpVtbl->get_AesCbc(This,value) )
    ( (This)->lpVtbl->get_AesEcb(This,value) )
    ( (This)->lpVtbl->get_AesGcm(This,value) )
    ( (This)->lpVtbl->get_AesCcm(This,value) )
    ( (This)->lpVtbl->get_AesCbcPkcs7(This,value) )
    ( (This)->lpVtbl->get_AesEcbPkcs7(This,value) )
    ( (This)->lpVtbl->get_DesCbcPkcs7(This,value) )
    ( (This)->lpVtbl->get_DesEcbPkcs7(This,value) )
    ( (This)->lpVtbl->get_TripleDesCbcPkcs7(This,value) )
    ( (This)->lpVtbl->get_TripleDesEcbPkcs7(This,value) )
    ( (This)->lpVtbl->get_Rc2CbcPkcs7(This,value) )
    ( (This)->lpVtbl->get_Rc2EcbPkcs7(This,value) )
    ( (This)->lpVtbl->get_Rc4(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_ISymmetricKeyAlgorithmProvider[] = L"Windows.Security.Cryptography.Core.ISymmetricKeyAlgorithmProvider";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AlgorithmName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BlockLength )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider * This,
                           __RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateSymmetricKey )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * keyMaterial,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * * key
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AlgorithmName(This,value) )
    ( (This)->lpVtbl->get_BlockLength(This,value) )
    ( (This)->lpVtbl->CreateSymmetricKey(This,keyMaterial,key) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_ISymmetricKeyAlgorithmProviderStatics[] = L"Windows.Security.Cryptography.Core.ISymmetricKeyAlgorithmProviderStatics";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OpenAlgorithm )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics * This,
                  __RPC__in HSTRING algorithm,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider * * provider
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->OpenAlgorithm(This,algorithm,provider) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_AsymmetricAlgorithmNames[] = L"Windows.Security.Cryptography.Core.AsymmetricAlgorithmNames";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_AsymmetricKeyAlgorithmProvider[] = L"Windows.Security.Cryptography.Core.AsymmetricKeyAlgorithmProvider";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_CryptographicEngine[] = L"Windows.Security.Cryptography.Core.CryptographicEngine";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_CryptographicHash[] = L"Windows.Security.Cryptography.Core.CryptographicHash";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_CryptographicKey[] = L"Windows.Security.Cryptography.Core.CryptographicKey";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_EccCurveNames[] = L"Windows.Security.Cryptography.Core.EccCurveNames";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_EncryptedAndAuthenticatedData[] = L"Windows.Security.Cryptography.Core.EncryptedAndAuthenticatedData";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_HashAlgorithmNames[] = L"Windows.Security.Cryptography.Core.HashAlgorithmNames";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_HashAlgorithmProvider[] = L"Windows.Security.Cryptography.Core.HashAlgorithmProvider";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_KeyDerivationAlgorithmNames[] = L"Windows.Security.Cryptography.Core.KeyDerivationAlgorithmNames";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_KeyDerivationAlgorithmProvider[] = L"Windows.Security.Cryptography.Core.KeyDerivationAlgorithmProvider";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_KeyDerivationParameters[] = L"Windows.Security.Cryptography.Core.KeyDerivationParameters";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_MacAlgorithmNames[] = L"Windows.Security.Cryptography.Core.MacAlgorithmNames";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_MacAlgorithmProvider[] = L"Windows.Security.Cryptography.Core.MacAlgorithmProvider";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_PersistedKeyProvider[] = L"Windows.Security.Cryptography.Core.PersistedKeyProvider";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_SymmetricAlgorithmNames[] = L"Windows.Security.Cryptography.Core.SymmetricAlgorithmNames";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_SymmetricKeyAlgorithmProvider[] = L"Windows.Security.Cryptography.Core.SymmetricKeyAlgorithmProvider";
       
       
#pragma clang diagnostic pop
