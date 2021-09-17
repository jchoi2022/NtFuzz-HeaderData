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
#include "Windows.Graphics.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitor __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitor;
typedef interface __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitorStatics __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitorStatics;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CDisplay__CDisplayMonitor __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CDisplay__CDisplayMonitor;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CDisplay__CDisplayMonitor;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CDisplay__CDisplayMonitor __FIAsyncOperation_1_Windows__CDevices__CDisplay__CDisplayMonitor;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CDisplay__CDisplayMonitorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CDisplay__CDisplayMonitor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CDisplay__CDisplayMonitor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CDisplay__CDisplayMonitor * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CDisplay__CDisplayMonitor * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CDisplay__CDisplayMonitor *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CDisplay__CDisplayMonitorVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CDisplay__CDisplayMonitor
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CDisplay__CDisplayMonitorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CDisplay__CDisplayMonitor __FIAsyncOperation_1_Windows__CDevices__CDisplay__CDisplayMonitor;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CDisplay__CDisplayMonitor;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CDisplay__CDisplayMonitorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CDisplay__CDisplayMonitor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CDisplay__CDisplayMonitor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CDisplay__CDisplayMonitor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CDisplay__CDisplayMonitor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CDisplay__CDisplayMonitor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CDisplay__CDisplayMonitor * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CDisplay__CDisplayMonitor * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CDisplay__CDisplayMonitor *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CDisplay__CDisplayMonitor * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CDisplay__CDisplayMonitor **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CDisplay__CDisplayMonitor * This, __RPC__out __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitor * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CDisplay__CDisplayMonitorVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CDisplay__CDisplayMonitor
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CDisplay__CDisplayMonitorVtbl *lpVtbl;
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
struct __x_ABI_CWindows_CFoundation_CSize;
typedef interface __FIReference_1_Windows__CFoundation__CSize __FIReference_1_Windows__CFoundation__CSize;
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CSize;
typedef struct __FIReference_1_Windows__CFoundation__CSizeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CSize * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CSize * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CSize * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CSize * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CSize * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CSize * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CSize * This, __RPC__out struct __x_ABI_CWindows_CFoundation_CSize *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CSizeVtbl;
interface __FIReference_1_Windows__CFoundation__CSize
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CSizeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;
typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;
typedef struct __x_ABI_CWindows_CGraphics_CDisplayAdapterId __x_ABI_CWindows_CGraphics_CDisplayAdapterId;
typedef struct __x_ABI_CWindows_CGraphics_CSizeInt32 __x_ABI_CWindows_CGraphics_CSizeInt32;
typedef enum __x_ABI_CWindows_CDevices_CDisplay_CDisplayMonitorConnectionKind __x_ABI_CWindows_CDevices_CDisplay_CDisplayMonitorConnectionKind;
typedef enum __x_ABI_CWindows_CDevices_CDisplay_CDisplayMonitorDescriptorKind __x_ABI_CWindows_CDevices_CDisplay_CDisplayMonitorDescriptorKind;
typedef enum __x_ABI_CWindows_CDevices_CDisplay_CDisplayMonitorPhysicalConnectorKind __x_ABI_CWindows_CDevices_CDisplay_CDisplayMonitorPhysicalConnectorKind;
typedef enum __x_ABI_CWindows_CDevices_CDisplay_CDisplayMonitorUsageKind __x_ABI_CWindows_CDevices_CDisplay_CDisplayMonitorUsageKind;
enum __x_ABI_CWindows_CDevices_CDisplay_CDisplayMonitorConnectionKind
{
    DisplayMonitorConnectionKind_Internal = 0,
    DisplayMonitorConnectionKind_Wired = 1,
    DisplayMonitorConnectionKind_Wireless = 2,
    DisplayMonitorConnectionKind_Virtual = 3,
};
enum __x_ABI_CWindows_CDevices_CDisplay_CDisplayMonitorDescriptorKind
{
    DisplayMonitorDescriptorKind_Edid = 0,
    DisplayMonitorDescriptorKind_DisplayId = 1,
};
enum __x_ABI_CWindows_CDevices_CDisplay_CDisplayMonitorPhysicalConnectorKind
{
    DisplayMonitorPhysicalConnectorKind_Unknown = 0,
    DisplayMonitorPhysicalConnectorKind_HD15 = 1,
    DisplayMonitorPhysicalConnectorKind_AnalogTV = 2,
    DisplayMonitorPhysicalConnectorKind_Dvi = 3,
    DisplayMonitorPhysicalConnectorKind_Hdmi = 4,
    DisplayMonitorPhysicalConnectorKind_Lvds = 5,
    DisplayMonitorPhysicalConnectorKind_Sdi = 6,
    DisplayMonitorPhysicalConnectorKind_DisplayPort = 7,
};
enum __x_ABI_CWindows_CDevices_CDisplay_CDisplayMonitorUsageKind
{
    DisplayMonitorUsageKind_Standard = 0,
    DisplayMonitorUsageKind_HeadMounted = 1,
    DisplayMonitorUsageKind_SpecialPurpose = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Display_IDisplayMonitor[] = L"Windows.Devices.Display.IDisplayMonitor";
typedef struct __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitor * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitor * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitor * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ConnectionKind )(
        __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitor * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CDisplay_CDisplayMonitorConnectionKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhysicalConnector )(
        __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitor * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CDisplay_CDisplayMonitorPhysicalConnectorKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayAdapterDeviceId )(
        __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitor * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayAdapterId )(
        __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitor * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CDisplayAdapterId * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayAdapterTargetId )(
        __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitor * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UsageKind )(
        __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitor * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CDisplay_CDisplayMonitorUsageKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NativeResolutionInRawPixels )(
        __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitor * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CSizeInt32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhysicalSizeInInches )(
        __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitor * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CSize * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RawDpiX )(
        __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitor * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RawDpiY )(
        __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitor * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RedPrimary )(
        __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitor * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GreenPrimary )(
        __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitor * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BluePrimary )(
        __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitor * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WhitePoint )(
        __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitor * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxLuminanceInNits )(
        __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitor * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinLuminanceInNits )(
        __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitor * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxAverageFullFrameLuminanceInNits )(
        __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitor * This,
                           __RPC__out FLOAT * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDescriptor )(
        __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitor * This,
                  __x_ABI_CWindows_CDevices_CDisplay_CDisplayMonitorDescriptorKind descriptorKind,
                   __RPC__out UINT32 * __resultSize,
                                                       __RPC__deref_out_ecount_full_opt(*(__resultSize)) BYTE * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitorVtbl;
interface __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitor
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_ConnectionKind(This,value) )
    ( (This)->lpVtbl->get_PhysicalConnector(This,value) )
    ( (This)->lpVtbl->get_DisplayAdapterDeviceId(This,value) )
    ( (This)->lpVtbl->get_DisplayAdapterId(This,value) )
    ( (This)->lpVtbl->get_DisplayAdapterTargetId(This,value) )
    ( (This)->lpVtbl->get_UsageKind(This,value) )
    ( (This)->lpVtbl->get_NativeResolutionInRawPixels(This,value) )
    ( (This)->lpVtbl->get_PhysicalSizeInInches(This,value) )
    ( (This)->lpVtbl->get_RawDpiX(This,value) )
    ( (This)->lpVtbl->get_RawDpiY(This,value) )
    ( (This)->lpVtbl->get_RedPrimary(This,value) )
    ( (This)->lpVtbl->get_GreenPrimary(This,value) )
    ( (This)->lpVtbl->get_BluePrimary(This,value) )
    ( (This)->lpVtbl->get_WhitePoint(This,value) )
    ( (This)->lpVtbl->get_MaxLuminanceInNits(This,value) )
    ( (This)->lpVtbl->get_MinLuminanceInNits(This,value) )
    ( (This)->lpVtbl->get_MaxAverageFullFrameLuminanceInNits(This,value) )
    ( (This)->lpVtbl->GetDescriptor(This,descriptorKind,__resultSize,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Display_IDisplayMonitorStatics[] = L"Windows.Devices.Display.IDisplayMonitorStatics";
typedef struct __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitorStatics * This,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitorStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CDisplay__CDisplayMonitor * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *FromInterfaceIdAsync )(
        __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitorStatics * This,
                  __RPC__in HSTRING deviceInterfaceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CDisplay__CDisplayMonitor * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitorStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelector(This,result) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,operation) )
    ( (This)->lpVtbl->FromInterfaceIdAsync(This,deviceInterfaceId,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CDisplay_CIDisplayMonitorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Display_DisplayMonitor[] = L"Windows.Devices.Display.DisplayMonitor";
       
       
#pragma clang diagnostic pop
