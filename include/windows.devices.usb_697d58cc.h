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
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor;
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe;
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor;
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe;
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration;
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor;
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics;
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType;
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor;
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice;
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass;
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses;
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics;
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor;
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics;
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor;
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics;
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface;
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor;
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics;
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting;
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor;
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe;
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor;
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe;
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket;
typedef interface __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory;
typedef interface __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor;
typedef struct __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This, __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptorVtbl;
interface __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptorVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor;
typedef struct __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptorVtbl;
interface __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe;
typedef struct __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This, __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipeVtbl;
interface __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe;
typedef struct __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkInPipe **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipeVtbl;
interface __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipe
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkInPipeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor;
typedef struct __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This, __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptorVtbl;
interface __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptorVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor;
typedef struct __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptorVtbl;
interface __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe;
typedef struct __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This, __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipeVtbl;
interface __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe;
typedef struct __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CUsb__CUsbBulkOutPipe **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipeVtbl;
interface __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipe
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CUsb__CUsbBulkOutPipeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor;
typedef struct __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor * This, __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptorVtbl;
interface __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptorVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor;
typedef struct __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CUsb__CUsbDescriptor **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptorVtbl;
interface __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptor
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CUsb__CUsbDescriptorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CUsb__CUsbInterface;
typedef struct __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface * This, __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceVtbl;
interface __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CUsb__CUsbInterface __FIIterable_1_Windows__CDevices__CUsb__CUsbInterface;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CUsb__CUsbInterface;
typedef struct __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterface * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterface * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterface * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterface * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterface * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterface * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterface * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CUsb__CUsbInterface **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceVtbl;
interface __FIIterable_1_Windows__CDevices__CUsb__CUsbInterface
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting;
typedef struct __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSettingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This, __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSettingVtbl;
interface __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSettingVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting;
typedef struct __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSettingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CUsb__CUsbInterfaceSetting **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSettingVtbl;
interface __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSetting
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CUsb__CUsbInterfaceSettingVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor;
typedef struct __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This, __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptorVtbl;
interface __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptorVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor;
typedef struct __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptorVtbl;
interface __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe;
typedef struct __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This, __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipeVtbl;
interface __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe;
typedef struct __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptInPipe **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipeVtbl;
interface __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipe
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptInPipeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor;
typedef struct __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This, __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptorVtbl;
interface __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptorVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor;
typedef struct __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptorVtbl;
interface __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe;
typedef struct __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This, __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipeVtbl;
interface __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe;
typedef struct __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipeVtbl;
interface __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CUsb__CUsbInterruptOutPipeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor;
typedef struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This,
                       __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptorVtbl;
interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptorVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe;
typedef struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This,
                       __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipeVtbl;
interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipeVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor;
typedef struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This,
                       __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptorVtbl;
interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptorVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe;
typedef struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This,
                       __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipeVtbl;
interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipeVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor;
typedef struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor * This,
                       __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptorVtbl;
interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptorVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface;
typedef struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface * This,
                       __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceVtbl;
interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting;
typedef struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSettingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This,
                       __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSettingVtbl;
interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSettingVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor;
typedef struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This,
                       __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptorVtbl;
interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptorVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe;
typedef struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This,
                       __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipeVtbl;
interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipeVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor;
typedef struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This,
                       __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptorVtbl;
interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptorVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe;
typedef struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This,
                       __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipeVtbl;
