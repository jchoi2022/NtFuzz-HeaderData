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
typedef interface __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress;
typedef interface __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddressStatics __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddressStatics;
typedef interface __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPair __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPair;
typedef interface __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairCreationResult __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairCreationResult;
typedef interface __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairStateChangedEventArgs __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairStateChangedEventArgs;
typedef interface __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairStatics __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairStatics;
typedef interface __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplate __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplate;
typedef interface __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplateStatics __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplateStatics;
typedef interface __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveInboundEndpointPairCreatedEventArgs __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveInboundEndpointPairCreatedEventArgs;
typedef interface __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurement __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurement;
typedef interface __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurementStatics __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurementStatics;
typedef interface __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMetricResult __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMetricResult;
typedef interface __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServicePrivatePayloadResult __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServicePrivatePayloadResult;
typedef interface __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress;
typedef struct __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This, __RPC__out __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddressVtbl;
interface __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddressVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress;
typedef struct __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddressVtbl;
interface __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddressVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair;
typedef struct __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair * This, __RPC__out __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPair * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPair * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairVtbl;
interface __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair;
typedef struct __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairVtbl;
interface __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate;
typedef struct __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate * This, __RPC__out __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplate * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplate * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplateVtbl;
interface __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplateVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate;
typedef struct __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplateVtbl;
interface __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplateVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
enum __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveQualityOfServiceMetric;
typedef interface __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric;
typedef struct __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This, __RPC__out enum __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveQualityOfServiceMetric *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveQualityOfServiceMetric *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricVtbl;
interface __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric;
typedef struct __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricVtbl;
interface __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult;
typedef struct __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult * This, __RPC__out __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMetricResult * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMetricResult * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResultVtbl;
interface __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResultVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult;
typedef struct __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResultVtbl;
interface __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult;
typedef struct __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult * This, __RPC__out __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServicePrivatePayloadResult * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServicePrivatePayloadResult * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResultVtbl;
interface __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResultVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult;
typedef struct __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResultVtbl;
interface __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress;
typedef struct __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This,
                       __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddressVtbl;
interface __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddressVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair;
typedef struct __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPair * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair * This,
                       __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPair * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPair * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairVtbl;
interface __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate;
typedef struct __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplate * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate * This,
                       __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplate * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplate * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplateVtbl;
interface __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplateVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric;
typedef struct __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveQualityOfServiceMetric *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This,
                       enum __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveQualityOfServiceMetric item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveQualityOfServiceMetric *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricVtbl;
interface __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult;
typedef struct __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMetricResult * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult * This,
                       __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMetricResult * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMetricResult * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResultVtbl;
interface __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResultVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult;
typedef struct __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServicePrivatePayloadResult * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult * This,
                       __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServicePrivatePayloadResult * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServicePrivatePayloadResult * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResultVtbl;
