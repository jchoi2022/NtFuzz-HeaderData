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
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext2 __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext2;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2 __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2 __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3 __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4 __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile5 __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile5;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2 __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter3 __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter3;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2 __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2 __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails2 __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails2;
typedef interface __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage;
typedef struct __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This, __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsageVtbl;
interface __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsageVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage;
typedef struct __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsageVtbl;
interface __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsageVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile;
typedef struct __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl;
interface __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile;
typedef struct __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl;
interface __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval;
typedef struct __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityIntervalVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This, __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityIntervalVtbl;
interface __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityIntervalVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval;
typedef struct __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityIntervalVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityIntervalVtbl;
interface __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityIntervalVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier;
typedef struct __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifierVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This, __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifierVtbl;
interface __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifierVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier;
typedef struct __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifierVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifierVtbl;
interface __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifierVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage;
typedef struct __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This, __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsageVtbl;
interface __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsageVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage;
typedef struct __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsageVtbl;
interface __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsageVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage;
typedef struct __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This, __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsageVtbl;
interface __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsageVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage;
typedef struct __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsageVtbl;
interface __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsageVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage;
typedef struct __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This,
                       __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsageVtbl;
interface __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsageVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile;
typedef struct __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                       __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl;
interface __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval;
typedef struct __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityIntervalVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This,
                       __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityIntervalVtbl;
interface __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityIntervalVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier;
typedef struct __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifierVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This,
                       __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifierVtbl;
interface __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifierVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage;
typedef struct __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This,
                       __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsageVtbl;
interface __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsageVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage;
typedef struct __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This,
                       __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsageVtbl;
interface __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsageVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsageVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsageVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This, __RPC__out __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsageVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsageVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, __RPC__out __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityIntervalVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityIntervalVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityIntervalVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityIntervalVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This, __RPC__out __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityIntervalVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityIntervalVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsageVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsageVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This, __RPC__out __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsageVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsageVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsageVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsageVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This, __RPC__out __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsageVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsageVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile;
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile;
typedef struct __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl;
interface __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CNetworking_CConnectivity_CConnectionProfileDeleteStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfileDeleteStatus __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfileDeleteStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfileDeleteStatus;
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfileDeleteStatus __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfileDeleteStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfileDeleteStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfileDeleteStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfileDeleteStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfileDeleteStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfileDeleteStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfileDeleteStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfileDeleteStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfileDeleteStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfileDeleteStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfileDeleteStatus __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfileDeleteStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfileDeleteStatus;
typedef struct __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfileDeleteStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfileDeleteStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfileDeleteStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfileDeleteStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfileDeleteStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfileDeleteStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfileDeleteStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfileDeleteStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfileDeleteStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfileDeleteStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfileDeleteStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfileDeleteStatus * This, __RPC__out enum __x_ABI_CWindows_CNetworking_CConnectivity_CConnectionProfileDeleteStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfileDeleteStatusVtbl;
interface __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfileDeleteStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfileDeleteStatusVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession;
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSessionVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSessionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession;
typedef struct __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession * This, __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSessionVtbl;
interface __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSessionVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration;
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfigurationVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfigurationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration;
typedef struct __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration * This, __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfigurationVtbl;
interface __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfigurationVtbl *lpVtbl;
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
typedef interface __FIReference_1_GUID __FIReference_1_GUID;
EXTERN_C const IID IID___FIReference_1_GUID;
typedef struct __FIReference_1_GUIDVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_GUID * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_GUID * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_GUID * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_GUID * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_GUID * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_GUID * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_GUID * This, __RPC__out GUID *value);
    END_INTERFACE
} __FIReference_1_GUIDVtbl;
interface __FIReference_1_GUID
{
    CONST_VTBL struct __FIReference_1_GUIDVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIReference_1_byte __FIReference_1_byte;
EXTERN_C const IID IID___FIReference_1_byte;
typedef struct __FIReference_1_byteVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_byte * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_byte * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_byte * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_byte * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_byte * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_byte * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_byte * This, __RPC__out byte *value);
    END_INTERFACE
} __FIReference_1_byteVtbl;
interface __FIReference_1_byte
{
    CONST_VTBL struct __FIReference_1_byteVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIReference_1_boolean __FIReference_1_boolean;
EXTERN_C const IID IID___FIReference_1_boolean;
typedef struct __FIReference_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_boolean * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_boolean * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_boolean * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_boolean * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_boolean * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_boolean * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_boolean * This, __RPC__out boolean *value);
    END_INTERFACE
} __FIReference_1_booleanVtbl;
interface __FIReference_1_boolean
{
    CONST_VTBL struct __FIReference_1_booleanVtbl *lpVtbl;
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
typedef interface __FIIterator_1_byte __FIIterator_1_byte;
EXTERN_C const IID IID___FIIterator_1_byte;
typedef struct __FIIterator_1_byteVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_byte * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_byte * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_byte * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_byte * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_byte * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_byte * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_byte * This, __RPC__out byte *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_byte * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_byte * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_byte * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) byte *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_byteVtbl;
interface __FIIterator_1_byte
{
    CONST_VTBL struct __FIIterator_1_byteVtbl *lpVtbl;
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
typedef interface __FIIterable_1_byte __FIIterable_1_byte;
EXTERN_C const IID IID___FIIterable_1_byte;
typedef struct __FIIterable_1_byteVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_byte * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_byte * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_byte * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_byte * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_byte * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_byte * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_byte * This, __RPC__deref_out_opt __FIIterator_1_byte **first);
    END_INTERFACE
} __FIIterable_1_byteVtbl;
interface __FIIterable_1_byte
{
    CONST_VTBL struct __FIIterable_1_byteVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_byte __FIVectorView_1_byte;
EXTERN_C const IID IID___FIVectorView_1_byte;
typedef struct __FIVectorView_1_byteVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_byte * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_byte * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_byte * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_byte * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_byte * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_byte * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_byte * This,
                                                    unsigned int index,
                                                             __RPC__out byte *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_byte * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_byte * This,
                       byte item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_byte * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) byte *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_byteVtbl;
