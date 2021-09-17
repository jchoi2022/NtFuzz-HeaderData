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
#include "Windows.ApplicationModel.Background.h"
#include "Windows.Security.Credentials.h"
#include "Windows.Storage.Streams.h"
#include "Windows.UI.h"
#include "Windows.UI.Popups.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2 __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2 __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2 __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics2 __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics2;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2 __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2 __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs2 __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs2;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2 __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation;
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2 __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2;
enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass;
typedef interface __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass;
typedef struct __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClassVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass * This, __RPC__out enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClassVtbl;
interface __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClassVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass;
typedef struct __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClassVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceClass **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClassVtbl;
interface __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClass
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceClassVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation;
typedef struct __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation * This, __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformationVtbl;
interface __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformationVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation;
typedef struct __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceInformation **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformationVtbl;
interface __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformation
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceInformationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent;
typedef struct __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This, __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventVtbl;
interface __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent;
typedef struct __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventVtbl;
interface __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceWatcherEventKind;
typedef interface __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind;
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind;
typedef struct __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKindVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * This, __RPC__out enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceWatcherEventKind *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceWatcherEventKind *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKindVtbl;
interface __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKindVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind;
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind;
typedef struct __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKindVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * This, __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind **first);
    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKindVtbl;
interface __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKindVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass;
typedef struct __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClassVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
                       enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClassVtbl;
interface __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClassVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation;
typedef struct __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation * This,
                       __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformationVtbl;
interface __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformationVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent;
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent;
typedef struct __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This,
                       __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventVtbl;