interface __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResultVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress;
EXTERN_C const IID IID___FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress;
typedef struct __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This, __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This,
                   __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This, __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * *value);
    END_INTERFACE
} __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddressVtbl;
interface __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress
{
    CONST_VTBL struct __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddressVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric;
EXTERN_C const IID IID___FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric;
typedef struct __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This, __RPC__deref_out_opt enum __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveQualityOfServiceMetric *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This,
                   unsigned int index,
                            __RPC__deref_out_opt enum __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveQualityOfServiceMetric *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This,
                   __RPC__in enum __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveQualityOfServiceMetric item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This,
                   unsigned int index,
                   __RPC__in enum __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveQualityOfServiceMetric item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This,
                   unsigned int index,
                   __RPC__in enum __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveQualityOfServiceMetric item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This, __RPC__in enum __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveQualityOfServiceMetric item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveQualityOfServiceMetric *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) enum __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveQualityOfServiceMetric *value);
    END_INTERFACE
} __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricVtbl;
interface __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric
{
    CONST_VTBL struct __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResult __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResult;
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResult __FIAsyncOperation_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResult __FIAsyncOperation_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResult;
typedef struct __FIAsyncOperation_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResult * This, __RPC__out __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairCreationResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResultVtbl;
interface __FIAsyncOperation_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResultVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress_IInspectable __FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairStateChangedEventArgs __FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairStateChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairStateChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairStateChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairStateChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairStateChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairStateChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPair * sender, __RPC__in_opt __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairStateChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairStateChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairStateChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairStateChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate_Windows__CNetworking__CXboxLive__CXboxLiveInboundEndpointPairCreatedEventArgs __FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate_Windows__CNetworking__CXboxLive__CXboxLiveInboundEndpointPairCreatedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate_Windows__CNetworking__CXboxLive__CXboxLiveInboundEndpointPairCreatedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate_Windows__CNetworking__CXboxLive__CXboxLiveInboundEndpointPairCreatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate_Windows__CNetworking__CXboxLive__CXboxLiveInboundEndpointPairCreatedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate_Windows__CNetworking__CXboxLive__CXboxLiveInboundEndpointPairCreatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate_Windows__CNetworking__CXboxLive__CXboxLiveInboundEndpointPairCreatedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate_Windows__CNetworking__CXboxLive__CXboxLiveInboundEndpointPairCreatedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplate * sender, __RPC__in_opt __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveInboundEndpointPairCreatedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate_Windows__CNetworking__CXboxLive__CXboxLiveInboundEndpointPairCreatedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate_Windows__CNetworking__CXboxLive__CXboxLiveInboundEndpointPairCreatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate_Windows__CNetworking__CXboxLive__CXboxLiveInboundEndpointPairCreatedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CNetworking_CIHostName __x_ABI_CWindows_CNetworking_CIHostName;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef enum __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveEndpointPairCreationBehaviors __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveEndpointPairCreationBehaviors;
typedef enum __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveEndpointPairCreationStatus __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveEndpointPairCreationStatus;
typedef enum __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveEndpointPairState __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveEndpointPairState;
typedef enum __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveNetworkAccessKind __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveNetworkAccessKind;
typedef enum __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveQualityOfServiceMeasurementStatus __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveQualityOfServiceMeasurementStatus;
typedef enum __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveQualityOfServiceMetric __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveQualityOfServiceMetric;
typedef enum __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveSocketKind __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveSocketKind;
enum __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveEndpointPairCreationBehaviors
{
    XboxLiveEndpointPairCreationBehaviors_None = 0,
    XboxLiveEndpointPairCreationBehaviors_ReevaluatePath = 0x1,
};
enum __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveEndpointPairCreationStatus
{
    XboxLiveEndpointPairCreationStatus_Succeeded = 0,
    XboxLiveEndpointPairCreationStatus_NoLocalNetworks = 1,
    XboxLiveEndpointPairCreationStatus_NoCompatibleNetworkPaths = 2,
    XboxLiveEndpointPairCreationStatus_LocalSystemNotAuthorized = 3,
    XboxLiveEndpointPairCreationStatus_Canceled = 4,
    XboxLiveEndpointPairCreationStatus_TimedOut = 5,
    XboxLiveEndpointPairCreationStatus_RemoteSystemNotAuthorized = 6,
    XboxLiveEndpointPairCreationStatus_RefusedDueToConfiguration = 7,
    XboxLiveEndpointPairCreationStatus_UnexpectedInternalError = 8,
};
enum __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveEndpointPairState
{
    XboxLiveEndpointPairState_Invalid = 0,
    XboxLiveEndpointPairState_CreatingOutbound = 1,
    XboxLiveEndpointPairState_CreatingInbound = 2,
    XboxLiveEndpointPairState_Ready = 3,
    XboxLiveEndpointPairState_DeletingLocally = 4,
    XboxLiveEndpointPairState_RemoteEndpointTerminating = 5,
    XboxLiveEndpointPairState_Deleted = 6,
};
enum __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveNetworkAccessKind
{
    XboxLiveNetworkAccessKind_Open = 0,
    XboxLiveNetworkAccessKind_Moderate = 1,
    XboxLiveNetworkAccessKind_Strict = 2,
};
enum __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveQualityOfServiceMeasurementStatus
{
    XboxLiveQualityOfServiceMeasurementStatus_NotStarted = 0,
    XboxLiveQualityOfServiceMeasurementStatus_InProgress = 1,
    XboxLiveQualityOfServiceMeasurementStatus_InProgressWithProvisionalResults = 2,
    XboxLiveQualityOfServiceMeasurementStatus_Succeeded = 3,
    XboxLiveQualityOfServiceMeasurementStatus_NoLocalNetworks = 4,
    XboxLiveQualityOfServiceMeasurementStatus_NoCompatibleNetworkPaths = 5,
    XboxLiveQualityOfServiceMeasurementStatus_LocalSystemNotAuthorized = 6,
    XboxLiveQualityOfServiceMeasurementStatus_Canceled = 7,
    XboxLiveQualityOfServiceMeasurementStatus_TimedOut = 8,
    XboxLiveQualityOfServiceMeasurementStatus_RemoteSystemNotAuthorized = 9,
    XboxLiveQualityOfServiceMeasurementStatus_RefusedDueToConfiguration = 10,
    XboxLiveQualityOfServiceMeasurementStatus_UnexpectedInternalError = 11,
};
enum __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveQualityOfServiceMetric
{
    XboxLiveQualityOfServiceMetric_AverageLatencyInMilliseconds = 0,
    XboxLiveQualityOfServiceMetric_MinLatencyInMilliseconds = 1,
    XboxLiveQualityOfServiceMetric_MaxLatencyInMilliseconds = 2,
    XboxLiveQualityOfServiceMetric_AverageOutboundBitsPerSecond = 3,
    XboxLiveQualityOfServiceMetric_MinOutboundBitsPerSecond = 4,
    XboxLiveQualityOfServiceMetric_MaxOutboundBitsPerSecond = 5,
    XboxLiveQualityOfServiceMetric_AverageInboundBitsPerSecond = 6,
    XboxLiveQualityOfServiceMetric_MinInboundBitsPerSecond = 7,
    XboxLiveQualityOfServiceMetric_MaxInboundBitsPerSecond = 8,
};
enum __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveSocketKind
{
    XboxLiveSocketKind_None = 0,
    XboxLiveSocketKind_Datagram = 1,
    XboxLiveSocketKind_Stream = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_XboxLive_IXboxLiveDeviceAddress[] = L"Windows.Networking.XboxLive.IXboxLiveDeviceAddress";
typedef struct __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_SnapshotChanged )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SnapshotChanged )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *GetSnapshotAsBase64 )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetSnapshotAsBuffer )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetSnapshotAsBytes )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * This,
                  UINT32 __bufferSize,
                                          __RPC__out_ecount_full(__bufferSize) BYTE * buffer,
                   __RPC__out UINT32 * bytesWritten
        );
    HRESULT ( STDMETHODCALLTYPE *Compare )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * otherDeviceAddress,
                           __RPC__out INT32 * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsValid )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsLocal )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NetworkAccessKind )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveNetworkAccessKind * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddressVtbl;
