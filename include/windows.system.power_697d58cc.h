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
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics;
typedef interface __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics;
typedef interface __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics;
typedef interface __FIEventHandler_1_IInspectable __FIEventHandler_1_IInspectable;
EXTERN_C const IID IID___FIEventHandler_1_IInspectable;
typedef struct __FIEventHandler_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_IInspectable * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FIEventHandler_1_IInspectableVtbl;
interface __FIEventHandler_1_IInspectable
{
    CONST_VTBL struct __FIEventHandler_1_IInspectableVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef enum __x_ABI_CWindows_CSystem_CPower_CBatteryStatus __x_ABI_CWindows_CSystem_CPower_CBatteryStatus;
typedef enum __x_ABI_CWindows_CSystem_CPower_CEnergySaverStatus __x_ABI_CWindows_CSystem_CPower_CEnergySaverStatus;
typedef enum __x_ABI_CWindows_CSystem_CPower_CPowerSupplyStatus __x_ABI_CWindows_CSystem_CPower_CPowerSupplyStatus;
enum __x_ABI_CWindows_CSystem_CPower_CBatteryStatus
{
    BatteryStatus_NotPresent = 0,
    BatteryStatus_Discharging = 1,
    BatteryStatus_Idle = 2,
    BatteryStatus_Charging = 3,
};
enum __x_ABI_CWindows_CSystem_CPower_CEnergySaverStatus
{
    EnergySaverStatus_Disabled = 0,
    EnergySaverStatus_Off = 1,
    EnergySaverStatus_On = 2,
};
enum __x_ABI_CWindows_CSystem_CPower_CPowerSupplyStatus
{
    PowerSupplyStatus_NotPresent = 0,
    PowerSupplyStatus_Inadequate = 1,
    PowerSupplyStatus_Adequate = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Power_IBackgroundEnergyManagerStatics[] = L"Windows.System.Power.IBackgroundEnergyManagerStatics";
typedef struct
DEPRECATED("Background Energy Manager has been deprecated. For more info, see MSDN.")
__x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Background Energy Manager has been deprecated. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_LowUsageLevel )(
        __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
                           __RPC__out UINT32 * value
        );
    DEPRECATED("Background Energy Manager has been deprecated. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_NearMaxAcceptableUsageLevel )(
        __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
                           __RPC__out UINT32 * value
        );
    DEPRECATED("Background Energy Manager has been deprecated. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_MaxAcceptableUsageLevel )(
        __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
                           __RPC__out UINT32 * value
        );
    DEPRECATED("Background Energy Manager has been deprecated. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_ExcessiveUsageLevel )(
        __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
                           __RPC__out UINT32 * value
        );
    DEPRECATED("Background Energy Manager has been deprecated. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_NearTerminationUsageLevel )(
        __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
                           __RPC__out UINT32 * value
        );
    DEPRECATED("Background Energy Manager has been deprecated. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_TerminationUsageLevel )(
        __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
                           __RPC__out UINT32 * value
        );
    DEPRECATED("Background Energy Manager has been deprecated. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_RecentEnergyUsage )(
        __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
                           __RPC__out UINT32 * value
        );
    DEPRECATED("Background Energy Manager has been deprecated. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_RecentEnergyUsageLevel )(
        __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
                           __RPC__out UINT32 * value
        );
    DEPRECATED("Background Energy Manager has been deprecated. For more info, see MSDN.")
                                HRESULT ( STDMETHODCALLTYPE *add_RecentEnergyUsageIncreased )(
        __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("Background Energy Manager has been deprecated. For more info, see MSDN.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_RecentEnergyUsageIncreased )(
        __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
                  EventRegistrationToken token
        );
    DEPRECATED("Background Energy Manager has been deprecated. For more info, see MSDN.")
                                HRESULT ( STDMETHODCALLTYPE *add_RecentEnergyUsageReturnedToLow )(
        __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("Background Energy Manager has been deprecated. For more info, see MSDN.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_RecentEnergyUsageReturnedToLow )(
        __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Background Energy Manager has been deprecated. For more info, see MSDN.")
    ( (This)->lpVtbl->get_LowUsageLevel(This,value) )
DEPRECATED("Background Energy Manager has been deprecated. For more info, see MSDN.")
    ( (This)->lpVtbl->get_NearMaxAcceptableUsageLevel(This,value) )
DEPRECATED("Background Energy Manager has been deprecated. For more info, see MSDN.")
    ( (This)->lpVtbl->get_MaxAcceptableUsageLevel(This,value) )
DEPRECATED("Background Energy Manager has been deprecated. For more info, see MSDN.")
    ( (This)->lpVtbl->get_ExcessiveUsageLevel(This,value) )
DEPRECATED("Background Energy Manager has been deprecated. For more info, see MSDN.")
    ( (This)->lpVtbl->get_NearTerminationUsageLevel(This,value) )
DEPRECATED("Background Energy Manager has been deprecated. For more info, see MSDN.")
    ( (This)->lpVtbl->get_TerminationUsageLevel(This,value) )
DEPRECATED("Background Energy Manager has been deprecated. For more info, see MSDN.")
    ( (This)->lpVtbl->get_RecentEnergyUsage(This,value) )
DEPRECATED("Background Energy Manager has been deprecated. For more info, see MSDN.")
    ( (This)->lpVtbl->get_RecentEnergyUsageLevel(This,value) )
DEPRECATED("Background Energy Manager has been deprecated. For more info, see MSDN.")
    ( (This)->lpVtbl->add_RecentEnergyUsageIncreased(This,handler,token) )
DEPRECATED("Background Energy Manager has been deprecated. For more info, see MSDN.")
    ( (This)->lpVtbl->remove_RecentEnergyUsageIncreased(This,token) )
DEPRECATED("Background Energy Manager has been deprecated. For more info, see MSDN.")
    ( (This)->lpVtbl->add_RecentEnergyUsageReturnedToLow(This,handler,token) )
DEPRECATED("Background Energy Manager has been deprecated. For more info, see MSDN.")
    ( (This)->lpVtbl->remove_RecentEnergyUsageReturnedToLow(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Power_IForegroundEnergyManagerStatics[] = L"Windows.System.Power.IForegroundEnergyManagerStatics";
typedef struct
DEPRECATED("Foreground Energy Manager has been deprecated. For more info, see MSDN.")
__x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Foreground Energy Manager has been deprecated. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_LowUsageLevel )(
        __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
                           __RPC__out UINT32 * value
        );
    DEPRECATED("Foreground Energy Manager has been deprecated. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_NearMaxAcceptableUsageLevel )(
        __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
                           __RPC__out UINT32 * value
        );
    DEPRECATED("Foreground Energy Manager has been deprecated. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_MaxAcceptableUsageLevel )(
        __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
                           __RPC__out UINT32 * value
        );
    DEPRECATED("Foreground Energy Manager has been deprecated. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_ExcessiveUsageLevel )(
        __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
                           __RPC__out UINT32 * value
        );
    DEPRECATED("Foreground Energy Manager has been deprecated. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_RecentEnergyUsage )(
        __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
                           __RPC__out UINT32 * value
        );
    DEPRECATED("Foreground Energy Manager has been deprecated. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_RecentEnergyUsageLevel )(
        __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
                           __RPC__out UINT32 * value
        );
    DEPRECATED("Foreground Energy Manager has been deprecated. For more info, see MSDN.")
                                HRESULT ( STDMETHODCALLTYPE *add_RecentEnergyUsageIncreased )(
        __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("Foreground Energy Manager has been deprecated. For more info, see MSDN.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_RecentEnergyUsageIncreased )(
        __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
                  EventRegistrationToken token
        );
    DEPRECATED("Foreground Energy Manager has been deprecated. For more info, see MSDN.")
                                HRESULT ( STDMETHODCALLTYPE *add_RecentEnergyUsageReturnedToLow )(
        __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("Foreground Energy Manager has been deprecated. For more info, see MSDN.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_RecentEnergyUsageReturnedToLow )(
        __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Foreground Energy Manager has been deprecated. For more info, see MSDN.")
    ( (This)->lpVtbl->get_LowUsageLevel(This,value) )
DEPRECATED("Foreground Energy Manager has been deprecated. For more info, see MSDN.")
    ( (This)->lpVtbl->get_NearMaxAcceptableUsageLevel(This,value) )
DEPRECATED("Foreground Energy Manager has been deprecated. For more info, see MSDN.")
    ( (This)->lpVtbl->get_MaxAcceptableUsageLevel(This,value) )
DEPRECATED("Foreground Energy Manager has been deprecated. For more info, see MSDN.")
    ( (This)->lpVtbl->get_ExcessiveUsageLevel(This,value) )
DEPRECATED("Foreground Energy Manager has been deprecated. For more info, see MSDN.")
    ( (This)->lpVtbl->get_RecentEnergyUsage(This,value) )
DEPRECATED("Foreground Energy Manager has been deprecated. For more info, see MSDN.")
    ( (This)->lpVtbl->get_RecentEnergyUsageLevel(This,value) )
DEPRECATED("Foreground Energy Manager has been deprecated. For more info, see MSDN.")
    ( (This)->lpVtbl->add_RecentEnergyUsageIncreased(This,handler,token) )
DEPRECATED("Foreground Energy Manager has been deprecated. For more info, see MSDN.")
    ( (This)->lpVtbl->remove_RecentEnergyUsageIncreased(This,token) )
DEPRECATED("Foreground Energy Manager has been deprecated. For more info, see MSDN.")
    ( (This)->lpVtbl->add_RecentEnergyUsageReturnedToLow(This,handler,token) )
DEPRECATED("Foreground Energy Manager has been deprecated. For more info, see MSDN.")
    ( (This)->lpVtbl->remove_RecentEnergyUsageReturnedToLow(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Power_IPowerManagerStatics[] = L"Windows.System.Power.IPowerManagerStatics";
typedef struct __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EnergySaverStatus )(
        __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CPower_CEnergySaverStatus * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_EnergySaverStatusChanged )(
        __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_EnergySaverStatusChanged )(
        __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BatteryStatus )(
        __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CPower_CBatteryStatus * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_BatteryStatusChanged )(
        __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_BatteryStatusChanged )(
        __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PowerSupplyStatus )(
        __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CPower_CPowerSupplyStatus * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PowerSupplyStatusChanged )(
        __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PowerSupplyStatusChanged )(
        __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemainingChargePercent )(
        __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
                           __RPC__out INT32 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_RemainingChargePercentChanged )(
        __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_RemainingChargePercentChanged )(
        __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemainingDischargeTime )(
        __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_RemainingDischargeTimeChanged )(
        __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_RemainingDischargeTimeChanged )(
        __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EnergySaverStatus(This,value) )
    ( (This)->lpVtbl->add_EnergySaverStatusChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_EnergySaverStatusChanged(This,token) )
    ( (This)->lpVtbl->get_BatteryStatus(This,value) )
    ( (This)->lpVtbl->add_BatteryStatusChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_BatteryStatusChanged(This,token) )
    ( (This)->lpVtbl->get_PowerSupplyStatus(This,value) )
    ( (This)->lpVtbl->add_PowerSupplyStatusChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_PowerSupplyStatusChanged(This,token) )
    ( (This)->lpVtbl->get_RemainingChargePercent(This,value) )
    ( (This)->lpVtbl->add_RemainingChargePercentChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_RemainingChargePercentChanged(This,token) )
    ( (This)->lpVtbl->get_RemainingDischargeTime(This,value) )
    ( (This)->lpVtbl->add_RemainingDischargeTimeChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_RemainingDischargeTimeChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics;
DEPRECATED("Background Energy Manager has been deprecated. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Power_BackgroundEnergyManager[] = L"Windows.System.Power.BackgroundEnergyManager";
DEPRECATED("Foreground Energy Manager has been deprecated. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Power_ForegroundEnergyManager[] = L"Windows.System.Power.ForegroundEnergyManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Power_PowerManager[] = L"Windows.System.Power.PowerManager";
       
       
#pragma clang diagnostic pop
