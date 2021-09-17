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
#include "Windows.Storage.Streams.h"
#include "Windows.UI.Popups.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CMedia_CDialProtocol_CIDialApp __x_ABI_CWindows_CMedia_CDialProtocol_CIDialApp;
typedef interface __x_ABI_CWindows_CMedia_CDialProtocol_CIDialAppStateDetails __x_ABI_CWindows_CMedia_CDialProtocol_CIDialAppStateDetails;
typedef interface __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevice __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevice;
typedef interface __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevice2 __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevice2;
typedef interface __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePicker __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePicker;
typedef interface __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePickerFilter __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePickerFilter;
typedef interface __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDeviceSelectedEventArgs __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDeviceSelectedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDeviceStatics __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDeviceStatics;
typedef interface __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDisconnectButtonClickedEventArgs __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDisconnectButtonClickedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverApp __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverApp;
typedef interface __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverApp2 __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverApp2;
typedef interface __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverAppStatics __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverAppStatics;
enum __x_ABI_CWindows_CMedia_CDialProtocol_CDialAppLaunchResult;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppLaunchResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppLaunchResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppLaunchResult;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppLaunchResult __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppLaunchResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppLaunchResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppLaunchResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppLaunchResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppLaunchResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppLaunchResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppLaunchResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppLaunchResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppLaunchResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppLaunchResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppLaunchResult __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppLaunchResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppLaunchResult;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppLaunchResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppLaunchResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppLaunchResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppLaunchResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppLaunchResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppLaunchResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppLaunchResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppLaunchResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppLaunchResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppLaunchResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppLaunchResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppLaunchResult * This, __RPC__out enum __x_ABI_CWindows_CMedia_CDialProtocol_CDialAppLaunchResult *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppLaunchResultVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppLaunchResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppLaunchResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppStateDetails __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppStateDetails;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppStateDetails;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStateDetails __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStateDetails;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppStateDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppStateDetails * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppStateDetails * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppStateDetails * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppStateDetails * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStateDetails *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppStateDetailsVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppStateDetails
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppStateDetailsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStateDetails __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStateDetails;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStateDetails;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStateDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStateDetails * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStateDetails * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStateDetails * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStateDetails * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStateDetails * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStateDetails * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStateDetails * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppStateDetails *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStateDetails * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppStateDetails **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStateDetails * This, __RPC__out __x_ABI_CWindows_CMedia_CDialProtocol_CIDialAppStateDetails * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStateDetailsVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStateDetails
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStateDetailsVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CMedia_CDialProtocol_CDialAppStopResult;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppStopResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppStopResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppStopResult;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStopResult __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStopResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppStopResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppStopResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppStopResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppStopResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppStopResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStopResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppStopResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppStopResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppStopResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStopResult __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStopResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStopResult;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStopResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStopResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStopResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStopResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStopResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStopResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStopResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStopResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppStopResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStopResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialAppStopResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStopResult * This, __RPC__out enum __x_ABI_CWindows_CMedia_CDialProtocol_CDialAppStopResult *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStopResultVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStopResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStopResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialDevice __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialDevice;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialDevice;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialDevice __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialDevice;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialDevice * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialDevice * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialDevice *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialDeviceVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialDevice
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialDeviceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialDevice __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialDevice;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialDevice;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialDevice * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialDevice * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialDevice * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialDevice * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialDevice * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialDevice * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialDevice *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialDevice * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDialProtocol__CDialDevice **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialDevice * This, __RPC__out __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevice * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialDeviceVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialDevice
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialDeviceVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_IInspectable __FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePicker * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_Windows__CMedia__CDialProtocol__CDialDeviceSelectedEventArgs __FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_Windows__CMedia__CDialProtocol__CDialDeviceSelectedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_Windows__CMedia__CDialProtocol__CDialDeviceSelectedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_Windows__CMedia__CDialProtocol__CDialDeviceSelectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_Windows__CMedia__CDialProtocol__CDialDeviceSelectedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_Windows__CMedia__CDialProtocol__CDialDeviceSelectedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_Windows__CMedia__CDialProtocol__CDialDeviceSelectedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_Windows__CMedia__CDialProtocol__CDialDeviceSelectedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePicker * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDeviceSelectedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_Windows__CMedia__CDialProtocol__CDialDeviceSelectedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_Windows__CMedia__CDialProtocol__CDialDeviceSelectedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_Windows__CMedia__CDialProtocol__CDialDeviceSelectedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_Windows__CMedia__CDialProtocol__CDialDisconnectButtonClickedEventArgs __FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_Windows__CMedia__CDialProtocol__CDialDisconnectButtonClickedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_Windows__CMedia__CDialProtocol__CDialDisconnectButtonClickedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_Windows__CMedia__CDialProtocol__CDialDisconnectButtonClickedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_Windows__CMedia__CDialProtocol__CDialDisconnectButtonClickedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_Windows__CMedia__CDialProtocol__CDialDisconnectButtonClickedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_Windows__CMedia__CDialProtocol__CDialDisconnectButtonClickedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_Windows__CMedia__CDialProtocol__CDialDisconnectButtonClickedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePicker * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDisconnectButtonClickedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_Windows__CMedia__CDialProtocol__CDialDisconnectButtonClickedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_Windows__CMedia__CDialProtocol__CDialDisconnectButtonClickedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_Windows__CMedia__CDialProtocol__CDialDisconnectButtonClickedEventArgsVtbl *lpVtbl;
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
typedef interface __FIKeyValuePair_2_HSTRING_HSTRING __FIKeyValuePair_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_HSTRING;
typedef struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_HSTRINGVtbl;
interface __FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out __FIKeyValuePair_2_HSTRING_HSTRING * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_HSTRING * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_HSTRING __FIMapView_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIMapView_2_HSTRING_HSTRING;
typedef struct __FIMapView_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt HSTRING *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_HSTRINGVtbl;
interface __FIMapView_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMapView_2_HSTRING_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> Lookup(This,key,value) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> HasKey(This,key,found) )
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) )
typedef interface __FIMap_2_HSTRING_HSTRING __FIMap_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIMap_2_HSTRING_HSTRING;
typedef struct __FIMap_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
                   HSTRING key,
                            __RPC__deref_out_opt HSTRING **value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
                   HSTRING key,
                   __RPC__in_opt HSTRING *value,
                            __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    END_INTERFACE
} __FIMap_2_HSTRING_HSTRINGVtbl;
interface __FIMap_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMap_2_HSTRING_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> Lookup(This,key,value) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> HasKey(This,key,found) )
    ( (This)->lpVtbl -> GetView(This,view) )
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) )
    ( (This)->lpVtbl -> Remove(This,key) )
    ( (This)->lpVtbl -> Clear(This) )
