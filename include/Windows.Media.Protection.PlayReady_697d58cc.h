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
#include "Windows.Media.Core.h"
#include "Windows.Media.Protection.h"
#include "Windows.Storage.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2 __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2 __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2 __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2 __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3 __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2 __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2 __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3 __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4 __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics5 __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics5;
typedef interface __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain;
typedef struct __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomainVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * This, __RPC__out __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomainVtbl;
interface __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomainVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain;
typedef struct __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomainVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomainVtbl;
interface __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomainVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense;
typedef struct __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicenseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * This, __RPC__out __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicenseVtbl;
interface __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicenseVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense;
typedef struct __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicenseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicenseVtbl;
interface __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicenseVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest;
typedef struct __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * This, __RPC__out __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequestVtbl;
interface __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequestVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest;
typedef struct __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequestVtbl;
interface __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequestVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult * This, __RPC__out __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResultVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * This, __RPC__out __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResultVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult * This, __RPC__out __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResultVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResultVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectable __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgs __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgs __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgs __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgs __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgsVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor;
typedef interface __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor;
typedef struct __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__out __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl;
interface __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor;
typedef struct __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl;
interface __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor;
typedef struct __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                       __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl;
interface __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor;
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor;
typedef struct __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *value);
    END_INTERFACE
} __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl;
interface __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor;
typedef interface __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor;
typedef struct __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__out __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl;
interface __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor;
typedef struct __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl;
interface __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor;
typedef struct __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                       __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl;
interface __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor;
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor;
typedef struct __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *value);
    END_INTERFACE
} __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl;
interface __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;
typedef enum __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDCertificateFeature __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDCertificateFeature;
typedef enum __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDCertificatePlatformID __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDCertificatePlatformID;
typedef enum __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDCertificateType __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDCertificateType;
typedef enum __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDClosedCaptionFormat __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDClosedCaptionFormat;
typedef enum __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDContentIDType __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDContentIDType;
typedef enum __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDMediaStreamType __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDMediaStreamType;
typedef enum __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDProximityDetectionType __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDProximityDetectionType;
typedef enum __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDStartAsyncOptions __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDStartAsyncOptions;
typedef enum __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyDecryptorSetup __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyDecryptorSetup;
typedef enum __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyEncryptionAlgorithm __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyEncryptionAlgorithm;
typedef enum __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyHardwareDRMFeatures __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyHardwareDRMFeatures;
typedef enum __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyITADataFormat __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyITADataFormat;
enum
DEPRECATED("NDCertificateFeature is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDCertificateFeature
{
    NDCertificateFeature_Transmitter = 1,
    NDCertificateFeature_Receiver = 2,
    NDCertificateFeature_SharedCertificate = 3,
    NDCertificateFeature_SecureClock = 4,
    NDCertificateFeature_AntiRollBackClock = 5,
    NDCertificateFeature_CRLS = 9,
    NDCertificateFeature_PlayReady3Features = 13,
};
enum
DEPRECATED("NDCertificatePlatformID is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDCertificatePlatformID
{
    NDCertificatePlatformID_Windows = 0,
    NDCertificatePlatformID_OSX = 1,
    NDCertificatePlatformID_WindowsOnARM = 2,
    NDCertificatePlatformID_WindowsMobile7 = 5,
    NDCertificatePlatformID_iOSOnARM = 6,
    NDCertificatePlatformID_XBoxOnPPC = 7,
    NDCertificatePlatformID_WindowsPhone8OnARM = 8,
    NDCertificatePlatformID_WindowsPhone8OnX86 = 9,
    NDCertificatePlatformID_XboxOne = 10,
    NDCertificatePlatformID_AndroidOnARM = 11,
    NDCertificatePlatformID_WindowsPhone81OnARM = 12,
    NDCertificatePlatformID_WindowsPhone81OnX86 = 13,
};
enum
DEPRECATED("NDCertificateType is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDCertificateType
{
    NDCertificateType_Unknown = 0,
    NDCertificateType_PC = 1,
    NDCertificateType_Device = 2,
    NDCertificateType_Domain = 3,
    NDCertificateType_Issuer = 4,
    NDCertificateType_CrlSigner = 5,
    NDCertificateType_Service = 6,
    NDCertificateType_Silverlight = 7,
    NDCertificateType_Application = 8,
    NDCertificateType_Metering = 9,
    NDCertificateType_KeyFileSigner = 10,
    NDCertificateType_Server = 11,
    NDCertificateType_LicenseSigner = 12,
};
enum
DEPRECATED("NDClosedCaptionFormat is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDClosedCaptionFormat
{
    NDClosedCaptionFormat_ATSC = 0,
    NDClosedCaptionFormat_SCTE20 = 1,
    NDClosedCaptionFormat_Unknown = 2,
};
enum
DEPRECATED("NDContentIDType is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDContentIDType
{
    NDContentIDType_KeyID = 1,
    NDContentIDType_PlayReadyObject = 2,
    NDContentIDType_Custom = 3,
};
enum
DEPRECATED("NDMediaStreamType is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDMediaStreamType
{
    NDMediaStreamType_Audio = 1,
    NDMediaStreamType_Video = 2,
};
enum
DEPRECATED("NDProximityDetectionType is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDProximityDetectionType
{
    NDProximityDetectionType_UDP = 1,
    NDProximityDetectionType_TCP = 2,
    NDProximityDetectionType_TransportAgnostic = 4,
};
enum
DEPRECATED("NDStartAsyncOptions is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDStartAsyncOptions
{
    NDStartAsyncOptions_MutualAuthentication = 1,
    NDStartAsyncOptions_WaitForLicenseDescriptor = 2,
};
enum __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyDecryptorSetup
{
    PlayReadyDecryptorSetup_Uninitialized = 0,
    PlayReadyDecryptorSetup_OnDemand = 1,
};
enum __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyEncryptionAlgorithm
{
    PlayReadyEncryptionAlgorithm_Unprotected = 0,
    PlayReadyEncryptionAlgorithm_Aes128Ctr = 1,
    PlayReadyEncryptionAlgorithm_Cocktail = 4,
    PlayReadyEncryptionAlgorithm_Aes128Cbc = 5,
    PlayReadyEncryptionAlgorithm_Unspecified = 65535,
    PlayReadyEncryptionAlgorithm_Uninitialized = 2147483647,
};
enum __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyHardwareDRMFeatures
{
    PlayReadyHardwareDRMFeatures_HardwareDRM = 1,
    PlayReadyHardwareDRMFeatures_HEVC = 2,
    PlayReadyHardwareDRMFeatures_Aes128Cbc = 3,
};
enum __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyITADataFormat
{
    PlayReadyITADataFormat_SerializedProperties = 0,
    PlayReadyITADataFormat_SerializedProperties_WithContentProtectionWrapper = 1,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDClient[] = L"Windows.Media.Protection.PlayReady.INDClient";
typedef struct
DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
                                HRESULT ( STDMETHODCALLTYPE *add_RegistrationCompleted )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_RegistrationCompleted )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This,
                  EventRegistrationToken token
        );
    DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
                                HRESULT ( STDMETHODCALLTYPE *add_ProximityDetectionCompleted )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_ProximityDetectionCompleted )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This,
                  EventRegistrationToken token
        );
    DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
                                HRESULT ( STDMETHODCALLTYPE *add_LicenseFetchCompleted )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_LicenseFetchCompleted )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This,
                  EventRegistrationToken token
        );
    DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
                                HRESULT ( STDMETHODCALLTYPE *add_ReRegistrationNeeded )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_ReRegistrationNeeded )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This,
                  EventRegistrationToken token
        );
    DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
                                HRESULT ( STDMETHODCALLTYPE *add_ClosedCaptionDataReceived )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_ClosedCaptionDataReceived )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This,
                  EventRegistrationToken token
        );
    DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *StartAsync )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * contentUrl,
                  UINT32 startAsyncOptions,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData * registrationCustomData,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor * licenseFetchDescriptor,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult * * result
        );
    DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *LicenseFetchAsync )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor * licenseFetchDescriptor,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult * * result
        );
    DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *ReRegistrationAsync )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData * registrationCustomData,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *Close )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->add_RegistrationCompleted(This,handler,token) )
DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->remove_RegistrationCompleted(This,token) )
DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->add_ProximityDetectionCompleted(This,handler,token) )
DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->remove_ProximityDetectionCompleted(This,token) )
DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->add_LicenseFetchCompleted(This,handler,token) )
DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->remove_LicenseFetchCompleted(This,token) )
DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->add_ReRegistrationNeeded(This,handler,token) )
DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->remove_ReRegistrationNeeded(This,token) )
DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->add_ClosedCaptionDataReceived(This,handler,token) )
DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->remove_ClosedCaptionDataReceived(This,token) )
DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->StartAsync(This,contentUrl,startAsyncOptions,registrationCustomData,licenseFetchDescriptor,result) )
DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->LicenseFetchAsync(This,licenseFetchDescriptor,result) )
DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->ReRegistrationAsync(This,registrationCustomData,result) )
DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->Close(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDClientFactory[] = L"Windows.Media.Protection.PlayReady.INDClientFactory";
typedef struct
DEPRECATED("INDClientFactory is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("INDClientFactory is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine * downloadEngine,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser * streamParser,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger * pMessenger,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * * instance
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("INDClientFactory is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->CreateInstance(This,downloadEngine,streamParser,pMessenger,instance) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDClosedCaptionDataReceivedEventArgs[] = L"Windows.Media.Protection.PlayReady.INDClosedCaptionDataReceivedEventArgs";
typedef struct
DEPRECATED("INDClosedCaptionDataReceivedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("INDClosedCaptionDataReceivedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_ClosedCaptionDataFormat )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDClosedCaptionFormat * ccForamt
        );
    DEPRECATED("INDClosedCaptionDataReceivedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_PresentationTimestamp )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs * This,
                           __RPC__out INT64 * presentationTimestamp
        );
    DEPRECATED("INDClosedCaptionDataReceivedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_ClosedCaptionData )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs * This,
                   __RPC__out UINT32 * __ccDataBytesSize,
                                                            __RPC__deref_out_ecount_full_opt(*(__ccDataBytesSize)) BYTE * * ccDataBytes
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("INDClosedCaptionDataReceivedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_ClosedCaptionDataFormat(This,ccForamt) )
DEPRECATED("INDClosedCaptionDataReceivedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_PresentationTimestamp(This,presentationTimestamp) )
DEPRECATED("INDClosedCaptionDataReceivedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_ClosedCaptionData(This,__ccDataBytesSize,ccDataBytes) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDCustomData[] = L"Windows.Media.Protection.PlayReady.INDCustomData";
typedef struct
DEPRECATED("INDCustomData is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("INDCustomData is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_CustomDataTypeID )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData * This,
                   __RPC__out UINT32 * __customDataTypeIDBytesSize,
                                                                      __RPC__deref_out_ecount_full_opt(*(__customDataTypeIDBytesSize)) BYTE * * customDataTypeIDBytes
        );
    DEPRECATED("INDCustomData is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_CustomData )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData * This,
                   __RPC__out UINT32 * __customDataBytesSize,
                                                                __RPC__deref_out_ecount_full_opt(*(__customDataBytesSize)) BYTE * * customDataBytes
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("INDCustomData is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_CustomDataTypeID(This,__customDataTypeIDBytesSize,customDataTypeIDBytes) )
DEPRECATED("INDCustomData is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_CustomData(This,__customDataBytesSize,customDataBytes) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDCustomDataFactory[] = L"Windows.Media.Protection.PlayReady.INDCustomDataFactory";
typedef struct
DEPRECATED("INDCustomDataFactory is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("INDCustomDataFactory is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory * This,
                  UINT32 __customDataTypeIDBytesSize,
                                                        __RPC__in_ecount_full(__customDataTypeIDBytesSize) BYTE * customDataTypeIDBytes,
                  UINT32 __customDataBytesSize,
                                                  __RPC__in_ecount_full(__customDataBytesSize) BYTE * customDataBytes,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData * * instance
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("INDCustomDataFactory is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->CreateInstance(This,__customDataTypeIDBytesSize,customDataTypeIDBytes,__customDataBytesSize,customDataBytes,instance) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDDownloadEngine[] = L"Windows.Media.Protection.PlayReady.INDDownloadEngine";
typedef struct
DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *Open )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                  UINT32 __sessionIDBytesSize,
                                                 __RPC__in_ecount_full(__sessionIDBytesSize) BYTE * sessionIDBytes
        );
    DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *Pause )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine * This
        );
    DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *Resume )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine * This
        );
    DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *Close )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine * This
        );
    DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *Seek )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan startPosition
        );
    DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_CanSeek )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine * This,
                           __RPC__out boolean * canSeek
        );
    DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_BufferFullMinThresholdInSamples )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine * This,
                           __RPC__out UINT32 * bufferFullMinThreshold
        );
    DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_BufferFullMaxThresholdInSamples )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine * This,
                           __RPC__out UINT32 * bufferFullMaxThreshold
        );
    DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Notifier )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier * * instance
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->Open(This,uri,__sessionIDBytesSize,sessionIDBytes) )
DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->Pause(This) )
DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->Resume(This) )
DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->Close(This) )
DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->Seek(This,startPosition) )
DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_CanSeek(This,canSeek) )
DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_BufferFullMinThresholdInSamples(This,bufferFullMinThreshold) )
DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_BufferFullMaxThresholdInSamples(This,bufferFullMaxThreshold) )
DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Notifier(This,instance) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDDownloadEngineNotifier[] = L"Windows.Media.Protection.PlayReady.INDDownloadEngineNotifier";
typedef struct
DEPRECATED("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifierVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *OnStreamOpened )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier * This
        );
    DEPRECATED("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *OnPlayReadyObjectReceived )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier * This,
                  UINT32 __dataBytesSize,
                                            __RPC__in_ecount_full(__dataBytesSize) BYTE * dataBytes
        );
    DEPRECATED("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *OnContentIDReceived )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor * licenseFetchDescriptor
        );
    DEPRECATED("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *OnDataReceived )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier * This,
                  UINT32 __dataBytesSize,
                                            __RPC__in_ecount_full(__dataBytesSize) BYTE * dataBytes,
                  UINT32 bytesReceived
        );
    DEPRECATED("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *OnEndOfStream )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier * This
        );
    DEPRECATED("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *OnNetworkError )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifierVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifierVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->OnStreamOpened(This) )
DEPRECATED("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->OnPlayReadyObjectReceived(This,__dataBytesSize,dataBytes) )
DEPRECATED("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->OnContentIDReceived(This,licenseFetchDescriptor) )
DEPRECATED("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->OnDataReceived(This,__dataBytesSize,dataBytes,bytesReceived) )
DEPRECATED("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->OnEndOfStream(This) )
DEPRECATED("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->OnNetworkError(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDLicenseFetchCompletedEventArgs[] = L"Windows.Media.Protection.PlayReady.INDLicenseFetchCompletedEventArgs";
typedef struct
DEPRECATED("INDLicenseFetchCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("INDLicenseFetchCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_ResponseCustomData )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData * * customData
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("INDLicenseFetchCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_ResponseCustomData(This,customData) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDLicenseFetchDescriptor[] = L"Windows.Media.Protection.PlayReady.INDLicenseFetchDescriptor";
typedef struct
DEPRECATED("INDLicenseFetchDescriptor is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("INDLicenseFetchDescriptor is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_ContentIDType )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDContentIDType * contentIDType
        );
    DEPRECATED("INDLicenseFetchDescriptor is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_ContentID )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor * This,
                   __RPC__out UINT32 * __contentIDBytesSize,
                                                               __RPC__deref_out_ecount_full_opt(*(__contentIDBytesSize)) BYTE * * contentIDBytes
        );
    DEPRECATED("INDLicenseFetchDescriptor is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_LicenseFetchChallengeCustomData )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData * * licenseFetchChallengeCustomData
        );
    DEPRECATED("INDLicenseFetchDescriptor is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_LicenseFetchChallengeCustomData )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData * licenseFetchChallengeCustomData
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("INDLicenseFetchDescriptor is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_ContentIDType(This,contentIDType) )
DEPRECATED("INDLicenseFetchDescriptor is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_ContentID(This,__contentIDBytesSize,contentIDBytes) )
DEPRECATED("INDLicenseFetchDescriptor is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_LicenseFetchChallengeCustomData(This,licenseFetchChallengeCustomData) )
DEPRECATED("INDLicenseFetchDescriptor is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->put_LicenseFetchChallengeCustomData(This,licenseFetchChallengeCustomData) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDLicenseFetchDescriptorFactory[] = L"Windows.Media.Protection.PlayReady.INDLicenseFetchDescriptorFactory";
typedef struct
DEPRECATED("INDLicenseFetchDescriptorFactory is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("INDLicenseFetchDescriptorFactory is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory * This,
                  __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDContentIDType contentIDType,
                  UINT32 __contentIDBytesSize,
                                                 __RPC__in_ecount_full(__contentIDBytesSize) BYTE * contentIDBytes,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData * licenseFetchChallengeCustomData,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor * * instance
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("INDLicenseFetchDescriptorFactory is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->CreateInstance(This,contentIDType,__contentIDBytesSize,contentIDBytes,licenseFetchChallengeCustomData,instance) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDLicenseFetchResult[] = L"Windows.Media.Protection.PlayReady.INDLicenseFetchResult";
typedef struct
DEPRECATED("INDLicenseFetchResult is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("INDLicenseFetchResult is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_ResponseCustomData )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData * * customData
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResultVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("INDLicenseFetchResult is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_ResponseCustomData(This,customData) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDMessenger[] = L"Windows.Media.Protection.PlayReady.INDMessenger";
typedef struct
DEPRECATED("INDMessenger is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessengerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("INDMessenger is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *SendRegistrationRequestAsync )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger * This,
                  UINT32 __sessionIDBytesSize,
                                                 __RPC__in_ecount_full(__sessionIDBytesSize) BYTE * sessionIDBytes,
                  UINT32 __challengeDataBytesSize,
                                                     __RPC__in_ecount_full(__challengeDataBytesSize) BYTE * challengeDataBytes,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * * result
        );
    DEPRECATED("INDMessenger is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *SendProximityDetectionStartAsync )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger * This,
                  __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDProximityDetectionType pdType,
                  UINT32 __transmitterChannelBytesSize,
                                                          __RPC__in_ecount_full(__transmitterChannelBytesSize) BYTE * transmitterChannelBytes,
                  UINT32 __sessionIDBytesSize,
                                                 __RPC__in_ecount_full(__sessionIDBytesSize) BYTE * sessionIDBytes,
                  UINT32 __challengeDataBytesSize,
                                                     __RPC__in_ecount_full(__challengeDataBytesSize) BYTE * challengeDataBytes,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * * result
        );
    DEPRECATED("INDMessenger is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *SendProximityDetectionResponseAsync )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger * This,
                  __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDProximityDetectionType pdType,
                  UINT32 __transmitterChannelBytesSize,
                                                          __RPC__in_ecount_full(__transmitterChannelBytesSize) BYTE * transmitterChannelBytes,
                  UINT32 __sessionIDBytesSize,
                                                 __RPC__in_ecount_full(__sessionIDBytesSize) BYTE * sessionIDBytes,
                  UINT32 __responseDataBytesSize,
                                                    __RPC__in_ecount_full(__responseDataBytesSize) BYTE * responseDataBytes,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * * result
        );
    DEPRECATED("INDMessenger is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *SendLicenseFetchRequestAsync )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger * This,
                  UINT32 __sessionIDBytesSize,
                                                 __RPC__in_ecount_full(__sessionIDBytesSize) BYTE * sessionIDBytes,
                  UINT32 __challengeDataBytesSize,
                                                     __RPC__in_ecount_full(__challengeDataBytesSize) BYTE * challengeDataBytes,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessengerVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessengerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("INDMessenger is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->SendRegistrationRequestAsync(This,__sessionIDBytesSize,sessionIDBytes,__challengeDataBytesSize,challengeDataBytes,result) )
DEPRECATED("INDMessenger is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->SendProximityDetectionStartAsync(This,pdType,__transmitterChannelBytesSize,transmitterChannelBytes,__sessionIDBytesSize,sessionIDBytes,__challengeDataBytesSize,challengeDataBytes,result) )
DEPRECATED("INDMessenger is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->SendProximityDetectionResponseAsync(This,pdType,__transmitterChannelBytesSize,transmitterChannelBytes,__sessionIDBytesSize,sessionIDBytes,__responseDataBytesSize,responseDataBytes,result) )
DEPRECATED("INDMessenger is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->SendLicenseFetchRequestAsync(This,__sessionIDBytesSize,sessionIDBytes,__challengeDataBytesSize,challengeDataBytes,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDProximityDetectionCompletedEventArgs[] = L"Windows.Media.Protection.PlayReady.INDProximityDetectionCompletedEventArgs";
typedef struct
DEPRECATED("INDProximityDetectionCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("INDProximityDetectionCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_ProximityDetectionRetryCount )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs * This,
                           __RPC__out UINT32 * retryCount
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("INDProximityDetectionCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_ProximityDetectionRetryCount(This,retryCount) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDRegistrationCompletedEventArgs[] = L"Windows.Media.Protection.PlayReady.INDRegistrationCompletedEventArgs";
typedef struct
DEPRECATED("INDRegistrationCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("INDRegistrationCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_ResponseCustomData )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData * * customData
        );
    DEPRECATED("INDRegistrationCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_TransmitterProperties )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * * transmitterProperties
        );
    DEPRECATED("INDRegistrationCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_TransmitterCertificateAccepted )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs * This,
                           __RPC__out boolean * acceptpt
        );
    DEPRECATED("INDRegistrationCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_TransmitterCertificateAccepted )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs * This,
                  boolean accept
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("INDRegistrationCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_ResponseCustomData(This,customData) )
DEPRECATED("INDRegistrationCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_TransmitterProperties(This,transmitterProperties) )
DEPRECATED("INDRegistrationCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_TransmitterCertificateAccepted(This,acceptpt) )
DEPRECATED("INDRegistrationCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->put_TransmitterCertificateAccepted(This,accept) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDSendResult[] = L"Windows.Media.Protection.PlayReady.INDSendResult";
typedef struct
DEPRECATED("INDSendResult is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("INDSendResult is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Response )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult * This,
                   __RPC__out UINT32 * __responseDataBytesSize,
                                                                  __RPC__deref_out_ecount_full_opt(*(__responseDataBytesSize)) BYTE * * responseDataBytes
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResultVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("INDSendResult is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Response(This,__responseDataBytesSize,responseDataBytes) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDStartResult[] = L"Windows.Media.Protection.PlayReady.INDStartResult";
typedef struct
DEPRECATED("INDStartResult is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("INDStartResult is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_MediaStreamSource )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * * mediaStreamSource
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResultVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("INDStartResult is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_MediaStreamSource(This,mediaStreamSource) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDStorageFileHelper[] = L"Windows.Media.Protection.PlayReady.INDStorageFileHelper";
typedef struct
DEPRECATED("INDStorageFileHelper is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelperVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("INDStorageFileHelper is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *GetFileURLs )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * fileURLs
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelperVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelperVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("INDStorageFileHelper is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->GetFileURLs(This,file,fileURLs) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDStreamParser[] = L"Windows.Media.Protection.PlayReady.INDStreamParser";
typedef struct
DEPRECATED("INDStreamParser is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("INDStreamParser is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *ParseData )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser * This,
                  UINT32 __dataBytesSize,
                                            __RPC__in_ecount_full(__dataBytesSize) BYTE * dataBytes
        );
    DEPRECATED("INDStreamParser is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *GetStreamInformation )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * descriptor,
                   __RPC__out __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDMediaStreamType * streamType,
                           __RPC__out UINT32 * streamID
        );
    DEPRECATED("INDStreamParser is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *BeginOfStream )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser * This
        );
    DEPRECATED("INDStreamParser is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *EndOfStream )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser * This
        );
    DEPRECATED("INDStreamParser is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Notifier )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier * * instance
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("INDStreamParser is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->ParseData(This,__dataBytesSize,dataBytes) )
DEPRECATED("INDStreamParser is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->GetStreamInformation(This,descriptor,streamType,streamID) )
DEPRECATED("INDStreamParser is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->BeginOfStream(This) )
DEPRECATED("INDStreamParser is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->EndOfStream(This) )
DEPRECATED("INDStreamParser is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_Notifier(This,instance) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDStreamParserNotifier[] = L"Windows.Media.Protection.PlayReady.INDStreamParserNotifier";
typedef struct
DEPRECATED("INDStreamParserNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifierVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("INDStreamParserNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *OnContentIDReceived )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor * licenseFetchDescriptor
        );
    DEPRECATED("INDStreamParserNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *OnMediaStreamDescriptorCreated )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier * This,
                  __RPC__in_opt __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * audioStreamDescriptors,
                  __RPC__in_opt __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * videoStreamDescriptors
        );
    DEPRECATED("INDStreamParserNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *OnSampleParsed )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier * This,
                  UINT32 streamID,
                  __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDMediaStreamType streamType,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample * streamSample,
                  INT64 pts,
                  __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDClosedCaptionFormat ccFormat,
                  UINT32 __ccDataBytesSize,
                                              __RPC__in_ecount_full(__ccDataBytesSize) BYTE * ccDataBytes
        );
    DEPRECATED("INDStreamParserNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *OnBeginSetupDecryptor )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * descriptor,
                  GUID keyID,
                  UINT32 __proBytesSize,
                                           __RPC__in_ecount_full(__proBytesSize) BYTE * proBytes
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifierVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifierVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("INDStreamParserNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->OnContentIDReceived(This,licenseFetchDescriptor) )
DEPRECATED("INDStreamParserNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->OnMediaStreamDescriptorCreated(This,audioStreamDescriptors,videoStreamDescriptors) )
DEPRECATED("INDStreamParserNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->OnSampleParsed(This,streamID,streamType,streamSample,pts,ccFormat,__ccDataBytesSize,ccDataBytes) )
DEPRECATED("INDStreamParserNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->OnBeginSetupDecryptor(This,descriptor,keyID,__proBytesSize,proBytes) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDTCPMessengerFactory[] = L"Windows.Media.Protection.PlayReady.INDTCPMessengerFactory";
typedef struct
DEPRECATED("INDTCPMessengerFactory is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("INDTCPMessengerFactory is deprecated and might not work on all platforms. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory * This,
                  __RPC__in HSTRING remoteHostName,
                  UINT32 remoteHostPort,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger * * instance
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("INDTCPMessengerFactory is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->CreateInstance(This,remoteHostName,remoteHostPort,instance) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDTransmitterProperties[] = L"Windows.Media.Protection.PlayReady.INDTransmitterProperties";
typedef struct
DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_CertificateType )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDCertificateType * type
        );
    DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_PlatformIdentifier )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDCertificatePlatformID * identifier
        );
    DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_SupportedFeatures )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * This,
                   __RPC__out UINT32 * __featureSetsSize,
                                                            __RPC__deref_out_ecount_full_opt(*(__featureSetsSize)) __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDCertificateFeature * * featureSets
        );
    DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_SecurityLevel )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * This,
                           __RPC__out UINT32 * level
        );
    DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_SecurityVersion )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * This,
                           __RPC__out UINT32 * securityVersion
        );
    DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * expirationDate
        );
    DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_ClientID )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * This,
                   __RPC__out UINT32 * __clientIDBytesSize,
                                                              __RPC__deref_out_ecount_full_opt(*(__clientIDBytesSize)) BYTE * * clientIDBytes
        );
    DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_ModelDigest )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * This,
                   __RPC__out UINT32 * __modelDigestBytesSize,
                                                                 __RPC__deref_out_ecount_full_opt(*(__modelDigestBytesSize)) BYTE * * modelDigestBytes
        );
    DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_ModelManufacturerName )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * This,
                           __RPC__deref_out_opt HSTRING * modelManufacturerName
        );
    DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_ModelName )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * This,
                           __RPC__deref_out_opt HSTRING * modelName
        );
    DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_ModelNumber )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * This,
                           __RPC__deref_out_opt HSTRING * modelNumber
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterPropertiesVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_CertificateType(This,type) )
DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_PlatformIdentifier(This,identifier) )
DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_SupportedFeatures(This,__featureSetsSize,featureSets) )
DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_SecurityLevel(This,level) )
DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_SecurityVersion(This,securityVersion) )
DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_ExpirationDate(This,expirationDate) )
DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_ClientID(This,__clientIDBytesSize,clientIDBytes) )
DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_ModelDigest(This,__modelDigestBytesSize,modelDigestBytes) )
DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_ModelManufacturerName(This,modelManufacturerName) )
DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_ModelName(This,modelName) )
DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
    ( (This)->lpVtbl->get_ModelNumber(This,modelNumber) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyContentHeader[] = L"Windows.Media.Protection.PlayReady.IPlayReadyContentHeader";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_KeyId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyIdString )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LicenseAcquisitionUrl )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LicenseAcquisitionUserInterfaceUrl )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DomainServiceId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EncryptionType )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyEncryptionAlgorithm * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CustomAttributes )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DecryptorSetup )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyDecryptorSetup * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetSerializedHeader )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * This,
                   __RPC__out UINT32 * __headerBytesSize,
                                                            __RPC__deref_out_ecount_full_opt(*(__headerBytesSize)) BYTE * * headerBytes
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HeaderWithEmbeddedUpdates )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_KeyId(This,value) )
    ( (This)->lpVtbl->get_KeyIdString(This,value) )
    ( (This)->lpVtbl->get_LicenseAcquisitionUrl(This,value) )
    ( (This)->lpVtbl->get_LicenseAcquisitionUserInterfaceUrl(This,value) )
    ( (This)->lpVtbl->get_DomainServiceId(This,value) )
    ( (This)->lpVtbl->get_EncryptionType(This,value) )
    ( (This)->lpVtbl->get_CustomAttributes(This,value) )
    ( (This)->lpVtbl->get_DecryptorSetup(This,value) )
    ( (This)->lpVtbl->GetSerializedHeader(This,__headerBytesSize,headerBytes) )
    ( (This)->lpVtbl->get_HeaderWithEmbeddedUpdates(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyContentHeader2[] = L"Windows.Media.Protection.PlayReady.IPlayReadyContentHeader2";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_KeyIds )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2 * This,
                   __RPC__out UINT32 * __contentKeyIdsSize,
                                                              __RPC__deref_out_ecount_full_opt(*(__contentKeyIdsSize)) GUID * * contentKeyIds
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyIdStrings )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2 * This,
                   __RPC__out UINT32 * __contentKeyIdStringsSize,
                                                                    __RPC__deref_out_ecount_full_opt(*(__contentKeyIdStringsSize)) HSTRING * * contentKeyIdStrings
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2Vtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_KeyIds(This,__contentKeyIdsSize,contentKeyIds) )
    ( (This)->lpVtbl->get_KeyIdStrings(This,__contentKeyIdStringsSize,contentKeyIdStrings) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyContentHeaderFactory[] = L"Windows.Media.Protection.PlayReady.IPlayReadyContentHeaderFactory";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstanceFromWindowsMediaDrmHeader )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory * This,
                                        __RPC__in_range(0,0x7fffffff) UINT32 __headerBytesSize,
                                              __RPC__in_ecount_full(__headerBytesSize) BYTE * headerBytes,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * licenseAcquisitionUrl,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * licenseAcquisitionUserInterfaceUrl,
                  __RPC__in HSTRING customAttributes,
                  GUID domainServiceId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * * instance
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInstanceFromComponents )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory * This,
                  GUID contentKeyId,
                  __RPC__in HSTRING contentKeyIdString,
                  __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyEncryptionAlgorithm contentEncryptionAlgorithm,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * licenseAcquisitionUrl,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * licenseAcquisitionUserInterfaceUrl,
                  __RPC__in HSTRING customAttributes,
                  GUID domainServiceId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * * instance
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInstanceFromPlayReadyHeader )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory * This,
                                        __RPC__in_range(0,0x7fffffff) UINT32 __headerBytesSize,
                                              __RPC__in_ecount_full(__headerBytesSize) BYTE * headerBytes,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * * instance
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstanceFromWindowsMediaDrmHeader(This,__headerBytesSize,headerBytes,licenseAcquisitionUrl,licenseAcquisitionUserInterfaceUrl,customAttributes,domainServiceId,instance) )
    ( (This)->lpVtbl->CreateInstanceFromComponents(This,contentKeyId,contentKeyIdString,contentEncryptionAlgorithm,licenseAcquisitionUrl,licenseAcquisitionUserInterfaceUrl,customAttributes,domainServiceId,instance) )
    ( (This)->lpVtbl->CreateInstanceFromPlayReadyHeader(This,__headerBytesSize,headerBytes,instance) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyContentHeaderFactory2[] = L"Windows.Media.Protection.PlayReady.IPlayReadyContentHeaderFactory2";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstanceFromComponents2 )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2 * This,
                  UINT32 dwFlags,
                                        __RPC__in_range(0,0x7fffffff) UINT32 __contentKeyIdsSize,
                                                __RPC__in_ecount_full(__contentKeyIdsSize) GUID * contentKeyIds,
                                        __RPC__in_range(0,0x7fffffff) UINT32 __contentKeyIdStringsSize,
                                                      __RPC__in_ecount_full(__contentKeyIdStringsSize) HSTRING * contentKeyIdStrings,
                  __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyEncryptionAlgorithm contentEncryptionAlgorithm,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * licenseAcquisitionUrl,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * licenseAcquisitionUserInterfaceUrl,
                  __RPC__in HSTRING customAttributes,
                  GUID domainServiceId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * * instance
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2Vtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstanceFromComponents2(This,dwFlags,__contentKeyIdsSize,contentKeyIds,__contentKeyIdStringsSize,contentKeyIdStrings,contentEncryptionAlgorithm,licenseAcquisitionUrl,licenseAcquisitionUserInterfaceUrl,customAttributes,domainServiceId,instance) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyContentResolver[] = L"Windows.Media.Protection.PlayReady.IPlayReadyContentResolver";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolverVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ServiceRequest )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * contentHeader,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest * * serviceRequest
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolverVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolverVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ServiceRequest(This,contentHeader,serviceRequest) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyDomain[] = L"Windows.Media.Protection.PlayReady.IPlayReadyDomain";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AccountId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServiceId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Revision )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DomainJoinUrl )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AccountId(This,value) )
    ( (This)->lpVtbl->get_ServiceId(This,value) )
    ( (This)->lpVtbl->get_Revision(This,value) )
    ( (This)->lpVtbl->get_FriendlyName(This,value) )
    ( (This)->lpVtbl->get_DomainJoinUrl(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyDomainIterableFactory[] = L"Windows.Media.Protection.PlayReady.IPlayReadyDomainIterableFactory";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory * This,
                  GUID domainAccountId,
                           __RPC__deref_out_opt __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * * domainIterable
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,domainAccountId,domainIterable) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyDomainJoinServiceRequest[] = L"Windows.Media.Protection.PlayReady.IPlayReadyDomainJoinServiceRequest";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DomainAccountId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DomainAccountId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest * This,
                  GUID value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DomainFriendlyName )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DomainFriendlyName )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DomainServiceId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DomainServiceId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest * This,
                  GUID value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequestVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DomainAccountId(This,value) )
    ( (This)->lpVtbl->put_DomainAccountId(This,value) )
    ( (This)->lpVtbl->get_DomainFriendlyName(This,value) )
    ( (This)->lpVtbl->put_DomainFriendlyName(This,value) )
    ( (This)->lpVtbl->get_DomainServiceId(This,value) )
    ( (This)->lpVtbl->put_DomainServiceId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyDomainLeaveServiceRequest[] = L"Windows.Media.Protection.PlayReady.IPlayReadyDomainLeaveServiceRequest";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DomainAccountId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DomainAccountId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest * This,
                  GUID value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DomainServiceId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DomainServiceId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest * This,
                  GUID value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequestVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DomainAccountId(This,value) )
    ( (This)->lpVtbl->put_DomainAccountId(This,value) )
    ( (This)->lpVtbl->get_DomainServiceId(This,value) )
    ( (This)->lpVtbl->put_DomainServiceId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyITADataGenerator[] = L"Windows.Media.Protection.PlayReady.IPlayReadyITADataGenerator";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGeneratorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GenerateData )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator * This,
                  GUID guidCPSystemId,
                  UINT32 countOfStreams,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * configuration,
                  __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyITADataFormat format,
                   __RPC__out UINT32 * __dataBytesSize,
                                                          __RPC__deref_out_ecount_full_opt(*(__dataBytesSize)) BYTE * * dataBytes
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGeneratorVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGeneratorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GenerateData(This,guidCPSystemId,countOfStreams,configuration,format,__dataBytesSize,dataBytes) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyIndividualizationServiceRequest[] = L"Windows.Media.Protection.PlayReady.IPlayReadyIndividualizationServiceRequest";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequestVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyLicense[] = L"Windows.Media.Protection.PlayReady.IPlayReadyLicense";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FullyEvaluated )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UsableForPlay )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExpireAfterFirstPlay )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DomainAccountID )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChainDepth )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense * This,
                           __RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetKIDAtChainDepth )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense * This,
                  UINT32 chainDepth,
                           __RPC__out GUID * kid
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FullyEvaluated(This,value) )
    ( (This)->lpVtbl->get_UsableForPlay(This,value) )
    ( (This)->lpVtbl->get_ExpirationDate(This,value) )
    ( (This)->lpVtbl->get_ExpireAfterFirstPlay(This,value) )
    ( (This)->lpVtbl->get_DomainAccountID(This,value) )
    ( (This)->lpVtbl->get_ChainDepth(This,value) )
    ( (This)->lpVtbl->GetKIDAtChainDepth(This,chainDepth,kid) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyLicense2[] = L"Windows.Media.Protection.PlayReady.IPlayReadyLicense2";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SecureStopId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SecurityLevel )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2 * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InMemoryOnly )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExpiresInRealTime )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2Vtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SecureStopId(This,value) )
    ( (This)->lpVtbl->get_SecurityLevel(This,value) )
    ( (This)->lpVtbl->get_InMemoryOnly(This,value) )
    ( (This)->lpVtbl->get_ExpiresInRealTime(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyLicenseAcquisitionServiceRequest[] = L"Windows.Media.Protection.PlayReady.IPlayReadyLicenseAcquisitionServiceRequest";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ContentHeader )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ContentHeader )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DomainServiceId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DomainServiceId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest * This,
                  GUID value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequestVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ContentHeader(This,value) )
    ( (This)->lpVtbl->put_ContentHeader(This,value) )
    ( (This)->lpVtbl->get_DomainServiceId(This,value) )
    ( (This)->lpVtbl->put_DomainServiceId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyLicenseAcquisitionServiceRequest2[] = L"Windows.Media.Protection.PlayReady.IPlayReadyLicenseAcquisitionServiceRequest2";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SessionId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2 * This,
                           __RPC__out GUID * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2Vtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SessionId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyLicenseAcquisitionServiceRequest3[] = L"Windows.Media.Protection.PlayReady.IPlayReadyLicenseAcquisitionServiceRequest3";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateLicenseIterable )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * contentHeader,
                  boolean fullyEvaluated,
                           __RPC__deref_out_opt __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3Vtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateLicenseIterable(This,contentHeader,fullyEvaluated,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyLicenseIterableFactory[] = L"Windows.Media.Protection.PlayReady.IPlayReadyLicenseIterableFactory";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * contentHeader,
                  boolean fullyEvaluated,
                           __RPC__deref_out_opt __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * * instance
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,contentHeader,fullyEvaluated,instance) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyLicenseManagement[] = L"Windows.Media.Protection.PlayReady.IPlayReadyLicenseManagement";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *DeleteLicenses )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * contentHeader,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagementVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagementVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->DeleteLicenses(This,contentHeader,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyLicenseSession[] = L"Windows.Media.Protection.PlayReady.IPlayReadyLicenseSession";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateLAServiceRequest )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest * * serviceRequest
        );
    HRESULT ( STDMETHODCALLTYPE *ConfigureMediaProtectionManager )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * mpm
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateLAServiceRequest(This,serviceRequest) )
    ( (This)->lpVtbl->ConfigureMediaProtectionManager(This,mpm) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyLicenseSession2[] = L"Windows.Media.Protection.PlayReady.IPlayReadyLicenseSession2";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateLicenseIterable )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * contentHeader,
                  boolean fullyEvaluated,
                           __RPC__deref_out_opt __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * * licenseIterable
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2Vtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateLicenseIterable(This,contentHeader,fullyEvaluated,licenseIterable) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyLicenseSessionFactory[] = L"Windows.Media.Protection.PlayReady.IPlayReadyLicenseSessionFactory";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * configuration,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession * * instance
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,configuration,instance) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyMeteringReportServiceRequest[] = L"Windows.Media.Protection.PlayReady.IPlayReadyMeteringReportServiceRequest";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MeteringCertificate )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest * This,
                   __RPC__out UINT32 * __meteringCertBytesSize,
                                                                  __RPC__deref_out_ecount_full_opt(*(__meteringCertBytesSize)) BYTE * * meteringCertBytes
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MeteringCertificate )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest * This,
                                        __RPC__in_range(0,0x7fffffff) UINT32 __meteringCertBytesSize,
                                                    __RPC__in_ecount_full(__meteringCertBytesSize) BYTE * meteringCertBytes
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequestVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MeteringCertificate(This,__meteringCertBytesSize,meteringCertBytes) )
    ( (This)->lpVtbl->put_MeteringCertificate(This,__meteringCertBytesSize,meteringCertBytes) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyRevocationServiceRequest[] = L"Windows.Media.Protection.PlayReady.IPlayReadyRevocationServiceRequest";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequestVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadySecureStopIterableFactory[] = L"Windows.Media.Protection.PlayReady.IPlayReadySecureStopIterableFactory";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory * This,
                                        __RPC__in_range(0,0x7fffffff) UINT32 __publisherCertBytesSize,
                                                     __RPC__in_ecount_full(__publisherCertBytesSize) BYTE * publisherCertBytes,
                           __RPC__deref_out_opt __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * * instance
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,__publisherCertBytesSize,publisherCertBytes,instance) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadySecureStopServiceRequest[] = L"Windows.Media.Protection.PlayReady.IPlayReadySecureStopServiceRequest";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SessionID )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StartTime )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UpdateTime )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Stopped )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PublisherCertificate )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest * This,
                   __RPC__out UINT32 * __publisherCertBytesSize,
                                                                   __RPC__deref_out_ecount_full_opt(*(__publisherCertBytesSize)) BYTE * * publisherCertBytes
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SessionID(This,value) )
    ( (This)->lpVtbl->get_StartTime(This,value) )
    ( (This)->lpVtbl->get_UpdateTime(This,value) )
    ( (This)->lpVtbl->get_Stopped(This,value) )
    ( (This)->lpVtbl->get_PublisherCertificate(This,__publisherCertBytesSize,publisherCertBytes) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadySecureStopServiceRequestFactory[] = L"Windows.Media.Protection.PlayReady.IPlayReadySecureStopServiceRequestFactory";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory * This,
                                        __RPC__in_range(0,0x7fffffff) UINT32 __publisherCertBytesSize,
                                                     __RPC__in_ecount_full(__publisherCertBytesSize) BYTE * publisherCertBytes,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest * * instance
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInstanceFromSessionID )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory * This,
                  GUID sessionID,
                                        __RPC__in_range(0,0x7fffffff) UINT32 __publisherCertBytesSize,
                                                     __RPC__in_ecount_full(__publisherCertBytesSize) BYTE * publisherCertBytes,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest * * instance
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,__publisherCertBytesSize,publisherCertBytes,instance) )
    ( (This)->lpVtbl->CreateInstanceFromSessionID(This,sessionID,__publisherCertBytesSize,publisherCertBytes,instance) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyServiceRequest[] = L"Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Uri )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResponseCustomData )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChallengeCustomData )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ChallengeCustomData )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest * This,
                  __RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *BeginServiceRequest )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    HRESULT ( STDMETHODCALLTYPE *NextServiceRequest )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest * * serviceRequest
        );
    HRESULT ( STDMETHODCALLTYPE *GenerateManualEnablingChallenge )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage * * challengeMessage
        );
    HRESULT ( STDMETHODCALLTYPE *ProcessManualEnablingResponse )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest * This,
                                        __RPC__in_range(0,0x7fffffff) UINT32 __responseBytesSize,
                                                __RPC__in_ecount_full(__responseBytesSize) BYTE * responseBytes,
                           __RPC__out HRESULT * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequestVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Uri(This,value) )
    ( (This)->lpVtbl->put_Uri(This,value) )
    ( (This)->lpVtbl->get_ResponseCustomData(This,value) )
    ( (This)->lpVtbl->get_ChallengeCustomData(This,value) )
    ( (This)->lpVtbl->put_ChallengeCustomData(This,value) )
    ( (This)->lpVtbl->BeginServiceRequest(This,action) )
    ( (This)->lpVtbl->NextServiceRequest(This,serviceRequest) )
    ( (This)->lpVtbl->GenerateManualEnablingChallenge(This,challengeMessage) )
    ( (This)->lpVtbl->ProcessManualEnablingResponse(This,__responseBytesSize,responseBytes,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadySoapMessage[] = L"Windows.Media.Protection.PlayReady.IPlayReadySoapMessage";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetMessageBody )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage * This,
                   __RPC__out UINT32 * __messageBodyBytesSize,
                                                                 __RPC__deref_out_ecount_full_opt(*(__messageBodyBytesSize)) BYTE * * messageBodyBytes
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MessageHeaders )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * messageUri
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessageVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetMessageBody(This,__messageBodyBytesSize,messageBodyBytes) )
    ( (This)->lpVtbl->get_MessageHeaders(This,value) )
    ( (This)->lpVtbl->get_Uri(This,messageUri) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyStatics[] = L"Windows.Media.Protection.PlayReady.IPlayReadyStatics";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DomainJoinServiceRequestType )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DomainLeaveServiceRequestType )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IndividualizationServiceRequestType )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LicenseAcquirerServiceRequestType )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MeteringReportServiceRequestType )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RevocationServiceRequestType )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediaProtectionSystemId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PlayReadySecurityVersion )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DomainJoinServiceRequestType(This,value) )
    ( (This)->lpVtbl->get_DomainLeaveServiceRequestType(This,value) )
    ( (This)->lpVtbl->get_IndividualizationServiceRequestType(This,value) )
    ( (This)->lpVtbl->get_LicenseAcquirerServiceRequestType(This,value) )
    ( (This)->lpVtbl->get_MeteringReportServiceRequestType(This,value) )
    ( (This)->lpVtbl->get_RevocationServiceRequestType(This,value) )
    ( (This)->lpVtbl->get_MediaProtectionSystemId(This,value) )
    ( (This)->lpVtbl->get_PlayReadySecurityVersion(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyStatics2[] = L"Windows.Media.Protection.PlayReady.IPlayReadyStatics2";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PlayReadyCertificateSecurityLevel )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2 * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2Vtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PlayReadyCertificateSecurityLevel(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyStatics3[] = L"Windows.Media.Protection.PlayReady.IPlayReadyStatics3";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SecureStopServiceRequestType )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3 * This,
                           __RPC__out GUID * value
        );
    HRESULT ( STDMETHODCALLTYPE *CheckSupportedHardware )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3 * This,
                  __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyHardwareDRMFeatures hwdrmFeature,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3Vtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SecureStopServiceRequestType(This,value) )
    ( (This)->lpVtbl->CheckSupportedHardware(This,hwdrmFeature,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyStatics4[] = L"Windows.Media.Protection.PlayReady.IPlayReadyStatics4";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InputTrustAuthorityToCreate )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProtectionSystemId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4 * This,
                           __RPC__out GUID * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4Vtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InputTrustAuthorityToCreate(This,value) )
    ( (This)->lpVtbl->get_ProtectionSystemId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyStatics5[] = L"Windows.Media.Protection.PlayReady.IPlayReadyStatics5";
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HardwareDRMDisabledAtTime )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics5 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HardwareDRMDisabledUntilTime )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics5 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ResetHardwareDRMDisabled )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics5 * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics5Vtbl;
interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics5
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HardwareDRMDisabledAtTime(This,value) )
    ( (This)->lpVtbl->get_HardwareDRMDisabledUntilTime(This,value) )
    ( (This)->lpVtbl->ResetHardwareDRMDisabled(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics5;
DEPRECATED("NDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_NDClient[] = L"Windows.Media.Protection.PlayReady.NDClient";
DEPRECATED("NDCustomData is deprecated and might not work on all platforms. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_NDCustomData[] = L"Windows.Media.Protection.PlayReady.NDCustomData";
DEPRECATED("NDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_NDDownloadEngineNotifier[] = L"Windows.Media.Protection.PlayReady.NDDownloadEngineNotifier";
DEPRECATED("NDLicenseFetchDescriptor is deprecated and might not work on all platforms. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_NDLicenseFetchDescriptor[] = L"Windows.Media.Protection.PlayReady.NDLicenseFetchDescriptor";
DEPRECATED("NDStorageFileHelper is deprecated and might not work on all platforms. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_NDStorageFileHelper[] = L"Windows.Media.Protection.PlayReady.NDStorageFileHelper";
DEPRECATED("NDStreamParserNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_NDStreamParserNotifier[] = L"Windows.Media.Protection.PlayReady.NDStreamParserNotifier";
DEPRECATED("NDTCPMessenger is deprecated and might not work on all platforms. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_NDTCPMessenger[] = L"Windows.Media.Protection.PlayReady.NDTCPMessenger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyContentHeader[] = L"Windows.Media.Protection.PlayReady.PlayReadyContentHeader";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyContentResolver[] = L"Windows.Media.Protection.PlayReady.PlayReadyContentResolver";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyDomain[] = L"Windows.Media.Protection.PlayReady.PlayReadyDomain";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyDomainIterable[] = L"Windows.Media.Protection.PlayReady.PlayReadyDomainIterable";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyDomainIterator[] = L"Windows.Media.Protection.PlayReady.PlayReadyDomainIterator";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyDomainJoinServiceRequest[] = L"Windows.Media.Protection.PlayReady.PlayReadyDomainJoinServiceRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyDomainLeaveServiceRequest[] = L"Windows.Media.Protection.PlayReady.PlayReadyDomainLeaveServiceRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyITADataGenerator[] = L"Windows.Media.Protection.PlayReady.PlayReadyITADataGenerator";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyIndividualizationServiceRequest[] = L"Windows.Media.Protection.PlayReady.PlayReadyIndividualizationServiceRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyLicense[] = L"Windows.Media.Protection.PlayReady.PlayReadyLicense";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyLicenseAcquisitionServiceRequest[] = L"Windows.Media.Protection.PlayReady.PlayReadyLicenseAcquisitionServiceRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyLicenseIterable[] = L"Windows.Media.Protection.PlayReady.PlayReadyLicenseIterable";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyLicenseIterator[] = L"Windows.Media.Protection.PlayReady.PlayReadyLicenseIterator";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyLicenseManagement[] = L"Windows.Media.Protection.PlayReady.PlayReadyLicenseManagement";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyLicenseSession[] = L"Windows.Media.Protection.PlayReady.PlayReadyLicenseSession";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyMeteringReportServiceRequest[] = L"Windows.Media.Protection.PlayReady.PlayReadyMeteringReportServiceRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyRevocationServiceRequest[] = L"Windows.Media.Protection.PlayReady.PlayReadyRevocationServiceRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadySecureStopIterable[] = L"Windows.Media.Protection.PlayReady.PlayReadySecureStopIterable";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadySecureStopIterator[] = L"Windows.Media.Protection.PlayReady.PlayReadySecureStopIterator";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadySecureStopServiceRequest[] = L"Windows.Media.Protection.PlayReady.PlayReadySecureStopServiceRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadySoapMessage[] = L"Windows.Media.Protection.PlayReady.PlayReadySoapMessage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyStatics[] = L"Windows.Media.Protection.PlayReady.PlayReadyStatics";
       
       
#pragma clang diagnostic pop