interface __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipeVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDeviceVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDeviceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CUsb__CUsbDevice **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice * This, __RPC__out __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDeviceVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDeviceVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgs __FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
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
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIOutputStream __x_ABI_CWindows_CStorage_CStreams_CIOutputStream;
typedef enum __x_ABI_CWindows_CDevices_CUsb_CUsbControlRecipient __x_ABI_CWindows_CDevices_CUsb_CUsbControlRecipient;
typedef enum __x_ABI_CWindows_CDevices_CUsb_CUsbControlTransferType __x_ABI_CWindows_CDevices_CUsb_CUsbControlTransferType;
typedef enum __x_ABI_CWindows_CDevices_CUsb_CUsbEndpointType __x_ABI_CWindows_CDevices_CUsb_CUsbEndpointType;
typedef enum __x_ABI_CWindows_CDevices_CUsb_CUsbReadOptions __x_ABI_CWindows_CDevices_CUsb_CUsbReadOptions;
typedef enum __x_ABI_CWindows_CDevices_CUsb_CUsbTransferDirection __x_ABI_CWindows_CDevices_CUsb_CUsbTransferDirection;
typedef enum __x_ABI_CWindows_CDevices_CUsb_CUsbWriteOptions __x_ABI_CWindows_CDevices_CUsb_CUsbWriteOptions;
enum __x_ABI_CWindows_CDevices_CUsb_CUsbControlRecipient
{
    UsbControlRecipient_Device = 0,
    UsbControlRecipient_SpecifiedInterface = 1,
    UsbControlRecipient_Endpoint = 2,
    UsbControlRecipient_Other = 3,
    UsbControlRecipient_DefaultInterface = 4,
};
enum __x_ABI_CWindows_CDevices_CUsb_CUsbControlTransferType
{
    UsbControlTransferType_Standard = 0,
    UsbControlTransferType_Class = 1,
    UsbControlTransferType_Vendor = 2,
};
enum __x_ABI_CWindows_CDevices_CUsb_CUsbEndpointType
{
    UsbEndpointType_Control = 0,
    UsbEndpointType_Isochronous = 1,
    UsbEndpointType_Bulk = 2,
    UsbEndpointType_Interrupt = 3,
};
enum __x_ABI_CWindows_CDevices_CUsb_CUsbReadOptions
{
    UsbReadOptions_None = 0,
    UsbReadOptions_AutoClearStall = 0x1,
    UsbReadOptions_OverrideAutomaticBufferManagement = 0x2,
    UsbReadOptions_IgnoreShortPacket = 0x4,
    UsbReadOptions_AllowPartialReads = 0x8,
};
enum __x_ABI_CWindows_CDevices_CUsb_CUsbTransferDirection
{
    UsbTransferDirection_Out = 0,
    UsbTransferDirection_In = 1,
};
enum __x_ABI_CWindows_CDevices_CUsb_CUsbWriteOptions
{
    UsbWriteOptions_None = 0,
    UsbWriteOptions_AutoClearStall = 0x1,
    UsbWriteOptions_ShortPacketTerminate = 0x2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbBulkInEndpointDescriptor[] = L"Windows.Devices.Usb.IUsbBulkInEndpointDescriptor";
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MaxPacketSize )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EndpointNumber )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Pipe )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptorVtbl;
interface __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MaxPacketSize(This,value) )
    ( (This)->lpVtbl->get_EndpointNumber(This,value) )
    ( (This)->lpVtbl->get_Pipe(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbBulkInPipe[] = L"Windows.Devices.Usb.IUsbBulkInPipe";
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MaxTransferSizeBytes )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EndpointDescriptor )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ClearStallAsync )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ReadOptions )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * This,
                  __x_ABI_CWindows_CDevices_CUsb_CUsbReadOptions value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReadOptions )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CUsb_CUsbReadOptions * value
        );
    HRESULT ( STDMETHODCALLTYPE *FlushBuffer )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * This
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InputStream )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipeVtbl;
interface __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MaxTransferSizeBytes(This,value) )
    ( (This)->lpVtbl->get_EndpointDescriptor(This,value) )
    ( (This)->lpVtbl->ClearStallAsync(This,operation) )
    ( (This)->lpVtbl->put_ReadOptions(This,value) )
    ( (This)->lpVtbl->get_ReadOptions(This,value) )
    ( (This)->lpVtbl->FlushBuffer(This) )
    ( (This)->lpVtbl->get_InputStream(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInPipe;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbBulkOutEndpointDescriptor[] = L"Windows.Devices.Usb.IUsbBulkOutEndpointDescriptor";
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MaxPacketSize )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EndpointNumber )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Pipe )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptorVtbl;
interface __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MaxPacketSize(This,value) )
    ( (This)->lpVtbl->get_EndpointNumber(This,value) )
    ( (This)->lpVtbl->get_Pipe(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbBulkOutPipe[] = L"Windows.Devices.Usb.IUsbBulkOutPipe";
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EndpointDescriptor )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ClearStallAsync )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *put_WriteOptions )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe * This,
                  __x_ABI_CWindows_CDevices_CUsb_CUsbWriteOptions value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WriteOptions )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CUsb_CUsbWriteOptions * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutputStream )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipeVtbl;
