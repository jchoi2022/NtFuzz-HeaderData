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
#include "Windows.Devices.Bluetooth.GenericAttributeProfile.h"
#include "Windows.Devices.Bluetooth.Rfcomm.h"
#include "Windows.Devices.Enumeration.h"
#include "Windows.Devices.Radios.h"
#include "Windows.Networking.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter2 __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter2;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2 __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3 __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4 __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice5 __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice5;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2 __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2 __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3 __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4 __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice5 __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice5;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2 __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter;
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapterVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapterVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothAdapter **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapterVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapterVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDeviceVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDeviceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothDevice **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDeviceVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDeviceVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDeviceVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDeviceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDeviceVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDeviceVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CDevices_CRadios_CIRadio __x_ABI_CWindows_CDevices_CRadios_CIRadio;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadioVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadioVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadioVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadioVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CRadios__CRadio **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio * This, __RPC__out __x_ABI_CWindows_CDevices_CRadios_CIRadio * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadioVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadioVtbl *lpVtbl;
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
typedef interface __FIIterator_1_Windows__CStorage__CStreams__CIBuffer __FIIterator_1_Windows__CStorage__CStreams__CIBuffer;
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CStreams__CIBuffer;
typedef struct __FIIterator_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIBuffer * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CStreams__CIBufferVtbl;
interface __FIIterator_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CStorage__CStreams__CIBuffer __FIIterable_1_Windows__CStorage__CStreams__CIBuffer;
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CStreams__CIBuffer;
typedef struct __FIIterable_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIBuffer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIBuffer * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CStreams__CIBuffer **first);
    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CStreams__CIBufferVtbl;
interface __FIIterable_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer;
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CStreams__CIBuffer;
typedef struct __FIVectorView_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This,
                       __x_ABI_CWindows_CStorage_CStreams_CIBuffer * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CStreams__CIBufferVtbl;
interface __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService;
typedef interface __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService;
typedef struct __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServiceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServiceVtbl;
interface __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServiceVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService;
typedef struct __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServiceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServiceVtbl;
interface __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServiceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService;
typedef struct __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServiceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
                       __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceService * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServiceVtbl;
interface __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServiceVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceAccessStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This, __RPC__out enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceAccessStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatusVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatusVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServicesResult __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServicesResult;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommDeviceServicesResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResultVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResultVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService;
typedef interface __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService;
typedef struct __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServiceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServiceVtbl;
interface __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServiceVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService;
typedef struct __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServiceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServiceVtbl;
interface __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServiceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService;
typedef struct __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServiceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
                       __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServiceVtbl;
