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
#include "Windows.System.h"
#include "Windows.UI.h"
#include "Windows.UI.Popups.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3 __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3 __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2 __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2 __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3 __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2 __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2 __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3 __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2 __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3 __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2 __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2 __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails;
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions;
typedef interface __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment;
typedef struct __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment;
typedef struct __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointment **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointment
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;
typedef struct __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;
typedef struct __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException;
typedef struct __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentExceptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentExceptionVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentExceptionVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException;
typedef struct __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentExceptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentException **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentExceptionVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentException
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentExceptionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee;
typedef struct __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee;
typedef struct __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange;
typedef struct __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangeVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange;
typedef struct __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangeVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
                       __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                       __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentExceptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This,
                       __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentExceptionVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentExceptionVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                       __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This,
                       __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangeVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangeVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee;
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee;
typedef struct __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * *value);
    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl;
interface __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointment **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResultVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CAppointments__CAppointmentStore **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendarVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentExceptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentExceptionVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentExceptionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentExceptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentExceptionVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentExceptionVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangeVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangeVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangeVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectable __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * sender, __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
struct __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __FIReference_1_Windows__CFoundation__CTimeSpan __FIReference_1_Windows__CFoundation__CTimeSpan;
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CTimeSpan;
typedef struct __FIReference_1_Windows__CFoundation__CTimeSpanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, __RPC__out struct __x_ABI_CWindows_CFoundation_CTimeSpan *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CTimeSpanVtbl;
interface __FIReference_1_Windows__CFoundation__CTimeSpan
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CTimeSpanVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
struct __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __FIReference_1_Windows__CFoundation__CDateTime __FIReference_1_Windows__CFoundation__CDateTime;
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CDateTime;
typedef struct __FIReference_1_Windows__CFoundation__CDateTimeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, __RPC__out struct __x_ABI_CWindows_CFoundation_CDateTime *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CDateTimeVtbl;
interface __FIReference_1_Windows__CFoundation__CDateTime
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CDateTimeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
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
typedef interface __FIReference_1_UINT32 __FIReference_1_UINT32;
EXTERN_C const IID IID___FIReference_1_UINT32;
typedef struct __FIReference_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_UINT32 * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_UINT32 * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_UINT32 * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_UINT32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_UINT32 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_UINT32 * This, __RPC__out unsigned int *value);
    END_INTERFACE
} __FIReference_1_UINT32Vtbl;
interface __FIReference_1_UINT32
{
    CONST_VTBL struct __FIReference_1_UINT32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING;
typedef interface __FIAsyncOperation_1___FIVectorView_1_HSTRING __FIAsyncOperation_1___FIVectorView_1_HSTRING;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_HSTRING *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRINGVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_HSTRING __FIAsyncOperation_1___FIVectorView_1_HSTRING;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_HSTRING;
typedef struct __FIAsyncOperation_1___FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, __RPC__out __FIVectorView_1_HSTRING * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_HSTRINGVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_HSTRINGVtbl *lpVtbl;
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
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;
typedef enum __x_ABI_CWindows_CUI_CPopups_CPlacement __x_ABI_CWindows_CUI_CPopups_CPlacement;
typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentBusyStatus __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentBusyStatus;
typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentCalendarOtherAppReadAccess __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentCalendarOtherAppReadAccess;
typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentCalendarOtherAppWriteAccess __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentCalendarOtherAppWriteAccess;
typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentCalendarSyncStatus __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentCalendarSyncStatus;
typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentConflictType __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentConflictType;
typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentDaysOfWeek __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentDaysOfWeek;
typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentDetailsKind __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentDetailsKind;
typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentParticipantResponse __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentParticipantResponse;
typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentParticipantRole __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentParticipantRole;
typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentRecurrenceUnit __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentRecurrenceUnit;
typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentSensitivity __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentSensitivity;
typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentStoreAccessType __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentStoreAccessType;
typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentStoreChangeType __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentStoreChangeType;
typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentSummaryCardView __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentSummaryCardView;
typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentWeekOfMonth __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentWeekOfMonth;
typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CFindAppointmentCalendarsOptions __x_ABI_CWindows_CApplicationModel_CAppointments_CFindAppointmentCalendarsOptions;
typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CRecurrenceType __x_ABI_CWindows_CApplicationModel_CAppointments_CRecurrenceType;
enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentBusyStatus
{
    AppointmentBusyStatus_Busy = 0,
    AppointmentBusyStatus_Tentative = 1,
    AppointmentBusyStatus_Free = 2,
    AppointmentBusyStatus_OutOfOffice = 3,
    AppointmentBusyStatus_WorkingElsewhere = 4,
};
enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentCalendarOtherAppReadAccess
{
    AppointmentCalendarOtherAppReadAccess_SystemOnly = 0,
    AppointmentCalendarOtherAppReadAccess_Limited = 1,
    AppointmentCalendarOtherAppReadAccess_Full = 2,
    AppointmentCalendarOtherAppReadAccess_None = 3,
};
enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentCalendarOtherAppWriteAccess
{
    AppointmentCalendarOtherAppWriteAccess_None = 0,
    AppointmentCalendarOtherAppWriteAccess_SystemOnly = 1,
    AppointmentCalendarOtherAppWriteAccess_Limited = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentCalendarSyncStatus
{
    AppointmentCalendarSyncStatus_Idle = 0,
    AppointmentCalendarSyncStatus_Syncing = 1,
    AppointmentCalendarSyncStatus_UpToDate = 2,
    AppointmentCalendarSyncStatus_AuthenticationError = 3,
    AppointmentCalendarSyncStatus_PolicyError = 4,
    AppointmentCalendarSyncStatus_UnknownError = 5,
    AppointmentCalendarSyncStatus_ManualAccountRemovalRequired = 6,
};
enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentConflictType
{
    AppointmentConflictType_None = 0,
    AppointmentConflictType_Adjacent = 1,
    AppointmentConflictType_Overlap = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentDaysOfWeek
{
    AppointmentDaysOfWeek_None = 0,
    AppointmentDaysOfWeek_Sunday = 0x1,
    AppointmentDaysOfWeek_Monday = 0x2,
    AppointmentDaysOfWeek_Tuesday = 0x4,
    AppointmentDaysOfWeek_Wednesday = 0x8,
    AppointmentDaysOfWeek_Thursday = 0x10,
    AppointmentDaysOfWeek_Friday = 0x20,
    AppointmentDaysOfWeek_Saturday = 0x40,
};
enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentDetailsKind
{
    AppointmentDetailsKind_PlainText = 0,
    AppointmentDetailsKind_Html = 1,
};
enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentParticipantResponse
{
    AppointmentParticipantResponse_None = 0,
    AppointmentParticipantResponse_Tentative = 1,
    AppointmentParticipantResponse_Accepted = 2,
    AppointmentParticipantResponse_Declined = 3,
    AppointmentParticipantResponse_Unknown = 4,
};
enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentParticipantRole
{
    AppointmentParticipantRole_RequiredAttendee = 0,
    AppointmentParticipantRole_OptionalAttendee = 1,
    AppointmentParticipantRole_Resource = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentRecurrenceUnit
{
    AppointmentRecurrenceUnit_Daily = 0,
    AppointmentRecurrenceUnit_Weekly = 1,
    AppointmentRecurrenceUnit_Monthly = 2,
    AppointmentRecurrenceUnit_MonthlyOnDay = 3,
    AppointmentRecurrenceUnit_Yearly = 4,
    AppointmentRecurrenceUnit_YearlyOnDay = 5,
};
enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentSensitivity
{
    AppointmentSensitivity_Public = 0,
    AppointmentSensitivity_Private = 1,
};
enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentStoreAccessType
{
    AppointmentStoreAccessType_AppCalendarsReadWrite = 0,
    AppointmentStoreAccessType_AllCalendarsReadOnly = 1,
    AppointmentStoreAccessType_AllCalendarsReadWrite = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentStoreChangeType
{
    AppointmentStoreChangeType_AppointmentCreated = 0,
    AppointmentStoreChangeType_AppointmentModified = 1,
    AppointmentStoreChangeType_AppointmentDeleted = 2,
    AppointmentStoreChangeType_ChangeTrackingLost = 3,
    AppointmentStoreChangeType_CalendarCreated = 4,
    AppointmentStoreChangeType_CalendarModified = 5,
    AppointmentStoreChangeType_CalendarDeleted = 6,
};
enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentSummaryCardView
{
    AppointmentSummaryCardView_System = 0,
    AppointmentSummaryCardView_App = 1,
};
enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentWeekOfMonth
{
    AppointmentWeekOfMonth_First = 0,
    AppointmentWeekOfMonth_Second = 1,
    AppointmentWeekOfMonth_Third = 2,
    AppointmentWeekOfMonth_Fourth = 3,
    AppointmentWeekOfMonth_Last = 4,
};
enum __x_ABI_CWindows_CApplicationModel_CAppointments_CFindAppointmentCalendarsOptions
{
    FindAppointmentCalendarsOptions_None = 0,
    FindAppointmentCalendarsOptions_IncludeHidden = 0x1,
};
enum __x_ABI_CWindows_CApplicationModel_CAppointments_CRecurrenceType
{
    RecurrenceType_Master = 0,
    RecurrenceType_Instance = 1,
    RecurrenceType_ExceptionInstance = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointment[] = L"Windows.ApplicationModel.Appointments.IAppointment";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StartTime )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StartTime )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
                  __x_ABI_CWindows_CFoundation_CDateTime value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Duration )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Location )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Location )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Subject )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Subject )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Details )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Details )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Reminder )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Reminder )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Organizer )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Organizer )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Invitees )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Recurrence )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Recurrence )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BusyStatus )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentBusyStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BusyStatus )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
                  __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentBusyStatus value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllDay )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllDay )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Sensitivity )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentSensitivity * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Sensitivity )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
                  __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentSensitivity value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Uri )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StartTime(This,value) )
    ( (This)->lpVtbl->put_StartTime(This,value) )
    ( (This)->lpVtbl->get_Duration(This,value) )
    ( (This)->lpVtbl->put_Duration(This,value) )
    ( (This)->lpVtbl->get_Location(This,value) )
    ( (This)->lpVtbl->put_Location(This,value) )
    ( (This)->lpVtbl->get_Subject(This,value) )
    ( (This)->lpVtbl->put_Subject(This,value) )
    ( (This)->lpVtbl->get_Details(This,value) )
    ( (This)->lpVtbl->put_Details(This,value) )
    ( (This)->lpVtbl->get_Reminder(This,value) )
    ( (This)->lpVtbl->put_Reminder(This,value) )
    ( (This)->lpVtbl->get_Organizer(This,value) )
    ( (This)->lpVtbl->put_Organizer(This,value) )
    ( (This)->lpVtbl->get_Invitees(This,value) )
    ( (This)->lpVtbl->get_Recurrence(This,value) )
    ( (This)->lpVtbl->put_Recurrence(This,value) )
    ( (This)->lpVtbl->get_BusyStatus(This,value) )
    ( (This)->lpVtbl->put_BusyStatus(This,value) )
    ( (This)->lpVtbl->get_AllDay(This,value) )
    ( (This)->lpVtbl->put_AllDay(This,value) )
    ( (This)->lpVtbl->get_Sensitivity(This,value) )
    ( (This)->lpVtbl->put_Sensitivity(This,value) )
    ( (This)->lpVtbl->get_Uri(This,value) )
    ( (This)->lpVtbl->put_Uri(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointment2[] = L"Windows.ApplicationModel.Appointments.IAppointment2";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LocalId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CalendarId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RoamingId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RoamingId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OriginalStartTime )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsResponseRequested )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsResponseRequested )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowNewTimeProposal )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllowNewTimeProposal )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OnlineMeetingLink )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OnlineMeetingLink )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReplyTime )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ReplyTime )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UserResponse )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentParticipantResponse * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_UserResponse )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
                  __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentParticipantResponse value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasInvitees )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCanceledMeeting )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsCanceledMeeting )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsOrganizedByUser )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsOrganizedByUser )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LocalId(This,value) )
    ( (This)->lpVtbl->get_CalendarId(This,value) )
    ( (This)->lpVtbl->get_RoamingId(This,value) )
    ( (This)->lpVtbl->put_RoamingId(This,value) )
    ( (This)->lpVtbl->get_OriginalStartTime(This,value) )
    ( (This)->lpVtbl->get_IsResponseRequested(This,value) )
    ( (This)->lpVtbl->put_IsResponseRequested(This,value) )
    ( (This)->lpVtbl->get_AllowNewTimeProposal(This,value) )
    ( (This)->lpVtbl->put_AllowNewTimeProposal(This,value) )
    ( (This)->lpVtbl->get_OnlineMeetingLink(This,value) )
    ( (This)->lpVtbl->put_OnlineMeetingLink(This,value) )
    ( (This)->lpVtbl->get_ReplyTime(This,value) )
    ( (This)->lpVtbl->put_ReplyTime(This,value) )
    ( (This)->lpVtbl->get_UserResponse(This,value) )
    ( (This)->lpVtbl->put_UserResponse(This,value) )
    ( (This)->lpVtbl->get_HasInvitees(This,value) )
    ( (This)->lpVtbl->get_IsCanceledMeeting(This,value) )
    ( (This)->lpVtbl->put_IsCanceledMeeting(This,value) )
    ( (This)->lpVtbl->get_IsOrganizedByUser(This,value) )
    ( (This)->lpVtbl->put_IsOrganizedByUser(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointment3[] = L"Windows.ApplicationModel.Appointments.IAppointment3";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ChangeNumber )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3 * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemoteChangeNumber )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3 * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RemoteChangeNumber )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3 * This,
                  UINT64 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DetailsKind )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3 * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentDetailsKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DetailsKind )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3 * This,
                  __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentDetailsKind value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ChangeNumber(This,value) )
    ( (This)->lpVtbl->get_RemoteChangeNumber(This,value) )
    ( (This)->lpVtbl->put_RemoteChangeNumber(This,value) )
    ( (This)->lpVtbl->get_DetailsKind(This,value) )
    ( (This)->lpVtbl->put_DetailsKind(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentCalendar[] = L"Windows.ApplicationModel.Appointments.IAppointmentCalendar";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DisplayColor )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocalId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsHidden )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OtherAppReadAccess )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentCalendarOtherAppReadAccess * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OtherAppReadAccess )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
                  __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentCalendarOtherAppReadAccess value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OtherAppWriteAccess )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentCalendarOtherAppWriteAccess * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OtherAppWriteAccess )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
                  __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentCalendarOtherAppWriteAccess value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SourceDisplayName )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SummaryCardView )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentSummaryCardView * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SummaryCardView )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
                  __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentSummaryCardView value
        );
                    HRESULT ( STDMETHODCALLTYPE *FindAppointmentsAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
                  __x_ABI_CWindows_CFoundation_CDateTime rangeStart,
                  __x_ABI_CWindows_CFoundation_CTimeSpan rangeLength,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *FindAppointmentsAsyncWithOptions )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
                  __x_ABI_CWindows_CFoundation_CDateTime rangeStart,
                  __x_ABI_CWindows_CFoundation_CTimeSpan rangeLength,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions * options,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * * result
        );
    HRESULT ( STDMETHODCALLTYPE *FindExceptionsFromMasterAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
                  __RPC__in HSTRING masterLocalId,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentException * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *FindAllInstancesAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
                  __RPC__in HSTRING masterLocalId,
                  __x_ABI_CWindows_CFoundation_CDateTime rangeStart,
                  __x_ABI_CWindows_CFoundation_CTimeSpan rangeLength,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *FindAllInstancesAsyncWithOptions )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
                  __RPC__in HSTRING masterLocalId,
                  __x_ABI_CWindows_CFoundation_CDateTime rangeStart,
                  __x_ABI_CWindows_CFoundation_CTimeSpan rangeLength,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions * pOptions,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
                  __RPC__in HSTRING localId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetAppointmentInstanceAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
                  __RPC__in HSTRING localId,
                  __x_ABI_CWindows_CFoundation_CDateTime instanceStartTime,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *FindUnexpandedAppointmentsAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *FindUnexpandedAppointmentsAsyncWithOptions )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions * options,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * * result
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    HRESULT ( STDMETHODCALLTYPE *SaveAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
                  __RPC__in HSTRING localId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteAppointmentInstanceAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
                  __RPC__in HSTRING localId,
                  __x_ABI_CWindows_CFoundation_CDateTime instanceStartTime,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    HRESULT ( STDMETHODCALLTYPE *SaveAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * pAppointment,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DisplayColor(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->put_DisplayName(This,value) )
    ( (This)->lpVtbl->get_LocalId(This,value) )
    ( (This)->lpVtbl->get_IsHidden(This,value) )
    ( (This)->lpVtbl->get_OtherAppReadAccess(This,value) )
    ( (This)->lpVtbl->put_OtherAppReadAccess(This,value) )
    ( (This)->lpVtbl->get_OtherAppWriteAccess(This,value) )
    ( (This)->lpVtbl->put_OtherAppWriteAccess(This,value) )
    ( (This)->lpVtbl->get_SourceDisplayName(This,value) )
    ( (This)->lpVtbl->get_SummaryCardView(This,value) )
    ( (This)->lpVtbl->put_SummaryCardView(This,value) )
    ( (This)->lpVtbl->FindAppointmentsAsync(This,rangeStart,rangeLength,result) )
    ( (This)->lpVtbl->FindAppointmentsAsyncWithOptions(This,rangeStart,rangeLength,options,result) )
    ( (This)->lpVtbl->FindExceptionsFromMasterAsync(This,masterLocalId,value) )
    ( (This)->lpVtbl->FindAllInstancesAsync(This,masterLocalId,rangeStart,rangeLength,value) )
    ( (This)->lpVtbl->FindAllInstancesAsyncWithOptions(This,masterLocalId,rangeStart,rangeLength,pOptions,value) )
    ( (This)->lpVtbl->GetAppointmentAsync(This,localId,result) )
    ( (This)->lpVtbl->GetAppointmentInstanceAsync(This,localId,instanceStartTime,result) )
    ( (This)->lpVtbl->FindUnexpandedAppointmentsAsync(This,result) )
    ( (This)->lpVtbl->FindUnexpandedAppointmentsAsyncWithOptions(This,options,result) )
    ( (This)->lpVtbl->DeleteAsync(This,asyncAction) )
    ( (This)->lpVtbl->SaveAsync(This,asyncAction) )
    ( (This)->lpVtbl->DeleteAppointmentAsync(This,localId,asyncAction) )
    ( (This)->lpVtbl->DeleteAppointmentInstanceAsync(This,localId,instanceStartTime,asyncAction) )
    ( (This)->lpVtbl->SaveAppointmentAsync(This,pAppointment,asyncAction) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentCalendar2[] = L"Windows.ApplicationModel.Appointments.IAppointmentCalendar2";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SyncManager )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemoteId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RemoteId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DisplayColor )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsHidden )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UserDataAccountId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanCreateOrUpdateAppointments )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanCreateOrUpdateAppointments )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanCancelMeetings )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanCancelMeetings )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanForwardMeetings )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanForwardMeetings )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanProposeNewTimeForMeetings )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanProposeNewTimeForMeetings )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanUpdateMeetingResponses )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanUpdateMeetingResponses )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanNotifyInvitees )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanNotifyInvitees )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MustNofityInvitees )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MustNofityInvitees )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *TryCreateOrUpdateAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
                  boolean notifyInvitees,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryCancelMeetingAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * meeting,
                  __RPC__in HSTRING subject,
                  __RPC__in HSTRING comment,
                  boolean notifyInvitees,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryForwardMeetingAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * meeting,
                  __RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * invitees,
                  __RPC__in HSTRING subject,
                  __RPC__in HSTRING forwardHeader,
                  __RPC__in HSTRING comment,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryProposeNewTimeForMeetingAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * meeting,
                  __x_ABI_CWindows_CFoundation_CDateTime newStartTime,
                  __x_ABI_CWindows_CFoundation_CTimeSpan newDuration,
                  __RPC__in HSTRING subject,
                  __RPC__in HSTRING comment,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryUpdateMeetingResponseAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * meeting,
                  __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentParticipantResponse response,
                  __RPC__in HSTRING subject,
                  __RPC__in HSTRING comment,
                  boolean sendUpdate,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SyncManager(This,value) )
    ( (This)->lpVtbl->get_RemoteId(This,value) )
    ( (This)->lpVtbl->put_RemoteId(This,value) )
    ( (This)->lpVtbl->put_DisplayColor(This,value) )
    ( (This)->lpVtbl->put_IsHidden(This,value) )
    ( (This)->lpVtbl->get_UserDataAccountId(This,value) )
    ( (This)->lpVtbl->get_CanCreateOrUpdateAppointments(This,value) )
    ( (This)->lpVtbl->put_CanCreateOrUpdateAppointments(This,value) )
    ( (This)->lpVtbl->get_CanCancelMeetings(This,value) )
    ( (This)->lpVtbl->put_CanCancelMeetings(This,value) )
    ( (This)->lpVtbl->get_CanForwardMeetings(This,value) )
    ( (This)->lpVtbl->put_CanForwardMeetings(This,value) )
    ( (This)->lpVtbl->get_CanProposeNewTimeForMeetings(This,value) )
    ( (This)->lpVtbl->put_CanProposeNewTimeForMeetings(This,value) )
    ( (This)->lpVtbl->get_CanUpdateMeetingResponses(This,value) )
    ( (This)->lpVtbl->put_CanUpdateMeetingResponses(This,value) )
    ( (This)->lpVtbl->get_CanNotifyInvitees(This,value) )
    ( (This)->lpVtbl->put_CanNotifyInvitees(This,value) )
    ( (This)->lpVtbl->get_MustNofityInvitees(This,value) )
    ( (This)->lpVtbl->put_MustNofityInvitees(This,value) )
    ( (This)->lpVtbl->TryCreateOrUpdateAppointmentAsync(This,appointment,notifyInvitees,result) )
    ( (This)->lpVtbl->TryCancelMeetingAsync(This,meeting,subject,comment,notifyInvitees,result) )
    ( (This)->lpVtbl->TryForwardMeetingAsync(This,meeting,invitees,subject,forwardHeader,comment,result) )
    ( (This)->lpVtbl->TryProposeNewTimeForMeetingAsync(This,meeting,newStartTime,newDuration,subject,comment,result) )
    ( (This)->lpVtbl->TryUpdateMeetingResponseAsync(This,meeting,response,subject,comment,sendUpdate,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentCalendar3[] = L"Windows.ApplicationModel.Appointments.IAppointmentCalendar3";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RegisterSyncManagerAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RegisterSyncManagerAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager[] = L"Windows.ApplicationModel.Appointments.IAppointmentCalendarSyncManager";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentCalendarSyncStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastSuccessfulSyncTime )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastAttemptedSyncTime )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    HRESULT ( STDMETHODCALLTYPE *SyncAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SyncStatusChanged )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentCalendarSyncManager_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SyncStatusChanged )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManagerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_LastSuccessfulSyncTime(This,value) )
    ( (This)->lpVtbl->get_LastAttemptedSyncTime(This,value) )
    ( (This)->lpVtbl->SyncAsync(This,result) )
    ( (This)->lpVtbl->add_SyncStatusChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_SyncStatusChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager2[] = L"Windows.ApplicationModel.Appointments.IAppointmentCalendarSyncManager2";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Status )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2 * This,
                  __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentCalendarSyncStatus value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LastSuccessfulSyncTime )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2 * This,
                  __x_ABI_CWindows_CFoundation_CDateTime value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LastAttemptedSyncTime )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2 * This,
                  __x_ABI_CWindows_CFoundation_CDateTime value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Status(This,value) )
    ( (This)->lpVtbl->put_LastSuccessfulSyncTime(This,value) )
    ( (This)->lpVtbl->put_LastAttemptedSyncTime(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendarSyncManager2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentConflictResult[] = L"Windows.ApplicationModel.Appointments.IAppointmentConflictResult";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentConflictType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Date )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResultVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Type(This,value) )
    ( (This)->lpVtbl->get_Date(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentConflictResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentException[] = L"Windows.ApplicationModel.Appointments.IAppointmentException";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentExceptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Appointment )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExceptionProperties )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDeleted )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentExceptionVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentExceptionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Appointment(This,value) )
    ( (This)->lpVtbl->get_ExceptionProperties(This,value) )
    ( (This)->lpVtbl->get_IsDeleted(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentException;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentInvitee[] = L"Windows.ApplicationModel.Appointments.IAppointmentInvitee";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInviteeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Role )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentParticipantRole * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Role )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * This,
                  __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentParticipantRole value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Response )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentParticipantResponse * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Response )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * This,
                  __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentParticipantResponse value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInviteeVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInviteeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Role(This,value) )
    ( (This)->lpVtbl->put_Role(This,value) )
    ( (This)->lpVtbl->get_Response(This,value) )
    ( (This)->lpVtbl->put_Response(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser[] = L"Windows.ApplicationModel.Appointments.IAppointmentManagerForUser";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUserVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *ShowAddAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowAddAppointmentWithPlacementAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                  __x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowReplaceAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
                  __RPC__in HSTRING appointmentId,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowReplaceAppointmentWithPlacementAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
                  __RPC__in HSTRING appointmentId,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                  __x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowReplaceAppointmentWithPlacementAndDateAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
                  __RPC__in HSTRING appointmentId,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                  __x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement,
                  __x_ABI_CWindows_CFoundation_CDateTime instanceStartDate,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowRemoveAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
                  __RPC__in HSTRING appointmentId,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowRemoveAppointmentWithPlacementAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
                  __RPC__in HSTRING appointmentId,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                  __x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowRemoveAppointmentWithPlacementAndDateAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
                  __RPC__in HSTRING appointmentId,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                  __x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement,
                  __x_ABI_CWindows_CFoundation_CDateTime instanceStartDate,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ShowTimeFrameAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
                  __x_ABI_CWindows_CFoundation_CDateTime timeToShow,
                  __x_ABI_CWindows_CFoundation_CTimeSpan duration,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowAppointmentDetailsAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
                  __RPC__in HSTRING appointmentId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowAppointmentDetailsWithDateAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
                  __RPC__in HSTRING appointmentId,
                  __x_ABI_CWindows_CFoundation_CDateTime instanceStartDate,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ShowEditNewAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * result
        );
    HRESULT ( STDMETHODCALLTYPE *RequestStoreAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
                  __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentStoreAccessType options,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUserVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUserVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ShowAddAppointmentAsync(This,appointment,selection,result) )
    ( (This)->lpVtbl->ShowAddAppointmentWithPlacementAsync(This,appointment,selection,preferredPlacement,result) )
    ( (This)->lpVtbl->ShowReplaceAppointmentAsync(This,appointmentId,appointment,selection,result) )
    ( (This)->lpVtbl->ShowReplaceAppointmentWithPlacementAsync(This,appointmentId,appointment,selection,preferredPlacement,result) )
    ( (This)->lpVtbl->ShowReplaceAppointmentWithPlacementAndDateAsync(This,appointmentId,appointment,selection,preferredPlacement,instanceStartDate,result) )
    ( (This)->lpVtbl->ShowRemoveAppointmentAsync(This,appointmentId,selection,result) )
    ( (This)->lpVtbl->ShowRemoveAppointmentWithPlacementAsync(This,appointmentId,selection,preferredPlacement,result) )
    ( (This)->lpVtbl->ShowRemoveAppointmentWithPlacementAndDateAsync(This,appointmentId,selection,preferredPlacement,instanceStartDate,result) )
    ( (This)->lpVtbl->ShowTimeFrameAsync(This,timeToShow,duration,result) )
    ( (This)->lpVtbl->ShowAppointmentDetailsAsync(This,appointmentId,result) )
    ( (This)->lpVtbl->ShowAppointmentDetailsWithDateAsync(This,appointmentId,instanceStartDate,result) )
    ( (This)->lpVtbl->ShowEditNewAppointmentAsync(This,appointment,result) )
    ( (This)->lpVtbl->RequestStoreAsync(This,options,result) )
    ( (This)->lpVtbl->get_User(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics[] = L"Windows.ApplicationModel.Appointments.IAppointmentManagerStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *ShowAddAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowAddAppointmentWithPlacementAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                  __x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowReplaceAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics * This,
                  __RPC__in HSTRING appointmentId,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowReplaceAppointmentWithPlacementAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics * This,
                  __RPC__in HSTRING appointmentId,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                  __x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowReplaceAppointmentWithPlacementAndDateAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics * This,
                  __RPC__in HSTRING appointmentId,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                  __x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement,
                  __x_ABI_CWindows_CFoundation_CDateTime instanceStartDate,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowRemoveAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics * This,
                  __RPC__in HSTRING appointmentId,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowRemoveAppointmentWithPlacementAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics * This,
                  __RPC__in HSTRING appointmentId,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                  __x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowRemoveAppointmentWithPlacementAndDateAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics * This,
                  __RPC__in HSTRING appointmentId,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                  __x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement,
                  __x_ABI_CWindows_CFoundation_CDateTime instanceStartDate,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ShowTimeFrameAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics * This,
                  __x_ABI_CWindows_CFoundation_CDateTime timeToShow,
                  __x_ABI_CWindows_CFoundation_CTimeSpan duration,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ShowAddAppointmentAsync(This,appointment,selection,operation) )
    ( (This)->lpVtbl->ShowAddAppointmentWithPlacementAsync(This,appointment,selection,preferredPlacement,operation) )
    ( (This)->lpVtbl->ShowReplaceAppointmentAsync(This,appointmentId,appointment,selection,operation) )
    ( (This)->lpVtbl->ShowReplaceAppointmentWithPlacementAsync(This,appointmentId,appointment,selection,preferredPlacement,operation) )
    ( (This)->lpVtbl->ShowReplaceAppointmentWithPlacementAndDateAsync(This,appointmentId,appointment,selection,preferredPlacement,instanceStartDate,operation) )
    ( (This)->lpVtbl->ShowRemoveAppointmentAsync(This,appointmentId,selection,operation) )
    ( (This)->lpVtbl->ShowRemoveAppointmentWithPlacementAsync(This,appointmentId,selection,preferredPlacement,operation) )
    ( (This)->lpVtbl->ShowRemoveAppointmentWithPlacementAndDateAsync(This,appointmentId,selection,preferredPlacement,instanceStartDate,operation) )
    ( (This)->lpVtbl->ShowTimeFrameAsync(This,timeToShow,duration,asyncAction) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics2[] = L"Windows.ApplicationModel.Appointments.IAppointmentManagerStatics2";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *ShowAppointmentDetailsAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2 * This,
                  __RPC__in HSTRING appointmentId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowAppointmentDetailsWithDateAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2 * This,
                  __RPC__in HSTRING appointmentId,
                  __x_ABI_CWindows_CFoundation_CDateTime instanceStartDate,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    HRESULT ( STDMETHODCALLTYPE *ShowEditNewAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RequestStoreAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2 * This,
                  __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentStoreAccessType options,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentStore * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ShowAppointmentDetailsAsync(This,appointmentId,asyncAction) )
    ( (This)->lpVtbl->ShowAppointmentDetailsWithDateAsync(This,appointmentId,instanceStartDate,asyncAction) )
    ( (This)->lpVtbl->ShowEditNewAppointmentAsync(This,appointment,operation) )
    ( (This)->lpVtbl->RequestStoreAsync(This,options,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics3[] = L"Windows.ApplicationModel.Appointments.IAppointmentManagerStatics3";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForUser )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerForUser * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForUser(This,user,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentManagerStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentParticipant[] = L"Windows.ApplicationModel.Appointments.IAppointmentParticipant";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipantVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Address )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Address )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipantVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipantVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->put_DisplayName(This,value) )
    ( (This)->lpVtbl->get_Address(This,value) )
    ( (This)->lpVtbl->put_Address(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentParticipant;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics[] = L"Windows.ApplicationModel.Appointments.IAppointmentPropertiesStatics";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Subject )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Location )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StartTime )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Reminder )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BusyStatus )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Sensitivity )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OriginalStartTime )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsResponseRequested )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowNewTimeProposal )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllDay )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Details )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OnlineMeetingLink )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReplyTime )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Organizer )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UserResponse )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasInvitees )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCanceledMeeting )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsOrganizedByUser )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Recurrence )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Invitees )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DefaultProperties )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStaticsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Subject(This,value) )
    ( (This)->lpVtbl->get_Location(This,value) )
    ( (This)->lpVtbl->get_StartTime(This,value) )
    ( (This)->lpVtbl->get_Duration(This,value) )
    ( (This)->lpVtbl->get_Reminder(This,value) )
    ( (This)->lpVtbl->get_BusyStatus(This,value) )
    ( (This)->lpVtbl->get_Sensitivity(This,value) )
    ( (This)->lpVtbl->get_OriginalStartTime(This,value) )
    ( (This)->lpVtbl->get_IsResponseRequested(This,value) )
    ( (This)->lpVtbl->get_AllowNewTimeProposal(This,value) )
    ( (This)->lpVtbl->get_AllDay(This,value) )
    ( (This)->lpVtbl->get_Details(This,value) )
    ( (This)->lpVtbl->get_OnlineMeetingLink(This,value) )
    ( (This)->lpVtbl->get_ReplyTime(This,value) )
    ( (This)->lpVtbl->get_Organizer(This,value) )
    ( (This)->lpVtbl->get_UserResponse(This,value) )
    ( (This)->lpVtbl->get_HasInvitees(This,value) )
    ( (This)->lpVtbl->get_IsCanceledMeeting(This,value) )
    ( (This)->lpVtbl->get_IsOrganizedByUser(This,value) )
    ( (This)->lpVtbl->get_Recurrence(This,value) )
    ( (This)->lpVtbl->get_Uri(This,value) )
    ( (This)->lpVtbl->get_Invitees(This,value) )
    ( (This)->lpVtbl->get_DefaultProperties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics2[] = L"Windows.ApplicationModel.Appointments.IAppointmentPropertiesStatics2";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ChangeNumber )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemoteChangeNumber )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DetailsKind )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ChangeNumber(This,value) )
    ( (This)->lpVtbl->get_RemoteChangeNumber(This,value) )
    ( (This)->lpVtbl->get_DetailsKind(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentPropertiesStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentRecurrence[] = L"Windows.ApplicationModel.Appointments.IAppointmentRecurrence";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Unit )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentRecurrenceUnit * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Unit )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
                  __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentRecurrenceUnit value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Occurrences )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Occurrences )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
                  __RPC__in_opt __FIReference_1_UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Until )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Until )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Interval )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Interval )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DaysOfWeek )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentDaysOfWeek * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DaysOfWeek )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
                  __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentDaysOfWeek value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WeekOfMonth )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentWeekOfMonth * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_WeekOfMonth )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
                  __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentWeekOfMonth value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Month )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Month )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Day )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Day )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence * This,
                  UINT32 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrenceVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrenceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Unit(This,value) )
    ( (This)->lpVtbl->put_Unit(This,value) )
    ( (This)->lpVtbl->get_Occurrences(This,value) )
    ( (This)->lpVtbl->put_Occurrences(This,value) )
    ( (This)->lpVtbl->get_Until(This,value) )
    ( (This)->lpVtbl->put_Until(This,value) )
    ( (This)->lpVtbl->get_Interval(This,value) )
    ( (This)->lpVtbl->put_Interval(This,value) )
    ( (This)->lpVtbl->get_DaysOfWeek(This,value) )
    ( (This)->lpVtbl->put_DaysOfWeek(This,value) )
    ( (This)->lpVtbl->get_WeekOfMonth(This,value) )
    ( (This)->lpVtbl->put_WeekOfMonth(This,value) )
    ( (This)->lpVtbl->get_Month(This,value) )
    ( (This)->lpVtbl->put_Month(This,value) )
    ( (This)->lpVtbl->get_Day(This,value) )
    ( (This)->lpVtbl->put_Day(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentRecurrence2[] = L"Windows.ApplicationModel.Appointments.IAppointmentRecurrence2";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RecurrenceType )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2 * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CRecurrenceType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TimeZone )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TimeZone )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2 * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RecurrenceType(This,value) )
    ( (This)->lpVtbl->get_TimeZone(This,value) )
    ( (This)->lpVtbl->put_TimeZone(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentRecurrence3[] = L"Windows.ApplicationModel.Appointments.IAppointmentRecurrence3";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CalendarIdentifier )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CalendarIdentifier(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentRecurrence3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentStore[] = L"Windows.ApplicationModel.Appointments.IAppointmentStore";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ChangeTracker )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateAppointmentCalendarAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetAppointmentCalendarAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
                  __RPC__in HSTRING calendarId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
                  __RPC__in HSTRING localId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetAppointmentInstanceAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
                  __RPC__in HSTRING localId,
                  __x_ABI_CWindows_CFoundation_CDateTime instanceStartTime,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointment * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *FindAppointmentCalendarsAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *FindAppointmentCalendarsAsyncWithOptions )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
                  __x_ABI_CWindows_CApplicationModel_CAppointments_CFindAppointmentCalendarsOptions options,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *FindAppointmentsAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
                  __x_ABI_CWindows_CFoundation_CDateTime rangeStart,
                  __x_ABI_CWindows_CFoundation_CTimeSpan rangeLength,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *FindAppointmentsAsyncWithOptions )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
                  __x_ABI_CWindows_CFoundation_CDateTime rangeStart,
                  __x_ABI_CWindows_CFoundation_CTimeSpan rangeLength,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions * options,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointment * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *FindConflictAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *FindConflictAsyncWithInstanceStart )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
                  __x_ABI_CWindows_CFoundation_CDateTime instanceStartTime,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentConflictResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *MoveAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * destinationCalendar,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    HRESULT ( STDMETHODCALLTYPE *ShowAddAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowReplaceAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
                  __RPC__in HSTRING localId,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowReplaceAppointmentWithPlacementAndDateAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
                  __RPC__in HSTRING localId,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                  __x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement,
                  __x_ABI_CWindows_CFoundation_CDateTime instanceStartDate,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowRemoveAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
                  __RPC__in HSTRING localId,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowRemoveAppointmentWithPlacementAndDateAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
                  __RPC__in HSTRING localId,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                  __x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement,
                  __x_ABI_CWindows_CFoundation_CDateTime instanceStartDate,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowAppointmentDetailsAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
                  __RPC__in HSTRING localId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowAppointmentDetailsWithDateAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
                  __RPC__in HSTRING localId,
                  __x_ABI_CWindows_CFoundation_CDateTime instanceStartDate,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    HRESULT ( STDMETHODCALLTYPE *ShowEditNewAppointmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * appointment,
                           __RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *FindLocalIdsFromRoamingIdAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore * This,
                  __RPC__in HSTRING roamingId,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_HSTRING * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ChangeTracker(This,value) )
    ( (This)->lpVtbl->CreateAppointmentCalendarAsync(This,name,operation) )
    ( (This)->lpVtbl->GetAppointmentCalendarAsync(This,calendarId,result) )
    ( (This)->lpVtbl->GetAppointmentAsync(This,localId,result) )
    ( (This)->lpVtbl->GetAppointmentInstanceAsync(This,localId,instanceStartTime,result) )
    ( (This)->lpVtbl->FindAppointmentCalendarsAsync(This,result) )
    ( (This)->lpVtbl->FindAppointmentCalendarsAsyncWithOptions(This,options,result) )
    ( (This)->lpVtbl->FindAppointmentsAsync(This,rangeStart,rangeLength,result) )
    ( (This)->lpVtbl->FindAppointmentsAsyncWithOptions(This,rangeStart,rangeLength,options,result) )
    ( (This)->lpVtbl->FindConflictAsync(This,appointment,result) )
    ( (This)->lpVtbl->FindConflictAsyncWithInstanceStart(This,appointment,instanceStartTime,result) )
    ( (This)->lpVtbl->MoveAppointmentAsync(This,appointment,destinationCalendar,asyncAction) )
    ( (This)->lpVtbl->ShowAddAppointmentAsync(This,appointment,selection,operation) )
    ( (This)->lpVtbl->ShowReplaceAppointmentAsync(This,localId,appointment,selection,operation) )
    ( (This)->lpVtbl->ShowReplaceAppointmentWithPlacementAndDateAsync(This,localId,appointment,selection,preferredPlacement,instanceStartDate,operation) )
    ( (This)->lpVtbl->ShowRemoveAppointmentAsync(This,localId,selection,operation) )
    ( (This)->lpVtbl->ShowRemoveAppointmentWithPlacementAndDateAsync(This,localId,selection,preferredPlacement,instanceStartDate,operation) )
    ( (This)->lpVtbl->ShowAppointmentDetailsAsync(This,localId,asyncAction) )
    ( (This)->lpVtbl->ShowAppointmentDetailsWithDateAsync(This,localId,instanceStartDate,asyncAction) )
    ( (This)->lpVtbl->ShowEditNewAppointmentAsync(This,appointment,operation) )
    ( (This)->lpVtbl->FindLocalIdsFromRoamingIdAsync(This,roamingId,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentStore2[] = L"Windows.ApplicationModel.Appointments.IAppointmentStore2";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_StoreChanged )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CAppointmentStore_Windows__CApplicationModel__CAppointments__CAppointmentStoreChangedEventArgs * pHandler,
                           __RPC__out EventRegistrationToken * pToken
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StoreChanged )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateAppointmentCalendarInAccountAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2 * This,
                  __RPC__in HSTRING name,
                  __RPC__in HSTRING userDataAccountId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CAppointments__CAppointmentCalendar * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_StoreChanged(This,pHandler,pToken) )
    ( (This)->lpVtbl->remove_StoreChanged(This,token) )
    ( (This)->lpVtbl->CreateAppointmentCalendarInAccountAsync(This,name,userDataAccountId,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentStore3[] = L"Windows.ApplicationModel.Appointments.IAppointmentStore3";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetChangeTracker )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3 * This,
                  __RPC__in HSTRING identity,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetChangeTracker(This,identity,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStore3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentStoreChange[] = L"Windows.ApplicationModel.Appointments.IAppointmentStoreChange";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Appointment )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChangeType )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentStoreChangeType * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Appointment(This,value) )
    ( (This)->lpVtbl->get_ChangeType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentStoreChange2[] = L"Windows.ApplicationModel.Appointments.IAppointmentStoreChange2";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AppointmentCalendar )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentCalendar * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AppointmentCalendar(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeReader[] = L"Windows.ApplicationModel.Appointments.IAppointmentStoreChangeReader";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ReadBatchAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentStoreChange * * result
        );
    HRESULT ( STDMETHODCALLTYPE *AcceptChanges )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader * This
        );
    HRESULT ( STDMETHODCALLTYPE *AcceptChangesThrough )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChange * lastChangeToAccept
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReaderVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReaderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ReadBatchAsync(This,result) )
    ( (This)->lpVtbl->AcceptChanges(This) )
    ( (This)->lpVtbl->AcceptChangesThrough(This,lastChangeToAccept) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeTracker[] = L"Windows.ApplicationModel.Appointments.IAppointmentStoreChangeTracker";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTrackerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetChangeReader )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeReader * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Enable )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker * This
        );
    HRESULT ( STDMETHODCALLTYPE *Reset )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTrackerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTrackerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetChangeReader(This,value) )
    ( (This)->lpVtbl->Enable(This) )
    ( (This)->lpVtbl->Reset(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeTracker2[] = L"Windows.ApplicationModel.Appointments.IAppointmentStoreChangeTracker2";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsTracking )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsTracking(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangeTracker2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentStoreChangedDeferral[] = L"Windows.ApplicationModel.Appointments.IAppointmentStoreChangedDeferral";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferralVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferralVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Complete(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentStoreChangedEventArgs[] = L"Windows.ApplicationModel.Appointments.IAppointmentStoreChangedEventArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedDeferral * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IAppointmentStoreNotificationTriggerDetails[] = L"Windows.ApplicationModel.Appointments.IAppointmentStoreNotificationTriggerDetails";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetailsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentStoreNotificationTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_IFindAppointmentsOptions[] = L"Windows.ApplicationModel.Appointments.IFindAppointmentsOptions";
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CalendarIds )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FetchProperties )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IncludeHidden )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IncludeHidden )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxCount )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxCount )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions * This,
                  UINT32 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptionsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CalendarIds(This,value) )
    ( (This)->lpVtbl->get_FetchProperties(This,value) )
    ( (This)->lpVtbl->get_IncludeHidden(This,value) )
    ( (This)->lpVtbl->put_IncludeHidden(This,value) )
    ( (This)->lpVtbl->get_MaxCount(This,value) )
    ( (This)->lpVtbl->put_MaxCount(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CIFindAppointmentsOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_Appointment[] = L"Windows.ApplicationModel.Appointments.Appointment";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentCalendar[] = L"Windows.ApplicationModel.Appointments.AppointmentCalendar";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentCalendarSyncManager[] = L"Windows.ApplicationModel.Appointments.AppointmentCalendarSyncManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentConflictResult[] = L"Windows.ApplicationModel.Appointments.AppointmentConflictResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentException[] = L"Windows.ApplicationModel.Appointments.AppointmentException";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentInvitee[] = L"Windows.ApplicationModel.Appointments.AppointmentInvitee";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentManager[] = L"Windows.ApplicationModel.Appointments.AppointmentManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentManagerForUser[] = L"Windows.ApplicationModel.Appointments.AppointmentManagerForUser";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentOrganizer[] = L"Windows.ApplicationModel.Appointments.AppointmentOrganizer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentProperties[] = L"Windows.ApplicationModel.Appointments.AppointmentProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentRecurrence[] = L"Windows.ApplicationModel.Appointments.AppointmentRecurrence";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentStore[] = L"Windows.ApplicationModel.Appointments.AppointmentStore";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentStoreChange[] = L"Windows.ApplicationModel.Appointments.AppointmentStoreChange";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentStoreChangeReader[] = L"Windows.ApplicationModel.Appointments.AppointmentStoreChangeReader";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentStoreChangeTracker[] = L"Windows.ApplicationModel.Appointments.AppointmentStoreChangeTracker";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentStoreChangedDeferral[] = L"Windows.ApplicationModel.Appointments.AppointmentStoreChangedDeferral";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentStoreChangedEventArgs[] = L"Windows.ApplicationModel.Appointments.AppointmentStoreChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_AppointmentStoreNotificationTriggerDetails[] = L"Windows.ApplicationModel.Appointments.AppointmentStoreNotificationTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_FindAppointmentsOptions[] = L"Windows.ApplicationModel.Appointments.FindAppointmentsOptions";
       
       
#pragma clang diagnostic pop
