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
#include "Windows.Networking.Connectivity.h"
#include "Windows.Security.Credentials.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter;
typedef interface __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2 __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2;
typedef interface __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics;
typedef interface __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork;
typedef interface __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult;
typedef interface __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport;
typedef interface __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult;
typedef interface __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter;
typedef struct __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, __RPC__out __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl;
interface __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter;
typedef struct __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAdapter **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl;
interface __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapter
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork;
typedef struct __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetworkVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This, __RPC__out __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetworkVtbl;
interface __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetworkVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork;
typedef struct __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetworkVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetworkVtbl;
interface __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CWiFi__CWiFiAvailableNetworkVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiWpsKind;
typedef interface __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind;
typedef struct __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKindVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This, __RPC__out enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiWpsKind *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiWpsKind *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKindVtbl;
interface __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKindVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind;
typedef struct __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKindVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CWiFi__CWiFiWpsKind **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKindVtbl;
interface __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKind
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CWiFi__CWiFiWpsKindVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter;
typedef struct __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
                       __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl;
interface __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork;
typedef struct __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetworkVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This,
                       __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetworkVtbl;
interface __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetworkVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind;
typedef struct __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKindVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiWpsKind *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This,
                       enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiWpsKind item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiWpsKind *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKindVtbl;
interface __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKindVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiAccessStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAccessStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus * This, __RPC__out enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiAccessStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatusVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatusVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiAdapter **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, __RPC__out __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiConnectionResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * This, __RPC__out __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResultVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult * This, __RPC__out __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResultVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * This, __RPC__out __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapterVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectable __FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential;
typedef enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiAccessStatus __x_ABI_CWindows_CDevices_CWiFi_CWiFiAccessStatus;
typedef enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiConnectionMethod __x_ABI_CWindows_CDevices_CWiFi_CWiFiConnectionMethod;
typedef enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiConnectionStatus __x_ABI_CWindows_CDevices_CWiFi_CWiFiConnectionStatus;
typedef enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiNetworkKind __x_ABI_CWindows_CDevices_CWiFi_CWiFiNetworkKind;
typedef enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiPhyKind __x_ABI_CWindows_CDevices_CWiFi_CWiFiPhyKind;
typedef enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiReconnectionKind __x_ABI_CWindows_CDevices_CWiFi_CWiFiReconnectionKind;
typedef enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiWpsConfigurationStatus __x_ABI_CWindows_CDevices_CWiFi_CWiFiWpsConfigurationStatus;
typedef enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiWpsKind __x_ABI_CWindows_CDevices_CWiFi_CWiFiWpsKind;
enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiAccessStatus
{
    WiFiAccessStatus_Unspecified = 0,
    WiFiAccessStatus_Allowed = 1,
    WiFiAccessStatus_DeniedByUser = 2,
    WiFiAccessStatus_DeniedBySystem = 3,
};
enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiConnectionMethod
{
    WiFiConnectionMethod_Default = 0,
    WiFiConnectionMethod_WpsPin = 1,
    WiFiConnectionMethod_WpsPushButton = 2,
};
enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiConnectionStatus
{
    WiFiConnectionStatus_UnspecifiedFailure = 0,
    WiFiConnectionStatus_Success = 1,
    WiFiConnectionStatus_AccessRevoked = 2,
    WiFiConnectionStatus_InvalidCredential = 3,
    WiFiConnectionStatus_NetworkNotAvailable = 4,
    WiFiConnectionStatus_Timeout = 5,
    WiFiConnectionStatus_UnsupportedAuthenticationProtocol = 6,
};
enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiNetworkKind
{
    WiFiNetworkKind_Any = 0,
    WiFiNetworkKind_Infrastructure = 1,
    WiFiNetworkKind_Adhoc = 2,
};
enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiPhyKind
{
    WiFiPhyKind_Unknown = 0,
    WiFiPhyKind_Fhss = 1,
    WiFiPhyKind_Dsss = 2,
    WiFiPhyKind_IRBaseband = 3,
    WiFiPhyKind_Ofdm = 4,
    WiFiPhyKind_Hrdsss = 5,
    WiFiPhyKind_Erp = 6,
    WiFiPhyKind_HT = 7,
    WiFiPhyKind_Vht = 8,
    WiFiPhyKind_Dmg = 9,
    WiFiPhyKind_HE = 10,
};
enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiReconnectionKind
{
    WiFiReconnectionKind_Automatic = 0,
    WiFiReconnectionKind_Manual = 1,
};
enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiWpsConfigurationStatus
{
    WiFiWpsConfigurationStatus_UnspecifiedFailure = 0,
    WiFiWpsConfigurationStatus_Success = 1,
    WiFiWpsConfigurationStatus_Timeout = 2,
};
enum __x_ABI_CWindows_CDevices_CWiFi_CWiFiWpsKind
{
    WiFiWpsKind_Unknown = 0,
    WiFiWpsKind_Pin = 1,
    WiFiWpsKind_PushButton = 2,
    WiFiWpsKind_Nfc = 3,
    WiFiWpsKind_Ethernet = 4,
    WiFiWpsKind_Usb = 5,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFi_IWiFiAdapter[] = L"Windows.Devices.WiFi.IWiFiAdapter";
typedef struct __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NetworkAdapter )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ScanAsync )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NetworkReport )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AvailableNetworksChanged )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CWiFi__CWiFiAdapter_IInspectable * args,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AvailableNetworksChanged )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * This,
                  EventRegistrationToken eventCookie
        );
                    HRESULT ( STDMETHODCALLTYPE *ConnectAsync )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * availableNetwork,
                  __x_ABI_CWindows_CDevices_CWiFi_CWiFiReconnectionKind reconnectionKind,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *ConnectWithPasswordCredentialAsync )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * availableNetwork,
                  __x_ABI_CWindows_CDevices_CWiFi_CWiFiReconnectionKind reconnectionKind,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * passwordCredential,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *ConnectWithPasswordCredentialAndSsidAsync )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * availableNetwork,
                  __x_ABI_CWindows_CDevices_CWiFi_CWiFiReconnectionKind reconnectionKind,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * passwordCredential,
                  __RPC__in HSTRING ssid,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Disconnect )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterVtbl;