interface __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServiceVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServicesResult __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServicesResult;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * This, __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceServicesResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResultVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResultVtbl *lpVtbl;
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
typedef interface __FIReference_1_short __FIReference_1_short;
EXTERN_C const IID IID___FIReference_1_short;
typedef struct __FIReference_1_shortVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_short * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_short * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_short * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_short * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_short * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_short * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_short * This, __RPC__out short *value);
    END_INTERFACE
} __FIReference_1_shortVtbl;
interface __FIReference_1_short
{
    CONST_VTBL struct __FIReference_1_shortVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
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
typedef interface __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation;
typedef enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceAccessStatus __x_ABI_CWindows_CDevices_CEnumeration_CDeviceAccessStatus;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CNetworking_CIHostName __x_ABI_CWindows_CNetworking_CIHostName;
typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothAddressType __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothAddressType;
typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothCacheMode __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothCacheMode;
typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothConnectionStatus __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothConnectionStatus;
typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothError __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothError;
typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothMajorClass __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothMajorClass;
typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothMinorClass __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothMinorClass;
typedef enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothServiceCapabilities __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothServiceCapabilities;
enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothAddressType
{
    BluetoothAddressType_Public = 0,
    BluetoothAddressType_Random = 1,
    BluetoothAddressType_Unspecified = 2,
};
enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothCacheMode
{
    BluetoothCacheMode_Cached = 0,
    BluetoothCacheMode_Uncached = 1,
};
enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothConnectionStatus
{
    BluetoothConnectionStatus_Disconnected = 0,
    BluetoothConnectionStatus_Connected = 1,
};
enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothError
{
    BluetoothError_Success = 0,
    BluetoothError_RadioNotAvailable = 1,
    BluetoothError_ResourceInUse = 2,
    BluetoothError_DeviceNotConnected = 3,
    BluetoothError_OtherError = 4,
    BluetoothError_DisabledByPolicy = 5,
    BluetoothError_NotSupported = 6,
    BluetoothError_DisabledByUser = 7,
    BluetoothError_ConsentRequired = 8,
    BluetoothError_TransportNotSupported = 9,
};
enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothMajorClass
{
    BluetoothMajorClass_Miscellaneous = 0,
    BluetoothMajorClass_Computer = 1,
    BluetoothMajorClass_Phone = 2,
    BluetoothMajorClass_NetworkAccessPoint = 3,
    BluetoothMajorClass_AudioVideo = 4,
    BluetoothMajorClass_Peripheral = 5,
    BluetoothMajorClass_Imaging = 6,
    BluetoothMajorClass_Wearable = 7,
    BluetoothMajorClass_Toy = 8,
    BluetoothMajorClass_Health = 9,
};
enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothMinorClass
{
    BluetoothMinorClass_Uncategorized = 0,
    BluetoothMinorClass_ComputerDesktop = 1,
    BluetoothMinorClass_ComputerServer = 2,
    BluetoothMinorClass_ComputerLaptop = 3,
    BluetoothMinorClass_ComputerHandheld = 4,
    BluetoothMinorClass_ComputerPalmSize = 5,
    BluetoothMinorClass_ComputerWearable = 6,
    BluetoothMinorClass_ComputerTablet = 7,
    BluetoothMinorClass_PhoneCellular = 1,
    BluetoothMinorClass_PhoneCordless = 2,
    BluetoothMinorClass_PhoneSmartPhone = 3,
    BluetoothMinorClass_PhoneWired = 4,
    BluetoothMinorClass_PhoneIsdn = 5,
    BluetoothMinorClass_NetworkFullyAvailable = 0,
    BluetoothMinorClass_NetworkUsed01To17Percent = 8,
    BluetoothMinorClass_NetworkUsed17To33Percent = 16,
    BluetoothMinorClass_NetworkUsed33To50Percent = 24,
    BluetoothMinorClass_NetworkUsed50To67Percent = 32,
    BluetoothMinorClass_NetworkUsed67To83Percent = 40,
    BluetoothMinorClass_NetworkUsed83To99Percent = 48,
    BluetoothMinorClass_NetworkNoServiceAvailable = 56,
    BluetoothMinorClass_AudioVideoWearableHeadset = 1,
    BluetoothMinorClass_AudioVideoHandsFree = 2,
    BluetoothMinorClass_AudioVideoMicrophone = 4,
    BluetoothMinorClass_AudioVideoLoudspeaker = 5,
    BluetoothMinorClass_AudioVideoHeadphones = 6,
    BluetoothMinorClass_AudioVideoPortableAudio = 7,
    BluetoothMinorClass_AudioVideoCarAudio = 8,
    BluetoothMinorClass_AudioVideoSetTopBox = 9,
    BluetoothMinorClass_AudioVideoHifiAudioDevice = 10,
    BluetoothMinorClass_AudioVideoVcr = 11,
    BluetoothMinorClass_AudioVideoVideoCamera = 12,
    BluetoothMinorClass_AudioVideoCamcorder = 13,
    BluetoothMinorClass_AudioVideoVideoMonitor = 14,
    BluetoothMinorClass_AudioVideoVideoDisplayAndLoudspeaker = 15,
    BluetoothMinorClass_AudioVideoVideoConferencing = 16,
    BluetoothMinorClass_AudioVideoGamingOrToy = 18,
    BluetoothMinorClass_PeripheralJoystick = 1,
    BluetoothMinorClass_PeripheralGamepad = 2,
    BluetoothMinorClass_PeripheralRemoteControl = 3,
    BluetoothMinorClass_PeripheralSensing = 4,
    BluetoothMinorClass_PeripheralDigitizerTablet = 5,
    BluetoothMinorClass_PeripheralCardReader = 6,
    BluetoothMinorClass_PeripheralDigitalPen = 7,
    BluetoothMinorClass_PeripheralHandheldScanner = 8,
    BluetoothMinorClass_PeripheralHandheldGesture = 9,
    BluetoothMinorClass_WearableWristwatch = 1,
    BluetoothMinorClass_WearablePager = 2,
    BluetoothMinorClass_WearableJacket = 3,
    BluetoothMinorClass_WearableHelmet = 4,
    BluetoothMinorClass_WearableGlasses = 5,
    BluetoothMinorClass_ToyRobot = 1,
    BluetoothMinorClass_ToyVehicle = 2,
    BluetoothMinorClass_ToyDoll = 3,
    BluetoothMinorClass_ToyController = 4,
    BluetoothMinorClass_ToyGame = 5,
    BluetoothMinorClass_HealthBloodPressureMonitor = 1,
    BluetoothMinorClass_HealthThermometer = 2,
    BluetoothMinorClass_HealthWeighingScale = 3,
    BluetoothMinorClass_HealthGlucoseMeter = 4,
    BluetoothMinorClass_HealthPulseOximeter = 5,
    BluetoothMinorClass_HealthHeartRateMonitor = 6,
    BluetoothMinorClass_HealthHealthDataDisplay = 7,
    BluetoothMinorClass_HealthStepCounter = 8,
    BluetoothMinorClass_HealthBodyCompositionAnalyzer = 9,
    BluetoothMinorClass_HealthPeakFlowMonitor = 10,
    BluetoothMinorClass_HealthMedicationMonitor = 11,
    BluetoothMinorClass_HealthKneeProsthesis = 12,
    BluetoothMinorClass_HealthAnkleProsthesis = 13,
    BluetoothMinorClass_HealthGenericHealthManager = 14,
    BluetoothMinorClass_HealthPersonalMobilityDevice = 15,
};
enum __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothServiceCapabilities
{
    BluetoothServiceCapabilities_None = 0,
    BluetoothServiceCapabilities_LimitedDiscoverableMode = 0x1,
    BluetoothServiceCapabilities_PositioningService = 0x8,
    BluetoothServiceCapabilities_NetworkingService = 0x10,
    BluetoothServiceCapabilities_RenderingService = 0x20,
    BluetoothServiceCapabilities_CapturingService = 0x40,
    BluetoothServiceCapabilities_ObjectTransferService = 0x80,
    BluetoothServiceCapabilities_AudioService = 0x100,
    BluetoothServiceCapabilities_TelephoneService = 0x200,
    BluetoothServiceCapabilities_InformationService = 0x400,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothAdapter[] = L"Windows.Devices.Bluetooth.IBluetoothAdapter";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BluetoothAddress )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsClassicSupported )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsLowEnergySupported )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPeripheralRoleSupported )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCentralRoleSupported )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsAdvertisementOffloadSupported )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetRadioAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CRadios__CRadio * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_BluetoothAddress(This,value) )
    ( (This)->lpVtbl->get_IsClassicSupported(This,value) )
    ( (This)->lpVtbl->get_IsLowEnergySupported(This,value) )
    ( (This)->lpVtbl->get_IsPeripheralRoleSupported(This,value) )
    ( (This)->lpVtbl->get_IsCentralRoleSupported(This,value) )
    ( (This)->lpVtbl->get_IsAdvertisementOffloadSupported(This,value) )
    ( (This)->lpVtbl->GetRadioAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothAdapter2[] = L"Windows.Devices.Bluetooth.IBluetoothAdapter2";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AreClassicSecureConnectionsSupported )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AreLowEnergySecureConnectionsSupported )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter2Vtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AreClassicSecureConnectionsSupported(This,value) )
    ( (This)->lpVtbl->get_AreLowEnergySecureConnectionsSupported(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapter2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothAdapterStatics[] = L"Windows.Devices.Bluetooth.IBluetoothAdapterStatics";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics * This,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetDefaultAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothAdapter * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelector(This,result) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,operation) )
    ( (This)->lpVtbl->GetDefaultAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothAdapterStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothClassOfDevice[] = L"Windows.Devices.Bluetooth.IBluetoothClassOfDevice";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RawValue )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MajorClass )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothMajorClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinorClass )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothMinorClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServiceCapabilities )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothServiceCapabilities * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RawValue(This,value) )
    ( (This)->lpVtbl->get_MajorClass(This,value) )
    ( (This)->lpVtbl->get_MinorClass(This,value) )
    ( (This)->lpVtbl->get_ServiceCapabilities(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothClassOfDeviceStatics[] = L"Windows.Devices.Bluetooth.IBluetoothClassOfDeviceStatics";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromRawValue )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics * This,
                  UINT32 rawValue,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice * * classOfDevice
        );
    HRESULT ( STDMETHODCALLTYPE *FromParts )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics * This,
                  __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothMajorClass majorClass,
                  __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothMinorClass minorClass,
                  __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothServiceCapabilities serviceCapabilities,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice * * classOfDevice
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromRawValue(This,rawValue,classOfDevice) )
    ( (This)->lpVtbl->FromParts(This,majorClass,minorClass,serviceCapabilities,classOfDevice) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDeviceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothDevice[] = L"Windows.Devices.Bluetooth.IBluetoothDevice";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HostName )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ClassOfDevice )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SdpRecords )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CStorage__CStreams__CIBuffer * * value
        );
    DEPRECATED("Use GetRfcommServicesAsync instead of RfcommServices.  For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_RfcommServices )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceService * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ConnectionStatus )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothConnectionStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BluetoothAddress )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
                           __RPC__out UINT64 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_NameChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_NameChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SdpRecordsChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SdpRecordsChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ConnectionStatusChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothDevice_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ConnectionStatusChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_HostName(This,value) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_ClassOfDevice(This,value) )
    ( (This)->lpVtbl->get_SdpRecords(This,value) )