typedef interface __FIAsyncOperationCompletedHandler_1___FIMap_2_HSTRING_HSTRING __FIAsyncOperationCompletedHandler_1___FIMap_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIMap_2_HSTRING_HSTRING;
typedef interface __FIAsyncOperation_1___FIMap_2_HSTRING_HSTRING __FIAsyncOperation_1___FIMap_2_HSTRING_HSTRING;
typedef struct __FIAsyncOperationCompletedHandler_1___FIMap_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMap_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMap_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMap_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMap_2_HSTRING_HSTRING * This, __RPC__in_opt __FIAsyncOperation_1___FIMap_2_HSTRING_HSTRING *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIMap_2_HSTRING_HSTRINGVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIMap_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIMap_2_HSTRING_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIMap_2_HSTRING_HSTRING __FIAsyncOperation_1___FIMap_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIAsyncOperation_1___FIMap_2_HSTRING_HSTRING;
typedef struct __FIAsyncOperation_1___FIMap_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIMap_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIMap_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIMap_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIMap_2_HSTRING_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIMap_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIMap_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIMap_2_HSTRING_HSTRING * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIMap_2_HSTRING_HSTRING *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIMap_2_HSTRING_HSTRING * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIMap_2_HSTRING_HSTRING **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIMap_2_HSTRING_HSTRING * This, __RPC__out __FIMap_2_HSTRING_HSTRING * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIMap_2_HSTRING_HSTRINGVtbl;
interface __FIAsyncOperation_1___FIMap_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIAsyncOperation_1___FIMap_2_HSTRING_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_HSTRING __FIAsyncOperationCompletedHandler_1_HSTRING;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_HSTRING;
typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;
typedef struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This, __RPC__in_opt __FIAsyncOperation_1_HSTRING *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl;
interface __FIAsyncOperationCompletedHandler_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;
EXTERN_C const IID IID___FIAsyncOperation_1_HSTRING;
typedef struct __FIAsyncOperation_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_HSTRING *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_HSTRING **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_HSTRING * This, __RPC__out HSTRING *results);
    END_INTERFACE
} __FIAsyncOperation_1_HSTRINGVtbl;
interface __FIAsyncOperation_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperation_1_HSTRINGVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;
typedef enum __x_ABI_CWindows_CUI_CPopups_CPlacement __x_ABI_CWindows_CUI_CPopups_CPlacement;
typedef enum __x_ABI_CWindows_CMedia_CDialProtocol_CDialAppLaunchResult __x_ABI_CWindows_CMedia_CDialProtocol_CDialAppLaunchResult;
typedef enum __x_ABI_CWindows_CMedia_CDialProtocol_CDialAppState __x_ABI_CWindows_CMedia_CDialProtocol_CDialAppState;
typedef enum __x_ABI_CWindows_CMedia_CDialProtocol_CDialAppStopResult __x_ABI_CWindows_CMedia_CDialProtocol_CDialAppStopResult;
typedef enum __x_ABI_CWindows_CMedia_CDialProtocol_CDialDeviceDisplayStatus __x_ABI_CWindows_CMedia_CDialProtocol_CDialDeviceDisplayStatus;
enum __x_ABI_CWindows_CMedia_CDialProtocol_CDialAppLaunchResult
{
    DialAppLaunchResult_Launched = 0,
    DialAppLaunchResult_FailedToLaunch = 1,
    DialAppLaunchResult_NotFound = 2,
    DialAppLaunchResult_NetworkFailure = 3,
};
enum __x_ABI_CWindows_CMedia_CDialProtocol_CDialAppState
{
    DialAppState_Unknown = 0,
    DialAppState_Stopped = 1,
    DialAppState_Running = 2,
    DialAppState_NetworkFailure = 3,
};
enum __x_ABI_CWindows_CMedia_CDialProtocol_CDialAppStopResult
{
    DialAppStopResult_Stopped = 0,
    DialAppStopResult_StopFailed = 1,
    DialAppStopResult_OperationNotSupported = 2,
    DialAppStopResult_NetworkFailure = 3,
};
enum __x_ABI_CWindows_CMedia_CDialProtocol_CDialDeviceDisplayStatus
{
    DialDeviceDisplayStatus_None = 0,
    DialDeviceDisplayStatus_Connecting = 1,
    DialDeviceDisplayStatus_Connected = 2,
    DialDeviceDisplayStatus_Disconnecting = 3,
    DialDeviceDisplayStatus_Disconnected = 4,
    DialDeviceDisplayStatus_Error = 5,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_DialProtocol_IDialApp[] = L"Windows.Media.DialProtocol.IDialApp";
typedef struct __x_ABI_CWindows_CMedia_CDialProtocol_CIDialAppVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialApp * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialApp * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialApp * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialApp * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialApp * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialApp * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AppName )(
        __x_ABI_CWindows_CMedia_CDialProtocol_CIDialApp * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *RequestLaunchAsync )(
        __x_ABI_CWindows_CMedia_CDialProtocol_CIDialApp * This,
                  __RPC__in HSTRING appArgument,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppLaunchResult * * value
        );
    HRESULT ( STDMETHODCALLTYPE *StopAsync )(
        __x_ABI_CWindows_CMedia_CDialProtocol_CIDialApp * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStopResult * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAppStateAsync )(
        __x_ABI_CWindows_CMedia_CDialProtocol_CIDialApp * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialAppStateDetails * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDialProtocol_CIDialAppVtbl;
interface __x_ABI_CWindows_CMedia_CDialProtocol_CIDialApp
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDialProtocol_CIDialAppVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AppName(This,value) )
    ( (This)->lpVtbl->RequestLaunchAsync(This,appArgument,value) )
    ( (This)->lpVtbl->StopAsync(This,value) )
    ( (This)->lpVtbl->GetAppStateAsync(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDialProtocol_CIDialApp;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_DialProtocol_IDialAppStateDetails[] = L"Windows.Media.DialProtocol.IDialAppStateDetails";
typedef struct __x_ABI_CWindows_CMedia_CDialProtocol_CIDialAppStateDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialAppStateDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialAppStateDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialAppStateDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialAppStateDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialAppStateDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialAppStateDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CMedia_CDialProtocol_CIDialAppStateDetails * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CDialProtocol_CDialAppState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FullXml )(
        __x_ABI_CWindows_CMedia_CDialProtocol_CIDialAppStateDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDialProtocol_CIDialAppStateDetailsVtbl;
interface __x_ABI_CWindows_CMedia_CDialProtocol_CIDialAppStateDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDialProtocol_CIDialAppStateDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->get_FullXml(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDialProtocol_CIDialAppStateDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_DialProtocol_IDialDevice[] = L"Windows.Media.DialProtocol.IDialDevice";
typedef struct __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevice * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevice * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevice * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevice * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevice * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevice * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevice * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDialApp )(
        __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevice * This,
                  __RPC__in HSTRING appName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDialProtocol_CIDialApp * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDeviceVtbl;
interface __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDeviceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->GetDialApp(This,appName,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevice;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_DialProtocol_IDialDevice2[] = L"Windows.Media.DialProtocol.IDialDevice2";
typedef struct __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevice2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevice2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevice2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevice2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevice2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevice2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevice2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
        __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevice2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Thumbnail )(
        __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevice2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevice2Vtbl;
interface __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevice2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevice2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FriendlyName(This,value) )
    ( (This)->lpVtbl->get_Thumbnail(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevice2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_DialProtocol_IDialDevicePicker[] = L"Windows.Media.DialProtocol.IDialDevicePicker";
typedef struct __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePickerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePicker * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePicker * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePicker * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePicker * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePicker * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePicker * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Filter )(
        __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePicker * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePickerFilter * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Appearance )(
        __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePicker * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DialDeviceSelected )(
        __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePicker * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_Windows__CMedia__CDialProtocol__CDialDeviceSelectedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DialDeviceSelected )(
        __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePicker * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DisconnectButtonClicked )(
        __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePicker * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_Windows__CMedia__CDialProtocol__CDialDisconnectButtonClickedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DisconnectButtonClicked )(
        __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePicker * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DialDevicePickerDismissed )(
        __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePicker * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CDialProtocol__CDialDevicePicker_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DialDevicePickerDismissed )(
        __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePicker * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *Show )(
        __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePicker * This,
                  __x_ABI_CWindows_CFoundation_CRect selection
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowWithPlacement )(
        __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePicker * This,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                  __x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement
        );
                    HRESULT ( STDMETHODCALLTYPE *PickSingleDialDeviceAsync )(
        __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePicker * This,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialDevice * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *PickSingleDialDeviceAsyncWithPlacement )(
        __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePicker * This,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                  __x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialDevice * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *Hide )(
        __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePicker * This
        );
    HRESULT ( STDMETHODCALLTYPE *SetDisplayStatus )(
        __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePicker * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevice * device,
                  __x_ABI_CWindows_CMedia_CDialProtocol_CDialDeviceDisplayStatus status
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePickerVtbl;
interface __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePicker
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePickerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Filter(This,value) )
    ( (This)->lpVtbl->get_Appearance(This,value) )
    ( (This)->lpVtbl->add_DialDeviceSelected(This,handler,token) )
    ( (This)->lpVtbl->remove_DialDeviceSelected(This,token) )
    ( (This)->lpVtbl->add_DisconnectButtonClicked(This,handler,token) )
    ( (This)->lpVtbl->remove_DisconnectButtonClicked(This,token) )
    ( (This)->lpVtbl->add_DialDevicePickerDismissed(This,handler,token) )
    ( (This)->lpVtbl->remove_DialDevicePickerDismissed(This,token) )
    ( (This)->lpVtbl->Show(This,selection) )
    ( (This)->lpVtbl->ShowWithPlacement(This,selection,preferredPlacement) )
    ( (This)->lpVtbl->PickSingleDialDeviceAsync(This,selection,operation) )
    ( (This)->lpVtbl->PickSingleDialDeviceAsyncWithPlacement(This,selection,preferredPlacement,operation) )
    ( (This)->lpVtbl->Hide(This) )
    ( (This)->lpVtbl->SetDisplayStatus(This,device,status) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePicker;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_DialProtocol_IDialDevicePickerFilter[] = L"Windows.Media.DialProtocol.IDialDevicePickerFilter";
typedef struct __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePickerFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePickerFilter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePickerFilter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePickerFilter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePickerFilter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePickerFilter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePickerFilter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SupportedAppNames )(
        __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePickerFilter * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePickerFilterVtbl;
interface __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePickerFilter
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePickerFilterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SupportedAppNames(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevicePickerFilter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_DialProtocol_IDialDeviceSelectedEventArgs[] = L"Windows.Media.DialProtocol.IDialDeviceSelectedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDeviceSelectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDeviceSelectedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDeviceSelectedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDeviceSelectedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDeviceSelectedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDeviceSelectedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDeviceSelectedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SelectedDialDevice )(
        __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDeviceSelectedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevice * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDeviceSelectedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDeviceSelectedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDeviceSelectedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SelectedDialDevice(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDialProtocol_CIDialDeviceSelectedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_DialProtocol_IDialDeviceStatics[] = L"Windows.Media.DialProtocol.IDialDeviceStatics";
typedef struct __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDeviceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDeviceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDeviceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDeviceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDeviceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDeviceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDeviceStatics * This,
                  __RPC__in HSTRING appName,
                           __RPC__deref_out_opt HSTRING * selector
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDeviceStatics * This,
                  __RPC__in HSTRING value,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CDialProtocol__CDialDevice * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *DeviceInfoSupportsDialAsync )(
        __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDeviceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * device,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDeviceStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDeviceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelector(This,appName,selector) )
    ( (This)->lpVtbl->FromIdAsync(This,value,operation) )
    ( (This)->lpVtbl->DeviceInfoSupportsDialAsync(This,device,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDialProtocol_CIDialDeviceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_DialProtocol_IDialDisconnectButtonClickedEventArgs[] = L"Windows.Media.DialProtocol.IDialDisconnectButtonClickedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDisconnectButtonClickedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDisconnectButtonClickedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDisconnectButtonClickedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDisconnectButtonClickedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDisconnectButtonClickedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDisconnectButtonClickedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDisconnectButtonClickedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Device )(
        __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDisconnectButtonClickedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDevice * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDisconnectButtonClickedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDisconnectButtonClickedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDialProtocol_CIDialDisconnectButtonClickedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Device(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDialProtocol_CIDialDisconnectButtonClickedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_DialProtocol_IDialReceiverApp[] = L"Windows.Media.DialProtocol.IDialReceiverApp";
typedef struct __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverAppVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverApp * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverApp * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverApp * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverApp * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverApp * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverApp * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAdditionalDataAsync )(
        __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverApp * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIMap_2_HSTRING_HSTRING * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SetAdditionalDataAsync )(
        __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverApp * This,
                  __RPC__in_opt __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * additionalData,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverAppVtbl;
interface __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverApp
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverAppVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAdditionalDataAsync(This,operation) )
    ( (This)->lpVtbl->SetAdditionalDataAsync(This,additionalData,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverApp;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_DialProtocol_IDialReceiverApp2[] = L"Windows.Media.DialProtocol.IDialReceiverApp2";
typedef struct __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverApp2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverApp2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverApp2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverApp2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverApp2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverApp2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverApp2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetUniqueDeviceNameAsync )(
        __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverApp2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverApp2Vtbl;
interface __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverApp2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverApp2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetUniqueDeviceNameAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverApp2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_DialProtocol_IDialReceiverAppStatics[] = L"Windows.Media.DialProtocol.IDialReceiverAppStatics";
typedef struct __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverAppStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverAppStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverAppStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverAppStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverAppStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverAppStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverAppStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Current )(
        __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverAppStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverApp * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverAppStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverAppStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverAppStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Current(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDialProtocol_CIDialReceiverAppStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_DialProtocol_DialApp[] = L"Windows.Media.DialProtocol.DialApp";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_DialProtocol_DialAppStateDetails[] = L"Windows.Media.DialProtocol.DialAppStateDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_DialProtocol_DialDevice[] = L"Windows.Media.DialProtocol.DialDevice";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_DialProtocol_DialDevicePicker[] = L"Windows.Media.DialProtocol.DialDevicePicker";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_DialProtocol_DialDevicePickerFilter[] = L"Windows.Media.DialProtocol.DialDevicePickerFilter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_DialProtocol_DialDeviceSelectedEventArgs[] = L"Windows.Media.DialProtocol.DialDeviceSelectedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_DialProtocol_DialDisconnectButtonClickedEventArgs[] = L"Windows.Media.DialProtocol.DialDisconnectButtonClickedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_DialProtocol_DialReceiverApp[] = L"Windows.Media.DialProtocol.DialReceiverApp";
       
       
#pragma clang diagnostic pop