interface __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NetworkAdapter(This,value) )
    ( (This)->lpVtbl->ScanAsync(This,value) )
    ( (This)->lpVtbl->get_NetworkReport(This,value) )
    ( (This)->lpVtbl->add_AvailableNetworksChanged(This,args,eventCookie) )
    ( (This)->lpVtbl->remove_AvailableNetworksChanged(This,eventCookie) )
    ( (This)->lpVtbl->ConnectAsync(This,availableNetwork,reconnectionKind,value) )
    ( (This)->lpVtbl->ConnectWithPasswordCredentialAsync(This,availableNetwork,reconnectionKind,passwordCredential,value) )
    ( (This)->lpVtbl->ConnectWithPasswordCredentialAndSsidAsync(This,availableNetwork,reconnectionKind,passwordCredential,ssid,value) )
    ( (This)->lpVtbl->Disconnect(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFi_IWiFiAdapter2[] = L"Windows.Devices.WiFi.IWiFiAdapter2";
typedef struct __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetWpsConfigurationAsync )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * availableNetwork,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiWpsConfigurationResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *ConnectWithPasswordCredentialAndSsidAndConnectionMethodAsync )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * availableNetwork,
                  __x_ABI_CWindows_CDevices_CWiFi_CWiFiReconnectionKind reconnectionKind,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * passwordCredential,
                  __RPC__in HSTRING ssid,
                  __x_ABI_CWindows_CDevices_CWiFi_CWiFiConnectionMethod connectionMethod,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiConnectionResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2Vtbl;