DEPRECATED("Use GetRfcommServicesAsync instead of RfcommServices.  For more info, see MSDN.")
    ( (This)->lpVtbl->get_RfcommServices(This,value) )
    ( (This)->lpVtbl->get_ConnectionStatus(This,value) )
    ( (This)->lpVtbl->get_BluetoothAddress(This,value) )
    ( (This)->lpVtbl->add_NameChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_NameChanged(This,token) )
    ( (This)->lpVtbl->add_SdpRecordsChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_SdpRecordsChanged(This,token) )
    ( (This)->lpVtbl->add_ConnectionStatusChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ConnectionStatusChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothDevice2[] = L"Windows.Devices.Bluetooth.IBluetoothDevice2";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceInformation )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2Vtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceInformation(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothDevice3[] = L"Windows.Devices.Bluetooth.IBluetoothDevice3";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceAccessInformation )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation * * value
        );
    HRESULT ( STDMETHODCALLTYPE *RequestAccessAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *GetRfcommServicesAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetRfcommServicesWithCacheModeAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3 * This,
                  __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothCacheMode cacheMode,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetRfcommServicesForIdAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * serviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetRfcommServicesForIdWithCacheModeAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CRfcomm_CIRfcommServiceId * serviceId,
                  __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothCacheMode cacheMode,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CRfcomm__CRfcommDeviceServicesResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3Vtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceAccessInformation(This,value) )
    ( (This)->lpVtbl->RequestAccessAsync(This,value) )
    ( (This)->lpVtbl->GetRfcommServicesAsync(This,operation) )
    ( (This)->lpVtbl->GetRfcommServicesWithCacheModeAsync(This,cacheMode,operation) )
    ( (This)->lpVtbl->GetRfcommServicesForIdAsync(This,serviceId,operation) )
    ( (This)->lpVtbl->GetRfcommServicesForIdWithCacheModeAsync(This,serviceId,cacheMode,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothDevice4[] = L"Windows.Devices.Bluetooth.IBluetoothDevice4";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BluetoothDeviceId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4Vtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BluetoothDeviceId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothDevice5[] = L"Windows.Devices.Bluetooth.IBluetoothDevice5";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_WasSecureConnectionUsedForPairing )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice5 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice5Vtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice5
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_WasSecureConnectionUsedForPairing(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDevice5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothDeviceId[] = L"Windows.Devices.Bluetooth.IBluetoothDeviceId";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsClassicDevice )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsLowEnergyDevice )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_IsClassicDevice(This,value) )
    ( (This)->lpVtbl->get_IsLowEnergyDevice(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothDeviceIdStatics[] = L"Windows.Devices.Bluetooth.IBluetoothDeviceIdStatics";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromId(This,deviceId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceIdStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothDeviceStatics[] = L"Windows.Devices.Bluetooth.IBluetoothDeviceStatics";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *FromHostNameAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * hostName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *FromBluetoothAddressAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics * This,
                  UINT64 address,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothDevice * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics * This,
                           __RPC__deref_out_opt HSTRING * deviceSelector
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,operation) )
    ( (This)->lpVtbl->FromHostNameAsync(This,hostName,operation) )
    ( (This)->lpVtbl->FromBluetoothAddressAsync(This,address,operation) )
    ( (This)->lpVtbl->GetDeviceSelector(This,deviceSelector) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothDeviceStatics2[] = L"Windows.Devices.Bluetooth.IBluetoothDeviceStatics2";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromPairingState )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2 * This,
                  boolean pairingState,
                           __RPC__deref_out_opt HSTRING * deviceSelector
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromConnectionStatus )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2 * This,
                  __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothConnectionStatus connectionStatus,
                           __RPC__deref_out_opt HSTRING * deviceSelector
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromDeviceName )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2 * This,
                  __RPC__in HSTRING deviceName,
                           __RPC__deref_out_opt HSTRING * deviceSelector
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromBluetoothAddress )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2 * This,
                  UINT64 bluetoothAddress,
                           __RPC__deref_out_opt HSTRING * deviceSelector
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromClassOfDevice )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothClassOfDevice * classOfDevice,
                           __RPC__deref_out_opt HSTRING * deviceSelector
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelectorFromPairingState(This,pairingState,deviceSelector) )
    ( (This)->lpVtbl->GetDeviceSelectorFromConnectionStatus(This,connectionStatus,deviceSelector) )
    ( (This)->lpVtbl->GetDeviceSelectorFromDeviceName(This,deviceName,deviceSelector) )
    ( (This)->lpVtbl->GetDeviceSelectorFromBluetoothAddress(This,bluetoothAddress,deviceSelector) )
    ( (This)->lpVtbl->GetDeviceSelectorFromClassOfDevice(This,classOfDevice,deviceSelector) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothLEAppearance[] = L"Windows.Devices.Bluetooth.IBluetoothLEAppearance";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RawValue )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Category )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SubCategory )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance * This,
                           __RPC__out UINT16 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RawValue(This,value) )
    ( (This)->lpVtbl->get_Category(This,value) )
    ( (This)->lpVtbl->get_SubCategory(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothLEAppearanceCategoriesStatics[] = L"Windows.Devices.Bluetooth.IBluetoothLEAppearanceCategoriesStatics";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Uncategorized )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Phone )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Computer )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Watch )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Clock )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Display )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemoteControl )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EyeGlasses )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Tag )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Keyring )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediaPlayer )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BarcodeScanner )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Thermometer )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HeartRate )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BloodPressure )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HumanInterfaceDevice )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GlucoseMeter )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RunningWalking )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Cycling )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PulseOximeter )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WeightScale )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutdoorSportActivity )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Uncategorized(This,value) )
    ( (This)->lpVtbl->get_Phone(This,value) )
    ( (This)->lpVtbl->get_Computer(This,value) )
    ( (This)->lpVtbl->get_Watch(This,value) )
    ( (This)->lpVtbl->get_Clock(This,value) )
    ( (This)->lpVtbl->get_Display(This,value) )
    ( (This)->lpVtbl->get_RemoteControl(This,value) )
    ( (This)->lpVtbl->get_EyeGlasses(This,value) )
    ( (This)->lpVtbl->get_Tag(This,value) )
    ( (This)->lpVtbl->get_Keyring(This,value) )
    ( (This)->lpVtbl->get_MediaPlayer(This,value) )
    ( (This)->lpVtbl->get_BarcodeScanner(This,value) )
    ( (This)->lpVtbl->get_Thermometer(This,value) )
    ( (This)->lpVtbl->get_HeartRate(This,value) )
    ( (This)->lpVtbl->get_BloodPressure(This,value) )
    ( (This)->lpVtbl->get_HumanInterfaceDevice(This,value) )
    ( (This)->lpVtbl->get_GlucoseMeter(This,value) )
    ( (This)->lpVtbl->get_RunningWalking(This,value) )
    ( (This)->lpVtbl->get_Cycling(This,value) )
    ( (This)->lpVtbl->get_PulseOximeter(This,value) )
    ( (This)->lpVtbl->get_WeightScale(This,value) )
    ( (This)->lpVtbl->get_OutdoorSportActivity(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceCategoriesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothLEAppearanceStatics[] = L"Windows.Devices.Bluetooth.IBluetoothLEAppearanceStatics";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromRawValue )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics * This,
                  UINT16 rawValue,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance * * appearance
        );
    HRESULT ( STDMETHODCALLTYPE *FromParts )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics * This,
                  UINT16 appearanceCategory,
                  UINT16 appearanceSubCategory,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance * * appearance
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromRawValue(This,rawValue,appearance) )
    ( (This)->lpVtbl->FromParts(This,appearanceCategory,appearanceSubCategory,appearance) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics[] = L"Windows.Devices.Bluetooth.IBluetoothLEAppearanceSubcategoriesStatics";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Generic )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SportsWatch )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ThermometerEar )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HeartRateBelt )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BloodPressureArm )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BloodPressureWrist )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Keyboard )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Mouse )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Joystick )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Gamepad )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DigitizerTablet )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CardReader )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DigitalPen )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BarcodeScanner )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RunningWalkingInShoe )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RunningWalkingOnShoe )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RunningWalkingOnHip )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CyclingComputer )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CyclingSpeedSensor )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CyclingCadenceSensor )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CyclingPowerSensor )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CyclingSpeedCadenceSensor )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OximeterFingertip )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OximeterWristWorn )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocationDisplay )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocationNavigationDisplay )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocationPod )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocationNavigationPod )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics * This,
                           __RPC__out UINT16 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Generic(This,value) )
    ( (This)->lpVtbl->get_SportsWatch(This,value) )
    ( (This)->lpVtbl->get_ThermometerEar(This,value) )
    ( (This)->lpVtbl->get_HeartRateBelt(This,value) )
    ( (This)->lpVtbl->get_BloodPressureArm(This,value) )
    ( (This)->lpVtbl->get_BloodPressureWrist(This,value) )
    ( (This)->lpVtbl->get_Keyboard(This,value) )
    ( (This)->lpVtbl->get_Mouse(This,value) )
    ( (This)->lpVtbl->get_Joystick(This,value) )
    ( (This)->lpVtbl->get_Gamepad(This,value) )
    ( (This)->lpVtbl->get_DigitizerTablet(This,value) )
    ( (This)->lpVtbl->get_CardReader(This,value) )
    ( (This)->lpVtbl->get_DigitalPen(This,value) )
    ( (This)->lpVtbl->get_BarcodeScanner(This,value) )
    ( (This)->lpVtbl->get_RunningWalkingInShoe(This,value) )
    ( (This)->lpVtbl->get_RunningWalkingOnShoe(This,value) )
    ( (This)->lpVtbl->get_RunningWalkingOnHip(This,value) )
    ( (This)->lpVtbl->get_CyclingComputer(This,value) )
    ( (This)->lpVtbl->get_CyclingSpeedSensor(This,value) )
    ( (This)->lpVtbl->get_CyclingCadenceSensor(This,value) )
    ( (This)->lpVtbl->get_CyclingPowerSensor(This,value) )
    ( (This)->lpVtbl->get_CyclingSpeedCadenceSensor(This,value) )
    ( (This)->lpVtbl->get_OximeterFingertip(This,value) )
    ( (This)->lpVtbl->get_OximeterWristWorn(This,value) )
    ( (This)->lpVtbl->get_LocationDisplay(This,value) )
    ( (This)->lpVtbl->get_LocationNavigationDisplay(This,value) )
    ( (This)->lpVtbl->get_LocationPod(This,value) )
    ( (This)->lpVtbl->get_LocationNavigationPod(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearanceSubcategoriesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothLEDevice[] = L"Windows.Devices.Bluetooth.IBluetoothLEDevice";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("Use GetGattServicesAsync instead of GattServices.  For more information, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_GattServices )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceService * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ConnectionStatus )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothConnectionStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BluetoothAddress )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This,
                           __RPC__out UINT64 * value
        );
    DEPRECATED("Use GetGattServicesForUuidAsync instead of GetGattService.  For more information, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *GetGattService )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This,
                  GUID serviceUuid,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CGenericAttributeProfile_CIGattDeviceService * * service
        );
                    HRESULT ( STDMETHODCALLTYPE *add_NameChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_NameChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_GattServicesChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_GattServicesChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ConnectionStatusChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CBluetooth__CBluetoothLEDevice_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ConnectionStatusChanged )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_Name(This,value) )
DEPRECATED("Use GetGattServicesAsync instead of GattServices.  For more information, see MSDN.")
    ( (This)->lpVtbl->get_GattServices(This,value) )
    ( (This)->lpVtbl->get_ConnectionStatus(This,value) )
    ( (This)->lpVtbl->get_BluetoothAddress(This,value) )
DEPRECATED("Use GetGattServicesForUuidAsync instead of GetGattService.  For more information, see MSDN.")
    ( (This)->lpVtbl->GetGattService(This,serviceUuid,service) )
    ( (This)->lpVtbl->add_NameChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_NameChanged(This,token) )
    ( (This)->lpVtbl->add_GattServicesChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_GattServicesChanged(This,token) )
    ( (This)->lpVtbl->add_ConnectionStatusChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ConnectionStatusChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothLEDevice2[] = L"Windows.Devices.Bluetooth.IBluetoothLEDevice2";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceInformation )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Appearance )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BluetoothAddressType )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2 * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothAddressType * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2Vtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceInformation(This,value) )
    ( (This)->lpVtbl->get_Appearance(This,value) )
    ( (This)->lpVtbl->get_BluetoothAddressType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothLEDevice3[] = L"Windows.Devices.Bluetooth.IBluetoothLEDevice3";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceAccessInformation )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation * * value
        );
    HRESULT ( STDMETHODCALLTYPE *RequestAccessAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetGattServicesAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetGattServicesWithCacheModeAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3 * This,
                  __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothCacheMode cacheMode,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetGattServicesForUuidAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3 * This,
                  GUID serviceUuid,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetGattServicesForUuidWithCacheModeAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3 * This,
                  GUID serviceUuid,
                  __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothCacheMode cacheMode,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CGenericAttributeProfile__CGattDeviceServicesResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3Vtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceAccessInformation(This,value) )
    ( (This)->lpVtbl->RequestAccessAsync(This,operation) )
    ( (This)->lpVtbl->GetGattServicesAsync(This,operation) )
    ( (This)->lpVtbl->GetGattServicesWithCacheModeAsync(This,cacheMode,operation) )
    ( (This)->lpVtbl->GetGattServicesForUuidAsync(This,serviceUuid,operation) )
    ( (This)->lpVtbl->GetGattServicesForUuidWithCacheModeAsync(This,serviceUuid,cacheMode,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothLEDevice4[] = L"Windows.Devices.Bluetooth.IBluetoothLEDevice4";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BluetoothDeviceId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothDeviceId * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4Vtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BluetoothDeviceId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothLEDevice5[] = L"Windows.Devices.Bluetooth.IBluetoothLEDevice5";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_WasSecureConnectionUsedForPairing )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice5 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice5Vtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice5
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_WasSecureConnectionUsedForPairing(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDevice5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothLEDeviceStatics[] = L"Windows.Devices.Bluetooth.IBluetoothLEDeviceStatics";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *FromBluetoothAddressAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics * This,
                  UINT64 bluetoothAddress,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics * This,
                           __RPC__deref_out_opt HSTRING * deviceSelector
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,operation) )
    ( (This)->lpVtbl->FromBluetoothAddressAsync(This,bluetoothAddress,operation) )
    ( (This)->lpVtbl->GetDeviceSelector(This,deviceSelector) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothLEDeviceStatics2[] = L"Windows.Devices.Bluetooth.IBluetoothLEDeviceStatics2";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromPairingState )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2 * This,
                  boolean pairingState,
                           __RPC__deref_out_opt HSTRING * deviceSelector
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromConnectionStatus )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2 * This,
                  __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothConnectionStatus connectionStatus,
                           __RPC__deref_out_opt HSTRING * deviceSelector
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromDeviceName )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2 * This,
                  __RPC__in HSTRING deviceName,
                           __RPC__deref_out_opt HSTRING * deviceSelector
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromBluetoothAddress )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2 * This,
                  UINT64 bluetoothAddress,
                           __RPC__deref_out_opt HSTRING * deviceSelector
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromBluetoothAddressWithBluetoothAddressType )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2 * This,
                  UINT64 bluetoothAddress,
                  __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothAddressType bluetoothAddressType,
                           __RPC__deref_out_opt HSTRING * deviceSelector
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromAppearance )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEAppearance * appearance,
                           __RPC__deref_out_opt HSTRING * deviceSelector
        );
                    HRESULT ( STDMETHODCALLTYPE *FromBluetoothAddressWithBluetoothAddressTypeAsync )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2 * This,
                  UINT64 bluetoothAddress,
                  __x_ABI_CWindows_CDevices_CBluetooth_CBluetoothAddressType bluetoothAddressType,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CBluetooth__CBluetoothLEDevice * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelectorFromPairingState(This,pairingState,deviceSelector) )
    ( (This)->lpVtbl->GetDeviceSelectorFromConnectionStatus(This,connectionStatus,deviceSelector) )
    ( (This)->lpVtbl->GetDeviceSelectorFromDeviceName(This,deviceName,deviceSelector) )
    ( (This)->lpVtbl->GetDeviceSelectorFromBluetoothAddress(This,bluetoothAddress,deviceSelector) )
    ( (This)->lpVtbl->GetDeviceSelectorFromBluetoothAddressWithBluetoothAddressType(This,bluetoothAddress,bluetoothAddressType,deviceSelector) )
    ( (This)->lpVtbl->GetDeviceSelectorFromAppearance(This,appearance,deviceSelector) )
    ( (This)->lpVtbl->FromBluetoothAddressWithBluetoothAddressTypeAsync(This,bluetoothAddress,bluetoothAddressType,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothLEDeviceStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothSignalStrengthFilter[] = L"Windows.Devices.Bluetooth.IBluetoothSignalStrengthFilter";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InRangeThresholdInDBm )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter * This,
                           __RPC__deref_out_opt __FIReference_1_short * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InRangeThresholdInDBm )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter * This,
                  __RPC__in_opt __FIReference_1_short * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutOfRangeThresholdInDBm )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter * This,
                           __RPC__deref_out_opt __FIReference_1_short * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OutOfRangeThresholdInDBm )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter * This,
                  __RPC__in_opt __FIReference_1_short * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutOfRangeTimeout )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OutOfRangeTimeout )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SamplingInterval )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SamplingInterval )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilterVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InRangeThresholdInDBm(This,value) )
    ( (This)->lpVtbl->put_InRangeThresholdInDBm(This,value) )
    ( (This)->lpVtbl->get_OutOfRangeThresholdInDBm(This,value) )
    ( (This)->lpVtbl->put_OutOfRangeThresholdInDBm(This,value) )
    ( (This)->lpVtbl->get_OutOfRangeTimeout(This,value) )
    ( (This)->lpVtbl->put_OutOfRangeTimeout(This,value) )
    ( (This)->lpVtbl->get_SamplingInterval(This,value) )
    ( (This)->lpVtbl->put_SamplingInterval(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothSignalStrengthFilter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Bluetooth_IBluetoothUuidHelperStatics[] = L"Windows.Devices.Bluetooth.IBluetoothUuidHelperStatics";
typedef struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromShortId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics * This,
                  UINT32 shortId,
                           __RPC__out GUID * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetShortId )(
        __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics * This,
                  GUID uuid,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromShortId(This,shortId,result) )
    ( (This)->lpVtbl->TryGetShortId(This,uuid,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CBluetooth_CIBluetoothUuidHelperStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_BluetoothAdapter[] = L"Windows.Devices.Bluetooth.BluetoothAdapter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_BluetoothClassOfDevice[] = L"Windows.Devices.Bluetooth.BluetoothClassOfDevice";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_BluetoothDevice[] = L"Windows.Devices.Bluetooth.BluetoothDevice";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_BluetoothDeviceId[] = L"Windows.Devices.Bluetooth.BluetoothDeviceId";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_BluetoothLEAppearance[] = L"Windows.Devices.Bluetooth.BluetoothLEAppearance";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_BluetoothLEAppearanceCategories[] = L"Windows.Devices.Bluetooth.BluetoothLEAppearanceCategories";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_BluetoothLEAppearanceSubcategories[] = L"Windows.Devices.Bluetooth.BluetoothLEAppearanceSubcategories";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_BluetoothLEDevice[] = L"Windows.Devices.Bluetooth.BluetoothLEDevice";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_BluetoothSignalStrengthFilter[] = L"Windows.Devices.Bluetooth.BluetoothSignalStrengthFilter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Bluetooth_BluetoothUuidHelper[] = L"Windows.Devices.Bluetooth.BluetoothUuidHelper";
       
       
#pragma clang diagnostic pop
