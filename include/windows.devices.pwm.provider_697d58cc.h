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
#include "Windows.Devices.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider;
typedef interface __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider;
typedef interface __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider;
typedef struct __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This, __RPC__out __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProviderVtbl;
interface __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProviderVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider;
typedef struct __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProviderVtbl;
interface __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProviderVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider;
typedef struct __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This,
                       __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProviderVtbl;
interface __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProviderVtbl *lpVtbl;
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
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Pwm_Provider_IPwmControllerProvider[] = L"Windows.Devices.Pwm.Provider.IPwmControllerProvider";
typedef struct __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PinCount )(
        __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ActualFrequency )(
        __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * This,
                           __RPC__out DOUBLE * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetDesiredFrequency )(
        __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * This,
                  DOUBLE frequency,
                           __RPC__out DOUBLE * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxFrequency )(
        __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinFrequency )(
        __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * This,
                           __RPC__out DOUBLE * value
        );
    HRESULT ( STDMETHODCALLTYPE *AcquirePin )(
        __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * This,
                  INT32 pin
        );
    HRESULT ( STDMETHODCALLTYPE *ReleasePin )(
        __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * This,
                  INT32 pin
        );
    HRESULT ( STDMETHODCALLTYPE *EnablePin )(
        __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * This,
                  INT32 pin
        );
    HRESULT ( STDMETHODCALLTYPE *DisablePin )(
        __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * This,
                  INT32 pin
        );
    HRESULT ( STDMETHODCALLTYPE *SetPulseParameters )(
        __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider * This,
                  INT32 pin,
                  DOUBLE dutyCycle,
                  boolean invertPolarity
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProviderVtbl;
interface __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PinCount(This,value) )
    ( (This)->lpVtbl->get_ActualFrequency(This,value) )
    ( (This)->lpVtbl->SetDesiredFrequency(This,frequency,result) )
    ( (This)->lpVtbl->get_MaxFrequency(This,value) )
    ( (This)->lpVtbl->get_MinFrequency(This,value) )
    ( (This)->lpVtbl->AcquirePin(This,pin) )
    ( (This)->lpVtbl->ReleasePin(This,pin) )
    ( (This)->lpVtbl->EnablePin(This,pin) )
    ( (This)->lpVtbl->DisablePin(This,pin) )
    ( (This)->lpVtbl->SetPulseParameters(This,pin,dutyCycle,invertPolarity) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmControllerProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Pwm_Provider_IPwmProvider[] = L"Windows.Devices.Pwm.Provider.IPwmProvider";
typedef struct __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetControllers )(
        __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CPwm__CProvider__CIPwmControllerProvider * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProviderVtbl;
interface __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetControllers(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPwm_CProvider_CIPwmProvider;
       
       
#pragma clang diagnostic pop
