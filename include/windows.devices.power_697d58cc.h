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
#include "Windows.System.Power.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CPower_CIBattery __x_ABI_CWindows_CDevices_CPower_CIBattery;
typedef interface __x_ABI_CWindows_CDevices_CPower_CIBatteryReport __x_ABI_CWindows_CDevices_CPower_CIBatteryReport;
typedef interface __x_ABI_CWindows_CDevices_CPower_CIBatteryStatics __x_ABI_CWindows_CDevices_CPower_CIBatteryStatics;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBatteryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBatteryVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBatteryVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CPower__CBattery;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CPower__CBatteryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery * This, __RPC__out __x_ABI_CWindows_CDevices_CPower_CIBattery * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CPower__CBatteryVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CPower__CBatteryVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectable __FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CPower_CIBattery * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIReference_1_int __FIReference_1_int;
EXTERN_C const IID IID___FIReference_1_int;
typedef struct __FIReference_1_intVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_int * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_int * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_int * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_int * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_int * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_int * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_int * This, __RPC__out int *value);
    END_INTERFACE
} __FIReference_1_intVtbl;
interface __FIReference_1_int
{
    CONST_VTBL struct __FIReference_1_intVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef enum __x_ABI_CWindows_CSystem_CPower_CBatteryStatus __x_ABI_CWindows_CSystem_CPower_CBatteryStatus;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Power_IBattery[] = L"Windows.Devices.Power.IBattery";
typedef struct __x_ABI_CWindows_CDevices_CPower_CIBatteryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBattery * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBattery * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBattery * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBattery * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBattery * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBattery * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CPower_CIBattery * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetReport )(
        __x_ABI_CWindows_CDevices_CPower_CIBattery * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPower_CIBatteryReport * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ReportUpdated )(
        __x_ABI_CWindows_CDevices_CPower_CIBattery * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ReportUpdated )(
        __x_ABI_CWindows_CDevices_CPower_CIBattery * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPower_CIBatteryVtbl;
interface __x_ABI_CWindows_CDevices_CPower_CIBattery
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPower_CIBatteryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->GetReport(This,result) )
    ( (This)->lpVtbl->add_ReportUpdated(This,handler,token) )
    ( (This)->lpVtbl->remove_ReportUpdated(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPower_CIBattery;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Power_IBatteryReport[] = L"Windows.Devices.Power.IBatteryReport";
typedef struct __x_ABI_CWindows_CDevices_CPower_CIBatteryReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBatteryReport * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBatteryReport * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBatteryReport * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBatteryReport * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBatteryReport * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBatteryReport * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ChargeRateInMilliwatts )(
        __x_ABI_CWindows_CDevices_CPower_CIBatteryReport * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DesignCapacityInMilliwattHours )(
        __x_ABI_CWindows_CDevices_CPower_CIBatteryReport * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FullChargeCapacityInMilliwattHours )(
        __x_ABI_CWindows_CDevices_CPower_CIBatteryReport * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemainingCapacityInMilliwattHours )(
        __x_ABI_CWindows_CDevices_CPower_CIBatteryReport * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CPower_CIBatteryReport * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CPower_CBatteryStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPower_CIBatteryReportVtbl;
interface __x_ABI_CWindows_CDevices_CPower_CIBatteryReport
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPower_CIBatteryReportVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ChargeRateInMilliwatts(This,value) )
    ( (This)->lpVtbl->get_DesignCapacityInMilliwattHours(This,value) )
    ( (This)->lpVtbl->get_FullChargeCapacityInMilliwattHours(This,value) )
    ( (This)->lpVtbl->get_RemainingCapacityInMilliwattHours(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPower_CIBatteryReport;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Power_IBatteryStatics[] = L"Windows.Devices.Power.IBatteryStatics";
typedef struct __x_ABI_CWindows_CDevices_CPower_CIBatteryStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBatteryStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBatteryStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBatteryStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBatteryStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBatteryStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBatteryStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AggregateBattery )(
        __x_ABI_CWindows_CDevices_CPower_CIBatteryStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPower_CIBattery * * result
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CPower_CIBatteryStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CPower_CIBatteryStatics * This,
                           __RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPower_CIBatteryStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CPower_CIBatteryStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPower_CIBatteryStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AggregateBattery(This,result) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,result) )
    ( (This)->lpVtbl->GetDeviceSelector(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPower_CIBatteryStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Power_Battery[] = L"Windows.Devices.Power.Battery";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Power_BatteryReport[] = L"Windows.Devices.Power.BatteryReport";
       
       
#pragma clang diagnostic pop
