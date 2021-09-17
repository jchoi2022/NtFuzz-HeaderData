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
typedef interface __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice;
typedef interface __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDeviceVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDeviceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CSerialCommunication__CSerialDevice **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice * This, __RPC__out __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDeviceVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDeviceVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgs __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIOutputStream __x_ABI_CWindows_CStorage_CStreams_CIOutputStream;
typedef enum __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialError __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialError;
typedef enum __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialHandshake __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialHandshake;
typedef enum __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialParity __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialParity;
typedef enum __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialPinChange __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialPinChange;
typedef enum __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialStopBitCount __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialStopBitCount;
enum __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialError
{
    SerialError_Frame = 0,
    SerialError_BufferOverrun = 1,
    SerialError_ReceiveFull = 2,
    SerialError_ReceiveParity = 3,
    SerialError_TransmitFull = 4,
};
enum __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialHandshake
{
    SerialHandshake_None = 0,
    SerialHandshake_RequestToSend = 1,
    SerialHandshake_XOnXOff = 2,
    SerialHandshake_RequestToSendXOnXOff = 3,
};
enum __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialParity
{
    SerialParity_None = 0,
    SerialParity_Odd = 1,
    SerialParity_Even = 2,
    SerialParity_Mark = 3,
    SerialParity_Space = 4,
};
enum __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialPinChange
{
    SerialPinChange_BreakSignal = 0,
    SerialPinChange_CarrierDetect = 1,
    SerialPinChange_ClearToSend = 2,
    SerialPinChange_DataSetReady = 3,
    SerialPinChange_RingIndicator = 4,
};
enum __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialStopBitCount
{
    SerialStopBitCount_One = 0,
    SerialStopBitCount_OnePointFive = 1,
    SerialStopBitCount_Two = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SerialCommunication_IErrorReceivedEventArgs[] = L"Windows.Devices.SerialCommunication.IErrorReceivedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Error )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialError * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Error(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSerialCommunication_CIErrorReceivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SerialCommunication_IPinChangedEventArgs[] = L"Windows.Devices.SerialCommunication.IPinChangedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PinChange )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialPinChange * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PinChange(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSerialCommunication_CIPinChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SerialCommunication_ISerialDevice[] = L"Windows.Devices.SerialCommunication.ISerialDevice";
typedef struct __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BaudRate )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BaudRate )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BreakSignalState )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BreakSignalState )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BytesReceived )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CarrierDetectState )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ClearToSendState )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DataBits )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DataBits )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                  UINT16 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DataSetReadyState )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Handshake )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialHandshake * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handshake )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                  __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialHandshake value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDataTerminalReadyEnabled )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsDataTerminalReadyEnabled )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsRequestToSendEnabled )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsRequestToSendEnabled )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Parity )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialParity * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Parity )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                  __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialParity value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PortName )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReadTimeout )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ReadTimeout )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StopBits )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialStopBitCount * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StopBits )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                  __x_ABI_CWindows_CDevices_CSerialCommunication_CSerialStopBitCount value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UsbVendorId )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UsbProductId )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WriteTimeout )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_WriteTimeout )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InputStream )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutputStream )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ErrorReceived )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CErrorReceivedEventArgs * reportHandler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ErrorReceived )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PinChanged )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CSerialCommunication__CSerialDevice_Windows__CDevices__CSerialCommunication__CPinChangedEventArgs * reportHandler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PinChanged )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceVtbl;
interface __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BaudRate(This,value) )
    ( (This)->lpVtbl->put_BaudRate(This,value) )
    ( (This)->lpVtbl->get_BreakSignalState(This,value) )
    ( (This)->lpVtbl->put_BreakSignalState(This,value) )
    ( (This)->lpVtbl->get_BytesReceived(This,value) )
    ( (This)->lpVtbl->get_CarrierDetectState(This,value) )
    ( (This)->lpVtbl->get_ClearToSendState(This,value) )
    ( (This)->lpVtbl->get_DataBits(This,value) )
    ( (This)->lpVtbl->put_DataBits(This,value) )
    ( (This)->lpVtbl->get_DataSetReadyState(This,value) )
    ( (This)->lpVtbl->get_Handshake(This,value) )
    ( (This)->lpVtbl->put_Handshake(This,value) )
    ( (This)->lpVtbl->get_IsDataTerminalReadyEnabled(This,value) )
    ( (This)->lpVtbl->put_IsDataTerminalReadyEnabled(This,value) )
    ( (This)->lpVtbl->get_IsRequestToSendEnabled(This,value) )
    ( (This)->lpVtbl->put_IsRequestToSendEnabled(This,value) )
    ( (This)->lpVtbl->get_Parity(This,value) )
    ( (This)->lpVtbl->put_Parity(This,value) )
    ( (This)->lpVtbl->get_PortName(This,value) )
    ( (This)->lpVtbl->get_ReadTimeout(This,value) )
    ( (This)->lpVtbl->put_ReadTimeout(This,value) )
    ( (This)->lpVtbl->get_StopBits(This,value) )
    ( (This)->lpVtbl->put_StopBits(This,value) )
    ( (This)->lpVtbl->get_UsbVendorId(This,value) )
    ( (This)->lpVtbl->get_UsbProductId(This,value) )
    ( (This)->lpVtbl->get_WriteTimeout(This,value) )
    ( (This)->lpVtbl->put_WriteTimeout(This,value) )
    ( (This)->lpVtbl->get_InputStream(This,value) )
    ( (This)->lpVtbl->get_OutputStream(This,value) )
    ( (This)->lpVtbl->add_ErrorReceived(This,reportHandler,token) )
    ( (This)->lpVtbl->remove_ErrorReceived(This,token) )
    ( (This)->lpVtbl->add_PinChanged(This,reportHandler,token) )
    ( (This)->lpVtbl->remove_PinChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDevice;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_SerialCommunication_ISerialDeviceStatics[] = L"Windows.Devices.SerialCommunication.ISerialDeviceStatics";
typedef struct __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromPortName )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics * This,
                  __RPC__in HSTRING portName,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromUsbVidPid )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics * This,
                  UINT16 vendorId,
                  UINT16 productId,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CSerialCommunication__CSerialDevice * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelector(This,value) )
    ( (This)->lpVtbl->GetDeviceSelectorFromPortName(This,portName,result) )
    ( (This)->lpVtbl->GetDeviceSelectorFromUsbVidPid(This,vendorId,productId,result) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CSerialCommunication_CISerialDeviceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SerialCommunication_ErrorReceivedEventArgs[] = L"Windows.Devices.SerialCommunication.ErrorReceivedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SerialCommunication_PinChangedEventArgs[] = L"Windows.Devices.SerialCommunication.PinChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_SerialCommunication_SerialDevice[] = L"Windows.Devices.SerialCommunication.SerialDevice";
       
       
#pragma clang diagnostic pop
