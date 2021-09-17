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
typedef interface __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics;
typedef interface __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Power_Diagnostics_IBackgroundEnergyDiagnosticsStatics[] = L"Windows.System.Power.Diagnostics.IBackgroundEnergyDiagnosticsStatics";
typedef struct
DEPRECATED("Background Energy Diagnostics has been deprecated. For more info, see MSDN.")
__x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Background Energy Diagnostics has been deprecated. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_DeviceSpecificConversionFactor )(
        __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics * This,
                           __RPC__out DOUBLE * value
        );
    DEPRECATED("Background Energy Diagnostics has been deprecated. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *ComputeTotalEnergyUsage )(
        __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics * This,
                           __RPC__out UINT64 * value
        );
    DEPRECATED("Background Energy Diagnostics has been deprecated. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *ResetTotalEnergyUsage )(
        __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Background Energy Diagnostics has been deprecated. For more info, see MSDN.")
    ( (This)->lpVtbl->get_DeviceSpecificConversionFactor(This,value) )
DEPRECATED("Background Energy Diagnostics has been deprecated. For more info, see MSDN.")
    ( (This)->lpVtbl->ComputeTotalEnergyUsage(This,value) )
DEPRECATED("Background Energy Diagnostics has been deprecated. For more info, see MSDN.")
    ( (This)->lpVtbl->ResetTotalEnergyUsage(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Power_Diagnostics_IForegroundEnergyDiagnosticsStatics[] = L"Windows.System.Power.Diagnostics.IForegroundEnergyDiagnosticsStatics";
typedef struct
DEPRECATED("Background Energy Diagnostics has been deprecated. For more info, see MSDN.")
__x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Background Energy Diagnostics has been deprecated. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_DeviceSpecificConversionFactor )(
        __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics * This,
                           __RPC__out DOUBLE * value
        );
    DEPRECATED("Background Energy Diagnostics has been deprecated. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *ComputeTotalEnergyUsage )(
        __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics * This,
                           __RPC__out UINT64 * value
        );
    DEPRECATED("Background Energy Diagnostics has been deprecated. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *ResetTotalEnergyUsage )(
        __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Background Energy Diagnostics has been deprecated. For more info, see MSDN.")
    ( (This)->lpVtbl->get_DeviceSpecificConversionFactor(This,value) )
DEPRECATED("Background Energy Diagnostics has been deprecated. For more info, see MSDN.")
    ( (This)->lpVtbl->ComputeTotalEnergyUsage(This,value) )
DEPRECATED("Background Energy Diagnostics has been deprecated. For more info, see MSDN.")
    ( (This)->lpVtbl->ResetTotalEnergyUsage(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics;
DEPRECATED("Background Energy Diagnostics has been deprecated. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Power_Diagnostics_BackgroundEnergyDiagnostics[] = L"Windows.System.Power.Diagnostics.BackgroundEnergyDiagnostics";
DEPRECATED("Foreground Energy Diagnostics has been deprecated. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Power_Diagnostics_ForegroundEnergyDiagnostics[] = L"Windows.System.Power.Diagnostics.ForegroundEnergyDiagnostics";
       
       
#pragma clang diagnostic pop