interface __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddressVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_SnapshotChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_SnapshotChanged(This,token) )
    ( (This)->lpVtbl->GetSnapshotAsBase64(This,value) )
    ( (This)->lpVtbl->GetSnapshotAsBuffer(This,value) )
    ( (This)->lpVtbl->GetSnapshotAsBytes(This,__bufferSize,buffer,bytesWritten) )
    ( (This)->lpVtbl->Compare(This,otherDeviceAddress,result) )
    ( (This)->lpVtbl->get_IsValid(This,value) )
    ( (This)->lpVtbl->get_IsLocal(This,value) )
    ( (This)->lpVtbl->get_NetworkAccessKind(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_XboxLive_IXboxLiveDeviceAddressStatics[] = L"Windows.Networking.XboxLive.IXboxLiveDeviceAddressStatics";
typedef struct __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddressStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddressStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddressStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddressStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddressStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddressStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddressStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromSnapshotBase64 )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddressStatics * This,
                  __RPC__in HSTRING base64,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromSnapshotBuffer )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddressStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromSnapshotBytes )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddressStatics * This,
                  UINT32 __bufferSize,
                                         __RPC__in_ecount_full(__bufferSize) BYTE * buffer,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetLocal )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddressStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxSnapshotBytesSize )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddressStatics * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddressStaticsVtbl;