interface __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EndpointDescriptor(This,value) )
    ( (This)->lpVtbl->ClearStallAsync(This,operation) )
    ( (This)->lpVtbl->put_WriteOptions(This,value) )
    ( (This)->lpVtbl->get_WriteOptions(This,value) )
    ( (This)->lpVtbl->get_OutputStream(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutPipe;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbConfiguration[] = L"Windows.Devices.Usb.IUsbConfiguration";
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UsbInterfaces )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterface * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ConfigurationDescriptor )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Descriptors )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationVtbl;
interface __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UsbInterfaces(This,value) )
    ( (This)->lpVtbl->get_ConfigurationDescriptor(This,value) )
    ( (This)->lpVtbl->get_Descriptors(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbConfigurationDescriptor[] = L"Windows.Devices.Usb.IUsbConfigurationDescriptor";
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ConfigurationValue )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxPowerMilliamps )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelfPowered )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemoteWakeup )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorVtbl;
interface __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ConfigurationValue(This,value) )
    ( (This)->lpVtbl->get_MaxPowerMilliamps(This,value) )
    ( (This)->lpVtbl->get_SelfPowered(This,value) )
    ( (This)->lpVtbl->get_RemoteWakeup(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbConfigurationDescriptorStatics[] = L"Windows.Devices.Usb.IUsbConfigurationDescriptorStatics";
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryParse )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * descriptor,
                   __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor * * parsed,
                           __RPC__out boolean * success
        );
    HRESULT ( STDMETHODCALLTYPE *Parse )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * descriptor,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptor * * parsed
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryParse(This,descriptor,parsed,success) )
    ( (This)->lpVtbl->Parse(This,descriptor,parsed) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbConfigurationDescriptorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbControlRequestType[] = L"Windows.Devices.Usb.IUsbControlRequestType";
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Direction )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CUsb_CUsbTransferDirection * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Direction )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType * This,
                  __x_ABI_CWindows_CDevices_CUsb_CUsbTransferDirection value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ControlTransferType )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CUsb_CUsbControlTransferType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ControlTransferType )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType * This,
                  __x_ABI_CWindows_CDevices_CUsb_CUsbControlTransferType value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Recipient )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CUsb_CUsbControlRecipient * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Recipient )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType * This,
                  __x_ABI_CWindows_CDevices_CUsb_CUsbControlRecipient value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AsByte )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AsByte )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType * This,
                  BYTE value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestTypeVtbl;
interface __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestTypeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Direction(This,value) )
    ( (This)->lpVtbl->put_Direction(This,value) )
    ( (This)->lpVtbl->get_ControlTransferType(This,value) )
    ( (This)->lpVtbl->put_ControlTransferType(This,value) )
    ( (This)->lpVtbl->get_Recipient(This,value) )
    ( (This)->lpVtbl->put_Recipient(This,value) )
    ( (This)->lpVtbl->get_AsByte(This,value) )
    ( (This)->lpVtbl->put_AsByte(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbDescriptor[] = L"Windows.Devices.Usb.IUsbDescriptor";
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Length )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DescriptorType )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * This,
                           __RPC__out BYTE * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReadDescriptorBuffer )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptorVtbl;
