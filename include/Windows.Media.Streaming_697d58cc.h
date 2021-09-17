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
#include "Windows.Storage.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CIConnectionStatusHandler __x_ABI_CWindows_CMedia_CStreaming_CIConnectionStatusHandler;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CIDeviceControllerFinderHandler __x_ABI_CWindows_CMedia_CStreaming_CIDeviceControllerFinderHandler;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CIRenderingParametersUpdateHandler __x_ABI_CWindows_CMedia_CStreaming_CIRenderingParametersUpdateHandler;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CITransportParametersUpdateHandler __x_ABI_CWindows_CMedia_CStreaming_CITransportParametersUpdateHandler;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDevice __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDevice;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDeviceStatics __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDeviceStatics;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CIDeviceController __x_ABI_CWindows_CMedia_CStreaming_CIDeviceController;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CIDeviceIcon __x_ABI_CWindows_CMedia_CStreaming_CIDeviceIcon;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CIDevicePair __x_ABI_CWindows_CMedia_CStreaming_CIDevicePair;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererActionInformation __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererActionInformation;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererFactory __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererFactory;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CITransportParameters __x_ABI_CWindows_CMedia_CStreaming_CITransportParameters;
typedef interface __FIIterator_1_Windows__CMedia__CStreaming__CIBasicDevice __FIIterator_1_Windows__CMedia__CStreaming__CIBasicDevice;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CStreaming__CIBasicDevice;
typedef struct __FIIterator_1_Windows__CMedia__CStreaming__CIBasicDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CStreaming__CIBasicDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CStreaming__CIBasicDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CStreaming__CIBasicDevice * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CStreaming__CIBasicDevice * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CStreaming__CIBasicDevice * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CStreaming__CIBasicDevice * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CStreaming__CIBasicDevice * This, __RPC__out __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CStreaming__CIBasicDevice * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CStreaming__CIBasicDevice * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CStreaming__CIBasicDevice * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CStreaming__CIBasicDeviceVtbl;
interface __FIIterator_1_Windows__CMedia__CStreaming__CIBasicDevice
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CStreaming__CIBasicDeviceVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CStreaming__CIBasicDevice __FIIterable_1_Windows__CMedia__CStreaming__CIBasicDevice;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CStreaming__CIBasicDevice;
typedef struct __FIIterable_1_Windows__CMedia__CStreaming__CIBasicDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CStreaming__CIBasicDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CStreaming__CIBasicDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CStreaming__CIBasicDevice * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CStreaming__CIBasicDevice * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CStreaming__CIBasicDevice * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CStreaming__CIBasicDevice * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CStreaming__CIBasicDevice * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CStreaming__CIBasicDevice **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CStreaming__CIBasicDeviceVtbl;
interface __FIIterable_1_Windows__CMedia__CStreaming__CIBasicDevice
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CStreaming__CIBasicDeviceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CStreaming__CIDeviceIcon __FIIterator_1_Windows__CMedia__CStreaming__CIDeviceIcon;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CStreaming__CIDeviceIcon;
typedef struct __FIIterator_1_Windows__CMedia__CStreaming__CIDeviceIconVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CStreaming__CIDeviceIcon * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CStreaming__CIDeviceIcon * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CStreaming__CIDeviceIcon * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CStreaming__CIDeviceIcon * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CStreaming__CIDeviceIcon * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CStreaming__CIDeviceIcon * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CStreaming__CIDeviceIcon * This, __RPC__out __x_ABI_CWindows_CMedia_CStreaming_CIDeviceIcon * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CStreaming__CIDeviceIcon * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CStreaming__CIDeviceIcon * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CStreaming__CIDeviceIcon * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CStreaming_CIDeviceIcon * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CStreaming__CIDeviceIconVtbl;
interface __FIIterator_1_Windows__CMedia__CStreaming__CIDeviceIcon
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CStreaming__CIDeviceIconVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CStreaming__CIDeviceIcon __FIIterable_1_Windows__CMedia__CStreaming__CIDeviceIcon;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CStreaming__CIDeviceIcon;
typedef struct __FIIterable_1_Windows__CMedia__CStreaming__CIDeviceIconVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CStreaming__CIDeviceIcon * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CStreaming__CIDeviceIcon * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CStreaming__CIDeviceIcon * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CStreaming__CIDeviceIcon * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CStreaming__CIDeviceIcon * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CStreaming__CIDeviceIcon * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CStreaming__CIDeviceIcon * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CStreaming__CIDeviceIcon **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CStreaming__CIDeviceIconVtbl;
interface __FIIterable_1_Windows__CMedia__CStreaming__CIDeviceIcon
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CStreaming__CIDeviceIconVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
struct __x_ABI_CWindows_CMedia_CStreaming_CPlaySpeed;
typedef interface __FIIterator_1_Windows__CMedia__CStreaming__CPlaySpeed __FIIterator_1_Windows__CMedia__CStreaming__CPlaySpeed;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CStreaming__CPlaySpeed;
typedef struct __FIIterator_1_Windows__CMedia__CStreaming__CPlaySpeedVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CStreaming__CPlaySpeed * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CStreaming__CPlaySpeed * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CStreaming__CPlaySpeed * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CStreaming__CPlaySpeed * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CStreaming__CPlaySpeed * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CStreaming__CPlaySpeed * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CStreaming__CPlaySpeed * This, __RPC__out struct __x_ABI_CWindows_CMedia_CStreaming_CPlaySpeed *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CStreaming__CPlaySpeed * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CStreaming__CPlaySpeed * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CStreaming__CPlaySpeed * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CMedia_CStreaming_CPlaySpeed *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CStreaming__CPlaySpeedVtbl;
interface __FIIterator_1_Windows__CMedia__CStreaming__CPlaySpeed
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CStreaming__CPlaySpeedVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CStreaming__CPlaySpeed __FIIterable_1_Windows__CMedia__CStreaming__CPlaySpeed;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CStreaming__CPlaySpeed;
typedef struct __FIIterable_1_Windows__CMedia__CStreaming__CPlaySpeedVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CStreaming__CPlaySpeed * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CStreaming__CPlaySpeed * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CStreaming__CPlaySpeed * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CStreaming__CPlaySpeed * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CStreaming__CPlaySpeed * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CStreaming__CPlaySpeed * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CStreaming__CPlaySpeed * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CStreaming__CPlaySpeed **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CStreaming__CPlaySpeedVtbl;
interface __FIIterable_1_Windows__CMedia__CStreaming__CPlaySpeed
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CStreaming__CPlaySpeedVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CStreaming__CIBasicDevice __FIVectorView_1_Windows__CMedia__CStreaming__CIBasicDevice;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CStreaming__CIBasicDevice;
typedef struct __FIVectorView_1_Windows__CMedia__CStreaming__CIBasicDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CStreaming__CIBasicDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CStreaming__CIBasicDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CStreaming__CIBasicDevice * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CStreaming__CIBasicDevice * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CStreaming__CIBasicDevice * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CStreaming__CIBasicDevice * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CStreaming__CIBasicDevice * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CStreaming__CIBasicDevice * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CStreaming__CIBasicDevice * This,
                       __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CStreaming__CIBasicDevice * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CStreaming__CIBasicDeviceVtbl;