interface __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddressStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddressStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromSnapshotBase64(This,base64,value) )
    ( (This)->lpVtbl->CreateFromSnapshotBuffer(This,buffer,value) )
    ( (This)->lpVtbl->CreateFromSnapshotBytes(This,__bufferSize,buffer,value) )
    ( (This)->lpVtbl->GetLocal(This,value) )
    ( (This)->lpVtbl->get_MaxSnapshotBytesSize(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddressStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_XboxLive_IXboxLiveEndpointPair[] = L"Windows.Networking.XboxLive.IXboxLiveEndpointPair";
typedef struct __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPair * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPair * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPair * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPair * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPair * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPair * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_StateChanged )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPair * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairStateChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StateChanged )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPair * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteAsync )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPair * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    HRESULT ( STDMETHODCALLTYPE *GetRemoteSocketAddressBytes )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPair * This,
                  UINT32 __socketAddressSize,
                                                 __RPC__out_ecount_full(__socketAddressSize) BYTE * socketAddress
        );
    HRESULT ( STDMETHODCALLTYPE *GetLocalSocketAddressBytes )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPair * This,
                  UINT32 __socketAddressSize,
                                                 __RPC__out_ecount_full(__socketAddressSize) BYTE * socketAddress
        );
                   HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPair * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveEndpointPairState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Template )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPair * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplate * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemoteDeviceAddress )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPair * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemoteHostName )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPair * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemotePort )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPair * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocalHostName )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPair * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocalPort )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPair * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairVtbl;
interface __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPair
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_StateChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_StateChanged(This,token) )
    ( (This)->lpVtbl->DeleteAsync(This,action) )
    ( (This)->lpVtbl->GetRemoteSocketAddressBytes(This,__socketAddressSize,socketAddress) )
    ( (This)->lpVtbl->GetLocalSocketAddressBytes(This,__socketAddressSize,socketAddress) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->get_Template(This,value) )
    ( (This)->lpVtbl->get_RemoteDeviceAddress(This,value) )
    ( (This)->lpVtbl->get_RemoteHostName(This,value) )
    ( (This)->lpVtbl->get_RemotePort(This,value) )
    ( (This)->lpVtbl->get_LocalHostName(This,value) )
    ( (This)->lpVtbl->get_LocalPort(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPair;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_XboxLive_IXboxLiveEndpointPairCreationResult[] = L"Windows.Networking.XboxLive.IXboxLiveEndpointPairCreationResult";
typedef struct __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairCreationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairCreationResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairCreationResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairCreationResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairCreationResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairCreationResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairCreationResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceAddress )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairCreationResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairCreationResult * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveEndpointPairCreationStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsExistingPathEvaluation )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairCreationResult * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EndpointPair )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairCreationResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPair * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairCreationResultVtbl;
interface __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairCreationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairCreationResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceAddress(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_IsExistingPathEvaluation(This,value) )
    ( (This)->lpVtbl->get_EndpointPair(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairCreationResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_XboxLive_IXboxLiveEndpointPairStateChangedEventArgs[] = L"Windows.Networking.XboxLive.IXboxLiveEndpointPairStateChangedEventArgs";
typedef struct __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairStateChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairStateChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairStateChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairStateChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairStateChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairStateChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OldState )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairStateChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveEndpointPairState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NewState )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairStateChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveEndpointPairState * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairStateChangedEventArgsVtbl;
interface __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairStateChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairStateChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OldState(This,value) )
    ( (This)->lpVtbl->get_NewState(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairStateChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_XboxLive_IXboxLiveEndpointPairStatics[] = L"Windows.Networking.XboxLive.IXboxLiveEndpointPairStatics";
typedef struct __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FindEndpointPairBySocketAddressBytes )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairStatics * This,
                  UINT32 __localSocketAddressSize,
                                                     __RPC__in_ecount_full(__localSocketAddressSize) BYTE * localSocketAddress,
                  UINT32 __remoteSocketAddressSize,
                                                      __RPC__in_ecount_full(__remoteSocketAddressSize) BYTE * remoteSocketAddress,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPair * * endpointPair
        );
    HRESULT ( STDMETHODCALLTYPE *FindEndpointPairByHostNamesAndPorts )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * localHostName,
                  __RPC__in HSTRING localPort,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * remoteHostName,
                  __RPC__in HSTRING remotePort,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPair * * endpointPair
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairStaticsVtbl;
interface __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FindEndpointPairBySocketAddressBytes(This,__localSocketAddressSize,localSocketAddress,__remoteSocketAddressSize,remoteSocketAddress,endpointPair) )
    ( (This)->lpVtbl->FindEndpointPairByHostNamesAndPorts(This,localHostName,localPort,remoteHostName,remotePort,endpointPair) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_XboxLive_IXboxLiveEndpointPairTemplate[] = L"Windows.Networking.XboxLive.IXboxLiveEndpointPairTemplate";
typedef struct __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplate * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplate * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplate * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplate * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplate * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplate * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_InboundEndpointPairCreated )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplate * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate_Windows__CNetworking__CXboxLive__CXboxLiveInboundEndpointPairCreatedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_InboundEndpointPairCreated )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplate * This,
                  EventRegistrationToken token
        );
                                      HRESULT ( STDMETHODCALLTYPE *CreateEndpointPairDefaultAsync )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplate * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * deviceAddress,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResult * * operation
        );
                                      HRESULT ( STDMETHODCALLTYPE *CreateEndpointPairWithBehaviorsAsync )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplate * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * deviceAddress,
                  __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveEndpointPairCreationBehaviors behaviors,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResult * * operation
        );
                                      HRESULT ( STDMETHODCALLTYPE *CreateEndpointPairForPortsDefaultAsync )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplate * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * deviceAddress,
                  __RPC__in HSTRING initiatorPort,
                  __RPC__in HSTRING acceptorPort,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResult * * operation
        );
                                      HRESULT ( STDMETHODCALLTYPE *CreateEndpointPairForPortsWithBehaviorsAsync )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplate * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * deviceAddress,
                  __RPC__in HSTRING initiatorPort,
                  __RPC__in HSTRING acceptorPort,
                  __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveEndpointPairCreationBehaviors behaviors,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairCreationResult * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplate * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SocketKind )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplate * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveSocketKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InitiatorBoundPortRangeLower )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplate * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InitiatorBoundPortRangeUpper )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplate * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AcceptorBoundPortRangeLower )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplate * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AcceptorBoundPortRangeUpper )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplate * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EndpointPairs )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplate * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPair * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplateVtbl;