interface __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Length(This,value) )
    ( (This)->lpVtbl->get_DescriptorType(This,value) )
    ( (This)->lpVtbl->ReadDescriptorBuffer(This,buffer) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbDevice[] = L"Windows.Devices.Usb.IUsbDevice";
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *SendControlOutTransferAsync )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * setupPacket,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer,
                           __RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *SendControlOutTransferAsyncNoBuffer )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * setupPacket,
                           __RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *SendControlInTransferAsync )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * setupPacket,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *SendControlInTransferAsyncNoBuffer )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * setupPacket,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DefaultInterface )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceDescriptor )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Configuration )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbConfiguration * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceVtbl;
interface __x_ABI_CWindows_CDevices_CUsb_CIUsbDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SendControlOutTransferAsync(This,setupPacket,buffer,operation) )
    ( (This)->lpVtbl->SendControlOutTransferAsyncNoBuffer(This,setupPacket,operation) )
    ( (This)->lpVtbl->SendControlInTransferAsync(This,setupPacket,buffer,operation) )
    ( (This)->lpVtbl->SendControlInTransferAsyncNoBuffer(This,setupPacket,operation) )
    ( (This)->lpVtbl->get_DefaultInterface(This,value) )
    ( (This)->lpVtbl->get_DeviceDescriptor(This,value) )
    ( (This)->lpVtbl->get_Configuration(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbDevice;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbDeviceClass[] = L"Windows.Devices.Usb.IUsbDeviceClass";
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ClassCode )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ClassCode )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * This,
                  BYTE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SubclassCode )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * This,
                           __RPC__deref_out_opt __FIReference_1_byte * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SubclassCode )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * This,
                  __RPC__in_opt __FIReference_1_byte * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProtocolCode )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * This,
                           __RPC__deref_out_opt __FIReference_1_byte * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ProtocolCode )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * This,
                  __RPC__in_opt __FIReference_1_byte * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassVtbl;
interface __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ClassCode(This,value) )
    ( (This)->lpVtbl->put_ClassCode(This,value) )
    ( (This)->lpVtbl->get_SubclassCode(This,value) )
    ( (This)->lpVtbl->put_SubclassCode(This,value) )
    ( (This)->lpVtbl->get_ProtocolCode(This,value) )
    ( (This)->lpVtbl->put_ProtocolCode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbDeviceClasses[] = L"Windows.Devices.Usb.IUsbDeviceClasses";
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesVtbl;
interface __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClasses;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbDeviceClassesStatics[] = L"Windows.Devices.Usb.IUsbDeviceClassesStatics";
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CdcControl )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Physical )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PersonalHealthcare )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ActiveSync )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PalmSync )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceFirmwareUpdate )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Irda )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Measurement )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VendorSpecific )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CdcControl(This,value) )
    ( (This)->lpVtbl->get_Physical(This,value) )
    ( (This)->lpVtbl->get_PersonalHealthcare(This,value) )
    ( (This)->lpVtbl->get_ActiveSync(This,value) )
    ( (This)->lpVtbl->get_PalmSync(This,value) )
    ( (This)->lpVtbl->get_DeviceFirmwareUpdate(This,value) )
    ( (This)->lpVtbl->get_Irda(This,value) )
    ( (This)->lpVtbl->get_Measurement(This,value) )
    ( (This)->lpVtbl->get_VendorSpecific(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClassesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbDeviceDescriptor[] = L"Windows.Devices.Usb.IUsbDeviceDescriptor";
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BcdUsb )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxPacketSize0 )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VendorId )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProductId )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BcdDeviceRevision )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NumberOfConfigurations )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor * This,
                           __RPC__out BYTE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptorVtbl;