interface __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass;
EXTERN_C const IID IID___FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass;
typedef struct __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClassVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This, __RPC__deref_out_opt enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
                   unsigned int index,
                            __RPC__deref_out_opt enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceClass **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
                   __RPC__in enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
                   unsigned int index,
                   __RPC__in enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
                   unsigned int index,
                   __RPC__in enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This, __RPC__in enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass *value);
    END_INTERFACE
} __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClassVtbl;
interface __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass
{
    CONST_VTBL struct __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClassVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceAccessStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus * This, __RPC__out enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceAccessStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatusVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceAccessStatusVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformation **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation * This, __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollectionVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollectionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * This, __RPC__out __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceInformation * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollectionVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollectionVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDevicePairingResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * This, __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResultVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResultVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnailVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnailVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnailVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnailVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceThumbnail **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail * This, __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnailVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnailVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult * This, __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResultVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResultVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgs __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectable __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgs __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgs __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformation __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformation;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformation;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformation * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformation * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformation
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdateVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdateVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIKeyValuePair_2_HSTRING_IInspectable __FIKeyValuePair_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_IInspectable;
typedef struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt IInspectable * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_IInspectableVtbl;
interface __FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out __FIKeyValuePair_2_HSTRING_IInspectable * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_IInspectable * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_IInspectable __FIMapView_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIMapView_2_HSTRING_IInspectable;
typedef struct __FIMapView_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt IInspectable * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_IInspectableVtbl;
interface __FIMapView_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMapView_2_HSTRING_IInspectableVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceWatcherTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceWatcherTrigger;
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIOutputStream __x_ABI_CWindows_CStorage_CStreams_CIOutputStream;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;
typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;
typedef enum __x_ABI_CWindows_CUI_CPopups_CPlacement __x_ABI_CWindows_CUI_CPopups_CPlacement;
typedef enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceAccessStatus __x_ABI_CWindows_CDevices_CEnumeration_CDeviceAccessStatus;
typedef enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass;
typedef enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceInformationKind __x_ABI_CWindows_CDevices_CEnumeration_CDeviceInformationKind;
typedef enum __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingKinds __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingKinds;
typedef enum __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingProtectionLevel __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingProtectionLevel;
typedef enum __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingResultStatus __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingResultStatus;
typedef enum __x_ABI_CWindows_CDevices_CEnumeration_CDevicePickerDisplayStatusOptions __x_ABI_CWindows_CDevices_CEnumeration_CDevicePickerDisplayStatusOptions;
typedef enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceUnpairingResultStatus __x_ABI_CWindows_CDevices_CEnumeration_CDeviceUnpairingResultStatus;
typedef enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceWatcherEventKind __x_ABI_CWindows_CDevices_CEnumeration_CDeviceWatcherEventKind;
typedef enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceWatcherStatus __x_ABI_CWindows_CDevices_CEnumeration_CDeviceWatcherStatus;
typedef enum __x_ABI_CWindows_CDevices_CEnumeration_CPanel __x_ABI_CWindows_CDevices_CEnumeration_CPanel;
enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceAccessStatus
{
    DeviceAccessStatus_Unspecified = 0,
    DeviceAccessStatus_Allowed = 1,
    DeviceAccessStatus_DeniedByUser = 2,
    DeviceAccessStatus_DeniedBySystem = 3,
};
enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass
{
    DeviceClass_All = 0,
    DeviceClass_AudioCapture = 1,
    DeviceClass_AudioRender = 2,
    DeviceClass_PortableStorageDevice = 3,
    DeviceClass_VideoCapture = 4,
    DeviceClass_ImageScanner = 5,
    DeviceClass_Location = 6,
};
enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceInformationKind
{
    DeviceInformationKind_Unknown = 0,
    DeviceInformationKind_DeviceInterface = 1,
    DeviceInformationKind_DeviceContainer = 2,
    DeviceInformationKind_Device = 3,
    DeviceInformationKind_DeviceInterfaceClass = 4,
    DeviceInformationKind_AssociationEndpoint = 5,
    DeviceInformationKind_AssociationEndpointContainer = 6,
    DeviceInformationKind_AssociationEndpointService = 7,
    DeviceInformationKind_DevicePanel = 8,
};
enum __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingKinds
{
    DevicePairingKinds_None = 0,
    DevicePairingKinds_ConfirmOnly = 0x1,
    DevicePairingKinds_DisplayPin = 0x2,
    DevicePairingKinds_ProvidePin = 0x4,
    DevicePairingKinds_ConfirmPinMatch = 0x8,
    DevicePairingKinds_ProvidePasswordCredential = 0x10,
};
enum __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingProtectionLevel
{
    DevicePairingProtectionLevel_Default = 0,
    DevicePairingProtectionLevel_None = 1,
    DevicePairingProtectionLevel_Encryption = 2,
    DevicePairingProtectionLevel_EncryptionAndAuthentication = 3,
};
enum __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingResultStatus
{
    DevicePairingResultStatus_Paired = 0,
    DevicePairingResultStatus_NotReadyToPair = 1,
    DevicePairingResultStatus_NotPaired = 2,
    DevicePairingResultStatus_AlreadyPaired = 3,
    DevicePairingResultStatus_ConnectionRejected = 4,
    DevicePairingResultStatus_TooManyConnections = 5,
    DevicePairingResultStatus_HardwareFailure = 6,
    DevicePairingResultStatus_AuthenticationTimeout = 7,
    DevicePairingResultStatus_AuthenticationNotAllowed = 8,
    DevicePairingResultStatus_AuthenticationFailure = 9,
    DevicePairingResultStatus_NoSupportedProfiles = 10,
    DevicePairingResultStatus_ProtectionLevelCouldNotBeMet = 11,
    DevicePairingResultStatus_AccessDenied = 12,
    DevicePairingResultStatus_InvalidCeremonyData = 13,
    DevicePairingResultStatus_PairingCanceled = 14,
    DevicePairingResultStatus_OperationAlreadyInProgress = 15,
    DevicePairingResultStatus_RequiredHandlerNotRegistered = 16,
    DevicePairingResultStatus_RejectedByHandler = 17,
    DevicePairingResultStatus_RemoteDeviceHasAssociation = 18,
    DevicePairingResultStatus_Failed = 19,
};
enum __x_ABI_CWindows_CDevices_CEnumeration_CDevicePickerDisplayStatusOptions
{
    DevicePickerDisplayStatusOptions_None = 0,
    DevicePickerDisplayStatusOptions_ShowProgress = 0x1,
    DevicePickerDisplayStatusOptions_ShowDisconnectButton = 0x2,
    DevicePickerDisplayStatusOptions_ShowRetryButton = 0x4,
};
enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceUnpairingResultStatus
{
    DeviceUnpairingResultStatus_Unpaired = 0,
    DeviceUnpairingResultStatus_AlreadyUnpaired = 1,
    DeviceUnpairingResultStatus_OperationAlreadyInProgress = 2,
    DeviceUnpairingResultStatus_AccessDenied = 3,
    DeviceUnpairingResultStatus_Failed = 4,
};
enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceWatcherEventKind
{
    DeviceWatcherEventKind_Add = 0,
    DeviceWatcherEventKind_Update = 1,
    DeviceWatcherEventKind_Remove = 2,
};
enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceWatcherStatus
{
    DeviceWatcherStatus_Created = 0,
    DeviceWatcherStatus_Started = 1,
    DeviceWatcherStatus_EnumerationCompleted = 2,
    DeviceWatcherStatus_Stopping = 3,
    DeviceWatcherStatus_Stopped = 4,
    DeviceWatcherStatus_Aborted = 5,
};
enum __x_ABI_CWindows_CDevices_CEnumeration_CPanel
{
    Panel_Unknown = 0,
    Panel_Front = 1,
    Panel_Back = 2,
    Panel_Top = 3,
    Panel_Bottom = 4,
    Panel_Left = 5,
    Panel_Right = 6,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceAccessChangedEventArgs[] = L"Windows.Devices.Enumeration.IDeviceAccessChangedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CDeviceAccessStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceAccessChangedEventArgs2[] = L"Windows.Devices.Enumeration.IDeviceAccessChangedEventArgs2";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2Vtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessChangedEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceAccessInformation[] = L"Windows.Devices.Enumeration.IDeviceAccessInformation";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_AccessChanged )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceAccessInformation_Windows__CDevices__CEnumeration__CDeviceAccessChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AccessChanged )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation * This,
                  EventRegistrationToken cookie
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrentStatus )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CDeviceAccessStatus * status
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationVtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_AccessChanged(This,handler,cookie) )
    ( (This)->lpVtbl->remove_AccessChanged(This,cookie) )
    ( (This)->lpVtbl->get_CurrentStatus(This,status) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceAccessInformationStatics[] = L"Windows.Devices.Enumeration.IDeviceAccessInformationStatics";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromId )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromDeviceClassId )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics * This,
                  GUID deviceClassId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromDeviceClass )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics * This,
                  __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass deviceClass,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformation * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromId(This,deviceId,value) )
    ( (This)->lpVtbl->CreateFromDeviceClassId(This,deviceClassId,value) )
    ( (This)->lpVtbl->CreateFromDeviceClass(This,deviceClass,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceAccessInformationStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceConnectionChangeTriggerDetails[] = L"Windows.Devices.Enumeration.IDeviceConnectionChangeTriggerDetails";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetailsVtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceConnectionChangeTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceDisconnectButtonClickedEventArgs[] = L"Windows.Devices.Enumeration.IDeviceDisconnectButtonClickedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Device )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Device(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceDisconnectButtonClickedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceInformation[] = L"Windows.Devices.Enumeration.IDeviceInformation";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDefault )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EnclosureLocation )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Update )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate * updateInfo
        );
    HRESULT ( STDMETHODCALLTYPE *GetThumbnailAsync )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail * * asyncOp
        );
    HRESULT ( STDMETHODCALLTYPE *GetGlyphThumbnailAsync )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceThumbnail * * asyncOp
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationVtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_IsEnabled(This,value) )
    ( (This)->lpVtbl->get_IsDefault(This,value) )
    ( (This)->lpVtbl->get_EnclosureLocation(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
    ( (This)->lpVtbl->Update(This,updateInfo) )
    ( (This)->lpVtbl->GetThumbnailAsync(This,asyncOp) )
    ( (This)->lpVtbl->GetGlyphThumbnailAsync(This,asyncOp) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceInformation2[] = L"Windows.Devices.Enumeration.IDeviceInformation2";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2 * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CDeviceInformationKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Pairing )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2Vtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Kind(This,value) )
    ( (This)->lpVtbl->get_Pairing(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceInformationCustomPairing[] = L"Windows.Devices.Enumeration.IDeviceInformationCustomPairing";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *PairAsync )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing * This,
                  __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingKinds pairingKindsSupported,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *PairWithProtectionLevelAsync )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing * This,
                  __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingKinds pairingKindsSupported,
                  __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingProtectionLevel minProtectionLevel,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *PairWithProtectionLevelAndSettingsAsync )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing * This,
                  __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingKinds pairingKindsSupported,
                  __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingProtectionLevel minProtectionLevel,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings * devicePairingSettings,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PairingRequested )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceInformationCustomPairing_Windows__CDevices__CEnumeration__CDevicePairingRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PairingRequested )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairingVtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairingVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->PairAsync(This,pairingKindsSupported,result) )
    ( (This)->lpVtbl->PairWithProtectionLevelAsync(This,pairingKindsSupported,minProtectionLevel,result) )
    ( (This)->lpVtbl->PairWithProtectionLevelAndSettingsAsync(This,pairingKindsSupported,minProtectionLevel,devicePairingSettings,result) )
    ( (This)->lpVtbl->add_PairingRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_PairingRequested(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceInformationPairing[] = L"Windows.Devices.Enumeration.IDeviceInformationPairing";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsPaired )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanPair )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing * This,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *PairAsync )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *PairWithProtectionLevelAsync )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing * This,
                  __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingProtectionLevel minProtectionLevel,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingVtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsPaired(This,value) )
    ( (This)->lpVtbl->get_CanPair(This,value) )
    ( (This)->lpVtbl->PairAsync(This,result) )
    ( (This)->lpVtbl->PairWithProtectionLevelAsync(This,minProtectionLevel,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceInformationPairing2[] = L"Windows.Devices.Enumeration.IDeviceInformationPairing2";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ProtectionLevel )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2 * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingProtectionLevel * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Custom )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationCustomPairing * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *PairWithProtectionLevelAndSettingsAsync )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2 * This,
                  __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingProtectionLevel minProtectionLevel,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings * devicePairingSettings,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDevicePairingResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *UnpairAsync )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceUnpairingResult * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2Vtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ProtectionLevel(This,value) )
    ( (This)->lpVtbl->get_Custom(This,value) )
    ( (This)->lpVtbl->PairWithProtectionLevelAndSettingsAsync(This,minProtectionLevel,devicePairingSettings,result) )
    ( (This)->lpVtbl->UnpairAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairing2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceInformationPairingStatics[] = L"Windows.Devices.Enumeration.IDeviceInformationPairingStatics";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryRegisterForAllInboundPairingRequests )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics * This,
                  __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingKinds pairingKindsSupported,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryRegisterForAllInboundPairingRequests(This,pairingKindsSupported,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceInformationPairingStatics2[] = L"Windows.Devices.Enumeration.IDeviceInformationPairingStatics2";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryRegisterForAllInboundPairingRequestsWithProtectionLevel )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics2 * This,
                  __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingKinds pairingKindsSupported,
                  __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingProtectionLevel minProtectionLevel,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryRegisterForAllInboundPairingRequestsWithProtectionLevel(This,pairingKindsSupported,minProtectionLevel,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationPairingStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceInformationStatics[] = L"Windows.Devices.Enumeration.IDeviceInformationStatics";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateFromIdAsync )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation * * asyncOp
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFromIdAsyncAdditionalProperties )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics * This,
                  __RPC__in HSTRING deviceId,
                  __RPC__in_opt __FIIterable_1_HSTRING * additionalProperties,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation * * asyncOp
        );
                    HRESULT ( STDMETHODCALLTYPE *FindAllAsync )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * * asyncOp
        );
                                      HRESULT ( STDMETHODCALLTYPE *FindAllAsyncDeviceClass )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics * This,
                  __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass deviceClass,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * * asyncOp
        );
                    HRESULT ( STDMETHODCALLTYPE *FindAllAsyncAqsFilter )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics * This,
                  __RPC__in HSTRING aqsFilter,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * * asyncOp
        );
                    HRESULT ( STDMETHODCALLTYPE *FindAllAsyncAqsFilterAndAdditionalProperties )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics * This,
                  __RPC__in HSTRING aqsFilter,
                  __RPC__in_opt __FIIterable_1_HSTRING * additionalProperties,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * * asyncOp
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateWatcher )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * * watcher
        );
                                      HRESULT ( STDMETHODCALLTYPE *CreateWatcherDeviceClass )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics * This,
                  __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass deviceClass,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * * watcher
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateWatcherAqsFilter )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics * This,
                  __RPC__in HSTRING aqsFilter,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * * watcher
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateWatcherAqsFilterAndAdditionalProperties )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics * This,
                  __RPC__in HSTRING aqsFilter,
                  __RPC__in_opt __FIIterable_1_HSTRING * additionalProperties,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * * watcher
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromIdAsync(This,deviceId,asyncOp) )
    ( (This)->lpVtbl->CreateFromIdAsyncAdditionalProperties(This,deviceId,additionalProperties,asyncOp) )
    ( (This)->lpVtbl->FindAllAsync(This,asyncOp) )
    ( (This)->lpVtbl->FindAllAsyncDeviceClass(This,deviceClass,asyncOp) )
    ( (This)->lpVtbl->FindAllAsyncAqsFilter(This,aqsFilter,asyncOp) )
    ( (This)->lpVtbl->FindAllAsyncAqsFilterAndAdditionalProperties(This,aqsFilter,additionalProperties,asyncOp) )
    ( (This)->lpVtbl->CreateWatcher(This,watcher) )
    ( (This)->lpVtbl->CreateWatcherDeviceClass(This,deviceClass,watcher) )
    ( (This)->lpVtbl->CreateWatcherAqsFilter(This,aqsFilter,watcher) )
    ( (This)->lpVtbl->CreateWatcherAqsFilterAndAdditionalProperties(This,aqsFilter,additionalProperties,watcher) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceInformationStatics2[] = L"Windows.Devices.Enumeration.IDeviceInformationStatics2";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAqsFilterFromDeviceClass )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2 * This,
                  __x_ABI_CWindows_CDevices_CEnumeration_CDeviceClass deviceClass,
                           __RPC__deref_out_opt HSTRING * aqsFilter
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFromIdAsyncWithKindAndAdditionalProperties )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2 * This,
                  __RPC__in HSTRING deviceId,
                  __RPC__in_opt __FIIterable_1_HSTRING * additionalProperties,
                  __x_ABI_CWindows_CDevices_CEnumeration_CDeviceInformationKind kind,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation * * asyncOp
        );
                    HRESULT ( STDMETHODCALLTYPE *FindAllAsyncWithKindAqsFilterAndAdditionalProperties )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2 * This,
                  __RPC__in HSTRING aqsFilter,
                  __RPC__in_opt __FIIterable_1_HSTRING * additionalProperties,
                  __x_ABI_CWindows_CDevices_CEnumeration_CDeviceInformationKind kind,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformationCollection * * asyncOp
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateWatcherWithKindAqsFilterAndAdditionalProperties )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2 * This,
                  __RPC__in HSTRING aqsFilter,
                  __RPC__in_opt __FIIterable_1_HSTRING * additionalProperties,
                  __x_ABI_CWindows_CDevices_CEnumeration_CDeviceInformationKind kind,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * * watcher
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2Vtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAqsFilterFromDeviceClass(This,deviceClass,aqsFilter) )
    ( (This)->lpVtbl->CreateFromIdAsyncWithKindAndAdditionalProperties(This,deviceId,additionalProperties,kind,asyncOp) )
    ( (This)->lpVtbl->FindAllAsyncWithKindAqsFilterAndAdditionalProperties(This,aqsFilter,additionalProperties,kind,asyncOp) )
    ( (This)->lpVtbl->CreateWatcherWithKindAqsFilterAndAdditionalProperties(This,aqsFilter,additionalProperties,kind,watcher) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceInformationUpdate[] = L"Windows.Devices.Enumeration.IDeviceInformationUpdate";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdateVtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdateVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceInformationUpdate2[] = L"Windows.Devices.Enumeration.IDeviceInformationUpdate2";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2 * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CDeviceInformationKind * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2Vtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Kind(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDevicePairingRequestedEventArgs[] = L"Windows.Devices.Enumeration.IDevicePairingRequestedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceInformation )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PairingKind )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingKinds * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Pin )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                    HRESULT ( STDMETHODCALLTYPE *Accept )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs * This
        );
                    HRESULT ( STDMETHODCALLTYPE *AcceptWithPin )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs * This,
                  __RPC__in HSTRING pin
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceInformation(This,value) )
    ( (This)->lpVtbl->get_PairingKind(This,value) )
    ( (This)->lpVtbl->get_Pin(This,value) )
    ( (This)->lpVtbl->Accept(This) )
    ( (This)->lpVtbl->AcceptWithPin(This,pin) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDevicePairingRequestedEventArgs2[] = L"Windows.Devices.Enumeration.IDevicePairingRequestedEventArgs2";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AcceptWithPasswordCredential )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * passwordCredential
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs2Vtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AcceptWithPasswordCredential(This,passwordCredential) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingRequestedEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDevicePairingResult[] = L"Windows.Devices.Enumeration.IDevicePairingResult";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingResultStatus * status
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProtectionLevelUsed )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CDevicePairingProtectionLevel * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResultVtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,status) )
    ( (This)->lpVtbl->get_ProtectionLevelUsed(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDevicePairingSettings[] = L"Windows.Devices.Enumeration.IDevicePairingSettings";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettingsVtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDevicePairingSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDevicePicker[] = L"Windows.Devices.Enumeration.IDevicePicker";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Filter )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter * * filter
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Appearance )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RequestedProperties )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DeviceSelected )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceSelectedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DeviceSelected )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DisconnectButtonClicked )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_Windows__CDevices__CEnumeration__CDeviceDisconnectButtonClickedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DisconnectButtonClicked )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DevicePickerDismissed )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDevicePicker_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DevicePickerDismissed )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *Show )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
                  __x_ABI_CWindows_CFoundation_CRect selection
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowWithPlacement )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                  __x_ABI_CWindows_CUI_CPopups_CPlacement placement
        );
                    HRESULT ( STDMETHODCALLTYPE *PickSingleDeviceAsync )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *PickSingleDeviceAsyncWithPlacement )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                  __x_ABI_CWindows_CUI_CPopups_CPlacement placement,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CDeviceInformation * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *Hide )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This
        );
    HRESULT ( STDMETHODCALLTYPE *SetDisplayStatus )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * device,
                  __RPC__in HSTRING status,
                  __x_ABI_CWindows_CDevices_CEnumeration_CDevicePickerDisplayStatusOptions options
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerVtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Filter(This,filter) )
    ( (This)->lpVtbl->get_Appearance(This,value) )
    ( (This)->lpVtbl->get_RequestedProperties(This,value) )
    ( (This)->lpVtbl->add_DeviceSelected(This,handler,token) )
    ( (This)->lpVtbl->remove_DeviceSelected(This,token) )
    ( (This)->lpVtbl->add_DisconnectButtonClicked(This,handler,token) )
    ( (This)->lpVtbl->remove_DisconnectButtonClicked(This,token) )
    ( (This)->lpVtbl->add_DevicePickerDismissed(This,handler,token) )
    ( (This)->lpVtbl->remove_DevicePickerDismissed(This,token) )
    ( (This)->lpVtbl->Show(This,selection) )
    ( (This)->lpVtbl->ShowWithPlacement(This,selection,placement) )
    ( (This)->lpVtbl->PickSingleDeviceAsync(This,selection,operation) )
    ( (This)->lpVtbl->PickSingleDeviceAsyncWithPlacement(This,selection,placement,operation) )
    ( (This)->lpVtbl->Hide(This) )
    ( (This)->lpVtbl->SetDisplayStatus(This,device,status,options) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDevicePicker;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDevicePickerAppearance[] = L"Windows.Devices.Enumeration.IDevicePickerAppearance";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearanceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ForegroundColor )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ForegroundColor )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BackgroundColor )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AccentColor )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AccentColor )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedForegroundColor )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SelectedForegroundColor )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedBackgroundColor )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SelectedBackgroundColor )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedAccentColor )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SelectedAccentColor )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearanceVtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearanceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Title(This,value) )
    ( (This)->lpVtbl->put_Title(This,value) )
    ( (This)->lpVtbl->get_ForegroundColor(This,value) )
    ( (This)->lpVtbl->put_ForegroundColor(This,value) )
    ( (This)->lpVtbl->get_BackgroundColor(This,value) )
    ( (This)->lpVtbl->put_BackgroundColor(This,value) )
    ( (This)->lpVtbl->get_AccentColor(This,value) )
    ( (This)->lpVtbl->put_AccentColor(This,value) )
    ( (This)->lpVtbl->get_SelectedForegroundColor(This,value) )
    ( (This)->lpVtbl->put_SelectedForegroundColor(This,value) )
    ( (This)->lpVtbl->get_SelectedBackgroundColor(This,value) )
    ( (This)->lpVtbl->put_SelectedBackgroundColor(This,value) )
    ( (This)->lpVtbl->get_SelectedAccentColor(This,value) )
    ( (This)->lpVtbl->put_SelectedAccentColor(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDevicePickerFilter[] = L"Windows.Devices.Enumeration.IDevicePickerFilter";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SupportedDeviceClasses )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CDevices__CEnumeration__CDeviceClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedDeviceSelectors )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilterVtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SupportedDeviceClasses(This,value) )
    ( (This)->lpVtbl->get_SupportedDeviceSelectors(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerFilter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceSelectedEventArgs[] = L"Windows.Devices.Enumeration.IDeviceSelectedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SelectedDevice )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SelectedDevice(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceSelectedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceUnpairingResult[] = L"Windows.Devices.Enumeration.IDeviceUnpairingResult";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CDeviceUnpairingResultStatus * status
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResultVtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,status) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceUnpairingResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceWatcher[] = L"Windows.Devices.Enumeration.IDeviceWatcher";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_Added )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformation * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Added )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Updated )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Updated )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Removed )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_Windows__CDevices__CEnumeration__CDeviceInformationUpdate * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Removed )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_EnumerationCompleted )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_EnumerationCompleted )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Stopped )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CDeviceWatcher_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Stopped )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CDeviceWatcherStatus * status
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherVtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_Added(This,handler,token) )
    ( (This)->lpVtbl->remove_Added(This,token) )
    ( (This)->lpVtbl->add_Updated(This,handler,token) )
    ( (This)->lpVtbl->remove_Updated(This,token) )
    ( (This)->lpVtbl->add_Removed(This,handler,token) )
    ( (This)->lpVtbl->remove_Removed(This,token) )
    ( (This)->lpVtbl->add_EnumerationCompleted(This,handler,token) )
    ( (This)->lpVtbl->remove_EnumerationCompleted(This,token) )
    ( (This)->lpVtbl->add_Stopped(This,handler,token) )
    ( (This)->lpVtbl->remove_Stopped(This,token) )
    ( (This)->lpVtbl->get_Status(This,status) )
    ( (This)->lpVtbl->Start(This) )
    ( (This)->lpVtbl->Stop(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceWatcher2[] = L"Windows.Devices.Enumeration.IDeviceWatcher2";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetBackgroundTrigger )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2 * This,
                  __RPC__in_opt __FIIterable_1_Windows__CDevices__CEnumeration__CDeviceWatcherEventKind * requestedEventKinds,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIDeviceWatcherTrigger * * trigger
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2Vtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetBackgroundTrigger(This,requestedEventKinds,trigger) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceWatcherEvent[] = L"Windows.Devices.Enumeration.IDeviceWatcherEvent";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEventVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CDeviceWatcherEventKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceInformation )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceInformationUpdate )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformationUpdate * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEventVtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEventVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Kind(This,value) )
    ( (This)->lpVtbl->get_DeviceInformation(This,value) )
    ( (This)->lpVtbl->get_DeviceInformationUpdate(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherEvent;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IDeviceWatcherTriggerDetails[] = L"Windows.Devices.Enumeration.IDeviceWatcherTriggerDetails";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceWatcherEvents )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CEnumeration__CDeviceWatcherEvent * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetailsVtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceWatcherEvents(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcherTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IEnclosureLocation[] = L"Windows.Devices.Enumeration.IEnclosureLocation";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InDock )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InLid )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Panel )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CPanel * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocationVtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InDock(This,value) )
    ( (This)->lpVtbl->get_InLid(This,value) )
    ( (This)->lpVtbl->get_Panel(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_IEnclosureLocation2[] = L"Windows.Devices.Enumeration.IEnclosureLocation2";
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RotationAngleInDegreesClockwise )(
        __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2 * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2Vtbl;
interface __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RotationAngleInDegreesClockwise(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CIEnclosureLocation2;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceAccessChangedEventArgs[] = L"Windows.Devices.Enumeration.DeviceAccessChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceAccessInformation[] = L"Windows.Devices.Enumeration.DeviceAccessInformation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceConnectionChangeTriggerDetails[] = L"Windows.Devices.Enumeration.DeviceConnectionChangeTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceDisconnectButtonClickedEventArgs[] = L"Windows.Devices.Enumeration.DeviceDisconnectButtonClickedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceInformation[] = L"Windows.Devices.Enumeration.DeviceInformation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceInformationCollection[] = L"Windows.Devices.Enumeration.DeviceInformationCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceInformationCustomPairing[] = L"Windows.Devices.Enumeration.DeviceInformationCustomPairing";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceInformationPairing[] = L"Windows.Devices.Enumeration.DeviceInformationPairing";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceInformationUpdate[] = L"Windows.Devices.Enumeration.DeviceInformationUpdate";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DevicePairingRequestedEventArgs[] = L"Windows.Devices.Enumeration.DevicePairingRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DevicePairingResult[] = L"Windows.Devices.Enumeration.DevicePairingResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DevicePicker[] = L"Windows.Devices.Enumeration.DevicePicker";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DevicePickerAppearance[] = L"Windows.Devices.Enumeration.DevicePickerAppearance";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DevicePickerFilter[] = L"Windows.Devices.Enumeration.DevicePickerFilter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceSelectedEventArgs[] = L"Windows.Devices.Enumeration.DeviceSelectedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceThumbnail[] = L"Windows.Devices.Enumeration.DeviceThumbnail";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceUnpairingResult[] = L"Windows.Devices.Enumeration.DeviceUnpairingResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceWatcher[] = L"Windows.Devices.Enumeration.DeviceWatcher";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceWatcherEvent[] = L"Windows.Devices.Enumeration.DeviceWatcherEvent";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_DeviceWatcherTriggerDetails[] = L"Windows.Devices.Enumeration.DeviceWatcherTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_EnclosureLocation[] = L"Windows.Devices.Enumeration.EnclosureLocation";
       
       
#pragma clang diagnostic pop
