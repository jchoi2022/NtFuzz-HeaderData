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
#include "Windows.Networking.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2 __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3 __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2 __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3 __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2 __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2 __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4 __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2 __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2 __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2 __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2 __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2 __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2 __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2 __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore;
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
typedef interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension;
EXTERN_C const IID IID___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension;
typedef struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtensionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This, __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtensionVtbl;
interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension
{
    CONST_VTBL struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtensionVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension;
EXTERN_C const IID IID___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension;
typedef struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtensionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This, __RPC__deref_out_opt __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension **first);
    END_INTERFACE
} __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtensionVtbl;
interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension
{
    CONST_VTBL struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtensionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
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
typedef interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo;
EXTERN_C const IID IID___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo;
typedef struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This, __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfoVtbl;
interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfoVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo;
EXTERN_C const IID IID___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo;
typedef struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This, __RPC__deref_out_opt __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo **first);
    END_INTERFACE
} __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfoVtbl;
interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfoVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension;
EXTERN_C const IID IID___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension;
typedef struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtensionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
                       __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtensionVtbl;
interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtensionVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo;
EXTERN_C const IID IID___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo;
typedef struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This,
                       __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfoVtbl;
interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfoVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;
EXTERN_C const IID IID___FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;
typedef struct __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                   __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *value);
    END_INTERFACE
} __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl;
interface __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate
{
    CONST_VTBL struct __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension;
EXTERN_C const IID IID___FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension;
typedef struct __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtensionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This, __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
                   __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This, __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * *value);
    END_INTERFACE
} __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtensionVtbl;
interface __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension
{
    CONST_VTBL struct __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtensionVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, __RPC__out __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChainVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChainVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChainVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChainVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain * This, __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChainVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChainVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CSignatureValidationResult;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult * This, __RPC__out enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CSignatureValidationResult *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResultVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_HSTRING __FIAsyncOperationCompletedHandler_1_HSTRING;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_HSTRING;
typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;
typedef struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This, __RPC__in_opt __FIAsyncOperation_1_HSTRING *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl;
interface __FIAsyncOperationCompletedHandler_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;
EXTERN_C const IID IID___FIAsyncOperation_1_HSTRING;
typedef struct __FIAsyncOperation_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_HSTRING *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_HSTRING **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__out HSTRING *results);
    END_INTERFACE
} __FIAsyncOperation_1_HSTRINGVtbl;
interface __FIAsyncOperation_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperation_1_HSTRINGVtbl *lpVtbl;
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
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CNetworking_CIHostName __x_ABI_CWindows_CNetworking_CIHostName;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;
typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CCertificateChainPolicy __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CCertificateChainPolicy;
typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult;
typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CEnrollKeyUsages __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CEnrollKeyUsages;
typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CExportOption __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CExportOption;
typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CInstallOptions __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CInstallOptions;
typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CKeyProtectionLevel __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CKeyProtectionLevel;
typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CKeySize __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CKeySize;
typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CSignatureValidationResult __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CSignatureValidationResult;
enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CCertificateChainPolicy
{
    CertificateChainPolicy_Base = 0,
    CertificateChainPolicy_Ssl = 1,
    CertificateChainPolicy_NTAuthentication = 2,
    CertificateChainPolicy_MicrosoftRoot = 3,
};
enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult
{
    ChainValidationResult_Success = 0,
    ChainValidationResult_Untrusted = 1,
    ChainValidationResult_Revoked = 2,
    ChainValidationResult_Expired = 3,
    ChainValidationResult_IncompleteChain = 4,
    ChainValidationResult_InvalidSignature = 5,
    ChainValidationResult_WrongUsage = 6,
    ChainValidationResult_InvalidName = 7,
    ChainValidationResult_InvalidCertificateAuthorityPolicy = 8,
    ChainValidationResult_BasicConstraintsError = 9,
    ChainValidationResult_UnknownCriticalExtension = 10,
    ChainValidationResult_RevocationInformationMissing = 11,
    ChainValidationResult_RevocationFailure = 12,
    ChainValidationResult_OtherErrors = 13,
};
enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CEnrollKeyUsages
{
    EnrollKeyUsages_None = 0,
    EnrollKeyUsages_Decryption = 0x1,
    EnrollKeyUsages_Signing = 0x2,
    EnrollKeyUsages_KeyAgreement = 0x4,
    EnrollKeyUsages_All = 0xffffff,
};
enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CExportOption
{
    ExportOption_NotExportable = 0,
    ExportOption_Exportable = 1,
};
enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CInstallOptions
{
    InstallOptions_None = 0,
    InstallOptions_DeleteExpired = 0x1,
};
enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CKeyProtectionLevel
{
    KeyProtectionLevel_NoConsent = 0,
    KeyProtectionLevel_ConsentOnly = 1,
    KeyProtectionLevel_ConsentWithPassword = 2,
    KeyProtectionLevel_ConsentWithFingerprint = 3,
};
enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CKeySize
{
    KeySize_Invalid = 0,
    KeySize_Rsa2048 = 2048,
    KeySize_Rsa4096 = 4096,
};
enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CSignatureValidationResult
{
    SignatureValidationResult_Success = 0,
    SignatureValidationResult_InvalidParameter = 1,
    SignatureValidationResult_BadMessage = 2,
    SignatureValidationResult_InvalidSignature = 3,
    SignatureValidationResult_OtherErrors = 4,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificate[] = L"Windows.Security.Cryptography.Certificates.ICertificate";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *BuildChainAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
                  __RPC__in_opt __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * certificates,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *BuildChainWithParametersAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
                  __RPC__in_opt __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * certificates,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * parameters,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SerialNumber )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
                   __RPC__out UINT32 * __valueSize,
                                                      __RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *GetHashValue )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
                   __RPC__out UINT32 * __valueSize,
                                                      __RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *GetHashValueWithAlgorithm )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
                  __RPC__in HSTRING hashAlgorithmName,
                   __RPC__out UINT32 * __valueSize,
                                                      __RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCertificateBlob )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Subject )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Issuer )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasPrivateKey )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsStronglyProtected )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ValidFrom )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ValidTo )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EnhancedKeyUsages )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->BuildChainAsync(This,certificates,value) )
    ( (This)->lpVtbl->BuildChainWithParametersAsync(This,certificates,parameters,value) )
    ( (This)->lpVtbl->get_SerialNumber(This,__valueSize,value) )
    ( (This)->lpVtbl->GetHashValue(This,__valueSize,value) )
    ( (This)->lpVtbl->GetHashValueWithAlgorithm(This,hashAlgorithmName,__valueSize,value) )
    ( (This)->lpVtbl->GetCertificateBlob(This,value) )
    ( (This)->lpVtbl->get_Subject(This,value) )
    ( (This)->lpVtbl->get_Issuer(This,value) )
    ( (This)->lpVtbl->get_HasPrivateKey(This,value) )
    ( (This)->lpVtbl->get_IsStronglyProtected(This,value) )
    ( (This)->lpVtbl->get_ValidFrom(This,value) )
    ( (This)->lpVtbl->get_ValidTo(This,value) )
    ( (This)->lpVtbl->get_EnhancedKeyUsages(This,value) )
    ( (This)->lpVtbl->put_FriendlyName(This,value) )
    ( (This)->lpVtbl->get_FriendlyName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificate2[] = L"Windows.Security.Cryptography.Certificates.ICertificate2";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsSecurityDeviceBound )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyUsages )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyAlgorithmName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SignatureAlgorithmName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SignatureHashAlgorithmName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SubjectAlternativeName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2Vtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsSecurityDeviceBound(This,value) )
    ( (This)->lpVtbl->get_KeyUsages(This,value) )
    ( (This)->lpVtbl->get_KeyAlgorithmName(This,value) )
    ( (This)->lpVtbl->get_SignatureAlgorithmName(This,value) )
    ( (This)->lpVtbl->get_SignatureHashAlgorithmName(This,value) )
    ( (This)->lpVtbl->get_SubjectAlternativeName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificate3[] = L"Windows.Security.Cryptography.Certificates.ICertificate3";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsPerUser )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StoreName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyStorageProviderName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3Vtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsPerUser(This,value) )
    ( (This)->lpVtbl->get_StoreName(This,value) )
    ( (This)->lpVtbl->get_KeyStorageProviderName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateChain[] = L"Windows.Security.Cryptography.Certificates.ICertificateChain";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChainVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *Validate )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult * status
        );
                    HRESULT ( STDMETHODCALLTYPE *ValidateWithParameters )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters * parameter,
                           __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult * status
        );
    HRESULT ( STDMETHODCALLTYPE *GetCertificates )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain * This,
                  boolean includeRoot,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * certificates
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChainVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChainVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Validate(This,status) )
    ( (This)->lpVtbl->ValidateWithParameters(This,parameter,status) )
    ( (This)->lpVtbl->GetCertificates(This,includeRoot,certificates) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics[] = L"Windows.Security.Cryptography.Certificates.ICertificateEnrollmentManagerStatics";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateRequestAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * request,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * value
        );
    HRESULT ( STDMETHODCALLTYPE *InstallCertificateAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics * This,
                  __RPC__in HSTRING certificate,
                  __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CInstallOptions installOption,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *ImportPfxDataAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics * This,
                  __RPC__in HSTRING pfxData,
                  __RPC__in HSTRING password,
                  __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CExportOption exportable,
                  __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CKeyProtectionLevel keyProtectionLevel,
                  __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CInstallOptions installOption,
                  __RPC__in HSTRING friendlyName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateRequestAsync(This,request,value) )
    ( (This)->lpVtbl->InstallCertificateAsync(This,certificate,installOption,value) )
    ( (This)->lpVtbl->ImportPfxDataAsync(This,pfxData,password,exportable,keyProtectionLevel,installOption,friendlyName,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics2[] = L"Windows.Security.Cryptography.Certificates.ICertificateEnrollmentManagerStatics2";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UserCertificateEnrollmentManager )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *ImportPfxDataToKspAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2 * This,
                  __RPC__in HSTRING pfxData,
                  __RPC__in HSTRING password,
                  __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CExportOption exportable,
                  __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CKeyProtectionLevel keyProtectionLevel,
                  __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CInstallOptions installOption,
                  __RPC__in HSTRING friendlyName,
                  __RPC__in HSTRING keyStorageProvider,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2Vtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UserCertificateEnrollmentManager(This,value) )
    ( (This)->lpVtbl->ImportPfxDataToKspAsync(This,pfxData,password,exportable,keyProtectionLevel,installOption,friendlyName,keyStorageProvider,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics3[] = L"Windows.Security.Cryptography.Certificates.ICertificateEnrollmentManagerStatics3";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *ImportPfxDataToKspWithParametersAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3 * This,
                  __RPC__in HSTRING pfxData,
                  __RPC__in HSTRING password,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * pfxImportParameters,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3Vtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ImportPfxDataToKspWithParametersAsync(This,pfxData,password,pfxImportParameters,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateExtension[] = L"Windows.Security.Cryptography.Certificates.ICertificateExtension";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtensionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ObjectId )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ObjectId )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCritical )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsCritical )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *EncodeValue )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * This,
                   __RPC__out UINT32 * __valueSize,
                                                      __RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * This,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) BYTE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtensionVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtensionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ObjectId(This,value) )
    ( (This)->lpVtbl->put_ObjectId(This,value) )
    ( (This)->lpVtbl->get_IsCritical(This,value) )
    ( (This)->lpVtbl->put_IsCritical(This,value) )
    ( (This)->lpVtbl->EncodeValue(This,value) )
    ( (This)->lpVtbl->get_Value(This,__valueSize,value) )
    ( (This)->lpVtbl->put_Value(This,__valueSize,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateFactory[] = L"Windows.Security.Cryptography.Certificates.ICertificateFactory";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateCertificate )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * certBlob,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * * certificate
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactoryVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateCertificate(This,certBlob,certificate) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages[] = L"Windows.Security.Cryptography.Certificates.ICertificateKeyUsages";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsagesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EncipherOnly )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_EncipherOnly )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CrlSign )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CrlSign )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyCertificateSign )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_KeyCertificateSign )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyAgreement )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_KeyAgreement )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DataEncipherment )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DataEncipherment )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyEncipherment )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_KeyEncipherment )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NonRepudiation )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NonRepudiation )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DigitalSignature )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DigitalSignature )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsagesVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsagesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EncipherOnly(This,value) )
    ( (This)->lpVtbl->put_EncipherOnly(This,value) )
    ( (This)->lpVtbl->get_CrlSign(This,value) )
    ( (This)->lpVtbl->put_CrlSign(This,value) )
    ( (This)->lpVtbl->get_KeyCertificateSign(This,value) )
    ( (This)->lpVtbl->put_KeyCertificateSign(This,value) )
    ( (This)->lpVtbl->get_KeyAgreement(This,value) )
    ( (This)->lpVtbl->put_KeyAgreement(This,value) )
    ( (This)->lpVtbl->get_DataEncipherment(This,value) )
    ( (This)->lpVtbl->put_DataEncipherment(This,value) )
    ( (This)->lpVtbl->get_KeyEncipherment(This,value) )
    ( (This)->lpVtbl->put_KeyEncipherment(This,value) )
    ( (This)->lpVtbl->get_NonRepudiation(This,value) )
    ( (This)->lpVtbl->put_NonRepudiation(This,value) )
    ( (This)->lpVtbl->get_DigitalSignature(This,value) )
    ( (This)->lpVtbl->put_DigitalSignature(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateQuery[] = L"Windows.Security.Cryptography.Certificates.ICertificateQuery";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQueryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EnhancedKeyUsages )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IssuerName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IssuerName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Thumbprint )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery * This,
                   __RPC__out UINT32 * __valueSize,
                                                      __RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Thumbprint )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery * This,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HardwareOnly )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_HardwareOnly )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQueryVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQueryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EnhancedKeyUsages(This,value) )
    ( (This)->lpVtbl->get_IssuerName(This,value) )
    ( (This)->lpVtbl->put_IssuerName(This,value) )
    ( (This)->lpVtbl->get_FriendlyName(This,value) )
    ( (This)->lpVtbl->put_FriendlyName(This,value) )
    ( (This)->lpVtbl->get_Thumbprint(This,__valueSize,value) )
    ( (This)->lpVtbl->put_Thumbprint(This,__valueSize,value) )
    ( (This)->lpVtbl->get_HardwareOnly(This,value) )
    ( (This)->lpVtbl->put_HardwareOnly(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateQuery2[] = L"Windows.Security.Cryptography.Certificates.ICertificateQuery2";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IncludeDuplicates )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IncludeDuplicates )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IncludeExpiredCertificates )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IncludeExpiredCertificates )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StoreName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StoreName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2 * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2Vtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IncludeDuplicates(This,value) )
    ( (This)->lpVtbl->put_IncludeDuplicates(This,value) )
    ( (This)->lpVtbl->get_IncludeExpiredCertificates(This,value) )
    ( (This)->lpVtbl->put_IncludeExpiredCertificates(This,value) )
    ( (This)->lpVtbl->get_StoreName(This,value) )
    ( (This)->lpVtbl->put_StoreName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties[] = L"Windows.Security.Cryptography.Certificates.ICertificateRequestProperties";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Subject )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Subject )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyAlgorithmName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_KeyAlgorithmName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeySize )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_KeySize )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithmName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithmName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Exportable )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CExportOption * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Exportable )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
                  __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CExportOption value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyUsages )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CEnrollKeyUsages * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_KeyUsages )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
                  __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CEnrollKeyUsages value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyProtectionLevel )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CKeyProtectionLevel * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_KeyProtectionLevel )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
                  __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CKeyProtectionLevel value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyStorageProviderName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_KeyStorageProviderName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestPropertiesVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Subject(This,value) )
    ( (This)->lpVtbl->put_Subject(This,value) )
    ( (This)->lpVtbl->get_KeyAlgorithmName(This,value) )
    ( (This)->lpVtbl->put_KeyAlgorithmName(This,value) )
    ( (This)->lpVtbl->get_KeySize(This,value) )
    ( (This)->lpVtbl->put_KeySize(This,value) )
    ( (This)->lpVtbl->get_FriendlyName(This,value) )
    ( (This)->lpVtbl->put_FriendlyName(This,value) )
    ( (This)->lpVtbl->get_HashAlgorithmName(This,value) )
    ( (This)->lpVtbl->put_HashAlgorithmName(This,value) )
    ( (This)->lpVtbl->get_Exportable(This,value) )
    ( (This)->lpVtbl->put_Exportable(This,value) )
    ( (This)->lpVtbl->get_KeyUsages(This,value) )
    ( (This)->lpVtbl->put_KeyUsages(This,value) )
    ( (This)->lpVtbl->get_KeyProtectionLevel(This,value) )
    ( (This)->lpVtbl->put_KeyProtectionLevel(This,value) )
    ( (This)->lpVtbl->get_KeyStorageProviderName(This,value) )
    ( (This)->lpVtbl->put_KeyStorageProviderName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties2[] = L"Windows.Security.Cryptography.Certificates.ICertificateRequestProperties2";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SmartcardReaderName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SmartcardReaderName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SigningCertificate )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SigningCertificate )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AttestationCredentialCertificate )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AttestationCredentialCertificate )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2Vtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SmartcardReaderName(This,value) )
    ( (This)->lpVtbl->put_SmartcardReaderName(This,value) )
    ( (This)->lpVtbl->get_SigningCertificate(This,value) )
    ( (This)->lpVtbl->put_SigningCertificate(This,value) )
    ( (This)->lpVtbl->get_AttestationCredentialCertificate(This,value) )
    ( (This)->lpVtbl->put_AttestationCredentialCertificate(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3[] = L"Windows.Security.Cryptography.Certificates.ICertificateRequestProperties3";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CurveName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CurveName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurveParameters )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 * This,
                   __RPC__out UINT32 * __valueSize,
                                                      __RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CurveParameters )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 * This,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContainerNamePrefix )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ContainerNamePrefix )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContainerName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ContainerName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UseExistingKey )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_UseExistingKey )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3Vtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CurveName(This,value) )
    ( (This)->lpVtbl->put_CurveName(This,value) )
    ( (This)->lpVtbl->get_CurveParameters(This,__valueSize,value) )
    ( (This)->lpVtbl->put_CurveParameters(This,__valueSize,value) )
    ( (This)->lpVtbl->get_ContainerNamePrefix(This,value) )
    ( (This)->lpVtbl->put_ContainerNamePrefix(This,value) )
    ( (This)->lpVtbl->get_ContainerName(This,value) )
    ( (This)->lpVtbl->put_ContainerName(This,value) )
    ( (This)->lpVtbl->get_UseExistingKey(This,value) )
    ( (This)->lpVtbl->put_UseExistingKey(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties4[] = L"Windows.Security.Cryptography.Certificates.ICertificateRequestProperties4";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SuppressedDefaults )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4 * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SubjectAlternativeName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Extensions )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4 * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4Vtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SuppressedDefaults(This,value) )
    ( (This)->lpVtbl->get_SubjectAlternativeName(This,value) )
    ( (This)->lpVtbl->get_Extensions(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateStore[] = L"Windows.Security.Cryptography.Certificates.ICertificateStore";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Add )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * certificate
        );
    HRESULT ( STDMETHODCALLTYPE *Delete )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * certificate
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoreVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoreVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Add(This,certificate) )
    ( (This)->lpVtbl->Delete(This,certificate) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateStore2[] = L"Windows.Security.Cryptography.Certificates.ICertificateStore2";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2Vtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateStoresStatics[] = L"Windows.Security.Cryptography.Certificates.ICertificateStoresStatics";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *FindAllAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *FindAllWithQueryAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery * query,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TrustedRootCertificationAuthorities )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IntermediateCertificationAuthorities )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStoreByName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics * This,
                  __RPC__in HSTRING storeName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FindAllAsync(This,value) )
    ( (This)->lpVtbl->FindAllWithQueryAsync(This,query,value) )
    ( (This)->lpVtbl->get_TrustedRootCertificationAuthorities(This,value) )
    ( (This)->lpVtbl->get_IntermediateCertificationAuthorities(This,value) )
    ( (This)->lpVtbl->GetStoreByName(This,storeName,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateStoresStatics2[] = L"Windows.Security.Cryptography.Certificates.ICertificateStoresStatics2";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetUserStoreByName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2 * This,
                  __RPC__in HSTRING storeName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2Vtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetUserStoreByName(This,storeName,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IChainBuildingParameters[] = L"Windows.Security.Cryptography.Certificates.IChainBuildingParameters";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParametersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EnhancedKeyUsages )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ValidationTimestamp )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ValidationTimestamp )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This,
                  __x_ABI_CWindows_CFoundation_CDateTime value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RevocationCheckEnabled )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RevocationCheckEnabled )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NetworkRetrievalEnabled )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NetworkRetrievalEnabled )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AuthorityInformationAccessEnabled )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AuthorityInformationAccessEnabled )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrentTimeValidationEnabled )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CurrentTimeValidationEnabled )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExclusiveTrustRoots )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * certificates
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParametersVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParametersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EnhancedKeyUsages(This,value) )
    ( (This)->lpVtbl->get_ValidationTimestamp(This,value) )
    ( (This)->lpVtbl->put_ValidationTimestamp(This,value) )
    ( (This)->lpVtbl->get_RevocationCheckEnabled(This,value) )
    ( (This)->lpVtbl->put_RevocationCheckEnabled(This,value) )
    ( (This)->lpVtbl->get_NetworkRetrievalEnabled(This,value) )
    ( (This)->lpVtbl->put_NetworkRetrievalEnabled(This,value) )
    ( (This)->lpVtbl->get_AuthorityInformationAccessEnabled(This,value) )
    ( (This)->lpVtbl->put_AuthorityInformationAccessEnabled(This,value) )
    ( (This)->lpVtbl->get_CurrentTimeValidationEnabled(This,value) )
    ( (This)->lpVtbl->put_CurrentTimeValidationEnabled(This,value) )
    ( (This)->lpVtbl->get_ExclusiveTrustRoots(This,certificates) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IChainValidationParameters[] = L"Windows.Security.Cryptography.Certificates.IChainValidationParameters";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParametersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CertificateChainPolicy )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CCertificateChainPolicy * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CertificateChainPolicy )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters * This,
                  __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CCertificateChainPolicy value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServerDnsName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ServerDnsName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParametersVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParametersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CertificateChainPolicy(This,value) )
    ( (This)->lpVtbl->put_CertificateChainPolicy(This,value) )
    ( (This)->lpVtbl->get_ServerDnsName(This,value) )
    ( (This)->lpVtbl->put_ServerDnsName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICmsAttachedSignature[] = L"Windows.Security.Cryptography.Certificates.ICmsAttachedSignature";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Certificates )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature * This,
                   __RPC__out UINT32 * __valueSize,
                                                      __RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Signers )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * * value
        );
    HRESULT ( STDMETHODCALLTYPE *VerifySignature )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CSignatureValidationResult * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Certificates(This,value) )
    ( (This)->lpVtbl->get_Content(This,__valueSize,value) )
    ( (This)->lpVtbl->get_Signers(This,value) )
    ( (This)->lpVtbl->VerifySignature(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICmsAttachedSignatureFactory[] = L"Windows.Security.Cryptography.Certificates.ICmsAttachedSignatureFactory";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateCmsAttachedSignature )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * inputBlob,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature * * cmsSignedData
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactoryVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateCmsAttachedSignature(This,inputBlob,cmsSignedData) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICmsAttachedSignatureStatics[] = L"Windows.Security.Cryptography.Certificates.ICmsAttachedSignatureStatics";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GenerateSignatureAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
                  __RPC__in_opt __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * signers,
                  __RPC__in_opt __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * certificates,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * outputBlob
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GenerateSignatureAsync(This,data,signers,certificates,outputBlob) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICmsDetachedSignature[] = L"Windows.Security.Cryptography.Certificates.ICmsDetachedSignature";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Certificates )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Signers )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * * value
        );
    HRESULT ( STDMETHODCALLTYPE *VerifySignatureAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * data,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Certificates(This,value) )
    ( (This)->lpVtbl->get_Signers(This,value) )
    ( (This)->lpVtbl->VerifySignatureAsync(This,data,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICmsDetachedSignatureFactory[] = L"Windows.Security.Cryptography.Certificates.ICmsDetachedSignatureFactory";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateCmsDetachedSignature )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * inputBlob,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature * * cmsSignedData
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactoryVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateCmsDetachedSignature(This,inputBlob,cmsSignedData) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICmsDetachedSignatureStatics[] = L"Windows.Security.Cryptography.Certificates.ICmsDetachedSignatureStatics";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GenerateSignatureAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * data,
                  __RPC__in_opt __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * signers,
                  __RPC__in_opt __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * certificates,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * outputBlob
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GenerateSignatureAsync(This,data,signers,certificates,outputBlob) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICmsSignerInfo[] = L"Windows.Security.Cryptography.Certificates.ICmsSignerInfo";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Certificate )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Certificate )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithmName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithmName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TimestampInfo )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfoVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Certificate(This,value) )
    ( (This)->lpVtbl->put_Certificate(This,value) )
    ( (This)->lpVtbl->get_HashAlgorithmName(This,value) )
    ( (This)->lpVtbl->put_HashAlgorithmName(This,value) )
    ( (This)->lpVtbl->get_TimestampInfo(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICmsTimestampInfo[] = L"Windows.Security.Cryptography.Certificates.ICmsTimestampInfo";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SigningCertificate )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Certificates )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfoVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SigningCertificate(This,value) )
    ( (This)->lpVtbl->get_Certificates(This,value) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics[] = L"Windows.Security.Cryptography.Certificates.IKeyAlgorithmNamesStatics";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Rsa )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Dsa )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Ecdh256 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Ecdh384 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Ecdh521 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Ecdsa256 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Ecdsa384 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Ecdsa521 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Rsa(This,value) )
    ( (This)->lpVtbl->get_Dsa(This,value) )
    ( (This)->lpVtbl->get_Ecdh256(This,value) )
    ( (This)->lpVtbl->get_Ecdh384(This,value) )
    ( (This)->lpVtbl->get_Ecdh521(This,value) )
    ( (This)->lpVtbl->get_Ecdsa256(This,value) )
    ( (This)->lpVtbl->get_Ecdsa384(This,value) )
    ( (This)->lpVtbl->get_Ecdsa521(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics2[] = L"Windows.Security.Cryptography.Certificates.IKeyAlgorithmNamesStatics2";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Ecdsa )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Ecdh )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2Vtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Ecdsa(This,value) )
    ( (This)->lpVtbl->get_Ecdh(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IKeyAttestationHelperStatics[] = L"Windows.Security.Cryptography.Certificates.IKeyAttestationHelperStatics";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *DecryptTpmAttestationCredentialAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics * This,
                  __RPC__in HSTRING credential,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetTpmAttestationCredentialId )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics * This,
                  __RPC__in HSTRING credential,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->DecryptTpmAttestationCredentialAsync(This,credential,value) )
    ( (This)->lpVtbl->GetTpmAttestationCredentialId(This,credential,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IKeyAttestationHelperStatics2[] = L"Windows.Security.Cryptography.Certificates.IKeyAttestationHelperStatics2";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *DecryptTpmAttestationCredentialWithContainerNameAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2 * This,
                  __RPC__in HSTRING credential,
                  __RPC__in HSTRING containerName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2Vtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->DecryptTpmAttestationCredentialWithContainerNameAsync(This,credential,containerName,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IKeyStorageProviderNamesStatics[] = L"Windows.Security.Cryptography.Certificates.IKeyStorageProviderNamesStatics";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SoftwareKeyStorageProvider )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SmartcardKeyStorageProvider )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PlatformKeyStorageProvider )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SoftwareKeyStorageProvider(This,value) )
    ( (This)->lpVtbl->get_SmartcardKeyStorageProvider(This,value) )
    ( (This)->lpVtbl->get_PlatformKeyStorageProvider(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IKeyStorageProviderNamesStatics2[] = L"Windows.Security.Cryptography.Certificates.IKeyStorageProviderNamesStatics2";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PassportKeyStorageProvider )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2Vtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PassportKeyStorageProvider(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IPfxImportParameters[] = L"Windows.Security.Cryptography.Certificates.IPfxImportParameters";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParametersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Exportable )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CExportOption * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Exportable )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
                  __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CExportOption value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyProtectionLevel )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CKeyProtectionLevel * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_KeyProtectionLevel )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
                  __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CKeyProtectionLevel value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InstallOptions )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CInstallOptions * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InstallOptions )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
                  __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CInstallOptions value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyStorageProviderName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_KeyStorageProviderName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContainerNamePrefix )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ContainerNamePrefix )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReaderName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ReaderName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParametersVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParametersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Exportable(This,value) )
    ( (This)->lpVtbl->put_Exportable(This,value) )
    ( (This)->lpVtbl->get_KeyProtectionLevel(This,value) )
    ( (This)->lpVtbl->put_KeyProtectionLevel(This,value) )
    ( (This)->lpVtbl->get_InstallOptions(This,value) )
    ( (This)->lpVtbl->put_InstallOptions(This,value) )
    ( (This)->lpVtbl->get_FriendlyName(This,value) )
    ( (This)->lpVtbl->put_FriendlyName(This,value) )
    ( (This)->lpVtbl->get_KeyStorageProviderName(This,value) )
    ( (This)->lpVtbl->put_KeyStorageProviderName(This,value) )
    ( (This)->lpVtbl->get_ContainerNamePrefix(This,value) )
    ( (This)->lpVtbl->put_ContainerNamePrefix(This,value) )
    ( (This)->lpVtbl->get_ReaderName(This,value) )
    ( (This)->lpVtbl->put_ReaderName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IStandardCertificateStoreNamesStatics[] = L"Windows.Security.Cryptography.Certificates.IStandardCertificateStoreNamesStatics";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Personal )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TrustedRootCertificationAuthorities )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IntermediateCertificationAuthorities )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Personal(This,value) )
    ( (This)->lpVtbl->get_TrustedRootCertificationAuthorities(This,value) )
    ( (This)->lpVtbl->get_IntermediateCertificationAuthorities(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo[] = L"Windows.Security.Cryptography.Certificates.ISubjectAlternativeNameInfo";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EmailName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IPAddress )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Url )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DnsName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DistinguishedName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PrincipalName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfoVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EmailName(This,value) )
    ( (This)->lpVtbl->get_IPAddress(This,value) )
    ( (This)->lpVtbl->get_Url(This,value) )
    ( (This)->lpVtbl->get_DnsName(This,value) )
    ( (This)->lpVtbl->get_DistinguishedName(This,value) )
    ( (This)->lpVtbl->get_PrincipalName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo2[] = L"Windows.Security.Cryptography.Certificates.ISubjectAlternativeNameInfo2";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EmailNames )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2 * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IPAddresses )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2 * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Urls )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2 * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DnsNames )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2 * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DistinguishedNames )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2 * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PrincipalNames )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2 * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Extension )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2Vtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EmailNames(This,value) )
    ( (This)->lpVtbl->get_IPAddresses(This,value) )
    ( (This)->lpVtbl->get_Urls(This,value) )
    ( (This)->lpVtbl->get_DnsNames(This,value) )
    ( (This)->lpVtbl->get_DistinguishedNames(This,value) )
    ( (This)->lpVtbl->get_PrincipalNames(This,value) )
    ( (This)->lpVtbl->get_Extension(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IUserCertificateEnrollmentManager[] = L"Windows.Security.Cryptography.Certificates.IUserCertificateEnrollmentManager";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateRequestAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * request,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * value
        );
    HRESULT ( STDMETHODCALLTYPE *InstallCertificateAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager * This,
                  __RPC__in HSTRING certificate,
                  __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CInstallOptions installOption,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *ImportPfxDataAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager * This,
                  __RPC__in HSTRING pfxData,
                  __RPC__in HSTRING password,
                  __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CExportOption exportable,
                  __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CKeyProtectionLevel keyProtectionLevel,
                  __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CInstallOptions installOption,
                  __RPC__in HSTRING friendlyName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *ImportPfxDataToKspAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager * This,
                  __RPC__in HSTRING pfxData,
                  __RPC__in HSTRING password,
                  __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CExportOption exportable,
                  __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CKeyProtectionLevel keyProtectionLevel,
                  __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CInstallOptions installOption,
                  __RPC__in HSTRING friendlyName,
                  __RPC__in HSTRING keyStorageProvider,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManagerVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateRequestAsync(This,request,value) )
    ( (This)->lpVtbl->InstallCertificateAsync(This,certificate,installOption,value) )
    ( (This)->lpVtbl->ImportPfxDataAsync(This,pfxData,password,exportable,keyProtectionLevel,installOption,friendlyName,value) )
    ( (This)->lpVtbl->ImportPfxDataToKspAsync(This,pfxData,password,exportable,keyProtectionLevel,installOption,friendlyName,keyStorageProvider,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IUserCertificateEnrollmentManager2[] = L"Windows.Security.Cryptography.Certificates.IUserCertificateEnrollmentManager2";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *ImportPfxDataToKspWithParametersAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2 * This,
                  __RPC__in HSTRING pfxData,
                  __RPC__in HSTRING password,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * pfxImportParameters,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2Vtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ImportPfxDataToKspWithParametersAsync(This,pfxData,password,pfxImportParameters,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IUserCertificateStore[] = L"Windows.Security.Cryptography.Certificates.IUserCertificateStore";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestAddAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * certificate,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *RequestDeleteAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * certificate,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStoreVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStoreVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestAddAsync(This,certificate,result) )
    ( (This)->lpVtbl->RequestDeleteAsync(This,certificate,result) )
    ( (This)->lpVtbl->get_Name(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_Certificate[] = L"Windows.Security.Cryptography.Certificates.Certificate";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CertificateChain[] = L"Windows.Security.Cryptography.Certificates.CertificateChain";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CertificateEnrollmentManager[] = L"Windows.Security.Cryptography.Certificates.CertificateEnrollmentManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CertificateExtension[] = L"Windows.Security.Cryptography.Certificates.CertificateExtension";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CertificateKeyUsages[] = L"Windows.Security.Cryptography.Certificates.CertificateKeyUsages";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CertificateQuery[] = L"Windows.Security.Cryptography.Certificates.CertificateQuery";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CertificateRequestProperties[] = L"Windows.Security.Cryptography.Certificates.CertificateRequestProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CertificateStore[] = L"Windows.Security.Cryptography.Certificates.CertificateStore";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CertificateStores[] = L"Windows.Security.Cryptography.Certificates.CertificateStores";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_ChainBuildingParameters[] = L"Windows.Security.Cryptography.Certificates.ChainBuildingParameters";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_ChainValidationParameters[] = L"Windows.Security.Cryptography.Certificates.ChainValidationParameters";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CmsAttachedSignature[] = L"Windows.Security.Cryptography.Certificates.CmsAttachedSignature";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CmsDetachedSignature[] = L"Windows.Security.Cryptography.Certificates.CmsDetachedSignature";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CmsSignerInfo[] = L"Windows.Security.Cryptography.Certificates.CmsSignerInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CmsTimestampInfo[] = L"Windows.Security.Cryptography.Certificates.CmsTimestampInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_KeyAlgorithmNames[] = L"Windows.Security.Cryptography.Certificates.KeyAlgorithmNames";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_KeyAttestationHelper[] = L"Windows.Security.Cryptography.Certificates.KeyAttestationHelper";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_KeyStorageProviderNames[] = L"Windows.Security.Cryptography.Certificates.KeyStorageProviderNames";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_PfxImportParameters[] = L"Windows.Security.Cryptography.Certificates.PfxImportParameters";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_StandardCertificateStoreNames[] = L"Windows.Security.Cryptography.Certificates.StandardCertificateStoreNames";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_SubjectAlternativeNameInfo[] = L"Windows.Security.Cryptography.Certificates.SubjectAlternativeNameInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_UserCertificateEnrollmentManager[] = L"Windows.Security.Cryptography.Certificates.UserCertificateEnrollmentManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_UserCertificateStore[] = L"Windows.Security.Cryptography.Certificates.UserCertificateStore";
       
       
#pragma clang diagnostic pop