interface __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BcdUsb(This,value) )
    ( (This)->lpVtbl->get_MaxPacketSize0(This,value) )
    ( (This)->lpVtbl->get_VendorId(This,value) )
    ( (This)->lpVtbl->get_ProductId(This,value) )
    ( (This)->lpVtbl->get_BcdDeviceRevision(This,value) )
    ( (This)->lpVtbl->get_NumberOfConfigurations(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceDescriptor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbDeviceStatics[] = L"Windows.Devices.Usb.IUsbDeviceStatics";
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics * This,
                  UINT32 vendorId,
                  UINT32 productId,
                  GUID winUsbInterfaceClass,
                           __RPC__deref_out_opt HSTRING * value
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorGuidOnly )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics * This,
                  GUID winUsbInterfaceClass,
                           __RPC__deref_out_opt HSTRING * value
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorVidPidOnly )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics * This,
                  UINT32 vendorId,
                  UINT32 productId,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceClassSelector )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceClass * usbClass,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CUsb__CUsbDevice * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelector(This,vendorId,productId,winUsbInterfaceClass,value) )
    ( (This)->lpVtbl->GetDeviceSelectorGuidOnly(This,winUsbInterfaceClass,value) )
    ( (This)->lpVtbl->GetDeviceSelectorVidPidOnly(This,vendorId,productId,value) )
    ( (This)->lpVtbl->GetDeviceClassSelector(This,usbClass,value) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbDeviceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbEndpointDescriptor[] = L"Windows.Devices.Usb.IUsbEndpointDescriptor";
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EndpointNumber )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Direction )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CUsb_CUsbTransferDirection * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EndpointType )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CUsb_CUsbEndpointType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AsBulkInEndpointDescriptor )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkInEndpointDescriptor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AsInterruptInEndpointDescriptor )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AsBulkOutEndpointDescriptor )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbBulkOutEndpointDescriptor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AsInterruptOutEndpointDescriptor )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorVtbl;
interface __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EndpointNumber(This,value) )
    ( (This)->lpVtbl->get_Direction(This,value) )
    ( (This)->lpVtbl->get_EndpointType(This,value) )
    ( (This)->lpVtbl->get_AsBulkInEndpointDescriptor(This,value) )
    ( (This)->lpVtbl->get_AsInterruptInEndpointDescriptor(This,value) )
    ( (This)->lpVtbl->get_AsBulkOutEndpointDescriptor(This,value) )
    ( (This)->lpVtbl->get_AsInterruptOutEndpointDescriptor(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbEndpointDescriptorStatics[] = L"Windows.Devices.Usb.IUsbEndpointDescriptorStatics";
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryParse )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * descriptor,
                   __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor * * parsed,
                           __RPC__out boolean * success
        );
    HRESULT ( STDMETHODCALLTYPE *Parse )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * descriptor,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptor * * parsed
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryParse(This,descriptor,parsed,success) )
    ( (This)->lpVtbl->Parse(This,descriptor,parsed) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbEndpointDescriptorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbInterface[] = L"Windows.Devices.Usb.IUsbInterface";
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BulkInPipes )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInPipe * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InterruptInPipes )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInPipe * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BulkOutPipes )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutPipe * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InterruptOutPipes )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutPipe * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InterfaceSettings )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterfaceSetting * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InterfaceNumber )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Descriptors )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceVtbl;
interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterface
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BulkInPipes(This,value) )
    ( (This)->lpVtbl->get_InterruptInPipes(This,value) )
    ( (This)->lpVtbl->get_BulkOutPipes(This,value) )
    ( (This)->lpVtbl->get_InterruptOutPipes(This,value) )
    ( (This)->lpVtbl->get_InterfaceSettings(This,value) )
    ( (This)->lpVtbl->get_InterfaceNumber(This,value) )
    ( (This)->lpVtbl->get_Descriptors(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbInterface;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbInterfaceDescriptor[] = L"Windows.Devices.Usb.IUsbInterfaceDescriptor";
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ClassCode )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SubclassCode )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProtocolCode )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AlternateSettingNumber )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InterfaceNumber )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor * This,
                           __RPC__out BYTE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorVtbl;
interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ClassCode(This,value) )
    ( (This)->lpVtbl->get_SubclassCode(This,value) )
    ( (This)->lpVtbl->get_ProtocolCode(This,value) )
    ( (This)->lpVtbl->get_AlternateSettingNumber(This,value) )
    ( (This)->lpVtbl->get_InterfaceNumber(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbInterfaceDescriptorStatics[] = L"Windows.Devices.Usb.IUsbInterfaceDescriptorStatics";
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryParse )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * descriptor,
                   __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor * * parsed,
                           __RPC__out boolean * success
        );
    HRESULT ( STDMETHODCALLTYPE *Parse )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbDescriptor * descriptor,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor * * parsed
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryParse(This,descriptor,parsed,success) )
    ( (This)->lpVtbl->Parse(This,descriptor,parsed) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbInterfaceSetting[] = L"Windows.Devices.Usb.IUsbInterfaceSetting";
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSettingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BulkInEndpoints )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkInEndpointDescriptor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InterruptInEndpoints )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptInEndpointDescriptor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BulkOutEndpoints )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbBulkOutEndpointDescriptor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InterruptOutEndpoints )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbInterruptOutEndpointDescriptor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Selected )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SelectSettingAsync )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InterfaceDescriptor )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceDescriptor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Descriptors )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CUsb__CUsbDescriptor * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSettingVtbl;
interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSettingVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BulkInEndpoints(This,value) )
    ( (This)->lpVtbl->get_InterruptInEndpoints(This,value) )
    ( (This)->lpVtbl->get_BulkOutEndpoints(This,value) )
    ( (This)->lpVtbl->get_InterruptOutEndpoints(This,value) )
    ( (This)->lpVtbl->get_Selected(This,value) )
    ( (This)->lpVtbl->SelectSettingAsync(This,operation) )
    ( (This)->lpVtbl->get_InterfaceDescriptor(This,value) )
    ( (This)->lpVtbl->get_Descriptors(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbInterfaceSetting;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbInterruptInEndpointDescriptor[] = L"Windows.Devices.Usb.IUsbInterruptInEndpointDescriptor";
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MaxPacketSize )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EndpointNumber )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Interval )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Pipe )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptorVtbl;
interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MaxPacketSize(This,value) )
    ( (This)->lpVtbl->get_EndpointNumber(This,value) )
    ( (This)->lpVtbl->get_Interval(This,value) )
    ( (This)->lpVtbl->get_Pipe(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbInterruptInEventArgs[] = L"Windows.Devices.Usb.IUsbInterruptInEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InterruptData )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InterruptData(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbInterruptInPipe[] = L"Windows.Devices.Usb.IUsbInterruptInPipe";
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EndpointDescriptor )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInEndpointDescriptor * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ClearStallAsync )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DataReceived )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CUsb__CUsbInterruptInPipe_Windows__CDevices__CUsb__CUsbInterruptInEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DataReceived )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipeVtbl;
interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EndpointDescriptor(This,value) )
    ( (This)->lpVtbl->ClearStallAsync(This,operation) )
    ( (This)->lpVtbl->add_DataReceived(This,handler,token) )
    ( (This)->lpVtbl->remove_DataReceived(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptInPipe;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbInterruptOutEndpointDescriptor[] = L"Windows.Devices.Usb.IUsbInterruptOutEndpointDescriptor";
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MaxPacketSize )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EndpointNumber )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Interval )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Pipe )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptorVtbl;
interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MaxPacketSize(This,value) )
    ( (This)->lpVtbl->get_EndpointNumber(This,value) )
    ( (This)->lpVtbl->get_Interval(This,value) )
    ( (This)->lpVtbl->get_Pipe(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbInterruptOutPipe[] = L"Windows.Devices.Usb.IUsbInterruptOutPipe";
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EndpointDescriptor )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutEndpointDescriptor * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ClearStallAsync )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *put_WriteOptions )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe * This,
                  __x_ABI_CWindows_CDevices_CUsb_CUsbWriteOptions value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WriteOptions )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CUsb_CUsbWriteOptions * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutputStream )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipeVtbl;