interface __FIVectorView_1_byte
{
    CONST_VTBL struct __FIVectorView_1_byteVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CNetworking_CIHostName __x_ABI_CWindows_CNetworking_CIHostName;
typedef interface __FIIterator_1_Windows__CNetworking__CHostName __FIIterator_1_Windows__CNetworking__CHostName;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CHostName;
typedef struct __FIIterator_1_Windows__CNetworking__CHostNameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This, __RPC__out __x_ABI_CWindows_CNetworking_CIHostName * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CIHostName * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CHostNameVtbl;
interface __FIIterator_1_Windows__CNetworking__CHostName
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CHostNameVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CHostName __FIIterable_1_Windows__CNetworking__CHostName;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CHostName;
typedef struct __FIIterable_1_Windows__CNetworking__CHostNameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CHostName **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CHostNameVtbl;
interface __FIIterable_1_Windows__CNetworking__CHostName
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CHostNameVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CNetworking__CHostName __FIVectorView_1_Windows__CNetworking__CHostName;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CHostName;
typedef struct __FIVectorView_1_Windows__CNetworking__CHostNameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CIHostName * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                       __x_ABI_CWindows_CNetworking_CIHostName * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CIHostName * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CHostNameVtbl;
interface __FIVectorView_1_Windows__CNetworking__CHostName
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CHostNameVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CNetworking_CIEndpointPair __x_ABI_CWindows_CNetworking_CIEndpointPair;
typedef interface __FIIterator_1_Windows__CNetworking__CEndpointPair __FIIterator_1_Windows__CNetworking__CEndpointPair;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CEndpointPair;
typedef struct __FIIterator_1_Windows__CNetworking__CEndpointPairVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This, __RPC__out __x_ABI_CWindows_CNetworking_CIEndpointPair * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CIEndpointPair * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CEndpointPairVtbl;
interface __FIIterator_1_Windows__CNetworking__CEndpointPair
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CEndpointPairVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CEndpointPair __FIIterable_1_Windows__CNetworking__CEndpointPair;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CEndpointPair;
typedef struct __FIIterable_1_Windows__CNetworking__CEndpointPairVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CEndpointPair **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CEndpointPairVtbl;
interface __FIIterable_1_Windows__CNetworking__CEndpointPair
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CEndpointPairVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CNetworking__CEndpointPair __FIVectorView_1_Windows__CNetworking__CEndpointPair;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CEndpointPair;
typedef struct __FIVectorView_1_Windows__CNetworking__CEndpointPairVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CIEndpointPair * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
                       __x_ABI_CWindows_CNetworking_CIEndpointPair * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CIEndpointPair * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CEndpointPairVtbl;
interface __FIVectorView_1_Windows__CNetworking__CEndpointPair
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CEndpointPairVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __FIIterator_1_Windows__CFoundation__CUri __FIIterator_1_Windows__CFoundation__CUri;
EXTERN_C const IID IID___FIIterator_1_Windows__CFoundation__CUri;
typedef struct __FIIterator_1_Windows__CFoundation__CUriVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CFoundation__CUri * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, __RPC__out __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CFoundation__CUriVtbl;
interface __FIIterator_1_Windows__CFoundation__CUri
{
    CONST_VTBL struct __FIIterator_1_Windows__CFoundation__CUriVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CFoundation__CUri __FIIterable_1_Windows__CFoundation__CUri;
EXTERN_C const IID IID___FIIterable_1_Windows__CFoundation__CUri;
typedef struct __FIIterable_1_Windows__CFoundation__CUriVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CFoundation__CUri * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This, __RPC__deref_out_opt __FIIterator_1_Windows__CFoundation__CUri **first);
    END_INTERFACE
} __FIIterable_1_Windows__CFoundation__CUriVtbl;
interface __FIIterable_1_Windows__CFoundation__CUri
{
    CONST_VTBL struct __FIIterable_1_Windows__CFoundation__CUriVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CFoundation__CUri __FIVectorView_1_Windows__CFoundation__CUri;
EXTERN_C const IID IID___FIVectorView_1_Windows__CFoundation__CUri;
typedef struct __FIVectorView_1_Windows__CFoundation__CUriVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                       __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CFoundation__CUriVtbl;
interface __FIVectorView_1_Windows__CFoundation__CUri
{
    CONST_VTBL struct __FIVectorView_1_Windows__CFoundation__CUriVtbl *lpVtbl;
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
typedef interface __FIIterator_1_GUID __FIIterator_1_GUID;
EXTERN_C const IID IID___FIIterator_1_GUID;
typedef struct __FIIterator_1_GUIDVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_GUID * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_GUID * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_GUID * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_GUID * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_GUID * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_GUID * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_GUID * This, __RPC__out GUID *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_GUID * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_GUID * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_GUID * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) GUID *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_GUIDVtbl;
interface __FIIterator_1_GUID
{
    CONST_VTBL struct __FIIterator_1_GUIDVtbl *lpVtbl;
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
typedef interface __FIIterable_1_GUID __FIIterable_1_GUID;
EXTERN_C const IID IID___FIIterable_1_GUID;
typedef struct __FIIterable_1_GUIDVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_GUID * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_GUID * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_GUID * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_GUID * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_GUID * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_GUID * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_GUID * This, __RPC__deref_out_opt __FIIterator_1_GUID **first);
    END_INTERFACE
} __FIIterable_1_GUIDVtbl;
interface __FIIterable_1_GUID
{
    CONST_VTBL struct __FIIterable_1_GUIDVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_GUID __FIVectorView_1_GUID;
EXTERN_C const IID IID___FIVectorView_1_GUID;
typedef struct __FIVectorView_1_GUIDVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_GUID * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_GUID * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_GUID * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_GUID * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_GUID * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_GUID * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_GUID * This,
                                                    unsigned int index,
                                                             __RPC__out GUID *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_GUID * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_GUID * This,
                       GUID item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_GUID * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) GUID *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_GUIDVtbl;