interface __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplate
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplateVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_InboundEndpointPairCreated(This,handler,token) )
    ( (This)->lpVtbl->remove_InboundEndpointPairCreated(This,token) )
    ( (This)->lpVtbl->CreateEndpointPairDefaultAsync(This,deviceAddress,operation) )
    ( (This)->lpVtbl->CreateEndpointPairWithBehaviorsAsync(This,deviceAddress,behaviors,operation) )
    ( (This)->lpVtbl->CreateEndpointPairForPortsDefaultAsync(This,deviceAddress,initiatorPort,acceptorPort,operation) )
    ( (This)->lpVtbl->CreateEndpointPairForPortsWithBehaviorsAsync(This,deviceAddress,initiatorPort,acceptorPort,behaviors,operation) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_SocketKind(This,value) )
    ( (This)->lpVtbl->get_InitiatorBoundPortRangeLower(This,value) )
    ( (This)->lpVtbl->get_InitiatorBoundPortRangeUpper(This,value) )
    ( (This)->lpVtbl->get_AcceptorBoundPortRangeLower(This,value) )
    ( (This)->lpVtbl->get_AcceptorBoundPortRangeUpper(This,value) )
    ( (This)->lpVtbl->get_EndpointPairs(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplate;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_XboxLive_IXboxLiveEndpointPairTemplateStatics[] = L"Windows.Networking.XboxLive.IXboxLiveEndpointPairTemplateStatics";
typedef struct __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplateStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplateStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplateStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplateStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplateStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplateStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplateStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetTemplateByName )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplateStatics * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplate * * namedTemplate
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Templates )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplateStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveEndpointPairTemplate * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplateStaticsVtbl;
interface __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplateStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplateStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetTemplateByName(This,name,namedTemplate) )
    ( (This)->lpVtbl->get_Templates(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPairTemplateStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_XboxLive_IXboxLiveInboundEndpointPairCreatedEventArgs[] = L"Windows.Networking.XboxLive.IXboxLiveInboundEndpointPairCreatedEventArgs";
typedef struct __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveInboundEndpointPairCreatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveInboundEndpointPairCreatedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveInboundEndpointPairCreatedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveInboundEndpointPairCreatedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveInboundEndpointPairCreatedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveInboundEndpointPairCreatedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveInboundEndpointPairCreatedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EndpointPair )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveInboundEndpointPairCreatedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveEndpointPair * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveInboundEndpointPairCreatedEventArgsVtbl;
interface __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveInboundEndpointPairCreatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveInboundEndpointPairCreatedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EndpointPair(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveInboundEndpointPairCreatedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurement[] = L"Windows.Networking.XboxLive.IXboxLiveQualityOfServiceMeasurement";
typedef struct __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurement * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurement * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurement * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurement * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurement * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurement * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *MeasureAsync )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurement * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    HRESULT ( STDMETHODCALLTYPE *GetMetricResultsForDevice )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurement * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * deviceAddress,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetMetricResultsForMetric )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurement * This,
                  __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveQualityOfServiceMetric metric,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetMetricResult )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurement * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * deviceAddress,
                  __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveQualityOfServiceMetric metric,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMetricResult * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPrivatePayloadResult )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurement * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * deviceAddress,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServicePrivatePayloadResult * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Metrics )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurement * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetric * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceAddresses )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurement * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CXboxLive__CXboxLiveDeviceAddress * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShouldRequestPrivatePayloads )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurement * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ShouldRequestPrivatePayloads )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurement * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TimeoutInMilliseconds )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurement * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TimeoutInMilliseconds )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurement * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NumberOfProbesToAttempt )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurement * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NumberOfProbesToAttempt )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurement * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NumberOfResultsPending )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurement * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MetricResults )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurement * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServiceMetricResult * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PrivatePayloadResults )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurement * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CXboxLive__CXboxLiveQualityOfServicePrivatePayloadResult * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurementVtbl;