interface __FIVectorView_1_Windows__CMedia__CStreaming__CIBasicDevice
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CStreaming__CIBasicDeviceVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CStreaming__CIDeviceIcon __FIVectorView_1_Windows__CMedia__CStreaming__CIDeviceIcon;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CStreaming__CIDeviceIcon;
typedef struct __FIVectorView_1_Windows__CMedia__CStreaming__CIDeviceIconVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CStreaming__CIDeviceIcon * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CStreaming__CIDeviceIcon * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CStreaming__CIDeviceIcon * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CStreaming__CIDeviceIcon * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CStreaming__CIDeviceIcon * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CStreaming__CIDeviceIcon * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CStreaming__CIDeviceIcon * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CStreaming_CIDeviceIcon * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CStreaming__CIDeviceIcon * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CStreaming__CIDeviceIcon * This,
                       __x_ABI_CWindows_CMedia_CStreaming_CIDeviceIcon * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CStreaming__CIDeviceIcon * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CStreaming_CIDeviceIcon * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CStreaming__CIDeviceIconVtbl;
interface __FIVectorView_1_Windows__CMedia__CStreaming__CIDeviceIcon
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CStreaming__CIDeviceIconVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CStreaming__CPlaySpeed __FIVectorView_1_Windows__CMedia__CStreaming__CPlaySpeed;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CStreaming__CPlaySpeed;
typedef struct __FIVectorView_1_Windows__CMedia__CStreaming__CPlaySpeedVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CStreaming__CPlaySpeed * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CStreaming__CPlaySpeed * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CStreaming__CPlaySpeed * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CStreaming__CPlaySpeed * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CStreaming__CPlaySpeed * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CStreaming__CPlaySpeed * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CStreaming__CPlaySpeed * This,
                                                    unsigned int index,
                                                             __RPC__out struct __x_ABI_CWindows_CMedia_CStreaming_CPlaySpeed *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CStreaming__CPlaySpeed * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CStreaming__CPlaySpeed * This,
                       struct __x_ABI_CWindows_CMedia_CStreaming_CPlaySpeed item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CStreaming__CPlaySpeed * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CMedia_CStreaming_CPlaySpeed *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CStreaming__CPlaySpeedVtbl;