interface __FIVectorView_1_GUID
{
    CONST_VTBL struct __FIVectorView_1_GUIDVtbl *lpVtbl;
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
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef enum __x_ABI_CWindows_CNetworking_CDomainNameType __x_ABI_CWindows_CNetworking_CDomainNameType;
typedef enum __x_ABI_CWindows_CNetworking_CHostNameSortOptions __x_ABI_CWindows_CNetworking_CHostNameSortOptions;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;
typedef enum __x_ABI_CWindows_CNetworking_CConnectivity_CCellularApnAuthenticationType __x_ABI_CWindows_CNetworking_CConnectivity_CCellularApnAuthenticationType;
typedef enum __x_ABI_CWindows_CNetworking_CConnectivity_CConnectionProfileDeleteStatus __x_ABI_CWindows_CNetworking_CConnectivity_CConnectionProfileDeleteStatus;
typedef enum __x_ABI_CWindows_CNetworking_CConnectivity_CDataUsageGranularity __x_ABI_CWindows_CNetworking_CConnectivity_CDataUsageGranularity;
typedef enum __x_ABI_CWindows_CNetworking_CConnectivity_CDomainConnectivityLevel __x_ABI_CWindows_CNetworking_CConnectivity_CDomainConnectivityLevel;
typedef enum __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkAuthenticationType __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkAuthenticationType;
typedef enum __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkConnectivityLevel __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkConnectivityLevel;
typedef enum __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkCostType __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkCostType;
typedef enum __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkEncryptionType __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkEncryptionType;
typedef enum __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkTypes __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkTypes;
typedef enum __x_ABI_CWindows_CNetworking_CConnectivity_CRoamingStates __x_ABI_CWindows_CNetworking_CConnectivity_CRoamingStates;
typedef enum __x_ABI_CWindows_CNetworking_CConnectivity_CTriStates __x_ABI_CWindows_CNetworking_CConnectivity_CTriStates;
typedef enum __x_ABI_CWindows_CNetworking_CConnectivity_CWwanDataClass __x_ABI_CWindows_CNetworking_CConnectivity_CWwanDataClass;
typedef enum __x_ABI_CWindows_CNetworking_CConnectivity_CWwanNetworkIPKind __x_ABI_CWindows_CNetworking_CConnectivity_CWwanNetworkIPKind;
typedef enum __x_ABI_CWindows_CNetworking_CConnectivity_CWwanNetworkRegistrationState __x_ABI_CWindows_CNetworking_CConnectivity_CWwanNetworkRegistrationState;
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkUsageStates __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkUsageStates;
enum __x_ABI_CWindows_CNetworking_CConnectivity_CCellularApnAuthenticationType
{
    CellularApnAuthenticationType_None = 0,
    CellularApnAuthenticationType_Pap = 1,
    CellularApnAuthenticationType_Chap = 2,
    CellularApnAuthenticationType_Mschapv2 = 3,
};
enum __x_ABI_CWindows_CNetworking_CConnectivity_CConnectionProfileDeleteStatus
{
    ConnectionProfileDeleteStatus_Success = 0,
    ConnectionProfileDeleteStatus_DeniedByUser = 1,
    ConnectionProfileDeleteStatus_DeniedBySystem = 2,
    ConnectionProfileDeleteStatus_UnknownError = 3,
};
enum __x_ABI_CWindows_CNetworking_CConnectivity_CDataUsageGranularity
{
    DataUsageGranularity_PerMinute = 0,
    DataUsageGranularity_PerHour = 1,
    DataUsageGranularity_PerDay = 2,
    DataUsageGranularity_Total = 3,
};
enum __x_ABI_CWindows_CNetworking_CConnectivity_CDomainConnectivityLevel
{
    DomainConnectivityLevel_None = 0,
    DomainConnectivityLevel_Unauthenticated = 1,
    DomainConnectivityLevel_Authenticated = 2,
};
enum __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkAuthenticationType
{
    NetworkAuthenticationType_None = 0,
    NetworkAuthenticationType_Unknown = 1,
    NetworkAuthenticationType_Open80211 = 2,
    NetworkAuthenticationType_SharedKey80211 = 3,
    NetworkAuthenticationType_Wpa = 4,
    NetworkAuthenticationType_WpaPsk = 5,
    NetworkAuthenticationType_WpaNone = 6,
    NetworkAuthenticationType_Rsna = 7,
    NetworkAuthenticationType_RsnaPsk = 8,
    NetworkAuthenticationType_Ihv = 9,
    NetworkAuthenticationType_Wpa3 = 10,
    NetworkAuthenticationType_Wpa3Sae = 11,
};
enum __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkConnectivityLevel
{
    NetworkConnectivityLevel_None = 0,
    NetworkConnectivityLevel_LocalAccess = 1,
    NetworkConnectivityLevel_ConstrainedInternetAccess = 2,
    NetworkConnectivityLevel_InternetAccess = 3,
};
enum __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkCostType
{
    NetworkCostType_Unknown = 0,
    NetworkCostType_Unrestricted = 1,
    NetworkCostType_Fixed = 2,
    NetworkCostType_Variable = 3,
};
enum __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkEncryptionType
{
    NetworkEncryptionType_None = 0,
    NetworkEncryptionType_Unknown = 1,
    NetworkEncryptionType_Wep = 2,
    NetworkEncryptionType_Wep40 = 3,
    NetworkEncryptionType_Wep104 = 4,
    NetworkEncryptionType_Tkip = 5,
    NetworkEncryptionType_Ccmp = 6,
    NetworkEncryptionType_WpaUseGroup = 7,
    NetworkEncryptionType_RsnUseGroup = 8,
    NetworkEncryptionType_Ihv = 9,
};
enum __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkTypes
{
    NetworkTypes_None = 0,
    NetworkTypes_Internet = 0x1,
    NetworkTypes_PrivateNetwork = 0x2,
};
enum __x_ABI_CWindows_CNetworking_CConnectivity_CRoamingStates
{
    RoamingStates_None = 0,
    RoamingStates_NotRoaming = 0x1,
    RoamingStates_Roaming = 0x2,
};
enum __x_ABI_CWindows_CNetworking_CConnectivity_CTriStates
{
    TriStates_DoNotCare = 0,
    TriStates_No = 1,
    TriStates_Yes = 2,
};
enum __x_ABI_CWindows_CNetworking_CConnectivity_CWwanDataClass
{
    WwanDataClass_None = 0,
    WwanDataClass_Gprs = 0x1,
    WwanDataClass_Edge = 0x2,
    WwanDataClass_Umts = 0x4,
    WwanDataClass_Hsdpa = 0x8,
    WwanDataClass_Hsupa = 0x10,
    WwanDataClass_LteAdvanced = 0x20,
    WwanDataClass_Cdma1xRtt = 0x10000,
    WwanDataClass_Cdma1xEvdo = 0x20000,
    WwanDataClass_Cdma1xEvdoRevA = 0x40000,
    WwanDataClass_Cdma1xEvdv = 0x80000,
    WwanDataClass_Cdma3xRtt = 0x100000,
    WwanDataClass_Cdma1xEvdoRevB = 0x200000,
    WwanDataClass_CdmaUmb = 0x400000,
    WwanDataClass_Custom = 0x80000000,
};
enum __x_ABI_CWindows_CNetworking_CConnectivity_CWwanNetworkIPKind
{
    WwanNetworkIPKind_None = 0,
    WwanNetworkIPKind_Ipv4 = 1,
    WwanNetworkIPKind_Ipv6 = 2,
    WwanNetworkIPKind_Ipv4v6 = 3,
    WwanNetworkIPKind_Ipv4v6v4Xlat = 4,
};
enum __x_ABI_CWindows_CNetworking_CConnectivity_CWwanNetworkRegistrationState
{
    WwanNetworkRegistrationState_None = 0,
    WwanNetworkRegistrationState_Deregistered = 1,
    WwanNetworkRegistrationState_Searching = 2,
    WwanNetworkRegistrationState_Home = 3,
    WwanNetworkRegistrationState_Roaming = 4,
    WwanNetworkRegistrationState_Partner = 5,
    WwanNetworkRegistrationState_Denied = 6,
};
struct __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkUsageStates
{
    __x_ABI_CWindows_CNetworking_CConnectivity_CTriStates Roaming;
    __x_ABI_CWindows_CNetworking_CConnectivity_CTriStates Shared;
};
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler * This,
                  __RPC__in_opt IInspectable * sender
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandlerVtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IAttributedNetworkUsage[] = L"Windows.Networking.Connectivity.IAttributedNetworkUsage";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BytesSent )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BytesReceived )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AttributionId )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AttributionName )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AttributionThumbnail )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsageVtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BytesSent(This,value) )
    ( (This)->lpVtbl->get_BytesReceived(This,value) )
    ( (This)->lpVtbl->get_AttributionId(This,value) )
    ( (This)->lpVtbl->get_AttributionName(This,value) )
    ( (This)->lpVtbl->get_AttributionThumbnail(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_ICellularApnContext[] = L"Windows.Networking.Connectivity.ICellularApnContext";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ProviderId )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ProviderId )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AccessPointName )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AccessPointName )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UserName )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_UserName )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Password )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Password )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCompressionEnabled )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsCompressionEnabled )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AuthenticationType )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CCellularApnAuthenticationType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AuthenticationType )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This,
                  __x_ABI_CWindows_CNetworking_CConnectivity_CCellularApnAuthenticationType value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContextVtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContextVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ProviderId(This,value) )
    ( (This)->lpVtbl->put_ProviderId(This,value) )
    ( (This)->lpVtbl->get_AccessPointName(This,value) )
    ( (This)->lpVtbl->put_AccessPointName(This,value) )
    ( (This)->lpVtbl->get_UserName(This,value) )
    ( (This)->lpVtbl->put_UserName(This,value) )
    ( (This)->lpVtbl->get_Password(This,value) )
    ( (This)->lpVtbl->put_Password(This,value) )
    ( (This)->lpVtbl->get_IsCompressionEnabled(This,value) )
    ( (This)->lpVtbl->put_IsCompressionEnabled(This,value) )
    ( (This)->lpVtbl->get_AuthenticationType(This,value) )
    ( (This)->lpVtbl->put_AuthenticationType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_ICellularApnContext2[] = L"Windows.Networking.Connectivity.ICellularApnContext2";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ProfileName )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ProfileName )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext2 * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext2Vtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ProfileName(This,value) )
    ( (This)->lpVtbl->put_ProfileName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectionCost[] = L"Windows.Networking.Connectivity.IConnectionCost";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCostVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NetworkCostType )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkCostType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Roaming )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OverDataLimit )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ApproachingDataLimit )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCostVtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCostVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NetworkCostType(This,value) )
    ( (This)->lpVtbl->get_Roaming(This,value) )
    ( (This)->lpVtbl->get_OverDataLimit(This,value) )
    ( (This)->lpVtbl->get_ApproachingDataLimit(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectionCost2[] = L"Windows.Networking.Connectivity.IConnectionCost2";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BackgroundDataUsageRestricted )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2Vtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BackgroundDataUsageRestricted(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectionProfile[] = L"Windows.Networking.Connectivity.IConnectionProfile";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ProfileName )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNetworkConnectivityLevel )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkConnectivityLevel * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNetworkNames )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetConnectionCost )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDataPlanStatus )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NetworkAdapter )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * * value
        );
    DEPRECATED("GetLocalUsage may be altered or unavailable for releases after Windows 8.1. Instead, use GetNetworkUsageAsync.")
                                HRESULT ( STDMETHODCALLTYPE *GetLocalUsage )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * This,
                  __x_ABI_CWindows_CFoundation_CDateTime StartTime,
                  __x_ABI_CWindows_CFoundation_CDateTime EndTime,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage * * value
        );
    DEPRECATED("GetLocalUsage may be altered or unavailable for releases after Windows 8.1. Instead, use GetNetworkUsageAsync.")
                                HRESULT ( STDMETHODCALLTYPE *GetLocalUsagePerRoamingStates )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * This,
                  __x_ABI_CWindows_CFoundation_CDateTime StartTime,
                  __x_ABI_CWindows_CFoundation_CDateTime EndTime,
                  __x_ABI_CWindows_CNetworking_CConnectivity_CRoamingStates States,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NetworkSecuritySettings )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileVtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ProfileName(This,value) )
    ( (This)->lpVtbl->GetNetworkConnectivityLevel(This,value) )
    ( (This)->lpVtbl->GetNetworkNames(This,value) )
    ( (This)->lpVtbl->GetConnectionCost(This,value) )
    ( (This)->lpVtbl->GetDataPlanStatus(This,value) )
    ( (This)->lpVtbl->get_NetworkAdapter(This,value) )