interface __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurement
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurementVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->MeasureAsync(This,action) )
    ( (This)->lpVtbl->GetMetricResultsForDevice(This,deviceAddress,value) )
    ( (This)->lpVtbl->GetMetricResultsForMetric(This,metric,value) )
    ( (This)->lpVtbl->GetMetricResult(This,deviceAddress,metric,value) )
    ( (This)->lpVtbl->GetPrivatePayloadResult(This,deviceAddress,value) )
    ( (This)->lpVtbl->get_Metrics(This,value) )
    ( (This)->lpVtbl->get_DeviceAddresses(This,value) )
    ( (This)->lpVtbl->get_ShouldRequestPrivatePayloads(This,value) )
    ( (This)->lpVtbl->put_ShouldRequestPrivatePayloads(This,value) )
    ( (This)->lpVtbl->get_TimeoutInMilliseconds(This,value) )
    ( (This)->lpVtbl->put_TimeoutInMilliseconds(This,value) )
    ( (This)->lpVtbl->get_NumberOfProbesToAttempt(This,value) )
    ( (This)->lpVtbl->put_NumberOfProbesToAttempt(This,value) )
    ( (This)->lpVtbl->get_NumberOfResultsPending(This,value) )
    ( (This)->lpVtbl->get_MetricResults(This,value) )
    ( (This)->lpVtbl->get_PrivatePayloadResults(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurement;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurementStatics[] = L"Windows.Networking.XboxLive.IXboxLiveQualityOfServiceMeasurementStatics";
typedef struct __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurementStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurementStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurementStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurementStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurementStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurementStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurementStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *PublishPrivatePayloadBytes )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurementStatics * This,
                  UINT32 __payloadSize,
                                          __RPC__in_ecount_full(__payloadSize) BYTE * payload
        );
    HRESULT ( STDMETHODCALLTYPE *ClearPrivatePayload )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurementStatics * This
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxSimultaneousProbeConnections )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurementStatics * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxSimultaneousProbeConnections )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurementStatics * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSystemOutboundBandwidthConstrained )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurementStatics * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsSystemOutboundBandwidthConstrained )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurementStatics * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSystemInboundBandwidthConstrained )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurementStatics * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsSystemInboundBandwidthConstrained )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurementStatics * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PublishedPrivatePayload )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurementStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PublishedPrivatePayload )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurementStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxPrivatePayloadSize )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurementStatics * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurementStaticsVtbl;
interface __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurementStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurementStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->PublishPrivatePayloadBytes(This,__payloadSize,payload) )
    ( (This)->lpVtbl->ClearPrivatePayload(This) )
    ( (This)->lpVtbl->get_MaxSimultaneousProbeConnections(This,value) )
    ( (This)->lpVtbl->put_MaxSimultaneousProbeConnections(This,value) )
    ( (This)->lpVtbl->get_IsSystemOutboundBandwidthConstrained(This,value) )
    ( (This)->lpVtbl->put_IsSystemOutboundBandwidthConstrained(This,value) )
    ( (This)->lpVtbl->get_IsSystemInboundBandwidthConstrained(This,value) )
    ( (This)->lpVtbl->put_IsSystemInboundBandwidthConstrained(This,value) )
    ( (This)->lpVtbl->get_PublishedPrivatePayload(This,value) )
    ( (This)->lpVtbl->put_PublishedPrivatePayload(This,value) )
    ( (This)->lpVtbl->get_MaxPrivatePayloadSize(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMeasurementStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMetricResult[] = L"Windows.Networking.XboxLive.IXboxLiveQualityOfServiceMetricResult";
typedef struct __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMetricResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMetricResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMetricResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMetricResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMetricResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMetricResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMetricResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMetricResult * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveQualityOfServiceMeasurementStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceAddress )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMetricResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Metric )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMetricResult * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveQualityOfServiceMetric * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMetricResult * This,
                           __RPC__out UINT64 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMetricResultVtbl;