interface __FIVectorView_1_Windows__CMedia__CStreaming__CPlaySpeed
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CStreaming__CPlaySpeedVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CMedia__CStreaming__CIBasicDevice __FIVector_1_Windows__CMedia__CStreaming__CIBasicDevice;
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CStreaming__CIBasicDevice;
typedef struct __FIVector_1_Windows__CMedia__CStreaming__CIBasicDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIBasicDevice * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIBasicDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIBasicDevice * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIBasicDevice * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIBasicDevice * This, __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIBasicDevice * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIBasicDevice * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIBasicDevice * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIBasicDevice * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CStreaming__CIBasicDevice **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIBasicDevice * This,
                   __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIBasicDevice * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIBasicDevice * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIBasicDevice * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIBasicDevice * This, __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIBasicDevice * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIBasicDevice * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIBasicDevice * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIBasicDevice * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * *value);
    END_INTERFACE
} __FIVector_1_Windows__CMedia__CStreaming__CIBasicDeviceVtbl;
interface __FIVector_1_Windows__CMedia__CStreaming__CIBasicDevice
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CStreaming__CIBasicDeviceVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CMedia__CStreaming__CIDeviceIcon __FIVector_1_Windows__CMedia__CStreaming__CIDeviceIcon;
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CStreaming__CIDeviceIcon;
typedef struct __FIVector_1_Windows__CMedia__CStreaming__CIDeviceIconVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIDeviceIcon * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIDeviceIcon * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIDeviceIcon * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIDeviceIcon * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIDeviceIcon * This, __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CStreaming_CIDeviceIcon * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIDeviceIcon * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIDeviceIcon * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CStreaming_CIDeviceIcon * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIDeviceIcon * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIDeviceIcon * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CStreaming__CIDeviceIcon **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIDeviceIcon * This,
                   __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIDeviceIcon * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIDeviceIcon * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIDeviceIcon * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIDeviceIcon * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIDeviceIcon * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIDeviceIcon * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIDeviceIcon * This, __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIDeviceIcon * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIDeviceIcon * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIDeviceIcon * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIDeviceIcon * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CStreaming_CIDeviceIcon * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CIDeviceIcon * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CStreaming_CIDeviceIcon * *value);
    END_INTERFACE
} __FIVector_1_Windows__CMedia__CStreaming__CIDeviceIconVtbl;
interface __FIVector_1_Windows__CMedia__CStreaming__CIDeviceIcon
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CStreaming__CIDeviceIconVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CMedia__CStreaming__CPlaySpeed __FIVector_1_Windows__CMedia__CStreaming__CPlaySpeed;
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CStreaming__CPlaySpeed;
typedef struct __FIVector_1_Windows__CMedia__CStreaming__CPlaySpeedVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CMedia__CStreaming__CPlaySpeed * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CPlaySpeed * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CPlaySpeed * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CPlaySpeed * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CPlaySpeed * This, __RPC__deref_out_opt struct __x_ABI_CWindows_CMedia_CStreaming_CPlaySpeed *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CPlaySpeed * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CPlaySpeed * This,
                   unsigned int index,
                            __RPC__deref_out_opt struct __x_ABI_CWindows_CMedia_CStreaming_CPlaySpeed *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CMedia__CStreaming__CPlaySpeed * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CPlaySpeed * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CStreaming__CPlaySpeed **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CPlaySpeed * This,
                   __RPC__in struct __x_ABI_CWindows_CMedia_CStreaming_CPlaySpeed item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CPlaySpeed * This,
                   unsigned int index,
                   __RPC__in struct __x_ABI_CWindows_CMedia_CStreaming_CPlaySpeed item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CPlaySpeed * This,
                   unsigned int index,
                   __RPC__in struct __x_ABI_CWindows_CMedia_CStreaming_CPlaySpeed item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CPlaySpeed * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CPlaySpeed * This, __RPC__in struct __x_ABI_CWindows_CMedia_CStreaming_CPlaySpeed item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CPlaySpeed * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CPlaySpeed * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CPlaySpeed * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CMedia_CStreaming_CPlaySpeed *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CStreaming__CPlaySpeed * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) struct __x_ABI_CWindows_CMedia_CStreaming_CPlaySpeed *value);
    END_INTERFACE
} __FIVector_1_Windows__CMedia__CStreaming__CPlaySpeedVtbl;
interface __FIVector_1_Windows__CMedia__CStreaming__CPlaySpeed
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CStreaming__CPlaySpeedVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CActiveBasicDevice __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CActiveBasicDevice;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CActiveBasicDevice;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CStreaming__CActiveBasicDevice __FIAsyncOperation_1_Windows__CMedia__CStreaming__CActiveBasicDevice;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CActiveBasicDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CActiveBasicDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CActiveBasicDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CActiveBasicDevice * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CActiveBasicDevice * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CStreaming__CActiveBasicDevice *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CActiveBasicDeviceVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CActiveBasicDevice
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CActiveBasicDeviceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CStreaming__CActiveBasicDevice __FIAsyncOperation_1_Windows__CMedia__CStreaming__CActiveBasicDevice;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CStreaming__CActiveBasicDevice;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CStreaming__CActiveBasicDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CActiveBasicDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CActiveBasicDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CActiveBasicDevice * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CActiveBasicDevice * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CActiveBasicDevice * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CActiveBasicDevice * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CActiveBasicDevice * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CActiveBasicDevice *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CActiveBasicDevice * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CActiveBasicDevice **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CActiveBasicDevice * This, __RPC__out __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDevice * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CStreaming__CActiveBasicDeviceVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CStreaming__CActiveBasicDevice
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CStreaming__CActiveBasicDeviceVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CDevicePair __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CDevicePair;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CDevicePair;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CStreaming__CDevicePair __FIAsyncOperation_1_Windows__CMedia__CStreaming__CDevicePair;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CDevicePairVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CDevicePair * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CDevicePair * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CDevicePair * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CDevicePair * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CStreaming__CDevicePair *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CDevicePairVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CDevicePair
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CDevicePairVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CStreaming__CDevicePair __FIAsyncOperation_1_Windows__CMedia__CStreaming__CDevicePair;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CStreaming__CDevicePair;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CStreaming__CDevicePairVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CDevicePair * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CDevicePair * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CDevicePair * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CDevicePair * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CDevicePair * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CDevicePair * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CDevicePair * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CDevicePair *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CDevicePair * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CDevicePair **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CDevicePair * This, __RPC__out __x_ABI_CWindows_CMedia_CStreaming_CIDevicePair * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CStreaming__CDevicePairVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CStreaming__CDevicePair
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CStreaming__CDevicePairVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CMediaRenderer __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CMediaRenderer;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CMediaRenderer;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CMediaRendererVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CMediaRenderer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CMediaRenderer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CMediaRenderer * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CMediaRenderer * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CMediaRendererVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CMediaRenderer
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CMediaRendererVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRendererVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CMediaRenderer *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CMediaRenderer **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer * This, __RPC__out __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRendererVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRendererVtbl *lpVtbl;
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
struct __x_ABI_CWindows_CMedia_CStreaming_CPositionInformation;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CPositionInformation __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CPositionInformation;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CPositionInformation;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CStreaming__CPositionInformation __FIAsyncOperation_1_Windows__CMedia__CStreaming__CPositionInformation;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CPositionInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CPositionInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CPositionInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CPositionInformation * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CPositionInformation * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CStreaming__CPositionInformation *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CPositionInformationVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CPositionInformation
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CPositionInformationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CStreaming__CPositionInformation __FIAsyncOperation_1_Windows__CMedia__CStreaming__CPositionInformation;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CStreaming__CPositionInformation;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CStreaming__CPositionInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CPositionInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CPositionInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CPositionInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CPositionInformation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CPositionInformation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CPositionInformation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CPositionInformation * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CPositionInformation *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CPositionInformation * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CPositionInformation **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CPositionInformation * This, __RPC__out struct __x_ABI_CWindows_CMedia_CStreaming_CPositionInformation *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CStreaming__CPositionInformationVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CStreaming__CPositionInformation
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CStreaming__CPositionInformationVtbl *lpVtbl;
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
struct __x_ABI_CWindows_CMedia_CStreaming_CTransportInformation;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CTransportInformation __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CTransportInformation;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CTransportInformation;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CStreaming__CTransportInformation __FIAsyncOperation_1_Windows__CMedia__CStreaming__CTransportInformation;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CTransportInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CTransportInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CTransportInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CTransportInformation * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CTransportInformation * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CStreaming__CTransportInformation *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CTransportInformationVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CTransportInformation
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CTransportInformationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CStreaming__CTransportInformation __FIAsyncOperation_1_Windows__CMedia__CStreaming__CTransportInformation;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CStreaming__CTransportInformation;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CStreaming__CTransportInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CTransportInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CTransportInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CTransportInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CTransportInformation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CTransportInformation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CTransportInformation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CTransportInformation * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CTransportInformation *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CTransportInformation * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CTransportInformation **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CTransportInformation * This, __RPC__out struct __x_ABI_CWindows_CMedia_CStreaming_CTransportInformation *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CStreaming__CTransportInformationVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CStreaming__CTransportInformation
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CStreaming__CTransportInformationVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_UINT32 __FIAsyncOperationCompletedHandler_1_UINT32;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_UINT32;
typedef interface __FIAsyncOperation_1_UINT32 __FIAsyncOperation_1_UINT32;
typedef struct __FIAsyncOperationCompletedHandler_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This, __RPC__in_opt __FIAsyncOperation_1_UINT32 *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_UINT32Vtbl;
interface __FIAsyncOperationCompletedHandler_1_UINT32
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_UINT32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_UINT32 __FIAsyncOperation_1_UINT32;
EXTERN_C const IID IID___FIAsyncOperation_1_UINT32;
typedef struct __FIAsyncOperation_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_UINT32 * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_UINT32 *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_UINT32 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__out unsigned int *results);
    END_INTERFACE
} __FIAsyncOperation_1_UINT32Vtbl;
interface __FIAsyncOperation_1_UINT32
{
    CONST_VTBL struct __FIAsyncOperation_1_UINT32Vtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentTypeVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentTypeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This, __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentTypeVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentTypeVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;
typedef interface __FIIterator_1___F__CIPropertySet __FIIterator_1___F__CIPropertySet;
EXTERN_C const IID IID___FIIterator_1___F__CIPropertySet;
typedef struct __FIIterator_1___F__CIPropertySetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___F__CIPropertySet * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___F__CIPropertySet * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___F__CIPropertySet * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___F__CIPropertySet * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___F__CIPropertySet * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___F__CIPropertySet * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___F__CIPropertySet * This, __RPC__out __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___F__CIPropertySet * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___F__CIPropertySet * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___F__CIPropertySet * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___F__CIPropertySetVtbl;
interface __FIIterator_1___F__CIPropertySet
{
    CONST_VTBL struct __FIIterator_1___F__CIPropertySetVtbl *lpVtbl;
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
typedef interface __FIIterable_1___F__CIPropertySet __FIIterable_1___F__CIPropertySet;
EXTERN_C const IID IID___FIIterable_1___F__CIPropertySet;
typedef struct __FIIterable_1___F__CIPropertySetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___F__CIPropertySet * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___F__CIPropertySet * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___F__CIPropertySet * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___F__CIPropertySet * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___F__CIPropertySet * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___F__CIPropertySet * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___F__CIPropertySet * This, __RPC__deref_out_opt __FIIterator_1___F__CIPropertySet **first);
    END_INTERFACE
} __FIIterable_1___F__CIPropertySetVtbl;
interface __FIIterable_1___F__CIPropertySet
{
    CONST_VTBL struct __FIIterable_1___F__CIPropertySetVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1___F__CIPropertySet __FIVectorView_1___F__CIPropertySet;
EXTERN_C const IID IID___FIVectorView_1___F__CIPropertySet;
typedef struct __FIVectorView_1___F__CIPropertySetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1___F__CIPropertySet * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1___F__CIPropertySet * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1___F__CIPropertySet * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1___F__CIPropertySet * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1___F__CIPropertySet * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1___F__CIPropertySet * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1___F__CIPropertySet * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1___F__CIPropertySet * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1___F__CIPropertySet * This,
                       __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1___F__CIPropertySet * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1___F__CIPropertySetVtbl;
interface __FIVectorView_1___F__CIPropertySet
{
    CONST_VTBL struct __FIVectorView_1___F__CIPropertySetVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet;
typedef interface __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySetVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySetVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet;
typedef struct __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet * This, __RPC__out __FIVectorView_1___F__CIPropertySet * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySetVtbl;
interface __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySetVtbl *lpVtbl;
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
typedef enum __x_ABI_CWindows_CMedia_CStreaming_CConnectionStatus __x_ABI_CWindows_CMedia_CStreaming_CConnectionStatus;
typedef enum __x_ABI_CWindows_CMedia_CStreaming_CDeviceTypes __x_ABI_CWindows_CMedia_CStreaming_CDeviceTypes;
typedef enum __x_ABI_CWindows_CMedia_CStreaming_CTransportState __x_ABI_CWindows_CMedia_CStreaming_CTransportState;
typedef enum __x_ABI_CWindows_CMedia_CStreaming_CTransportStatus __x_ABI_CWindows_CMedia_CStreaming_CTransportStatus;
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CPlaySpeed __x_ABI_CWindows_CMedia_CStreaming_CPlaySpeed;
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CPositionInformation __x_ABI_CWindows_CMedia_CStreaming_CPositionInformation;
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CRenderingParameters __x_ABI_CWindows_CMedia_CStreaming_CRenderingParameters;
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CTrackInformation __x_ABI_CWindows_CMedia_CStreaming_CTrackInformation;
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CTransportInformation __x_ABI_CWindows_CMedia_CStreaming_CTransportInformation;
enum __x_ABI_CWindows_CMedia_CStreaming_CConnectionStatus
{
    ConnectionStatus_Online = 0,
    ConnectionStatus_Offline = 1,
    ConnectionStatus_Sleeping = 2,
};
enum __x_ABI_CWindows_CMedia_CStreaming_CDeviceTypes
{
    DeviceTypes_Unknown = 0,
    DeviceTypes_DigitalMediaRenderer = 0x1,
    DeviceTypes_DigitalMediaServer = 0x2,
    DeviceTypes_DigitalMediaPlayer = 0x4,
};
enum __x_ABI_CWindows_CMedia_CStreaming_CTransportState
{
    TransportState_Unknown = 0,
    TransportState_Stopped = 1,
    TransportState_Playing = 2,
    TransportState_Transitioning = 3,
    TransportState_Paused = 4,
    TransportState_Recording = 5,
    TransportState_NoMediaPresent = 6,
    TransportState_Last = 7,
};
enum __x_ABI_CWindows_CMedia_CStreaming_CTransportStatus
{
    TransportStatus_Unknown = 0,
    TransportStatus_Ok = 1,
    TransportStatus_ErrorOccurred = 2,
    TransportStatus_Last = 3,
};
struct __x_ABI_CWindows_CMedia_CStreaming_CPlaySpeed
{
    INT32 Numerator;
    UINT32 Denominator;
};
struct __x_ABI_CWindows_CMedia_CStreaming_CTrackInformation
{
    UINT32 Track;
    UINT32 TrackId;
    __x_ABI_CWindows_CFoundation_CTimeSpan TrackDuration;
};
struct __x_ABI_CWindows_CMedia_CStreaming_CPositionInformation
{
    __x_ABI_CWindows_CMedia_CStreaming_CTrackInformation trackInformation;
    __x_ABI_CWindows_CFoundation_CTimeSpan relativeTime;
};
struct __x_ABI_CWindows_CMedia_CStreaming_CRenderingParameters
{
    UINT32 volume;
    boolean mute;
};
struct __x_ABI_CWindows_CMedia_CStreaming_CTransportInformation
{
    __x_ABI_CWindows_CMedia_CStreaming_CTransportState CurrentTransportState;
    __x_ABI_CWindows_CMedia_CStreaming_CTransportStatus CurrentTransportStatus;
    __x_ABI_CWindows_CMedia_CStreaming_CPlaySpeed CurrentSpeed;
};
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CIConnectionStatusHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIConnectionStatusHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIConnectionStatusHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIConnectionStatusHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CMedia_CStreaming_CIConnectionStatusHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * sender,
                  __x_ABI_CWindows_CMedia_CStreaming_CConnectionStatus arg
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CIConnectionStatusHandlerVtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CIConnectionStatusHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CIConnectionStatusHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,arg) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CIConnectionStatusHandler;
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CIDeviceControllerFinderHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIDeviceControllerFinderHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIDeviceControllerFinderHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIDeviceControllerFinderHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CMedia_CStreaming_CIDeviceControllerFinderHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CIDeviceController * sender,
                  __RPC__in HSTRING uniqueDeviceName,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * device
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CIDeviceControllerFinderHandlerVtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CIDeviceControllerFinderHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CIDeviceControllerFinderHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,uniqueDeviceName,device) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CIDeviceControllerFinderHandler;
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CIRenderingParametersUpdateHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIRenderingParametersUpdateHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIRenderingParametersUpdateHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIRenderingParametersUpdateHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CMedia_CStreaming_CIRenderingParametersUpdateHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * sender,
                  __x_ABI_CWindows_CMedia_CStreaming_CRenderingParameters arg
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CIRenderingParametersUpdateHandlerVtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CIRenderingParametersUpdateHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CIRenderingParametersUpdateHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,arg) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CIRenderingParametersUpdateHandler;
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CITransportParametersUpdateHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CITransportParametersUpdateHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CITransportParametersUpdateHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CITransportParametersUpdateHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CMedia_CStreaming_CITransportParametersUpdateHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * sender,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CITransportParameters * arg
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CITransportParametersUpdateHandlerVtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CITransportParametersUpdateHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CITransportParametersUpdateHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,arg) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CITransportParametersUpdateHandler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_IActiveBasicDevice[] = L"Windows.Media.Streaming.IActiveBasicDevice";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDevice * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDevice * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDevice * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDevice * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDevice * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDevice * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MaxVolume )(
        __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDevice * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsMuteSupported )(
        __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDevice * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSetNextSourceSupported )(
        __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDevice * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsAudioSupported )(
        __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDevice * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsVideoSupported )(
        __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDevice * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsImageSupported )(
        __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDevice * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSearchSupported )(
        __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDevice * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCachedSinkProtocolInfo )(
        __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDevice * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetCachedSinkProtocolInfo )(
        __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDevice * This,
                  __RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCachedExtraSinkProtocolInfo )(
        __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDevice * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetEffectiveBandwidth )(
        __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDevice * This,
                  boolean transmitSpeed,
                           __RPC__out UINT64 * currentSpeed
        );
    HRESULT ( STDMETHODCALLTYPE *GetCachedBitrateMeasurement )(
        __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDevice * This,
                  GUID physicalNetworkInterface,
                           __RPC__out UINT64 * bitrate
        );
    HRESULT ( STDMETHODCALLTYPE *SetCachedBitrateMeasurement )(
        __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDevice * This,
                  GUID physicalNetworkInterface,
                  UINT64 bitrate
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LogicalNetworkInterface )(
        __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDevice * This,
                           __RPC__out GUID * logicalNetworkInterface
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhysicalNetworkInterface )(
        __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDevice * This,
                           __RPC__out GUID * physicalNetworkInterface
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyStreamingStatus )(
        __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDevice * This,
                  boolean fIsStreaming
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDeviceVtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDeviceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MaxVolume(This,value) )
    ( (This)->lpVtbl->get_IsMuteSupported(This,value) )
    ( (This)->lpVtbl->get_IsSetNextSourceSupported(This,value) )
    ( (This)->lpVtbl->get_IsAudioSupported(This,value) )
    ( (This)->lpVtbl->get_IsVideoSupported(This,value) )
    ( (This)->lpVtbl->get_IsImageSupported(This,value) )
    ( (This)->lpVtbl->get_IsSearchSupported(This,value) )
    ( (This)->lpVtbl->GetCachedSinkProtocolInfo(This,value) )
    ( (This)->lpVtbl->SetCachedSinkProtocolInfo(This,value) )
    ( (This)->lpVtbl->GetCachedExtraSinkProtocolInfo(This,value) )
    ( (This)->lpVtbl->GetEffectiveBandwidth(This,transmitSpeed,currentSpeed) )
    ( (This)->lpVtbl->GetCachedBitrateMeasurement(This,physicalNetworkInterface,bitrate) )
    ( (This)->lpVtbl->SetCachedBitrateMeasurement(This,physicalNetworkInterface,bitrate) )
    ( (This)->lpVtbl->get_LogicalNetworkInterface(This,logicalNetworkInterface) )
    ( (This)->lpVtbl->get_PhysicalNetworkInterface(This,physicalNetworkInterface) )
    ( (This)->lpVtbl->NotifyStreamingStatus(This,fIsStreaming) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDevice;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_IActiveBasicDeviceStatics[] = L"Windows.Media.Streaming.IActiveBasicDeviceStatics";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDeviceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDeviceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDeviceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDeviceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDeviceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDeviceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateBasicDeviceAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDeviceStatics * This,
                  __RPC__in HSTRING deviceIdentifier,
                  __x_ABI_CWindows_CMedia_CStreaming_CDeviceTypes type,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CStreaming__CActiveBasicDevice * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CloneBasicDeviceAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDeviceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * basicDevice,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CStreaming__CActiveBasicDevice * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDevicesOnMatchingNetworkAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDeviceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDevice * server,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDevice * renderer,
                  boolean optimizeForProxying,
                  boolean allowChangeRendererNetwork,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CStreaming__CDevicePair * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CreateDevicesOnMatchingNetworkAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDeviceStatics * This,
                  __RPC__in HSTRING serverUDN,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDevice * renderer,
                  boolean optimizeForProxying,
                  boolean allowChangeRendererNetwork,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CStreaming__CDevicePair * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDeviceStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDeviceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateBasicDeviceAsync(This,deviceIdentifier,type,value) )
    ( (This)->lpVtbl->CloneBasicDeviceAsync(This,basicDevice,value) )
    ( (This)->lpVtbl->GetDevicesOnMatchingNetworkAsync(This,server,renderer,optimizeForProxying,allowChangeRendererNetwork,operation) )
    ( (This)->lpVtbl->CreateDevicesOnMatchingNetworkAsync(This,serverUDN,renderer,optimizeForProxying,allowChangeRendererNetwork,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDeviceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_IBasicDevice[] = L"Windows.Media.Streaming.IBasicDevice";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CIBasicDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
        __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )(
        __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ManufacturerName )(
        __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ManufacturerUrl )(
        __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UniqueDeviceName )(
        __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ModelName )(
        __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ModelNumber )(
        __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ModelUrl )(
        __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SerialNumber )(
        __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PresentationUrl )(
        __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemoteStreamingUrls )(
        __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhysicalAddresses )(
        __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IpAddresses )(
        __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanWakeDevices )(
        __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DiscoveredOnCurrentNetwork )(
        __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CStreaming_CDeviceTypes * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Icons )(
        __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CMedia__CStreaming__CIDeviceIcon * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ConnectionStatus )(
        __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CStreaming_CConnectionStatus * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ConnectionStatusChanged )(
        __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CIConnectionStatusHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ConnectionStatusChanged )(
        __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CIBasicDeviceVtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CIBasicDeviceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FriendlyName(This,value) )
    ( (This)->lpVtbl->put_FriendlyName(This,value) )
    ( (This)->lpVtbl->get_ManufacturerName(This,value) )
    ( (This)->lpVtbl->get_ManufacturerUrl(This,value) )
    ( (This)->lpVtbl->get_UniqueDeviceName(This,value) )
    ( (This)->lpVtbl->get_ModelName(This,value) )
    ( (This)->lpVtbl->get_ModelNumber(This,value) )
    ( (This)->lpVtbl->get_ModelUrl(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->get_SerialNumber(This,value) )
    ( (This)->lpVtbl->get_PresentationUrl(This,value) )
    ( (This)->lpVtbl->get_RemoteStreamingUrls(This,value) )
    ( (This)->lpVtbl->get_PhysicalAddresses(This,value) )
    ( (This)->lpVtbl->get_IpAddresses(This,value) )
    ( (This)->lpVtbl->get_CanWakeDevices(This,value) )
    ( (This)->lpVtbl->get_DiscoveredOnCurrentNetwork(This,value) )
    ( (This)->lpVtbl->get_Type(This,value) )
    ( (This)->lpVtbl->get_Icons(This,value) )
    ( (This)->lpVtbl->get_ConnectionStatus(This,value) )
    ( (This)->lpVtbl->add_ConnectionStatusChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ConnectionStatusChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_IDeviceController[] = L"Windows.Media.Streaming.IDeviceController";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CIDeviceControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIDeviceController * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIDeviceController * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIDeviceController * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIDeviceController * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIDeviceController * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIDeviceController * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CachedDevices )(
        __x_ABI_CWindows_CMedia_CStreaming_CIDeviceController * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CMedia__CStreaming__CIBasicDevice * * value
        );
    HRESULT ( STDMETHODCALLTYPE *AddDevice )(
        __x_ABI_CWindows_CMedia_CStreaming_CIDeviceController * This,
                  __RPC__in HSTRING uniqueDeviceName
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveDevice )(
        __x_ABI_CWindows_CMedia_CStreaming_CIDeviceController * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * device
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DeviceArrival )(
        __x_ABI_CWindows_CMedia_CStreaming_CIDeviceController * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CIDeviceControllerFinderHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DeviceArrival )(
        __x_ABI_CWindows_CMedia_CStreaming_CIDeviceController * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DeviceDeparture )(
        __x_ABI_CWindows_CMedia_CStreaming_CIDeviceController * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CIDeviceControllerFinderHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DeviceDeparture )(
        __x_ABI_CWindows_CMedia_CStreaming_CIDeviceController * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CIDeviceControllerVtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CIDeviceController
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CIDeviceControllerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CachedDevices(This,value) )
    ( (This)->lpVtbl->AddDevice(This,uniqueDeviceName) )
    ( (This)->lpVtbl->RemoveDevice(This,device) )
    ( (This)->lpVtbl->add_DeviceArrival(This,handler,token) )
    ( (This)->lpVtbl->remove_DeviceArrival(This,token) )
    ( (This)->lpVtbl->add_DeviceDeparture(This,handler,token) )
    ( (This)->lpVtbl->remove_DeviceDeparture(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CIDeviceController;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_IDeviceIcon[] = L"Windows.Media.Streaming.IDeviceIcon";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CIDeviceIconVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIDeviceIcon * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIDeviceIcon * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIDeviceIcon * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIDeviceIcon * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIDeviceIcon * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIDeviceIcon * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Width )(
        __x_ABI_CWindows_CMedia_CStreaming_CIDeviceIcon * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Height )(
        __x_ABI_CWindows_CMedia_CStreaming_CIDeviceIcon * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContentType )(
        __x_ABI_CWindows_CMedia_CStreaming_CIDeviceIcon * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Stream )(
        __x_ABI_CWindows_CMedia_CStreaming_CIDeviceIcon * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CIDeviceIconVtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CIDeviceIcon
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CIDeviceIconVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Width(This,value) )
    ( (This)->lpVtbl->get_Height(This,value) )
    ( (This)->lpVtbl->get_ContentType(This,value) )
    ( (This)->lpVtbl->get_Stream(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CIDeviceIcon;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_IDevicePair[] = L"Windows.Media.Streaming.IDevicePair";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CIDevicePairVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIDevicePair * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIDevicePair * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIDevicePair * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIDevicePair * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIDevicePair * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIDevicePair * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Server )(
        __x_ABI_CWindows_CMedia_CStreaming_CIDevicePair * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDevice * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Renderer )(
        __x_ABI_CWindows_CMedia_CStreaming_CIDevicePair * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CStreaming_CIActiveBasicDevice * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CIDevicePairVtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CIDevicePair
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CIDevicePairVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Server(This,value) )
    ( (This)->lpVtbl->get_Renderer(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CIDevicePair;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_IMediaRenderer[] = L"Windows.Media.Streaming.IMediaRenderer";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsAudioSupported )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsVideoSupported )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsImageSupported )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ActionInformation )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererActionInformation * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetSourceFromUriAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * This,
                  __RPC__in HSTRING URI,
                           __RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetSourceFromStreamAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * This,
                  __RPC__in_opt IInspectable * stream,
                           __RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetSourceFromMediaSourceAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * This,
                  __RPC__in_opt IInspectable * mediaSource,
                           __RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetNextSourceFromUriAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * This,
                  __RPC__in HSTRING URI,
                           __RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetNextSourceFromStreamAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * This,
                  __RPC__in_opt IInspectable * stream,
                           __RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetNextSourceFromMediaSourceAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * This,
                  __RPC__in_opt IInspectable * mediaSource,
                           __RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * value
        );
    HRESULT ( STDMETHODCALLTYPE *PlayAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    HRESULT ( STDMETHODCALLTYPE *PlayAtSpeedAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * This,
                  __x_ABI_CWindows_CMedia_CStreaming_CPlaySpeed playSpeed,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    HRESULT ( STDMETHODCALLTYPE *StopAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    HRESULT ( STDMETHODCALLTYPE *PauseAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetMuteAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetMuteAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * This,
                  boolean mute,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetVolumeAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetVolumeAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * This,
                  UINT32 volume,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SeekAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan target,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetTransportInformationAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CStreaming__CTransportInformation * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPositionInformationAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CStreaming__CPositionInformation * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_TransportParametersUpdate )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CITransportParametersUpdateHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_TransportParametersUpdate )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_RenderingParametersUpdate )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CIRenderingParametersUpdateHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_RenderingParametersUpdate )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *NextAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererVtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsAudioSupported(This,value) )
    ( (This)->lpVtbl->get_IsVideoSupported(This,value) )
    ( (This)->lpVtbl->get_IsImageSupported(This,value) )
    ( (This)->lpVtbl->get_ActionInformation(This,value) )
    ( (This)->lpVtbl->SetSourceFromUriAsync(This,URI,value) )
    ( (This)->lpVtbl->SetSourceFromStreamAsync(This,stream,value) )
    ( (This)->lpVtbl->SetSourceFromMediaSourceAsync(This,mediaSource,value) )
    ( (This)->lpVtbl->SetNextSourceFromUriAsync(This,URI,value) )
    ( (This)->lpVtbl->SetNextSourceFromStreamAsync(This,stream,value) )
    ( (This)->lpVtbl->SetNextSourceFromMediaSourceAsync(This,mediaSource,value) )
    ( (This)->lpVtbl->PlayAsync(This,value) )
    ( (This)->lpVtbl->PlayAtSpeedAsync(This,playSpeed,value) )
    ( (This)->lpVtbl->StopAsync(This,value) )
    ( (This)->lpVtbl->PauseAsync(This,value) )
    ( (This)->lpVtbl->GetMuteAsync(This,value) )
    ( (This)->lpVtbl->SetMuteAsync(This,mute,value) )
    ( (This)->lpVtbl->GetVolumeAsync(This,value) )
    ( (This)->lpVtbl->SetVolumeAsync(This,volume,value) )
    ( (This)->lpVtbl->SeekAsync(This,target,value) )
    ( (This)->lpVtbl->GetTransportInformationAsync(This,value) )
    ( (This)->lpVtbl->GetPositionInformationAsync(This,value) )
    ( (This)->lpVtbl->add_TransportParametersUpdate(This,handler,token) )
    ( (This)->lpVtbl->remove_TransportParametersUpdate(This,token) )
    ( (This)->lpVtbl->add_RenderingParametersUpdate(This,handler,token) )
    ( (This)->lpVtbl->remove_RenderingParametersUpdate(This,token) )
    ( (This)->lpVtbl->NextAsync(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_IMediaRendererActionInformation[] = L"Windows.Media.Streaming.IMediaRendererActionInformation";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererActionInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererActionInformation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererActionInformation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererActionInformation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererActionInformation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererActionInformation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererActionInformation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsMuteAvailable )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererActionInformation * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPauseAvailable )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererActionInformation * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPlayAvailable )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererActionInformation * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSeekAvailable )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererActionInformation * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSetNextSourceAvailable )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererActionInformation * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsStopAvailable )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererActionInformation * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsVolumeAvailable )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererActionInformation * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PlaySpeeds )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererActionInformation * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CMedia__CStreaming__CPlaySpeed * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererActionInformationVtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererActionInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererActionInformationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsMuteAvailable(This,value) )
    ( (This)->lpVtbl->get_IsPauseAvailable(This,value) )
    ( (This)->lpVtbl->get_IsPlayAvailable(This,value) )
    ( (This)->lpVtbl->get_IsSeekAvailable(This,value) )
    ( (This)->lpVtbl->get_IsSetNextSourceAvailable(This,value) )
    ( (This)->lpVtbl->get_IsStopAvailable(This,value) )
    ( (This)->lpVtbl->get_IsVolumeAvailable(This,value) )
    ( (This)->lpVtbl->get_PlaySpeeds(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererActionInformation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_IMediaRendererFactory[] = L"Windows.Media.Streaming.IMediaRendererFactory";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateMediaRendererAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererFactory * This,
                  __RPC__in HSTRING deviceIdentifier,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateMediaRendererFromBasicDeviceAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * basicDevice,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateMediaRendererAsync(This,deviceIdentifier,value) )
    ( (This)->lpVtbl->CreateMediaRendererFromBasicDeviceAsync(This,basicDevice,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_IStreamSelectorStatics[] = L"Windows.Media.Streaming.IStreamSelectorStatics";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SelectBestStreamAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * storageFile,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * selectorProperties,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStreamPropertiesAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * storageFile,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * selectorProperties,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SelectBestStreamFromStreamAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * stream,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * selectorProperties,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStreamPropertiesFromStreamAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * stream,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * selectorProperties,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SelectBestStreamAsync(This,storageFile,selectorProperties,value) )
    ( (This)->lpVtbl->GetStreamPropertiesAsync(This,storageFile,selectorProperties,value) )
    ( (This)->lpVtbl->SelectBestStreamFromStreamAsync(This,stream,selectorProperties,value) )
    ( (This)->lpVtbl->GetStreamPropertiesFromStreamAsync(This,stream,selectorProperties,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_ITransportParameters[] = L"Windows.Media.Streaming.ITransportParameters";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CITransportParametersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CITransportParameters * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CITransportParameters * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CITransportParameters * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CITransportParameters * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CITransportParameters * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CITransportParameters * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ActionInformation )(
        __x_ABI_CWindows_CMedia_CStreaming_CITransportParameters * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CStreaming_CIMediaRendererActionInformation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TrackInformation )(
        __x_ABI_CWindows_CMedia_CStreaming_CITransportParameters * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CStreaming_CTrackInformation * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransportInformation )(
        __x_ABI_CWindows_CMedia_CStreaming_CITransportParameters * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CStreaming_CTransportInformation * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CITransportParametersVtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CITransportParameters
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CITransportParametersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ActionInformation(This,value) )
    ( (This)->lpVtbl->get_TrackInformation(This,value) )
    ( (This)->lpVtbl->get_TransportInformation(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CITransportParameters;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_ActiveBasicDevice[] = L"Windows.Media.Streaming.ActiveBasicDevice";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_BasicDevice[] = L"Windows.Media.Streaming.BasicDevice";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_CreateMediaRendererOperation[] = L"Windows.Media.Streaming.CreateMediaRendererOperation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_DeviceController[] = L"Windows.Media.Streaming.DeviceController";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_DevicePair[] = L"Windows.Media.Streaming.DevicePair";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_MediaRenderer[] = L"Windows.Media.Streaming.MediaRenderer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_StreamSelector[] = L"Windows.Media.Streaming.StreamSelector";
       
       
#pragma clang diagnostic pop