interface __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EndpointDescriptor(This,value) )
    ( (This)->lpVtbl->ClearStallAsync(This,operation) )
    ( (This)->lpVtbl->put_WriteOptions(This,value) )
    ( (This)->lpVtbl->get_WriteOptions(This,value) )
    ( (This)->lpVtbl->get_OutputStream(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbInterruptOutPipe;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbSetupPacket[] = L"Windows.Devices.Usb.IUsbSetupPacket";
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RequestType )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RequestType )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbControlRequestType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Request )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * This,
                  BYTE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Index )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Index )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Length )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Length )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * This,
                  UINT32 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketVtbl;
interface __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RequestType(This,value) )
    ( (This)->lpVtbl->put_RequestType(This,value) )
    ( (This)->lpVtbl->get_Request(This,value) )
    ( (This)->lpVtbl->put_Request(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->put_Value(This,value) )
    ( (This)->lpVtbl->get_Index(This,value) )
    ( (This)->lpVtbl->put_Index(This,value) )
    ( (This)->lpVtbl->get_Length(This,value) )
    ( (This)->lpVtbl->put_Length(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Usb_IUsbSetupPacketFactory[] = L"Windows.Devices.Usb.IUsbSetupPacketFactory";
typedef struct __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithEightByteBuffer )(
        __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * eightByteBuffer,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacket * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWithEightByteBuffer(This,eightByteBuffer,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CUsb_CIUsbSetupPacketFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbBulkInEndpointDescriptor[] = L"Windows.Devices.Usb.UsbBulkInEndpointDescriptor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbBulkInPipe[] = L"Windows.Devices.Usb.UsbBulkInPipe";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbBulkOutEndpointDescriptor[] = L"Windows.Devices.Usb.UsbBulkOutEndpointDescriptor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbBulkOutPipe[] = L"Windows.Devices.Usb.UsbBulkOutPipe";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbConfiguration[] = L"Windows.Devices.Usb.UsbConfiguration";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbConfigurationDescriptor[] = L"Windows.Devices.Usb.UsbConfigurationDescriptor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbControlRequestType[] = L"Windows.Devices.Usb.UsbControlRequestType";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbDescriptor[] = L"Windows.Devices.Usb.UsbDescriptor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbDevice[] = L"Windows.Devices.Usb.UsbDevice";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbDeviceClass[] = L"Windows.Devices.Usb.UsbDeviceClass";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbDeviceClasses[] = L"Windows.Devices.Usb.UsbDeviceClasses";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbDeviceDescriptor[] = L"Windows.Devices.Usb.UsbDeviceDescriptor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbEndpointDescriptor[] = L"Windows.Devices.Usb.UsbEndpointDescriptor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbInterface[] = L"Windows.Devices.Usb.UsbInterface";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbInterfaceDescriptor[] = L"Windows.Devices.Usb.UsbInterfaceDescriptor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbInterfaceSetting[] = L"Windows.Devices.Usb.UsbInterfaceSetting";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbInterruptInEndpointDescriptor[] = L"Windows.Devices.Usb.UsbInterruptInEndpointDescriptor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbInterruptInEventArgs[] = L"Windows.Devices.Usb.UsbInterruptInEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbInterruptInPipe[] = L"Windows.Devices.Usb.UsbInterruptInPipe";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbInterruptOutEndpointDescriptor[] = L"Windows.Devices.Usb.UsbInterruptOutEndpointDescriptor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbInterruptOutPipe[] = L"Windows.Devices.Usb.UsbInterruptOutPipe";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Usb_UsbSetupPacket[] = L"Windows.Devices.Usb.UsbSetupPacket";
       
       
#pragma clang diagnostic pop