DEPRECATED("GetLocalUsage may be altered or unavailable for releases after Windows 8.1. Instead, use GetNetworkUsageAsync.")
    ( (This)->lpVtbl->GetLocalUsage(This,StartTime,EndTime,value) )
DEPRECATED("GetLocalUsage may be altered or unavailable for releases after Windows 8.1. Instead, use GetNetworkUsageAsync.")
    ( (This)->lpVtbl->GetLocalUsagePerRoamingStates(This,StartTime,EndTime,States,value) )
    ( (This)->lpVtbl->get_NetworkSecuritySettings(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectionProfile2[] = L"Windows.Networking.Connectivity.IConnectionProfile2";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsWwanConnectionProfile )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsWlanConnectionProfile )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WwanConnectionProfileDetails )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WlanConnectionProfileDetails )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServiceProviderGuid )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2 * This,
                           __RPC__deref_out_opt __FIReference_1_GUID * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetSignalBars )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2 * This,
                           __RPC__deref_out_opt __FIReference_1_byte * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDomainConnectivityLevel )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2 * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CDomainConnectivityLevel * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNetworkUsageAsync )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2 * This,
                  __x_ABI_CWindows_CFoundation_CDateTime startTime,
                  __x_ABI_CWindows_CFoundation_CDateTime endTime,
                  __x_ABI_CWindows_CNetworking_CConnectivity_CDataUsageGranularity granularity,
                  __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkUsageStates states,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetConnectivityIntervalsAsync )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2 * This,
                  __x_ABI_CWindows_CFoundation_CDateTime startTime,
                  __x_ABI_CWindows_CFoundation_CDateTime endTime,
                  __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkUsageStates states,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2Vtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsWwanConnectionProfile(This,value) )
    ( (This)->lpVtbl->get_IsWlanConnectionProfile(This,value) )
    ( (This)->lpVtbl->get_WwanConnectionProfileDetails(This,value) )
    ( (This)->lpVtbl->get_WlanConnectionProfileDetails(This,value) )
    ( (This)->lpVtbl->get_ServiceProviderGuid(This,value) )
    ( (This)->lpVtbl->GetSignalBars(This,value) )
    ( (This)->lpVtbl->GetDomainConnectivityLevel(This,value) )
    ( (This)->lpVtbl->GetNetworkUsageAsync(This,startTime,endTime,granularity,states,value) )
    ( (This)->lpVtbl->GetConnectivityIntervalsAsync(This,startTime,endTime,states,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectionProfile3[] = L"Windows.Networking.Connectivity.IConnectionProfile3";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAttributedNetworkUsageAsync )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3 * This,
                  __x_ABI_CWindows_CFoundation_CDateTime startTime,
                  __x_ABI_CWindows_CFoundation_CDateTime endTime,
                  __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkUsageStates states,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3Vtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAttributedNetworkUsageAsync(This,startTime,endTime,states,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectionProfile4[] = L"Windows.Networking.Connectivity.IConnectionProfile4";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetProviderNetworkUsageAsync )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4 * This,
                  __x_ABI_CWindows_CFoundation_CDateTime startTime,
                  __x_ABI_CWindows_CFoundation_CDateTime endTime,
                  __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkUsageStates states,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4Vtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetProviderNetworkUsageAsync(This,startTime,endTime,states,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectionProfile5[] = L"Windows.Networking.Connectivity.IConnectionProfile5";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CanDelete )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile5 * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryDeleteAsync )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile5 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfileDeleteStatus * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile5Vtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile5
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CanDelete(This,value) )
    ( (This)->lpVtbl->TryDeleteAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectionProfileFilter[] = L"Windows.Networking.Connectivity.IConnectionProfileFilter";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_IsConnected )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsConnected )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsWwanConnectionProfile )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsWwanConnectionProfile )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsWlanConnectionProfile )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsWlanConnectionProfile )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NetworkCostType )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter * This,
                  __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkCostType value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NetworkCostType )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkCostType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ServiceProviderGuid )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter * This,
                  __RPC__in_opt __FIReference_1_GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServiceProviderGuid )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter * This,
                           __RPC__deref_out_opt __FIReference_1_GUID * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilterVtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_IsConnected(This,value) )
    ( (This)->lpVtbl->get_IsConnected(This,value) )
    ( (This)->lpVtbl->put_IsWwanConnectionProfile(This,value) )
    ( (This)->lpVtbl->get_IsWwanConnectionProfile(This,value) )
    ( (This)->lpVtbl->put_IsWlanConnectionProfile(This,value) )
    ( (This)->lpVtbl->get_IsWlanConnectionProfile(This,value) )
    ( (This)->lpVtbl->put_NetworkCostType(This,value) )
    ( (This)->lpVtbl->get_NetworkCostType(This,value) )
    ( (This)->lpVtbl->put_ServiceProviderGuid(This,value) )
    ( (This)->lpVtbl->get_ServiceProviderGuid(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectionProfileFilter2[] = L"Windows.Networking.Connectivity.IConnectionProfileFilter2";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_IsRoaming )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2 * This,
                  __RPC__in_opt __FIReference_1_boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsRoaming )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2 * This,
                           __RPC__deref_out_opt __FIReference_1_boolean * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsOverDataLimit )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2 * This,
                  __RPC__in_opt __FIReference_1_boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsOverDataLimit )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2 * This,
                           __RPC__deref_out_opt __FIReference_1_boolean * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsBackgroundDataUsageRestricted )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2 * This,
                  __RPC__in_opt __FIReference_1_boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsBackgroundDataUsageRestricted )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2 * This,
                           __RPC__deref_out_opt __FIReference_1_boolean * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RawData )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2Vtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_IsRoaming(This,value) )
    ( (This)->lpVtbl->get_IsRoaming(This,value) )
    ( (This)->lpVtbl->put_IsOverDataLimit(This,value) )
    ( (This)->lpVtbl->get_IsOverDataLimit(This,value) )
    ( (This)->lpVtbl->put_IsBackgroundDataUsageRestricted(This,value) )
    ( (This)->lpVtbl->get_IsBackgroundDataUsageRestricted(This,value) )
    ( (This)->lpVtbl->get_RawData(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectionProfileFilter3[] = L"Windows.Networking.Connectivity.IConnectionProfileFilter3";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_PurposeGuid )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter3 * This,
                  __RPC__in_opt __FIReference_1_GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PurposeGuid )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter3 * This,
                           __RPC__deref_out_opt __FIReference_1_GUID * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter3Vtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter3
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_PurposeGuid(This,value) )
    ( (This)->lpVtbl->get_PurposeGuid(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectionSession[] = L"Windows.Networking.Connectivity.IConnectionSession";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ConnectionProfile )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSessionVtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSessionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ConnectionProfile(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectivityInterval[] = L"Windows.Networking.Connectivity.IConnectivityInterval";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityIntervalVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StartTime )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * startTime
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ConnectionDuration )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * duration
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityIntervalVtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityIntervalVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StartTime(This,startTime) )
    ( (This)->lpVtbl->get_ConnectionDuration(This,duration) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectivityManagerStatics[] = L"Windows.Networking.Connectivity.IConnectivityManagerStatics";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AcquireConnectionAsync )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * cellularApnContext,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *AddHttpRoutePolicy )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy * routePolicy
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveHttpRoutePolicy )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy * routePolicy
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStaticsVtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AcquireConnectionAsync(This,cellularApnContext,operation) )
    ( (This)->lpVtbl->AddHttpRoutePolicy(This,routePolicy) )
    ( (This)->lpVtbl->RemoveHttpRoutePolicy(This,routePolicy) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IDataPlanStatus[] = L"Windows.Networking.Connectivity.IDataPlanStatus";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DataPlanUsage )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DataLimitInMegabytes )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InboundBitsPerSecond )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus * This,
                           __RPC__deref_out_opt __FIReference_1_UINT64 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutboundBitsPerSecond )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus * This,
                           __RPC__deref_out_opt __FIReference_1_UINT64 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NextBillingCycle )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxTransferSizeInMegabytes )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatusVtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatusVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DataPlanUsage(This,value) )
    ( (This)->lpVtbl->get_DataLimitInMegabytes(This,value) )
    ( (This)->lpVtbl->get_InboundBitsPerSecond(This,value) )
    ( (This)->lpVtbl->get_OutboundBitsPerSecond(This,value) )
    ( (This)->lpVtbl->get_NextBillingCycle(This,value) )
    ( (This)->lpVtbl->get_MaxTransferSizeInMegabytes(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IDataPlanUsage[] = L"Windows.Networking.Connectivity.IDataPlanUsage";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MegabytesUsed )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastSyncTime )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsageVtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MegabytesUsed(This,value) )
    ( (This)->lpVtbl->get_LastSyncTime(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IDataUsage[] = L"Windows.Networking.Connectivity.IDataUsage";
typedef struct
DEPRECATED("IDataUsage may be altered or unavailable for releases after Windows 8.1. Instead, use INetworkUsage.")
__x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("IDataUsage may be altered or unavailable for releases after Windows 8.1. Instead, use INetworkUsage.")
                               HRESULT ( STDMETHODCALLTYPE *get_BytesSent )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage * This,
                           __RPC__out UINT64 * value
        );
    DEPRECATED("IDataUsage may be altered or unavailable for releases after Windows 8.1. Instead, use INetworkUsage.")
                               HRESULT ( STDMETHODCALLTYPE *get_BytesReceived )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage * This,
                           __RPC__out UINT64 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsageVtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("IDataUsage may be altered or unavailable for releases after Windows 8.1. Instead, use INetworkUsage.")
    ( (This)->lpVtbl->get_BytesSent(This,value) )
DEPRECATED("IDataUsage may be altered or unavailable for releases after Windows 8.1. Instead, use INetworkUsage.")
    ( (This)->lpVtbl->get_BytesReceived(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IIPInformation[] = L"Windows.Networking.Connectivity.IIPInformation";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NetworkAdapter )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PrefixLength )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation * This,
                           __RPC__deref_out_opt __FIReference_1_byte * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformationVtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NetworkAdapter(This,value) )
    ( (This)->lpVtbl->get_PrefixLength(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_ILanIdentifier[] = L"Windows.Networking.Connectivity.ILanIdentifier";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InfrastructureId )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PortId )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NetworkAdapterId )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier * This,
                           __RPC__out GUID * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierVtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InfrastructureId(This,value) )
    ( (This)->lpVtbl->get_PortId(This,value) )
    ( (This)->lpVtbl->get_NetworkAdapterId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_ILanIdentifierData[] = L"Windows.Networking.Connectivity.ILanIdentifierData";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierDataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData * This,
                           __RPC__deref_out_opt __FIVectorView_1_byte * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierDataVtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierDataVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Type(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_INetworkAdapter[] = L"Windows.Networking.Connectivity.INetworkAdapter";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OutboundMaxBitsPerSecond )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InboundMaxBitsPerSecond )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IanaInterfaceType )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NetworkItem )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NetworkAdapterId )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * This,
                           __RPC__out GUID * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetConnectedProfileAsync )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapterVtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OutboundMaxBitsPerSecond(This,value) )
    ( (This)->lpVtbl->get_InboundMaxBitsPerSecond(This,value) )
    ( (This)->lpVtbl->get_IanaInterfaceType(This,value) )
    ( (This)->lpVtbl->get_NetworkItem(This,value) )
    ( (This)->lpVtbl->get_NetworkAdapterId(This,value) )
    ( (This)->lpVtbl->GetConnectedProfileAsync(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_INetworkInformationStatics[] = L"Windows.Networking.Connectivity.INetworkInformationStatics";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetConnectionProfiles )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetInternetConnectionProfile )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetLanIdentifiers )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetHostNames )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CHostName * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetProxyConfigurationAsync )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetSortedEndpointPairs )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics * This,
                  __RPC__in_opt __FIIterable_1_Windows__CNetworking__CEndpointPair * destinationList,
                  __x_ABI_CWindows_CNetworking_CHostNameSortOptions sortOptions,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CEndpointPair * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_NetworkStatusChanged )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler * networkStatusHandler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_NetworkStatusChanged )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics * This,
                  EventRegistrationToken eventCookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStaticsVtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetConnectionProfiles(This,value) )
    ( (This)->lpVtbl->GetInternetConnectionProfile(This,value) )
    ( (This)->lpVtbl->GetLanIdentifiers(This,value) )
    ( (This)->lpVtbl->GetHostNames(This,value) )
    ( (This)->lpVtbl->GetProxyConfigurationAsync(This,uri,value) )
    ( (This)->lpVtbl->GetSortedEndpointPairs(This,destinationList,sortOptions,value) )
    ( (This)->lpVtbl->add_NetworkStatusChanged(This,networkStatusHandler,eventCookie) )
    ( (This)->lpVtbl->remove_NetworkStatusChanged(This,eventCookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_INetworkInformationStatics2[] = L"Windows.Networking.Connectivity.INetworkInformationStatics2";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FindConnectionProfilesAsync )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter * pProfileFilter,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2Vtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FindConnectionProfilesAsync(This,pProfileFilter,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_INetworkItem[] = L"Windows.Networking.Connectivity.INetworkItem";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NetworkId )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem * This,
                           __RPC__out GUID * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNetworkTypes )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkTypes * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItemVtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItemVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NetworkId(This,value) )
    ( (This)->lpVtbl->GetNetworkTypes(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_INetworkSecuritySettings[] = L"Windows.Networking.Connectivity.INetworkSecuritySettings";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NetworkAuthenticationType )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkAuthenticationType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NetworkEncryptionType )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkEncryptionType * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettingsVtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NetworkAuthenticationType(This,value) )
    ( (This)->lpVtbl->get_NetworkEncryptionType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_INetworkStateChangeEventDetails[] = L"Windows.Networking.Connectivity.INetworkStateChangeEventDetails";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HasNewInternetConnectionProfile )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasNewConnectionCost )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasNewNetworkConnectivityLevel )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasNewDomainConnectivityLevel )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasNewHostNameList )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasNewWwanRegistrationState )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetailsVtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HasNewInternetConnectionProfile(This,value) )
    ( (This)->lpVtbl->get_HasNewConnectionCost(This,value) )
    ( (This)->lpVtbl->get_HasNewNetworkConnectivityLevel(This,value) )
    ( (This)->lpVtbl->get_HasNewDomainConnectivityLevel(This,value) )
    ( (This)->lpVtbl->get_HasNewHostNameList(This,value) )
    ( (This)->lpVtbl->get_HasNewWwanRegistrationState(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_INetworkStateChangeEventDetails2[] = L"Windows.Networking.Connectivity.INetworkStateChangeEventDetails2";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HasNewTetheringOperationalState )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasNewTetheringClientCount )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2Vtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HasNewTetheringOperationalState(This,value) )
    ( (This)->lpVtbl->get_HasNewTetheringClientCount(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_INetworkUsage[] = L"Windows.Networking.Connectivity.INetworkUsage";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BytesSent )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BytesReceived )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ConnectionDuration )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * duration
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsageVtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BytesSent(This,value) )
    ( (This)->lpVtbl->get_BytesReceived(This,value) )
    ( (This)->lpVtbl->get_ConnectionDuration(This,duration) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IProviderNetworkUsage[] = L"Windows.Networking.Connectivity.IProviderNetworkUsage";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BytesSent )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BytesReceived )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProviderId )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsageVtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsageVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BytesSent(This,value) )
    ( (This)->lpVtbl->get_BytesReceived(This,value) )
    ( (This)->lpVtbl->get_ProviderId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IProxyConfiguration[] = L"Windows.Networking.Connectivity.IProxyConfiguration";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ProxyUris )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CFoundation__CUri * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanConnectDirectly )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfigurationVtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfigurationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ProxyUris(This,value) )
    ( (This)->lpVtbl->get_CanConnectDirectly(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IRoutePolicy[] = L"Windows.Networking.Connectivity.IRoutePolicy";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ConnectionProfile )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HostName )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HostNameType )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CDomainNameType * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyVtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ConnectionProfile(This,value) )
    ( (This)->lpVtbl->get_HostName(This,value) )
    ( (This)->lpVtbl->get_HostNameType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IRoutePolicyFactory[] = L"Windows.Networking.Connectivity.IRoutePolicyFactory";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateRoutePolicy )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * connectionProfile,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * hostName,
                  __x_ABI_CWindows_CNetworking_CDomainNameType type,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy * * routePolicy
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactoryVtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateRoutePolicy(This,connectionProfile,hostName,type,routePolicy) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IWlanConnectionProfileDetails[] = L"Windows.Networking.Connectivity.IWlanConnectionProfileDetails";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetConnectedSsid )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetailsVtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetConnectedSsid(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IWwanConnectionProfileDetails[] = L"Windows.Networking.Connectivity.IWwanConnectionProfileDetails";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HomeProviderId )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AccessPointName )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNetworkRegistrationState )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CWwanNetworkRegistrationState * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentDataClass )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CWwanDataClass * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetailsVtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HomeProviderId(This,value) )
    ( (This)->lpVtbl->get_AccessPointName(This,value) )
    ( (This)->lpVtbl->GetNetworkRegistrationState(This,value) )
    ( (This)->lpVtbl->GetCurrentDataClass(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IWwanConnectionProfileDetails2[] = L"Windows.Networking.Connectivity.IWwanConnectionProfileDetails2";
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IPKind )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails2 * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CWwanNetworkIPKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PurposeGuids )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails2 * This,
                           __RPC__deref_out_opt __FIVectorView_1_GUID * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails2Vtbl;