interface __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetWpsConfigurationAsync(This,availableNetwork,operation) )
    ( (This)->lpVtbl->ConnectWithPasswordCredentialAndSsidAndConnectionMethodAsync(This,availableNetwork,reconnectionKind,passwordCredential,ssid,connectionMethod,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapter2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFi_IWiFiAdapterStatics[] = L"Windows.Devices.WiFi.IWiFiAdapterStatics";
typedef struct __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FindAllAdaptersAsync )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAdapter * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics * This,
                           __RPC__deref_out_opt HSTRING * deviceSelector
        );
                    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAdapter * * asyncOp
        );
    HRESULT ( STDMETHODCALLTYPE *RequestAccessAsync )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CWiFi__CWiFiAccessStatus * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FindAllAdaptersAsync(This,value) )
    ( (This)->lpVtbl->GetDeviceSelector(This,deviceSelector) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,asyncOp) )
    ( (This)->lpVtbl->RequestAccessAsync(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFi_CIWiFiAdapterStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFi_IWiFiAvailableNetwork[] = L"Windows.Devices.WiFi.IWiFiAvailableNetwork";
typedef struct __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetworkVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Uptime )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Ssid )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Bssid )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChannelCenterFrequencyInKilohertz )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NetworkRssiInDecibelMilliwatts )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SignalBars )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NetworkKind )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CWiFi_CWiFiNetworkKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhyKind )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CWiFi_CWiFiPhyKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SecuritySettings )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BeaconInterval )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsWiFiDirect )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetworkVtbl;
interface __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetworkVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Uptime(This,value) )
    ( (This)->lpVtbl->get_Ssid(This,value) )
    ( (This)->lpVtbl->get_Bssid(This,value) )
    ( (This)->lpVtbl->get_ChannelCenterFrequencyInKilohertz(This,value) )
    ( (This)->lpVtbl->get_NetworkRssiInDecibelMilliwatts(This,value) )
    ( (This)->lpVtbl->get_SignalBars(This,value) )
    ( (This)->lpVtbl->get_NetworkKind(This,value) )
    ( (This)->lpVtbl->get_PhyKind(This,value) )
    ( (This)->lpVtbl->get_SecuritySettings(This,value) )
    ( (This)->lpVtbl->get_BeaconInterval(This,value) )
    ( (This)->lpVtbl->get_IsWiFiDirect(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFi_CIWiFiAvailableNetwork;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFi_IWiFiConnectionResult[] = L"Windows.Devices.WiFi.IWiFiConnectionResult";
typedef struct __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ConnectionStatus )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CWiFi_CWiFiConnectionStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResultVtbl;
interface __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ConnectionStatus(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFi_CIWiFiConnectionResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFi_IWiFiNetworkReport[] = L"Windows.Devices.WiFi.IWiFiNetworkReport";
typedef struct __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AvailableNetworks )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiAvailableNetwork * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReportVtbl;
interface __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReportVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
    ( (This)->lpVtbl->get_AvailableNetworks(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFi_CIWiFiNetworkReport;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_WiFi_IWiFiWpsConfigurationResult[] = L"Windows.Devices.WiFi.IWiFiWpsConfigurationResult";
typedef struct __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CWiFi_CWiFiWpsConfigurationStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedWpsKinds )(
        __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CWiFi__CWiFiWpsKind * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResultVtbl;
interface __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_SupportedWpsKinds(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CWiFi_CIWiFiWpsConfigurationResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFi_WiFiAdapter[] = L"Windows.Devices.WiFi.WiFiAdapter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFi_WiFiAvailableNetwork[] = L"Windows.Devices.WiFi.WiFiAvailableNetwork";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFi_WiFiConnectionResult[] = L"Windows.Devices.WiFi.WiFiConnectionResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFi_WiFiNetworkReport[] = L"Windows.Devices.WiFi.WiFiNetworkReport";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_WiFi_WiFiWpsConfigurationResult[] = L"Windows.Devices.WiFi.WiFiWpsConfigurationResult";
       
       
#pragma clang diagnostic pop
