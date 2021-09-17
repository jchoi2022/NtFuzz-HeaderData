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
#include "Windows.Devices.Enumeration.h"
#include "Windows.Networking.h"
#include "Windows.Security.Credentials.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement;
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2 __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2;
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher;
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener;
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters;
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2 __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2;
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics;
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest;
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice;
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics;
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2 __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2;
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement;
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics;
typedef interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings;
enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod;
typedef interface __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod;
typedef struct __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethodVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This, __RPC__out enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethodVtbl;
interface __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethodVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod;
typedef struct __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethodVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethodVtbl;
interface __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethodVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement;
typedef struct __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This, __RPC__out __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElementVtbl;
interface __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElementVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement;
typedef struct __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElementVtbl;
interface __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElementVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod;
typedef struct __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethodVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
                       enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethodVtbl;
interface __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethodVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement;
typedef struct __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
                       __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElementVtbl;
interface __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElementVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod;
EXTERN_C const IID IID___FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod;
typedef struct __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethodVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This, __RPC__deref_out_opt enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
                   unsigned int index,
                            __RPC__deref_out_opt enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
                   __RPC__in enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
                   unsigned int index,
                   __RPC__in enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
                   unsigned int index,
                   __RPC__in enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This, __RPC__in enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod *value);
    END_INTERFACE
} __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethodVtbl;
interface __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod
{
    CONST_VTBL struct __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethodVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement;
EXTERN_C const IID IID___FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement;
typedef struct __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This, __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
                   __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This, __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * *value);
    END_INTERFACE
} __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElementVtbl;
interface __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement
{
    CONST_VTBL struct __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElementVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDeviceVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDeviceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice * This, __RPC__out __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDeviceVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDeviceVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgs __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectable __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
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
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation;
typedef enum __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingKinds __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingKinds;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectAdvertisementListenStateDiscoverability __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectAdvertisementListenStateDiscoverability;
typedef enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectAdvertisementPublisherStatus __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectAdvertisementPublisherStatus;
typedef enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod;
typedef enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConnectionStatus __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConnectionStatus;
typedef enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectDeviceSelectorType __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectDeviceSelectorType;
typedef enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectError __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectError;
typedef enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectPairingProcedure __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectPairingProcedure;
enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectAdvertisementListenStateDiscoverability
{
    WiFiDirectAdvertisementListenStateDiscoverability_None = 0,
    WiFiDirectAdvertisementListenStateDiscoverability_Normal = 1,
    WiFiDirectAdvertisementListenStateDiscoverability_Intensive = 2,
};
enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectAdvertisementPublisherStatus
{
    WiFiDirectAdvertisementPublisherStatus_Created = 0,
    WiFiDirectAdvertisementPublisherStatus_Started = 1,
    WiFiDirectAdvertisementPublisherStatus_Stopped = 2,
    WiFiDirectAdvertisementPublisherStatus_Aborted = 3,
};
enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod
{
    WiFiDirectConfigurationMethod_ProvidePin = 0,
    WiFiDirectConfigurationMethod_DisplayPin = 1,
    WiFiDirectConfigurationMethod_PushButton = 2,
};
enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConnectionStatus
{
    WiFiDirectConnectionStatus_Disconnected = 0,
    WiFiDirectConnectionStatus_Connected = 1,
};
enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectDeviceSelectorType
{
    WiFiDirectDeviceSelectorType_DeviceInterface = 0,
    WiFiDirectDeviceSelectorType_AssociationEndpoint = 1,
};
enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectError
{
    WiFiDirectError_Success = 0,
    WiFiDirectError_RadioNotAvailable = 1,
    WiFiDirectError_ResourceInUse = 2,
};
enum __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectPairingProcedure
{
    WiFiDirectPairingProcedure_GroupOwnerNegotiation = 0,
    WiFiDirectPairingProcedure_Invitation = 1,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisement[] = L"Windows.Devices.WiFiDirect.IWiFiDirectAdvertisement";
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InformationElements )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InformationElements )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement * This,
                  __RPC__in_opt __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ListenStateDiscoverability )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectAdvertisementListenStateDiscoverability * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ListenStateDiscoverability )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement * This,
                  __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectAdvertisementListenStateDiscoverability value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsAutonomousGroupOwnerEnabled )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsAutonomousGroupOwnerEnabled )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LegacySettings )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementVtbl;
interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InformationElements(This,value) )
    ( (This)->lpVtbl->put_InformationElements(This,value) )
    ( (This)->lpVtbl->get_ListenStateDiscoverability(This,value) )
    ( (This)->lpVtbl->put_ListenStateDiscoverability(This,value) )
    ( (This)->lpVtbl->get_IsAutonomousGroupOwnerEnabled(This,value) )
    ( (This)->lpVtbl->put_IsAutonomousGroupOwnerEnabled(This,value) )
    ( (This)->lpVtbl->get_LegacySettings(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisement2[] = L"Windows.Devices.WiFiDirect.IWiFiDirectAdvertisement2";
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SupportedConfigurationMethods )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2 * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2Vtbl;
interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SupportedConfigurationMethods(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisementPublisher[] = L"Windows.Devices.WiFiDirect.IWiFiDirectAdvertisementPublisher";
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Advertisement )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisement * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectAdvertisementPublisherStatus * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_StatusChanged )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisher_Windows__CDevices__CWiFiDirect__CWiFiDirectAdvertisementPublisherStatusChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StatusChanged )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherVtbl;
interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Advertisement(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->add_StatusChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_StatusChanged(This,token) )
    ( (This)->lpVtbl->Start(This) )
    ( (This)->lpVtbl->Stop(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisher;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectAdvertisementPublisherStatusChangedEventArgs[] = L"Windows.Devices.WiFiDirect.IWiFiDirectAdvertisementPublisherStatusChangedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectAdvertisementPublisherStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Error )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectError * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_Error(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectAdvertisementPublisherStatusChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectConnectionListener[] = L"Windows.Devices.WiFiDirect.IWiFiDirectConnectionListener";
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListenerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_ConnectionRequested )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionListener_Windows__CDevices__CWiFiDirect__CWiFiDirectConnectionRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ConnectionRequested )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListenerVtbl;
interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListenerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_ConnectionRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_ConnectionRequested(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionListener;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectConnectionParameters[] = L"Windows.Devices.WiFiDirect.IWiFiDirectConnectionParameters";
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_GroupOwnerIntent )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters * This,
                           __RPC__out INT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_GroupOwnerIntent )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters * This,
                  INT16 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersVtbl;
interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_GroupOwnerIntent(This,value) )
    ( (This)->lpVtbl->put_GroupOwnerIntent(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectConnectionParameters2[] = L"Windows.Devices.WiFiDirect.IWiFiDirectConnectionParameters2";
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PreferenceOrderedConfigurationMethods )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2 * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectConfigurationMethod * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PreferredPairingProcedure )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2 * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectPairingProcedure * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PreferredPairingProcedure )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2 * This,
                  __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectPairingProcedure value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2Vtbl;
interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PreferenceOrderedConfigurationMethods(This,value) )
    ( (This)->lpVtbl->get_PreferredPairingProcedure(This,value) )
    ( (This)->lpVtbl->put_PreferredPairingProcedure(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectConnectionParametersStatics[] = L"Windows.Devices.WiFiDirect.IWiFiDirectConnectionParametersStatics";
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDevicePairingKinds )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics * This,
                  __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConfigurationMethod configurationMethod,
                           __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingKinds * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDevicePairingKinds(This,configurationMethod,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParametersStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectConnectionRequest[] = L"Windows.Devices.WiFiDirect.IWiFiDirectConnectionRequest";
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceInformation )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestVtbl;
interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceInformation(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectConnectionRequestedEventArgs[] = L"Windows.Devices.WiFiDirect.IWiFiDirectConnectionRequestedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetConnectionRequest )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequest * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetConnectionRequest(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectDevice[] = L"Windows.Devices.WiFiDirect.IWiFiDirectDevice";
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ConnectionStatus )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectConnectionStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ConnectionStatusChanged )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ConnectionStatusChanged )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *GetConnectionEndpointPairs )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CEndpointPair * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceVtbl;
interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ConnectionStatus(This,value) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->add_ConnectionStatusChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ConnectionStatusChanged(This,token) )
    ( (This)->lpVtbl->GetConnectionEndpointPairs(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDevice;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectDeviceStatics[] = L"Windows.Devices.WiFiDirect.IWiFiDirectDeviceStatics";
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics * This,
                           __RPC__deref_out_opt HSTRING * deviceSelector
        );
                    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice * * asyncOp
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelector(This,deviceSelector) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,asyncOp) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectDeviceStatics2[] = L"Windows.Devices.WiFiDirect.IWiFiDirectDeviceStatics2";
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2 * This,
                  __x_ABI_CWindows_CDevices_CWiFiDirect_CWiFiDirectDeviceSelectorType type,
                           __RPC__deref_out_opt HSTRING * result
        );
                    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2 * This,
                  __RPC__in HSTRING deviceId,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectConnectionParameters * connectionParameters,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CWiFiDirect__CWiFiDirectDevice * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelector(This,type,result) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,connectionParameters,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectDeviceStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectInformationElement[] = L"Windows.Devices.WiFiDirect.IWiFiDirectInformationElement";
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Oui )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Oui )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OuiType )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OuiType )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * This,
                  BYTE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementVtbl;
interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Oui(This,value) )
    ( (This)->lpVtbl->put_Oui(This,value) )
    ( (This)->lpVtbl->get_OuiType(This,value) )
    ( (This)->lpVtbl->put_OuiType(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->put_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElement;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectInformationElementStatics[] = L"Windows.Devices.WiFiDirect.IWiFiDirectInformationElementStatics";
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromBuffer )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer,
                           __RPC__deref_out_opt __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromDeviceInformation )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * deviceInformation,
                           __RPC__deref_out_opt __FIVector_1_Windows__CDevices__CWiFiDirect__CWiFiDirectInformationElement * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromBuffer(This,buffer,result) )
    ( (This)->lpVtbl->CreateFromDeviceInformation(This,deviceInformation,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectInformationElementStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFiDirect_IWiFiDirectLegacySettings[] = L"Windows.Devices.WiFiDirect.IWiFiDirectLegacySettings";
typedef struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsEnabled )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Ssid )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Ssid )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Passphrase )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Passphrase )(
        __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettingsVtbl;
interface __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsEnabled(This,value) )
    ( (This)->lpVtbl->put_IsEnabled(This,value) )
    ( (This)->lpVtbl->get_Ssid(This,value) )
    ( (This)->lpVtbl->put_Ssid(This,value) )
    ( (This)->lpVtbl->get_Passphrase(This,value) )
    ( (This)->lpVtbl->put_Passphrase(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFiDirect_CIWiFiDirectLegacySettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_WiFiDirectAdvertisement[] = L"Windows.Devices.WiFiDirect.WiFiDirectAdvertisement";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_WiFiDirectAdvertisementPublisher[] = L"Windows.Devices.WiFiDirect.WiFiDirectAdvertisementPublisher";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_WiFiDirectAdvertisementPublisherStatusChangedEventArgs[] = L"Windows.Devices.WiFiDirect.WiFiDirectAdvertisementPublisherStatusChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_WiFiDirectConnectionListener[] = L"Windows.Devices.WiFiDirect.WiFiDirectConnectionListener";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_WiFiDirectConnectionParameters[] = L"Windows.Devices.WiFiDirect.WiFiDirectConnectionParameters";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_WiFiDirectConnectionRequest[] = L"Windows.Devices.WiFiDirect.WiFiDirectConnectionRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_WiFiDirectConnectionRequestedEventArgs[] = L"Windows.Devices.WiFiDirect.WiFiDirectConnectionRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_WiFiDirectDevice[] = L"Windows.Devices.WiFiDirect.WiFiDirectDevice";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_WiFiDirectInformationElement[] = L"Windows.Devices.WiFiDirect.WiFiDirectInformationElement";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFiDirect_WiFiDirectLegacySettings[] = L"Windows.Devices.WiFiDirect.WiFiDirectLegacySettings";
       
       
#pragma clang diagnostic pop
