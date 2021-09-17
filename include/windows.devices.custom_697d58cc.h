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
typedef interface __x_ABI_CWindows_CDevices_CCustom_CICustomDevice __x_ABI_CWindows_CDevices_CCustom_CICustomDevice;
typedef interface __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics;
typedef interface __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode;
typedef interface __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory;
typedef interface __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDeviceVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDeviceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CCustom__CCustomDevice **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice * This, __RPC__out __x_ABI_CWindows_CDevices_CCustom_CICustomDevice * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDeviceVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDeviceVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIOutputStream __x_ABI_CWindows_CStorage_CStreams_CIOutputStream;
typedef enum __x_ABI_CWindows_CDevices_CCustom_CDeviceAccessMode __x_ABI_CWindows_CDevices_CCustom_CDeviceAccessMode;
typedef enum __x_ABI_CWindows_CDevices_CCustom_CDeviceSharingMode __x_ABI_CWindows_CDevices_CCustom_CDeviceSharingMode;
typedef enum __x_ABI_CWindows_CDevices_CCustom_CIOControlAccessMode __x_ABI_CWindows_CDevices_CCustom_CIOControlAccessMode;
typedef enum __x_ABI_CWindows_CDevices_CCustom_CIOControlBufferingMethod __x_ABI_CWindows_CDevices_CCustom_CIOControlBufferingMethod;
enum __x_ABI_CWindows_CDevices_CCustom_CDeviceAccessMode
{
    DeviceAccessMode_Read = 0,
    DeviceAccessMode_Write = 1,
    DeviceAccessMode_ReadWrite = 2,
};
enum __x_ABI_CWindows_CDevices_CCustom_CDeviceSharingMode
{
    DeviceSharingMode_Shared = 0,
    DeviceSharingMode_Exclusive = 1,
};
enum __x_ABI_CWindows_CDevices_CCustom_CIOControlAccessMode
{
    IOControlAccessMode_Any = 0,
    IOControlAccessMode_Read = 1,
    IOControlAccessMode_Write = 2,
    IOControlAccessMode_ReadWrite = 3,
};
enum __x_ABI_CWindows_CDevices_CCustom_CIOControlBufferingMethod
{
    IOControlBufferingMethod_Buffered = 0,
    IOControlBufferingMethod_DirectInput = 1,
    IOControlBufferingMethod_DirectOutput = 2,
    IOControlBufferingMethod_Neither = 3,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Custom_ICustomDevice[] = L"Windows.Devices.Custom.ICustomDevice";
typedef struct __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDevice * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDevice * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDevice * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDevice * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDevice * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDevice * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InputStream )(
        __x_ABI_CWindows_CDevices_CCustom_CICustomDevice * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutputStream )(
        __x_ABI_CWindows_CDevices_CCustom_CICustomDevice * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SendIOControlAsync )(
        __x_ABI_CWindows_CDevices_CCustom_CICustomDevice * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * ioControlCode,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * inputBuffer,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * outputBuffer,
                           __RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TrySendIOControlAsync )(
        __x_ABI_CWindows_CDevices_CCustom_CICustomDevice * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * ioControlCode,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * inputBuffer,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * outputBuffer,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceVtbl;
interface __x_ABI_CWindows_CDevices_CCustom_CICustomDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InputStream(This,value) )
    ( (This)->lpVtbl->get_OutputStream(This,value) )
    ( (This)->lpVtbl->SendIOControlAsync(This,ioControlCode,inputBuffer,outputBuffer,operation) )
    ( (This)->lpVtbl->TrySendIOControlAsync(This,ioControlCode,inputBuffer,outputBuffer,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CCustom_CICustomDevice;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Custom_ICustomDeviceStatics[] = L"Windows.Devices.Custom.ICustomDeviceStatics";
typedef struct __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics * This,
                  GUID classGuid,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics * This,
                  __RPC__in HSTRING deviceId,
                  __x_ABI_CWindows_CDevices_CCustom_CDeviceAccessMode desiredAccess,
                  __x_ABI_CWindows_CDevices_CCustom_CDeviceSharingMode sharingMode,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CCustom__CCustomDevice * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelector(This,classGuid,value) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,desiredAccess,sharingMode,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CCustom_CICustomDeviceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Custom_IIOControlCode[] = L"Windows.Devices.Custom.IIOControlCode";
typedef struct __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AccessMode )(
        __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CCustom_CIOControlAccessMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BufferingMethod )(
        __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CCustom_CIOControlBufferingMethod * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Function )(
        __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceType )(
        __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ControlCode )(
        __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeVtbl;
interface __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AccessMode(This,value) )
    ( (This)->lpVtbl->get_BufferingMethod(This,value) )
    ( (This)->lpVtbl->get_Function(This,value) )
    ( (This)->lpVtbl->get_DeviceType(This,value) )
    ( (This)->lpVtbl->get_ControlCode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CCustom_CIIOControlCode;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Custom_IIOControlCodeFactory[] = L"Windows.Devices.Custom.IIOControlCodeFactory";
typedef struct __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateIOControlCode )(
        __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory * This,
                  UINT16 deviceType,
                  UINT16 function,
                  __x_ABI_CWindows_CDevices_CCustom_CIOControlAccessMode accessMode,
                  __x_ABI_CWindows_CDevices_CCustom_CIOControlBufferingMethod bufferingMethod,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CCustom_CIIOControlCode * * instance
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactoryVtbl;
interface __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateIOControlCode(This,deviceType,function,accessMode,bufferingMethod,instance) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CCustom_CIIOControlCodeFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Custom_IKnownDeviceTypesStatics[] = L"Windows.Devices.Custom.IKnownDeviceTypesStatics";
typedef struct __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Unknown )(
        __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics * This,
                           __RPC__out UINT16 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Unknown(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CCustom_CIKnownDeviceTypesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Custom_CustomDevice[] = L"Windows.Devices.Custom.CustomDevice";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Custom_IOControlCode[] = L"Windows.Devices.Custom.IOControlCode";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Custom_KnownDeviceTypes[] = L"Windows.Devices.Custom.KnownDeviceTypes";
       
       
#pragma clang diagnostic pop