interface __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMetricResult
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMetricResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_DeviceAddress(This,value) )
    ( (This)->lpVtbl->get_Metric(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServiceMetricResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_XboxLive_IXboxLiveQualityOfServicePrivatePayloadResult[] = L"Windows.Networking.XboxLive.IXboxLiveQualityOfServicePrivatePayloadResult";
typedef struct __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServicePrivatePayloadResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServicePrivatePayloadResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServicePrivatePayloadResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServicePrivatePayloadResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServicePrivatePayloadResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServicePrivatePayloadResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServicePrivatePayloadResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServicePrivatePayloadResult * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CXboxLive_CXboxLiveQualityOfServiceMeasurementStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceAddress )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServicePrivatePayloadResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveDeviceAddress * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServicePrivatePayloadResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServicePrivatePayloadResultVtbl;
interface __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServicePrivatePayloadResult
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServicePrivatePayloadResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_DeviceAddress(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CXboxLive_CIXboxLiveQualityOfServicePrivatePayloadResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_XboxLive_XboxLiveDeviceAddress[] = L"Windows.Networking.XboxLive.XboxLiveDeviceAddress";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_XboxLive_XboxLiveEndpointPair[] = L"Windows.Networking.XboxLive.XboxLiveEndpointPair";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_XboxLive_XboxLiveEndpointPairCreationResult[] = L"Windows.Networking.XboxLive.XboxLiveEndpointPairCreationResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_XboxLive_XboxLiveEndpointPairStateChangedEventArgs[] = L"Windows.Networking.XboxLive.XboxLiveEndpointPairStateChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_XboxLive_XboxLiveEndpointPairTemplate[] = L"Windows.Networking.XboxLive.XboxLiveEndpointPairTemplate";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_XboxLive_XboxLiveInboundEndpointPairCreatedEventArgs[] = L"Windows.Networking.XboxLive.XboxLiveInboundEndpointPairCreatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_XboxLive_XboxLiveQualityOfServiceMeasurement[] = L"Windows.Networking.XboxLive.XboxLiveQualityOfServiceMeasurement";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_XboxLive_XboxLiveQualityOfServiceMetricResult[] = L"Windows.Networking.XboxLive.XboxLiveQualityOfServiceMetricResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_XboxLive_XboxLiveQualityOfServicePrivatePayloadResult[] = L"Windows.Networking.XboxLive.XboxLiveQualityOfServicePrivatePayloadResult";
       
       
#pragma clang diagnostic pop