interface __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IPKind(This,value) )
    ( (This)->lpVtbl->get_PurposeGuids(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails2;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_AttributedNetworkUsage[] = L"Windows.Networking.Connectivity.AttributedNetworkUsage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_CellularApnContext[] = L"Windows.Networking.Connectivity.CellularApnContext";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_ConnectionCost[] = L"Windows.Networking.Connectivity.ConnectionCost";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_ConnectionProfile[] = L"Windows.Networking.Connectivity.ConnectionProfile";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_ConnectionProfileFilter[] = L"Windows.Networking.Connectivity.ConnectionProfileFilter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_ConnectionSession[] = L"Windows.Networking.Connectivity.ConnectionSession";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_ConnectivityInterval[] = L"Windows.Networking.Connectivity.ConnectivityInterval";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_ConnectivityManager[] = L"Windows.Networking.Connectivity.ConnectivityManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_DataPlanStatus[] = L"Windows.Networking.Connectivity.DataPlanStatus";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_DataPlanUsage[] = L"Windows.Networking.Connectivity.DataPlanUsage";
DEPRECATED("DataUsage may be altered or unavailable for releases after Windows 8.1. Instead, use NetworkUsage.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_DataUsage[] = L"Windows.Networking.Connectivity.DataUsage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_IPInformation[] = L"Windows.Networking.Connectivity.IPInformation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_LanIdentifier[] = L"Windows.Networking.Connectivity.LanIdentifier";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_LanIdentifierData[] = L"Windows.Networking.Connectivity.LanIdentifierData";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_NetworkAdapter[] = L"Windows.Networking.Connectivity.NetworkAdapter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_NetworkInformation[] = L"Windows.Networking.Connectivity.NetworkInformation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_NetworkItem[] = L"Windows.Networking.Connectivity.NetworkItem";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_NetworkSecuritySettings[] = L"Windows.Networking.Connectivity.NetworkSecuritySettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_NetworkStateChangeEventDetails[] = L"Windows.Networking.Connectivity.NetworkStateChangeEventDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_NetworkUsage[] = L"Windows.Networking.Connectivity.NetworkUsage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_ProviderNetworkUsage[] = L"Windows.Networking.Connectivity.ProviderNetworkUsage";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_ProxyConfiguration[] = L"Windows.Networking.Connectivity.ProxyConfiguration";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_RoutePolicy[] = L"Windows.Networking.Connectivity.RoutePolicy";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_WlanConnectionProfileDetails[] = L"Windows.Networking.Connectivity.WlanConnectionProfileDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_WwanConnectionProfileDetails[] = L"Windows.Networking.Connectivity.WwanConnectionProfileDetails";
       
       
#pragma clang diagnostic pop
