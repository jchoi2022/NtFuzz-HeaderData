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
typedef interface __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider;
typedef interface __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider;
typedef interface __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider;
typedef struct __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This, __RPC__out __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProviderVtbl;
interface __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProviderVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider;
typedef struct __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProviderVtbl;
interface __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProviderVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider;
typedef struct __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This,
                       __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProviderVtbl;
interface __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProviderVtbl *lpVtbl;
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
typedef enum __x_ABI_CWindows_CDevices_CAdc_CProvider_CProviderAdcChannelMode __x_ABI_CWindows_CDevices_CAdc_CProvider_CProviderAdcChannelMode;
enum __x_ABI_CWindows_CDevices_CAdc_CProvider_CProviderAdcChannelMode
{
    ProviderAdcChannelMode_SingleEnded = 0,
    ProviderAdcChannelMode_Differential = 1,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Adc_Provider_IAdcControllerProvider[] = L"Windows.Devices.Adc.Provider.IAdcControllerProvider";
typedef struct __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ChannelCount )(
        __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResolutionInBits )(
        __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinValue )(
        __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxValue )(
        __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChannelMode )(
        __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CAdc_CProvider_CProviderAdcChannelMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ChannelMode )(
        __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * This,
                  __x_ABI_CWindows_CDevices_CAdc_CProvider_CProviderAdcChannelMode value
        );
    HRESULT ( STDMETHODCALLTYPE *IsChannelModeSupported )(
        __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * This,
                  __x_ABI_CWindows_CDevices_CAdc_CProvider_CProviderAdcChannelMode channelMode,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *AcquireChannel )(
        __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * This,
                  INT32 channel
        );
    HRESULT ( STDMETHODCALLTYPE *ReleaseChannel )(
        __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * This,
                  INT32 channel
        );
    HRESULT ( STDMETHODCALLTYPE *ReadValue )(
        __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider * This,
                  INT32 channelNumber,
                           __RPC__out INT32 * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProviderVtbl;
interface __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ChannelCount(This,value) )
    ( (This)->lpVtbl->get_ResolutionInBits(This,value) )
    ( (This)->lpVtbl->get_MinValue(This,value) )
    ( (This)->lpVtbl->get_MaxValue(This,value) )
    ( (This)->lpVtbl->get_ChannelMode(This,value) )
    ( (This)->lpVtbl->put_ChannelMode(This,value) )
    ( (This)->lpVtbl->IsChannelModeSupported(This,channelMode,result) )
    ( (This)->lpVtbl->AcquireChannel(This,channel) )
    ( (This)->lpVtbl->ReleaseChannel(This,channel) )
    ( (This)->lpVtbl->ReadValue(This,channelNumber,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcControllerProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Adc_Provider_IAdcProvider[] = L"Windows.Devices.Adc.Provider.IAdcProvider";
typedef struct __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetControllers )(
        __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CAdc__CProvider__CIAdcControllerProvider * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProviderVtbl;
interface __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetControllers(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAdc_CProvider_CIAdcProvider;
       
       
#pragma clang diagnostic pop
