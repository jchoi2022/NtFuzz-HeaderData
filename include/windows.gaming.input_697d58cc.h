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
#include "Windows.Devices.Haptics.h"
#include "Windows.Devices.Power.h"
#include "Windows.Gaming.Input.ForceFeedback.h"
#include "Windows.System.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CGaming_CInput_CIArcadeStick __x_ABI_CWindows_CGaming_CInput_CIArcadeStick;
typedef interface __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics;
typedef interface __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2 __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2;
typedef interface __x_ABI_CWindows_CGaming_CInput_CIFlightStick __x_ABI_CWindows_CGaming_CInput_CIFlightStick;
typedef interface __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics;
typedef interface __x_ABI_CWindows_CGaming_CInput_CIGameController __x_ABI_CWindows_CGaming_CInput_CIGameController;
typedef interface __x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo __x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo;
typedef interface __x_ABI_CWindows_CGaming_CInput_CIGamepad __x_ABI_CWindows_CGaming_CInput_CIGamepad;
typedef interface __x_ABI_CWindows_CGaming_CInput_CIGamepad2 __x_ABI_CWindows_CGaming_CInput_CIGamepad2;
typedef interface __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics;
typedef interface __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2 __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2;
typedef interface __x_ABI_CWindows_CGaming_CInput_CIHeadset __x_ABI_CWindows_CGaming_CInput_CIHeadset;
typedef interface __x_ABI_CWindows_CGaming_CInput_CIRacingWheel __x_ABI_CWindows_CGaming_CInput_CIRacingWheel;
typedef interface __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics;
typedef interface __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2 __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2;
typedef interface __x_ABI_CWindows_CGaming_CInput_CIRawGameController __x_ABI_CWindows_CGaming_CInput_CIRawGameController;
typedef interface __x_ABI_CWindows_CGaming_CInput_CIRawGameController2 __x_ABI_CWindows_CGaming_CInput_CIRawGameController2;
typedef interface __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics;
typedef interface __x_ABI_CWindows_CGaming_CInput_CIUINavigationController __x_ABI_CWindows_CGaming_CInput_CIUINavigationController;
typedef interface __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics;
typedef interface __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2 __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2;
typedef interface __FIIterator_1_Windows__CGaming__CInput__CArcadeStick __FIIterator_1_Windows__CGaming__CInput__CArcadeStick;
EXTERN_C const IID IID___FIIterator_1_Windows__CGaming__CInput__CArcadeStick;
typedef struct __FIIterator_1_Windows__CGaming__CInput__CArcadeStickVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGaming__CInput__CArcadeStick * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CArcadeStick * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CArcadeStick * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CArcadeStick * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CArcadeStick * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CArcadeStick * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CArcadeStick * This, __RPC__out __x_ABI_CWindows_CGaming_CInput_CIArcadeStick * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CArcadeStick * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CArcadeStick * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CArcadeStick * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CInput_CIArcadeStick * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGaming__CInput__CArcadeStickVtbl;
interface __FIIterator_1_Windows__CGaming__CInput__CArcadeStick
{
    CONST_VTBL struct __FIIterator_1_Windows__CGaming__CInput__CArcadeStickVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGaming__CInput__CArcadeStick __FIIterable_1_Windows__CGaming__CInput__CArcadeStick;
EXTERN_C const IID IID___FIIterable_1_Windows__CGaming__CInput__CArcadeStick;
typedef struct __FIIterable_1_Windows__CGaming__CInput__CArcadeStickVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGaming__CInput__CArcadeStick * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CArcadeStick * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CArcadeStick * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CArcadeStick * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CArcadeStick * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CArcadeStick * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CArcadeStick * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGaming__CInput__CArcadeStick **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGaming__CInput__CArcadeStickVtbl;
interface __FIIterable_1_Windows__CGaming__CInput__CArcadeStick
{
    CONST_VTBL struct __FIIterable_1_Windows__CGaming__CInput__CArcadeStickVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CGaming__CInput__CFlightStick __FIIterator_1_Windows__CGaming__CInput__CFlightStick;
EXTERN_C const IID IID___FIIterator_1_Windows__CGaming__CInput__CFlightStick;
typedef struct __FIIterator_1_Windows__CGaming__CInput__CFlightStickVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGaming__CInput__CFlightStick * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CFlightStick * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CFlightStick * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CFlightStick * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CFlightStick * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CFlightStick * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CFlightStick * This, __RPC__out __x_ABI_CWindows_CGaming_CInput_CIFlightStick * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CFlightStick * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CFlightStick * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CFlightStick * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CInput_CIFlightStick * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGaming__CInput__CFlightStickVtbl;
interface __FIIterator_1_Windows__CGaming__CInput__CFlightStick
{
    CONST_VTBL struct __FIIterator_1_Windows__CGaming__CInput__CFlightStickVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGaming__CInput__CFlightStick __FIIterable_1_Windows__CGaming__CInput__CFlightStick;
EXTERN_C const IID IID___FIIterable_1_Windows__CGaming__CInput__CFlightStick;
typedef struct __FIIterable_1_Windows__CGaming__CInput__CFlightStickVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGaming__CInput__CFlightStick * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CFlightStick * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CFlightStick * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CFlightStick * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CFlightStick * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CFlightStick * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CFlightStick * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGaming__CInput__CFlightStick **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGaming__CInput__CFlightStickVtbl;
interface __FIIterable_1_Windows__CGaming__CInput__CFlightStick
{
    CONST_VTBL struct __FIIterable_1_Windows__CGaming__CInput__CFlightStickVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CGaming__CInput__CGamepad __FIIterator_1_Windows__CGaming__CInput__CGamepad;
EXTERN_C const IID IID___FIIterator_1_Windows__CGaming__CInput__CGamepad;
typedef struct __FIIterator_1_Windows__CGaming__CInput__CGamepadVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGaming__CInput__CGamepad * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CGamepad * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CGamepad * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CGamepad * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CGamepad * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CGamepad * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CGamepad * This, __RPC__out __x_ABI_CWindows_CGaming_CInput_CIGamepad * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CGamepad * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CGamepad * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CGamepad * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CInput_CIGamepad * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGaming__CInput__CGamepadVtbl;
interface __FIIterator_1_Windows__CGaming__CInput__CGamepad
{
    CONST_VTBL struct __FIIterator_1_Windows__CGaming__CInput__CGamepadVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGaming__CInput__CGamepad __FIIterable_1_Windows__CGaming__CInput__CGamepad;
EXTERN_C const IID IID___FIIterable_1_Windows__CGaming__CInput__CGamepad;
typedef struct __FIIterable_1_Windows__CGaming__CInput__CGamepadVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGaming__CInput__CGamepad * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CGamepad * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CGamepad * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CGamepad * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CGamepad * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CGamepad * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CGamepad * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGaming__CInput__CGamepad **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGaming__CInput__CGamepadVtbl;
interface __FIIterable_1_Windows__CGaming__CInput__CGamepad
{
    CONST_VTBL struct __FIIterable_1_Windows__CGaming__CInput__CGamepadVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CGaming__CInput__CRacingWheel __FIIterator_1_Windows__CGaming__CInput__CRacingWheel;
EXTERN_C const IID IID___FIIterator_1_Windows__CGaming__CInput__CRacingWheel;
typedef struct __FIIterator_1_Windows__CGaming__CInput__CRacingWheelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGaming__CInput__CRacingWheel * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRacingWheel * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRacingWheel * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRacingWheel * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRacingWheel * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRacingWheel * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRacingWheel * This, __RPC__out __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRacingWheel * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRacingWheel * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRacingWheel * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGaming__CInput__CRacingWheelVtbl;
interface __FIIterator_1_Windows__CGaming__CInput__CRacingWheel
{
    CONST_VTBL struct __FIIterator_1_Windows__CGaming__CInput__CRacingWheelVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGaming__CInput__CRacingWheel __FIIterable_1_Windows__CGaming__CInput__CRacingWheel;
EXTERN_C const IID IID___FIIterable_1_Windows__CGaming__CInput__CRacingWheel;
typedef struct __FIIterable_1_Windows__CGaming__CInput__CRacingWheelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGaming__CInput__CRacingWheel * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CRacingWheel * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CRacingWheel * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CRacingWheel * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CRacingWheel * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CRacingWheel * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CRacingWheel * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGaming__CInput__CRacingWheel **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGaming__CInput__CRacingWheelVtbl;
interface __FIIterable_1_Windows__CGaming__CInput__CRacingWheel
{
    CONST_VTBL struct __FIIterable_1_Windows__CGaming__CInput__CRacingWheelVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CGaming__CInput__CRawGameController __FIIterator_1_Windows__CGaming__CInput__CRawGameController;
EXTERN_C const IID IID___FIIterator_1_Windows__CGaming__CInput__CRawGameController;
typedef struct __FIIterator_1_Windows__CGaming__CInput__CRawGameControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGaming__CInput__CRawGameController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRawGameController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRawGameController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRawGameController * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRawGameController * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRawGameController * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRawGameController * This, __RPC__out __x_ABI_CWindows_CGaming_CInput_CIRawGameController * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRawGameController * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRawGameController * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CRawGameController * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CInput_CIRawGameController * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGaming__CInput__CRawGameControllerVtbl;
interface __FIIterator_1_Windows__CGaming__CInput__CRawGameController
{
    CONST_VTBL struct __FIIterator_1_Windows__CGaming__CInput__CRawGameControllerVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGaming__CInput__CRawGameController __FIIterable_1_Windows__CGaming__CInput__CRawGameController;
EXTERN_C const IID IID___FIIterable_1_Windows__CGaming__CInput__CRawGameController;
typedef struct __FIIterable_1_Windows__CGaming__CInput__CRawGameControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGaming__CInput__CRawGameController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CRawGameController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CRawGameController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CRawGameController * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CRawGameController * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CRawGameController * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CRawGameController * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGaming__CInput__CRawGameController **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGaming__CInput__CRawGameControllerVtbl;
interface __FIIterable_1_Windows__CGaming__CInput__CRawGameController
{
    CONST_VTBL struct __FIIterable_1_Windows__CGaming__CInput__CRawGameControllerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CGaming__CInput__CUINavigationController __FIIterator_1_Windows__CGaming__CInput__CUINavigationController;
EXTERN_C const IID IID___FIIterator_1_Windows__CGaming__CInput__CUINavigationController;
typedef struct __FIIterator_1_Windows__CGaming__CInput__CUINavigationControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGaming__CInput__CUINavigationController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CUINavigationController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CUINavigationController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CUINavigationController * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CUINavigationController * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CUINavigationController * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CUINavigationController * This, __RPC__out __x_ABI_CWindows_CGaming_CInput_CIUINavigationController * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CUINavigationController * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CUINavigationController * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CUINavigationController * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CInput_CIUINavigationController * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGaming__CInput__CUINavigationControllerVtbl;
interface __FIIterator_1_Windows__CGaming__CInput__CUINavigationController
{
    CONST_VTBL struct __FIIterator_1_Windows__CGaming__CInput__CUINavigationControllerVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGaming__CInput__CUINavigationController __FIIterable_1_Windows__CGaming__CInput__CUINavigationController;
EXTERN_C const IID IID___FIIterable_1_Windows__CGaming__CInput__CUINavigationController;
typedef struct __FIIterable_1_Windows__CGaming__CInput__CUINavigationControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGaming__CInput__CUINavigationController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CUINavigationController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CUINavigationController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CUINavigationController * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CUINavigationController * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CUINavigationController * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CUINavigationController * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGaming__CInput__CUINavigationController **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGaming__CInput__CUINavigationControllerVtbl;
interface __FIIterable_1_Windows__CGaming__CInput__CUINavigationController
{
    CONST_VTBL struct __FIIterable_1_Windows__CGaming__CInput__CUINavigationControllerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGaming__CInput__CArcadeStick;
typedef struct __FIVectorView_1_Windows__CGaming__CInput__CArcadeStickVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGaming_CInput_CIArcadeStick * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick * This,
                       __x_ABI_CWindows_CGaming_CInput_CIArcadeStick * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CInput_CIArcadeStick * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGaming__CInput__CArcadeStickVtbl;
interface __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGaming__CInput__CArcadeStickVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CGaming__CInput__CFlightStick __FIVectorView_1_Windows__CGaming__CInput__CFlightStick;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGaming__CInput__CFlightStick;
typedef struct __FIVectorView_1_Windows__CGaming__CInput__CFlightStickVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CFlightStick * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CFlightStick * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CFlightStick * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CFlightStick * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CFlightStick * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CFlightStick * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CFlightStick * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGaming_CInput_CIFlightStick * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CFlightStick * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CFlightStick * This,
                       __x_ABI_CWindows_CGaming_CInput_CIFlightStick * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CFlightStick * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CInput_CIFlightStick * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGaming__CInput__CFlightStickVtbl;
interface __FIVectorView_1_Windows__CGaming__CInput__CFlightStick
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGaming__CInput__CFlightStickVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CGaming__CInput__CGamepad __FIVectorView_1_Windows__CGaming__CInput__CGamepad;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGaming__CInput__CGamepad;
typedef struct __FIVectorView_1_Windows__CGaming__CInput__CGamepadVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CGamepad * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CGamepad * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CGamepad * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CGamepad * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CGamepad * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CGamepad * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CGamepad * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGaming_CInput_CIGamepad * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CGamepad * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CGamepad * This,
                       __x_ABI_CWindows_CGaming_CInput_CIGamepad * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CGamepad * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CInput_CIGamepad * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGaming__CInput__CGamepadVtbl;
interface __FIVectorView_1_Windows__CGaming__CInput__CGamepad
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGaming__CInput__CGamepadVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGaming__CInput__CRacingWheel;
typedef struct __FIVectorView_1_Windows__CGaming__CInput__CRacingWheelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel * This,
                       __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGaming__CInput__CRacingWheelVtbl;
interface __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGaming__CInput__CRacingWheelVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CGaming__CInput__CRawGameController __FIVectorView_1_Windows__CGaming__CInput__CRawGameController;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGaming__CInput__CRawGameController;
typedef struct __FIVectorView_1_Windows__CGaming__CInput__CRawGameControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRawGameController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRawGameController * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRawGameController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRawGameController * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRawGameController * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRawGameController * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRawGameController * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGaming_CInput_CIRawGameController * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRawGameController * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRawGameController * This,
                       __x_ABI_CWindows_CGaming_CInput_CIRawGameController * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CRawGameController * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CInput_CIRawGameController * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGaming__CInput__CRawGameControllerVtbl;
interface __FIVectorView_1_Windows__CGaming__CInput__CRawGameController
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGaming__CInput__CRawGameControllerVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGaming__CInput__CUINavigationController;
typedef struct __FIVectorView_1_Windows__CGaming__CInput__CUINavigationControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGaming_CInput_CIUINavigationController * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController * This,
                       __x_ABI_CWindows_CGaming_CInput_CIUINavigationController * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CInput_CIUINavigationController * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGaming__CInput__CUINavigationControllerVtbl;
interface __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGaming__CInput__CUINavigationControllerVtbl *lpVtbl;
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
typedef interface __FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick __FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick;
EXTERN_C const IID IID___FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick;
typedef struct __FIEventHandler_1_Windows__CGaming__CInput__CArcadeStickVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIArcadeStick * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CGaming__CInput__CArcadeStickVtbl;
interface __FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CGaming__CInput__CArcadeStickVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIEventHandler_1_Windows__CGaming__CInput__CFlightStick __FIEventHandler_1_Windows__CGaming__CInput__CFlightStick;
EXTERN_C const IID IID___FIEventHandler_1_Windows__CGaming__CInput__CFlightStick;
typedef struct __FIEventHandler_1_Windows__CGaming__CInput__CFlightStickVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CFlightStick * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CFlightStick * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CFlightStick * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CFlightStick * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIFlightStick * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CGaming__CInput__CFlightStickVtbl;
interface __FIEventHandler_1_Windows__CGaming__CInput__CFlightStick
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CGaming__CInput__CFlightStickVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIEventHandler_1_Windows__CGaming__CInput__CGamepad __FIEventHandler_1_Windows__CGaming__CInput__CGamepad;
EXTERN_C const IID IID___FIEventHandler_1_Windows__CGaming__CInput__CGamepad;
typedef struct __FIEventHandler_1_Windows__CGaming__CInput__CGamepadVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CGamepad * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CGamepad * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CGamepad * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CGamepad * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIGamepad * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CGaming__CInput__CGamepadVtbl;
interface __FIEventHandler_1_Windows__CGaming__CInput__CGamepad
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CGaming__CInput__CGamepadVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel __FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel;
EXTERN_C const IID IID___FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel;
typedef struct __FIEventHandler_1_Windows__CGaming__CInput__CRacingWheelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CGaming__CInput__CRacingWheelVtbl;
interface __FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CGaming__CInput__CRacingWheelVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIEventHandler_1_Windows__CGaming__CInput__CRawGameController __FIEventHandler_1_Windows__CGaming__CInput__CRawGameController;
EXTERN_C const IID IID___FIEventHandler_1_Windows__CGaming__CInput__CRawGameController;
typedef struct __FIEventHandler_1_Windows__CGaming__CInput__CRawGameControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CRawGameController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CRawGameController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CRawGameController * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CRawGameController * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIRawGameController * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CGaming__CInput__CRawGameControllerVtbl;
interface __FIEventHandler_1_Windows__CGaming__CInput__CRawGameController
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CGaming__CInput__CRawGameControllerVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController __FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController;
EXTERN_C const IID IID___FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController;
typedef struct __FIEventHandler_1_Windows__CGaming__CInput__CUINavigationControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIUINavigationController * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CGaming__CInput__CUINavigationControllerVtbl;
interface __FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CGaming__CInput__CUINavigationControllerVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset;
typedef struct __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadsetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset * This, __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIGameController * sender, __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIHeadset * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadsetVtbl;
interface __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadsetVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CSystem_CIUserChangedEventArgs __x_ABI_CWindows_CSystem_CIUserChangedEventArgs;
typedef interface __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIGameController * sender, __RPC__in_opt __x_ABI_CWindows_CSystem_CIUserChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor;
typedef interface __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor;
EXTERN_C const IID IID___FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor;
typedef struct __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This, __RPC__out __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl;
interface __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor
{
    CONST_VTBL struct __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor;
EXTERN_C const IID IID___FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor;
typedef struct __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl;
interface __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor
{
    CONST_VTBL struct __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor;
typedef struct __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
                       __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl;
interface __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController;
typedef interface __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController;
typedef struct __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This, __RPC__out __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl;
interface __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController;
typedef struct __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CHaptics__CSimpleHapticsController **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl;
interface __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsController
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController;
typedef struct __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
                       __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl;
interface __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsControllerVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CDevices_CPower_CIBatteryReport __x_ABI_CWindows_CDevices_CPower_CIBatteryReport;
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef enum __x_ABI_CWindows_CGaming_CInput_CArcadeStickButtons __x_ABI_CWindows_CGaming_CInput_CArcadeStickButtons;
typedef enum __x_ABI_CWindows_CGaming_CInput_CFlightStickButtons __x_ABI_CWindows_CGaming_CInput_CFlightStickButtons;
typedef enum __x_ABI_CWindows_CGaming_CInput_CGameControllerButtonLabel __x_ABI_CWindows_CGaming_CInput_CGameControllerButtonLabel;
typedef enum __x_ABI_CWindows_CGaming_CInput_CGameControllerSwitchKind __x_ABI_CWindows_CGaming_CInput_CGameControllerSwitchKind;
typedef enum __x_ABI_CWindows_CGaming_CInput_CGameControllerSwitchPosition __x_ABI_CWindows_CGaming_CInput_CGameControllerSwitchPosition;
typedef enum __x_ABI_CWindows_CGaming_CInput_CGamepadButtons __x_ABI_CWindows_CGaming_CInput_CGamepadButtons;
typedef enum __x_ABI_CWindows_CGaming_CInput_COptionalUINavigationButtons __x_ABI_CWindows_CGaming_CInput_COptionalUINavigationButtons;
typedef enum __x_ABI_CWindows_CGaming_CInput_CRacingWheelButtons __x_ABI_CWindows_CGaming_CInput_CRacingWheelButtons;
typedef enum __x_ABI_CWindows_CGaming_CInput_CRequiredUINavigationButtons __x_ABI_CWindows_CGaming_CInput_CRequiredUINavigationButtons;
typedef struct __x_ABI_CWindows_CGaming_CInput_CArcadeStickReading __x_ABI_CWindows_CGaming_CInput_CArcadeStickReading;
typedef struct __x_ABI_CWindows_CGaming_CInput_CFlightStickReading __x_ABI_CWindows_CGaming_CInput_CFlightStickReading;
typedef struct __x_ABI_CWindows_CGaming_CInput_CGamepadReading __x_ABI_CWindows_CGaming_CInput_CGamepadReading;
typedef struct __x_ABI_CWindows_CGaming_CInput_CGamepadVibration __x_ABI_CWindows_CGaming_CInput_CGamepadVibration;
typedef struct __x_ABI_CWindows_CGaming_CInput_CRacingWheelReading __x_ABI_CWindows_CGaming_CInput_CRacingWheelReading;
typedef struct __x_ABI_CWindows_CGaming_CInput_CUINavigationReading __x_ABI_CWindows_CGaming_CInput_CUINavigationReading;
enum __x_ABI_CWindows_CGaming_CInput_CArcadeStickButtons
{
    ArcadeStickButtons_None = 0,
    ArcadeStickButtons_StickUp = 0x1,
    ArcadeStickButtons_StickDown = 0x2,
    ArcadeStickButtons_StickLeft = 0x4,
    ArcadeStickButtons_StickRight = 0x8,
    ArcadeStickButtons_Action1 = 0x10,
    ArcadeStickButtons_Action2 = 0x20,
    ArcadeStickButtons_Action3 = 0x40,
    ArcadeStickButtons_Action4 = 0x80,
    ArcadeStickButtons_Action5 = 0x100,
    ArcadeStickButtons_Action6 = 0x200,
    ArcadeStickButtons_Special1 = 0x400,
    ArcadeStickButtons_Special2 = 0x800,
};
enum __x_ABI_CWindows_CGaming_CInput_CFlightStickButtons
{
    FlightStickButtons_None = 0,
    FlightStickButtons_FirePrimary = 0x1,
    FlightStickButtons_FireSecondary = 0x2,
};
enum __x_ABI_CWindows_CGaming_CInput_CGameControllerButtonLabel
{
    GameControllerButtonLabel_None = 0,
    GameControllerButtonLabel_XboxBack = 1,
    GameControllerButtonLabel_XboxStart = 2,
    GameControllerButtonLabel_XboxMenu = 3,
    GameControllerButtonLabel_XboxView = 4,
    GameControllerButtonLabel_XboxUp = 5,
    GameControllerButtonLabel_XboxDown = 6,
    GameControllerButtonLabel_XboxLeft = 7,
    GameControllerButtonLabel_XboxRight = 8,
    GameControllerButtonLabel_XboxA = 9,
    GameControllerButtonLabel_XboxB = 10,
    GameControllerButtonLabel_XboxX = 11,
    GameControllerButtonLabel_XboxY = 12,
    GameControllerButtonLabel_XboxLeftBumper = 13,
    GameControllerButtonLabel_XboxLeftTrigger = 14,
    GameControllerButtonLabel_XboxLeftStickButton = 15,
    GameControllerButtonLabel_XboxRightBumper = 16,
    GameControllerButtonLabel_XboxRightTrigger = 17,
    GameControllerButtonLabel_XboxRightStickButton = 18,
    GameControllerButtonLabel_XboxPaddle1 = 19,
    GameControllerButtonLabel_XboxPaddle2 = 20,
    GameControllerButtonLabel_XboxPaddle3 = 21,
    GameControllerButtonLabel_XboxPaddle4 = 22,
    GameControllerButtonLabel_Mode = 23,
    GameControllerButtonLabel_Select = 24,
    GameControllerButtonLabel_Menu = 25,
    GameControllerButtonLabel_View = 26,
    GameControllerButtonLabel_Back = 27,
    GameControllerButtonLabel_Start = 28,
    GameControllerButtonLabel_Options = 29,
    GameControllerButtonLabel_Share = 30,
    GameControllerButtonLabel_Up = 31,
    GameControllerButtonLabel_Down = 32,
    GameControllerButtonLabel_Left = 33,
    GameControllerButtonLabel_Right = 34,
    GameControllerButtonLabel_LetterA = 35,
    GameControllerButtonLabel_LetterB = 36,
    GameControllerButtonLabel_LetterC = 37,
    GameControllerButtonLabel_LetterL = 38,
    GameControllerButtonLabel_LetterR = 39,
    GameControllerButtonLabel_LetterX = 40,
    GameControllerButtonLabel_LetterY = 41,
    GameControllerButtonLabel_LetterZ = 42,
    GameControllerButtonLabel_Cross = 43,
    GameControllerButtonLabel_Circle = 44,
    GameControllerButtonLabel_Square = 45,
    GameControllerButtonLabel_Triangle = 46,
    GameControllerButtonLabel_LeftBumper = 47,
    GameControllerButtonLabel_LeftTrigger = 48,
    GameControllerButtonLabel_LeftStickButton = 49,
    GameControllerButtonLabel_Left1 = 50,
    GameControllerButtonLabel_Left2 = 51,
    GameControllerButtonLabel_Left3 = 52,
    GameControllerButtonLabel_RightBumper = 53,
    GameControllerButtonLabel_RightTrigger = 54,
    GameControllerButtonLabel_RightStickButton = 55,
    GameControllerButtonLabel_Right1 = 56,
    GameControllerButtonLabel_Right2 = 57,
    GameControllerButtonLabel_Right3 = 58,
    GameControllerButtonLabel_Paddle1 = 59,
    GameControllerButtonLabel_Paddle2 = 60,
    GameControllerButtonLabel_Paddle3 = 61,
    GameControllerButtonLabel_Paddle4 = 62,
    GameControllerButtonLabel_Plus = 63,
    GameControllerButtonLabel_Minus = 64,
    GameControllerButtonLabel_DownLeftArrow = 65,
    GameControllerButtonLabel_DialLeft = 66,
    GameControllerButtonLabel_DialRight = 67,
    GameControllerButtonLabel_Suspension = 68,
};
enum __x_ABI_CWindows_CGaming_CInput_CGameControllerSwitchKind
{
    GameControllerSwitchKind_TwoWay = 0,
    GameControllerSwitchKind_FourWay = 1,
    GameControllerSwitchKind_EightWay = 2,
};
enum __x_ABI_CWindows_CGaming_CInput_CGameControllerSwitchPosition
{
    GameControllerSwitchPosition_Center = 0,
    GameControllerSwitchPosition_Up = 1,
    GameControllerSwitchPosition_UpRight = 2,
    GameControllerSwitchPosition_Right = 3,
    GameControllerSwitchPosition_DownRight = 4,
    GameControllerSwitchPosition_Down = 5,
    GameControllerSwitchPosition_DownLeft = 6,
    GameControllerSwitchPosition_Left = 7,
    GameControllerSwitchPosition_UpLeft = 8,
};
enum __x_ABI_CWindows_CGaming_CInput_CGamepadButtons
{
    GamepadButtons_None = 0,
    GamepadButtons_Menu = 0x1,
    GamepadButtons_View = 0x2,
    GamepadButtons_A = 0x4,
    GamepadButtons_B = 0x8,
    GamepadButtons_X = 0x10,
    GamepadButtons_Y = 0x20,
    GamepadButtons_DPadUp = 0x40,
    GamepadButtons_DPadDown = 0x80,
    GamepadButtons_DPadLeft = 0x100,
    GamepadButtons_DPadRight = 0x200,
    GamepadButtons_LeftShoulder = 0x400,
    GamepadButtons_RightShoulder = 0x800,
    GamepadButtons_LeftThumbstick = 0x1000,
    GamepadButtons_RightThumbstick = 0x2000,
    GamepadButtons_Paddle1 = 0x4000,
    GamepadButtons_Paddle2 = 0x8000,
    GamepadButtons_Paddle3 = 0x10000,
    GamepadButtons_Paddle4 = 0x20000,
};
enum __x_ABI_CWindows_CGaming_CInput_COptionalUINavigationButtons
{
    OptionalUINavigationButtons_None = 0,
    OptionalUINavigationButtons_Context1 = 0x1,
    OptionalUINavigationButtons_Context2 = 0x2,
    OptionalUINavigationButtons_Context3 = 0x4,
    OptionalUINavigationButtons_Context4 = 0x8,
    OptionalUINavigationButtons_PageUp = 0x10,
    OptionalUINavigationButtons_PageDown = 0x20,
    OptionalUINavigationButtons_PageLeft = 0x40,
    OptionalUINavigationButtons_PageRight = 0x80,
    OptionalUINavigationButtons_ScrollUp = 0x100,
    OptionalUINavigationButtons_ScrollDown = 0x200,
    OptionalUINavigationButtons_ScrollLeft = 0x400,
    OptionalUINavigationButtons_ScrollRight = 0x800,
};
enum __x_ABI_CWindows_CGaming_CInput_CRacingWheelButtons
{
    RacingWheelButtons_None = 0,
    RacingWheelButtons_PreviousGear = 0x1,
    RacingWheelButtons_NextGear = 0x2,
    RacingWheelButtons_DPadUp = 0x4,
    RacingWheelButtons_DPadDown = 0x8,
    RacingWheelButtons_DPadLeft = 0x10,
    RacingWheelButtons_DPadRight = 0x20,
    RacingWheelButtons_Button1 = 0x40,
    RacingWheelButtons_Button2 = 0x80,
    RacingWheelButtons_Button3 = 0x100,
    RacingWheelButtons_Button4 = 0x200,
    RacingWheelButtons_Button5 = 0x400,
    RacingWheelButtons_Button6 = 0x800,
    RacingWheelButtons_Button7 = 0x1000,
    RacingWheelButtons_Button8 = 0x2000,
    RacingWheelButtons_Button9 = 0x4000,
    RacingWheelButtons_Button10 = 0x8000,
    RacingWheelButtons_Button11 = 0x10000,
    RacingWheelButtons_Button12 = 0x20000,
    RacingWheelButtons_Button13 = 0x40000,
    RacingWheelButtons_Button14 = 0x80000,
    RacingWheelButtons_Button15 = 0x100000,
    RacingWheelButtons_Button16 = 0x200000,
};
enum __x_ABI_CWindows_CGaming_CInput_CRequiredUINavigationButtons
{
    RequiredUINavigationButtons_None = 0,
    RequiredUINavigationButtons_Menu = 0x1,
    RequiredUINavigationButtons_View = 0x2,
    RequiredUINavigationButtons_Accept = 0x4,
    RequiredUINavigationButtons_Cancel = 0x8,
    RequiredUINavigationButtons_Up = 0x10,
    RequiredUINavigationButtons_Down = 0x20,
    RequiredUINavigationButtons_Left = 0x40,
    RequiredUINavigationButtons_Right = 0x80,
};
struct __x_ABI_CWindows_CGaming_CInput_CArcadeStickReading
{
    UINT64 Timestamp;
    __x_ABI_CWindows_CGaming_CInput_CArcadeStickButtons Buttons;
};
struct __x_ABI_CWindows_CGaming_CInput_CFlightStickReading
{
    UINT64 Timestamp;
    __x_ABI_CWindows_CGaming_CInput_CFlightStickButtons Buttons;
    __x_ABI_CWindows_CGaming_CInput_CGameControllerSwitchPosition HatSwitch;
    DOUBLE Roll;
    DOUBLE Pitch;
    DOUBLE Yaw;
    DOUBLE Throttle;
};
struct __x_ABI_CWindows_CGaming_CInput_CGamepadReading
{
    UINT64 Timestamp;
    __x_ABI_CWindows_CGaming_CInput_CGamepadButtons Buttons;
    DOUBLE LeftTrigger;
    DOUBLE RightTrigger;
    DOUBLE LeftThumbstickX;
    DOUBLE LeftThumbstickY;
    DOUBLE RightThumbstickX;
    DOUBLE RightThumbstickY;
};
struct __x_ABI_CWindows_CGaming_CInput_CGamepadVibration
{
    DOUBLE LeftMotor;
    DOUBLE RightMotor;
    DOUBLE LeftTrigger;
    DOUBLE RightTrigger;
};
struct __x_ABI_CWindows_CGaming_CInput_CRacingWheelReading
{
    UINT64 Timestamp;
    __x_ABI_CWindows_CGaming_CInput_CRacingWheelButtons Buttons;
    INT32 PatternShifterGear;
    DOUBLE Wheel;
    DOUBLE Throttle;
    DOUBLE Brake;
    DOUBLE Clutch;
    DOUBLE Handbrake;
};
struct __x_ABI_CWindows_CGaming_CInput_CUINavigationReading
{
    UINT64 Timestamp;
    __x_ABI_CWindows_CGaming_CInput_CRequiredUINavigationButtons RequiredButtons;
    __x_ABI_CWindows_CGaming_CInput_COptionalUINavigationButtons OptionalButtons;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IArcadeStick[] = L"Windows.Gaming.Input.IArcadeStick";
typedef struct __x_ABI_CWindows_CGaming_CInput_CIArcadeStickVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStick * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStick * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStick * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStick * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStick * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStick * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetButtonLabel )(
        __x_ABI_CWindows_CGaming_CInput_CIArcadeStick * This,
                  __x_ABI_CWindows_CGaming_CInput_CArcadeStickButtons button,
                           __RPC__out __x_ABI_CWindows_CGaming_CInput_CGameControllerButtonLabel * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentReading )(
        __x_ABI_CWindows_CGaming_CInput_CIArcadeStick * This,
                           __RPC__out __x_ABI_CWindows_CGaming_CInput_CArcadeStickReading * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CIArcadeStickVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CIArcadeStick
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIArcadeStickVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetButtonLabel(This,button,value) )
    ( (This)->lpVtbl->GetCurrentReading(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIArcadeStick;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IArcadeStickStatics[] = L"Windows.Gaming.Input.IArcadeStickStatics";
typedef struct __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_ArcadeStickAdded )(
        __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ArcadeStickAdded )(
        __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ArcadeStickRemoved )(
        __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CArcadeStick * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ArcadeStickRemoved )(
        __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ArcadeSticks )(
        __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CGaming__CInput__CArcadeStick * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStaticsVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_ArcadeStickAdded(This,value,token) )
    ( (This)->lpVtbl->remove_ArcadeStickAdded(This,token) )
    ( (This)->lpVtbl->add_ArcadeStickRemoved(This,value,token) )
    ( (This)->lpVtbl->remove_ArcadeStickRemoved(This,token) )
    ( (This)->lpVtbl->get_ArcadeSticks(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IArcadeStickStatics2[] = L"Windows.Gaming.Input.IArcadeStickStatics2";
typedef struct __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromGameController )(
        __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIGameController * gameController,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGaming_CInput_CIArcadeStick * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2Vtbl;
interface __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromGameController(This,gameController,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIArcadeStickStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IFlightStick[] = L"Windows.Gaming.Input.IFlightStick";
typedef struct __x_ABI_CWindows_CGaming_CInput_CIFlightStickVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIFlightStick * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIFlightStick * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIFlightStick * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIFlightStick * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIFlightStick * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIFlightStick * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HatSwitchKind )(
        __x_ABI_CWindows_CGaming_CInput_CIFlightStick * This,
                           __RPC__out __x_ABI_CWindows_CGaming_CInput_CGameControllerSwitchKind * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetButtonLabel )(
        __x_ABI_CWindows_CGaming_CInput_CIFlightStick * This,
                  __x_ABI_CWindows_CGaming_CInput_CFlightStickButtons button,
                           __RPC__out __x_ABI_CWindows_CGaming_CInput_CGameControllerButtonLabel * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentReading )(
        __x_ABI_CWindows_CGaming_CInput_CIFlightStick * This,
                           __RPC__out __x_ABI_CWindows_CGaming_CInput_CFlightStickReading * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CIFlightStickVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CIFlightStick
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIFlightStickVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HatSwitchKind(This,value) )
    ( (This)->lpVtbl->GetButtonLabel(This,button,value) )
    ( (This)->lpVtbl->GetCurrentReading(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIFlightStick;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IFlightStickStatics[] = L"Windows.Gaming.Input.IFlightStickStatics";
typedef struct __x_ABI_CWindows_CGaming_CInput_CIFlightStickStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_FlightStickAdded )(
        __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CFlightStick * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_FlightStickAdded )(
        __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_FlightStickRemoved )(
        __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CFlightStick * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_FlightStickRemoved )(
        __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FlightSticks )(
        __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CGaming__CInput__CFlightStick * * value
        );
    HRESULT ( STDMETHODCALLTYPE *FromGameController )(
        __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIGameController * gameController,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGaming_CInput_CIFlightStick * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CIFlightStickStaticsVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIFlightStickStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_FlightStickAdded(This,value,token) )
    ( (This)->lpVtbl->remove_FlightStickAdded(This,token) )
    ( (This)->lpVtbl->add_FlightStickRemoved(This,value,token) )
    ( (This)->lpVtbl->remove_FlightStickRemoved(This,token) )
    ( (This)->lpVtbl->get_FlightSticks(This,value) )
    ( (This)->lpVtbl->FromGameController(This,gameController,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIFlightStickStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IGameController[] = L"Windows.Gaming.Input.IGameController";
typedef struct __x_ABI_CWindows_CGaming_CInput_CIGameControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameController * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameController * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_HeadsetConnected )(
        __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_HeadsetConnected )(
        __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_HeadsetDisconnected )(
        __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_HeadsetDisconnected )(
        __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_UserChanged )(
        __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_UserChanged )(
        __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Headset )(
        __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGaming_CInput_CIHeadset * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsWireless )(
        __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CIGameControllerVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CIGameController
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIGameControllerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_HeadsetConnected(This,value,token) )
    ( (This)->lpVtbl->remove_HeadsetConnected(This,token) )
    ( (This)->lpVtbl->add_HeadsetDisconnected(This,value,token) )
    ( (This)->lpVtbl->remove_HeadsetDisconnected(This,token) )
    ( (This)->lpVtbl->add_UserChanged(This,value,token) )
    ( (This)->lpVtbl->remove_UserChanged(This,token) )
    ( (This)->lpVtbl->get_Headset(This,value) )
    ( (This)->lpVtbl->get_IsWireless(This,value) )
    ( (This)->lpVtbl->get_User(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIGameController;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IGameControllerBatteryInfo[] = L"Windows.Gaming.Input.IGameControllerBatteryInfo";
typedef struct __x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryGetBatteryReport )(
        __x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPower_CIBatteryReport * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfoVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryGetBatteryReport(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIGameControllerBatteryInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IGamepad[] = L"Windows.Gaming.Input.IGamepad";
typedef struct __x_ABI_CWindows_CGaming_CInput_CIGamepadVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepad * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepad * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepad * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepad * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepad * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepad * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Vibration )(
        __x_ABI_CWindows_CGaming_CInput_CIGamepad * This,
                           __RPC__out __x_ABI_CWindows_CGaming_CInput_CGamepadVibration * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Vibration )(
        __x_ABI_CWindows_CGaming_CInput_CIGamepad * This,
                  __x_ABI_CWindows_CGaming_CInput_CGamepadVibration value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentReading )(
        __x_ABI_CWindows_CGaming_CInput_CIGamepad * This,
                           __RPC__out __x_ABI_CWindows_CGaming_CInput_CGamepadReading * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CIGamepadVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CIGamepad
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIGamepadVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Vibration(This,value) )
    ( (This)->lpVtbl->put_Vibration(This,value) )
    ( (This)->lpVtbl->GetCurrentReading(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIGamepad;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IGamepad2[] = L"Windows.Gaming.Input.IGamepad2";
typedef struct __x_ABI_CWindows_CGaming_CInput_CIGamepad2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepad2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepad2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepad2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepad2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepad2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepad2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetButtonLabel )(
        __x_ABI_CWindows_CGaming_CInput_CIGamepad2 * This,
                  __x_ABI_CWindows_CGaming_CInput_CGamepadButtons button,
                           __RPC__out __x_ABI_CWindows_CGaming_CInput_CGameControllerButtonLabel * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CIGamepad2Vtbl;
interface __x_ABI_CWindows_CGaming_CInput_CIGamepad2
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIGamepad2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetButtonLabel(This,button,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIGamepad2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IGamepadStatics[] = L"Windows.Gaming.Input.IGamepadStatics";
typedef struct __x_ABI_CWindows_CGaming_CInput_CIGamepadStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_GamepadAdded )(
        __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CGamepad * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_GamepadAdded )(
        __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_GamepadRemoved )(
        __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CGamepad * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_GamepadRemoved )(
        __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Gamepads )(
        __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CGaming__CInput__CGamepad * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CIGamepadStaticsVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIGamepadStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_GamepadAdded(This,value,token) )
    ( (This)->lpVtbl->remove_GamepadAdded(This,token) )
    ( (This)->lpVtbl->add_GamepadRemoved(This,value,token) )
    ( (This)->lpVtbl->remove_GamepadRemoved(This,token) )
    ( (This)->lpVtbl->get_Gamepads(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIGamepadStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IGamepadStatics2[] = L"Windows.Gaming.Input.IGamepadStatics2";
typedef struct __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromGameController )(
        __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIGameController * gameController,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGaming_CInput_CIGamepad * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2Vtbl;
interface __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromGameController(This,gameController,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIGamepadStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IHeadset[] = L"Windows.Gaming.Input.IHeadset";
typedef struct __x_ABI_CWindows_CGaming_CInput_CIHeadsetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIHeadset * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIHeadset * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIHeadset * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIHeadset * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIHeadset * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIHeadset * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CaptureDeviceId )(
        __x_ABI_CWindows_CGaming_CInput_CIHeadset * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RenderDeviceId )(
        __x_ABI_CWindows_CGaming_CInput_CIHeadset * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CIHeadsetVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CIHeadset
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIHeadsetVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CaptureDeviceId(This,value) )
    ( (This)->lpVtbl->get_RenderDeviceId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIHeadset;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IRacingWheel[] = L"Windows.Gaming.Input.IRacingWheel";
typedef struct __x_ABI_CWindows_CGaming_CInput_CIRacingWheelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HasClutch )(
        __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasHandbrake )(
        __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasPatternShifter )(
        __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxPatternShifterGear )(
        __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxWheelAngle )(
        __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WheelMotor )(
        __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetButtonLabel )(
        __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * This,
                  __x_ABI_CWindows_CGaming_CInput_CRacingWheelButtons button,
                           __RPC__out __x_ABI_CWindows_CGaming_CInput_CGameControllerButtonLabel * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentReading )(
        __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * This,
                           __RPC__out __x_ABI_CWindows_CGaming_CInput_CRacingWheelReading * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CIRacingWheelVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CIRacingWheel
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIRacingWheelVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HasClutch(This,value) )
    ( (This)->lpVtbl->get_HasHandbrake(This,value) )
    ( (This)->lpVtbl->get_HasPatternShifter(This,value) )
    ( (This)->lpVtbl->get_MaxPatternShifterGear(This,value) )
    ( (This)->lpVtbl->get_MaxWheelAngle(This,value) )
    ( (This)->lpVtbl->get_WheelMotor(This,value) )
    ( (This)->lpVtbl->GetButtonLabel(This,button,value) )
    ( (This)->lpVtbl->GetCurrentReading(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIRacingWheel;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IRacingWheelStatics[] = L"Windows.Gaming.Input.IRacingWheelStatics";
typedef struct __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_RacingWheelAdded )(
        __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_RacingWheelAdded )(
        __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_RacingWheelRemoved )(
        __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CRacingWheel * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_RacingWheelRemoved )(
        __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RacingWheels )(
        __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CGaming__CInput__CRacingWheel * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStaticsVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_RacingWheelAdded(This,value,token) )
    ( (This)->lpVtbl->remove_RacingWheelAdded(This,token) )
    ( (This)->lpVtbl->add_RacingWheelRemoved(This,value,token) )
    ( (This)->lpVtbl->remove_RacingWheelRemoved(This,token) )
    ( (This)->lpVtbl->get_RacingWheels(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IRacingWheelStatics2[] = L"Windows.Gaming.Input.IRacingWheelStatics2";
typedef struct __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromGameController )(
        __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIGameController * gameController,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGaming_CInput_CIRacingWheel * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2Vtbl;
interface __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromGameController(This,gameController,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIRacingWheelStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IRawGameController[] = L"Windows.Gaming.Input.IRawGameController";
typedef struct __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameController * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameController * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameController * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameController * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameController * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameController * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AxisCount )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameController * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ButtonCount )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameController * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ForceFeedbackMotors )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameController * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HardwareProductId )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameController * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HardwareVendorId )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameController * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SwitchCount )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameController * This,
                           __RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetButtonLabel )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameController * This,
                  INT32 buttonIndex,
                           __RPC__out __x_ABI_CWindows_CGaming_CInput_CGameControllerButtonLabel * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentReading )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameController * This,
                  UINT32 __buttonArraySize,
                                               __RPC__out_ecount_full(__buttonArraySize) boolean * buttonArray,
                  UINT32 __switchArraySize,
                                               __RPC__out_ecount_full(__switchArraySize) __x_ABI_CWindows_CGaming_CInput_CGameControllerSwitchPosition * switchArray,
                  UINT32 __axisArraySize,
                                             __RPC__out_ecount_full(__axisArraySize) DOUBLE * axisArray,
                           __RPC__out UINT64 * timestamp
        );
    HRESULT ( STDMETHODCALLTYPE *GetSwitchKind )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameController * This,
                  INT32 switchIndex,
                           __RPC__out __x_ABI_CWindows_CGaming_CInput_CGameControllerSwitchKind * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CIRawGameController
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AxisCount(This,value) )
    ( (This)->lpVtbl->get_ButtonCount(This,value) )
    ( (This)->lpVtbl->get_ForceFeedbackMotors(This,value) )
    ( (This)->lpVtbl->get_HardwareProductId(This,value) )
    ( (This)->lpVtbl->get_HardwareVendorId(This,value) )
    ( (This)->lpVtbl->get_SwitchCount(This,value) )
    ( (This)->lpVtbl->GetButtonLabel(This,buttonIndex,value) )
    ( (This)->lpVtbl->GetCurrentReading(This,__buttonArraySize,buttonArray,__switchArraySize,switchArray,__axisArraySize,axisArray,timestamp) )
    ( (This)->lpVtbl->GetSwitchKind(This,switchIndex,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIRawGameController;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IRawGameController2[] = L"Windows.Gaming.Input.IRawGameController2";
typedef struct __x_ABI_CWindows_CGaming_CInput_CIRawGameController2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameController2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameController2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameController2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameController2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameController2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameController2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SimpleHapticsControllers )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameController2 * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CHaptics__CSimpleHapticsController * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NonRoamableId )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameController2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameController2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CIRawGameController2Vtbl;
interface __x_ABI_CWindows_CGaming_CInput_CIRawGameController2
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIRawGameController2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SimpleHapticsControllers(This,value) )
    ( (This)->lpVtbl->get_NonRoamableId(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIRawGameController2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IRawGameControllerStatics[] = L"Windows.Gaming.Input.IRawGameControllerStatics";
typedef struct __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_RawGameControllerAdded )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CRawGameController * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_RawGameControllerAdded )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_RawGameControllerRemoved )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CRawGameController * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_RawGameControllerRemoved )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RawGameControllers )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CGaming__CInput__CRawGameController * * value
        );
    HRESULT ( STDMETHODCALLTYPE *FromGameController )(
        __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIGameController * gameController,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGaming_CInput_CIRawGameController * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStaticsVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_RawGameControllerAdded(This,value,token) )
    ( (This)->lpVtbl->remove_RawGameControllerAdded(This,token) )
    ( (This)->lpVtbl->add_RawGameControllerRemoved(This,value,token) )
    ( (This)->lpVtbl->remove_RawGameControllerRemoved(This,token) )
    ( (This)->lpVtbl->get_RawGameControllers(This,value) )
    ( (This)->lpVtbl->FromGameController(This,gameController,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIRawGameControllerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IUINavigationController[] = L"Windows.Gaming.Input.IUINavigationController";
typedef struct __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationController * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationController * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationController * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationController * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationController * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationController * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCurrentReading )(
        __x_ABI_CWindows_CGaming_CInput_CIUINavigationController * This,
                           __RPC__out __x_ABI_CWindows_CGaming_CInput_CUINavigationReading * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetOptionalButtonLabel )(
        __x_ABI_CWindows_CGaming_CInput_CIUINavigationController * This,
                  __x_ABI_CWindows_CGaming_CInput_COptionalUINavigationButtons button,
                           __RPC__out __x_ABI_CWindows_CGaming_CInput_CGameControllerButtonLabel * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetRequiredButtonLabel )(
        __x_ABI_CWindows_CGaming_CInput_CIUINavigationController * This,
                  __x_ABI_CWindows_CGaming_CInput_CRequiredUINavigationButtons button,
                           __RPC__out __x_ABI_CWindows_CGaming_CInput_CGameControllerButtonLabel * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CIUINavigationController
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCurrentReading(This,value) )
    ( (This)->lpVtbl->GetOptionalButtonLabel(This,button,value) )
    ( (This)->lpVtbl->GetRequiredButtonLabel(This,button,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIUINavigationController;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IUINavigationControllerStatics[] = L"Windows.Gaming.Input.IUINavigationControllerStatics";
typedef struct __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_UINavigationControllerAdded )(
        __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_UINavigationControllerAdded )(
        __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_UINavigationControllerRemoved )(
        __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CUINavigationController * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_UINavigationControllerRemoved )(
        __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UINavigationControllers )(
        __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CGaming__CInput__CUINavigationController * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStaticsVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_UINavigationControllerAdded(This,value,token) )
    ( (This)->lpVtbl->remove_UINavigationControllerAdded(This,token) )
    ( (This)->lpVtbl->add_UINavigationControllerRemoved(This,value,token) )
    ( (This)->lpVtbl->remove_UINavigationControllerRemoved(This,token) )
    ( (This)->lpVtbl->get_UINavigationControllers(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IUINavigationControllerStatics2[] = L"Windows.Gaming.Input.IUINavigationControllerStatics2";
typedef struct __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromGameController )(
        __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIGameController * gameController,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGaming_CInput_CIUINavigationController * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2Vtbl;
interface __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromGameController(This,gameController,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIUINavigationControllerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_ArcadeStick[] = L"Windows.Gaming.Input.ArcadeStick";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_FlightStick[] = L"Windows.Gaming.Input.FlightStick";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_Gamepad[] = L"Windows.Gaming.Input.Gamepad";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_Headset[] = L"Windows.Gaming.Input.Headset";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_RacingWheel[] = L"Windows.Gaming.Input.RacingWheel";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_RawGameController[] = L"Windows.Gaming.Input.RawGameController";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_UINavigationController[] = L"Windows.Gaming.Input.UINavigationController";
       
       
#pragma clang diagnostic pop
