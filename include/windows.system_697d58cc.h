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
#include "Windows.ApplicationModel.h"
#include "Windows.Gaming.Input.h"
#include "Windows.Storage.h"
#include "Windows.Storage.Search.h"
#include "Windows.Storage.Streams.h"
#include "Windows.System.Diagnostics.h"
#include "Windows.System.RemoteSystems.h"
#include "Windows.UI.Popups.h"
#include "Windows.UI.ViewManagement.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CSystem_CIDispatcherQueueHandler __x_ABI_CWindows_CSystem_CIDispatcherQueueHandler;
typedef interface __x_ABI_CWindows_CSystem_CIAppActivationResult __x_ABI_CWindows_CSystem_CIAppActivationResult;
typedef interface __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo;
typedef interface __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo2 __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo2;
typedef interface __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo3 __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo3;
typedef interface __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoStatics __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoStatics;
typedef interface __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoStatics2 __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoStatics2;
typedef interface __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcher __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcher;
typedef interface __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcherEventArgs __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcherEventArgs;
typedef interface __x_ABI_CWindows_CSystem_CIAppExecutionStateChangeResult __x_ABI_CWindows_CSystem_CIAppExecutionStateChangeResult;
typedef interface __x_ABI_CWindows_CSystem_CIAppMemoryReport __x_ABI_CWindows_CSystem_CIAppMemoryReport;
typedef interface __x_ABI_CWindows_CSystem_CIAppMemoryReport2 __x_ABI_CWindows_CSystem_CIAppMemoryReport2;
typedef interface __x_ABI_CWindows_CSystem_CIAppMemoryUsageLimitChangingEventArgs __x_ABI_CWindows_CSystem_CIAppMemoryUsageLimitChangingEventArgs;
typedef interface __x_ABI_CWindows_CSystem_CIAppResourceGroupBackgroundTaskReport __x_ABI_CWindows_CSystem_CIAppResourceGroupBackgroundTaskReport;
typedef interface __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo;
typedef interface __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo2 __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo2;
typedef interface __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcher __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcher;
typedef interface __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherEventArgs __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherEventArgs;
typedef interface __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherExecutionStateChangedEventArgs __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherExecutionStateChangedEventArgs;
typedef interface __x_ABI_CWindows_CSystem_CIAppResourceGroupMemoryReport __x_ABI_CWindows_CSystem_CIAppResourceGroupMemoryReport;
typedef interface __x_ABI_CWindows_CSystem_CIAppResourceGroupStateReport __x_ABI_CWindows_CSystem_CIAppResourceGroupStateReport;
typedef interface __x_ABI_CWindows_CSystem_CIAppUriHandlerHost __x_ABI_CWindows_CSystem_CIAppUriHandlerHost;
typedef interface __x_ABI_CWindows_CSystem_CIAppUriHandlerHostFactory __x_ABI_CWindows_CSystem_CIAppUriHandlerHostFactory;
typedef interface __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistration __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistration;
typedef interface __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationManager __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationManager;
typedef interface __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationManagerStatics __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationManagerStatics;
typedef interface __x_ABI_CWindows_CSystem_CIDateTimeSettingsStatics __x_ABI_CWindows_CSystem_CIDateTimeSettingsStatics;
typedef interface __x_ABI_CWindows_CSystem_CIDispatcherQueue __x_ABI_CWindows_CSystem_CIDispatcherQueue;
typedef interface __x_ABI_CWindows_CSystem_CIDispatcherQueue2 __x_ABI_CWindows_CSystem_CIDispatcherQueue2;
typedef interface __x_ABI_CWindows_CSystem_CIDispatcherQueueController __x_ABI_CWindows_CSystem_CIDispatcherQueueController;
typedef interface __x_ABI_CWindows_CSystem_CIDispatcherQueueControllerStatics __x_ABI_CWindows_CSystem_CIDispatcherQueueControllerStatics;
typedef interface __x_ABI_CWindows_CSystem_CIDispatcherQueueShutdownStartingEventArgs __x_ABI_CWindows_CSystem_CIDispatcherQueueShutdownStartingEventArgs;
typedef interface __x_ABI_CWindows_CSystem_CIDispatcherQueueStatics __x_ABI_CWindows_CSystem_CIDispatcherQueueStatics;
typedef interface __x_ABI_CWindows_CSystem_CIDispatcherQueueTimer __x_ABI_CWindows_CSystem_CIDispatcherQueueTimer;
typedef interface __x_ABI_CWindows_CSystem_CIFolderLauncherOptions __x_ABI_CWindows_CSystem_CIFolderLauncherOptions;
typedef interface __x_ABI_CWindows_CSystem_CIKnownUserPropertiesStatics __x_ABI_CWindows_CSystem_CIKnownUserPropertiesStatics;
typedef interface __x_ABI_CWindows_CSystem_CILaunchUriResult __x_ABI_CWindows_CSystem_CILaunchUriResult;
typedef interface __x_ABI_CWindows_CSystem_CILauncherOptions __x_ABI_CWindows_CSystem_CILauncherOptions;
typedef interface __x_ABI_CWindows_CSystem_CILauncherOptions2 __x_ABI_CWindows_CSystem_CILauncherOptions2;
typedef interface __x_ABI_CWindows_CSystem_CILauncherOptions3 __x_ABI_CWindows_CSystem_CILauncherOptions3;
typedef interface __x_ABI_CWindows_CSystem_CILauncherOptions4 __x_ABI_CWindows_CSystem_CILauncherOptions4;
typedef interface __x_ABI_CWindows_CSystem_CILauncherStatics __x_ABI_CWindows_CSystem_CILauncherStatics;
typedef interface __x_ABI_CWindows_CSystem_CILauncherStatics2 __x_ABI_CWindows_CSystem_CILauncherStatics2;
typedef interface __x_ABI_CWindows_CSystem_CILauncherStatics3 __x_ABI_CWindows_CSystem_CILauncherStatics3;
typedef interface __x_ABI_CWindows_CSystem_CILauncherStatics4 __x_ABI_CWindows_CSystem_CILauncherStatics4;
typedef interface __x_ABI_CWindows_CSystem_CILauncherStatics5 __x_ABI_CWindows_CSystem_CILauncherStatics5;
typedef interface __x_ABI_CWindows_CSystem_CILauncherUIOptions __x_ABI_CWindows_CSystem_CILauncherUIOptions;
typedef interface __x_ABI_CWindows_CSystem_CILauncherViewOptions __x_ABI_CWindows_CSystem_CILauncherViewOptions;
typedef interface __x_ABI_CWindows_CSystem_CIMemoryManagerStatics __x_ABI_CWindows_CSystem_CIMemoryManagerStatics;
typedef interface __x_ABI_CWindows_CSystem_CIMemoryManagerStatics2 __x_ABI_CWindows_CSystem_CIMemoryManagerStatics2;
typedef interface __x_ABI_CWindows_CSystem_CIMemoryManagerStatics3 __x_ABI_CWindows_CSystem_CIMemoryManagerStatics3;
typedef interface __x_ABI_CWindows_CSystem_CIMemoryManagerStatics4 __x_ABI_CWindows_CSystem_CIMemoryManagerStatics4;
typedef interface __x_ABI_CWindows_CSystem_CIProcessLauncherOptions __x_ABI_CWindows_CSystem_CIProcessLauncherOptions;
typedef interface __x_ABI_CWindows_CSystem_CIProcessLauncherResult __x_ABI_CWindows_CSystem_CIProcessLauncherResult;
typedef interface __x_ABI_CWindows_CSystem_CIProcessLauncherStatics __x_ABI_CWindows_CSystem_CIProcessLauncherStatics;
typedef interface __x_ABI_CWindows_CSystem_CIProcessMemoryReport __x_ABI_CWindows_CSystem_CIProcessMemoryReport;
typedef interface __x_ABI_CWindows_CSystem_CIProtocolForResultsOperation __x_ABI_CWindows_CSystem_CIProtocolForResultsOperation;
typedef interface __x_ABI_CWindows_CSystem_CIRemoteLauncherOptions __x_ABI_CWindows_CSystem_CIRemoteLauncherOptions;
typedef interface __x_ABI_CWindows_CSystem_CIRemoteLauncherStatics __x_ABI_CWindows_CSystem_CIRemoteLauncherStatics;
typedef interface __x_ABI_CWindows_CSystem_CIShutdownManagerStatics __x_ABI_CWindows_CSystem_CIShutdownManagerStatics;
typedef interface __x_ABI_CWindows_CSystem_CIShutdownManagerStatics2 __x_ABI_CWindows_CSystem_CIShutdownManagerStatics2;
typedef interface __x_ABI_CWindows_CSystem_CITimeZoneSettingsStatics __x_ABI_CWindows_CSystem_CITimeZoneSettingsStatics;
typedef interface __x_ABI_CWindows_CSystem_CITimeZoneSettingsStatics2 __x_ABI_CWindows_CSystem_CITimeZoneSettingsStatics2;
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef interface __x_ABI_CWindows_CSystem_CIUserAuthenticationStatusChangeDeferral __x_ABI_CWindows_CSystem_CIUserAuthenticationStatusChangeDeferral;
typedef interface __x_ABI_CWindows_CSystem_CIUserAuthenticationStatusChangingEventArgs __x_ABI_CWindows_CSystem_CIUserAuthenticationStatusChangingEventArgs;
typedef interface __x_ABI_CWindows_CSystem_CIUserChangedEventArgs __x_ABI_CWindows_CSystem_CIUserChangedEventArgs;
typedef interface __x_ABI_CWindows_CSystem_CIUserDeviceAssociationChangedEventArgs __x_ABI_CWindows_CSystem_CIUserDeviceAssociationChangedEventArgs;
typedef interface __x_ABI_CWindows_CSystem_CIUserDeviceAssociationStatics __x_ABI_CWindows_CSystem_CIUserDeviceAssociationStatics;
typedef interface __x_ABI_CWindows_CSystem_CIUserPicker __x_ABI_CWindows_CSystem_CIUserPicker;
typedef interface __x_ABI_CWindows_CSystem_CIUserPickerStatics __x_ABI_CWindows_CSystem_CIUserPickerStatics;
typedef interface __x_ABI_CWindows_CSystem_CIUserStatics __x_ABI_CWindows_CSystem_CIUserStatics;
typedef interface __x_ABI_CWindows_CSystem_CIUserWatcher __x_ABI_CWindows_CSystem_CIUserWatcher;
typedef interface __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo;
EXTERN_C const IID IID___FIIterator_1_Windows__CSystem__CAppDiagnosticInfo;
typedef struct __FIIterator_1_Windows__CSystem__CAppDiagnosticInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo * This, __RPC__out __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CSystem__CAppDiagnosticInfoVtbl;
interface __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CSystem__CAppDiagnosticInfoVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo;
EXTERN_C const IID IID___FIIterable_1_Windows__CSystem__CAppDiagnosticInfo;
typedef struct __FIIterable_1_Windows__CSystem__CAppDiagnosticInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo * This, __RPC__deref_out_opt __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo **first);
    END_INTERFACE
} __FIIterable_1_Windows__CSystem__CAppDiagnosticInfoVtbl;
interface __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CSystem__CAppDiagnosticInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport __FIIterator_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport;
EXTERN_C const IID IID___FIIterator_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport;
typedef struct __FIIterator_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This, __RPC__out __x_ABI_CWindows_CSystem_CIAppResourceGroupBackgroundTaskReport * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CIAppResourceGroupBackgroundTaskReport * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReportVtbl;
interface __FIIterator_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport
{
    CONST_VTBL struct __FIIterator_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReportVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport __FIIterable_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport;
EXTERN_C const IID IID___FIIterable_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport;
typedef struct __FIIterable_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This, __RPC__deref_out_opt __FIIterator_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport **first);
    END_INTERFACE
} __FIIterable_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReportVtbl;
interface __FIIterable_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport
{
    CONST_VTBL struct __FIIterable_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReportVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CSystem__CAppResourceGroupInfo __FIIterator_1_Windows__CSystem__CAppResourceGroupInfo;
EXTERN_C const IID IID___FIIterator_1_Windows__CSystem__CAppResourceGroupInfo;
typedef struct __FIIterator_1_Windows__CSystem__CAppResourceGroupInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CSystem__CAppResourceGroupInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSystem__CAppResourceGroupInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSystem__CAppResourceGroupInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSystem__CAppResourceGroupInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSystem__CAppResourceGroupInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSystem__CAppResourceGroupInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSystem__CAppResourceGroupInfo * This, __RPC__out __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSystem__CAppResourceGroupInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSystem__CAppResourceGroupInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSystem__CAppResourceGroupInfo * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CSystem__CAppResourceGroupInfoVtbl;
interface __FIIterator_1_Windows__CSystem__CAppResourceGroupInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CSystem__CAppResourceGroupInfoVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CSystem__CAppResourceGroupInfo __FIIterable_1_Windows__CSystem__CAppResourceGroupInfo;
EXTERN_C const IID IID___FIIterable_1_Windows__CSystem__CAppResourceGroupInfo;
typedef struct __FIIterable_1_Windows__CSystem__CAppResourceGroupInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CSystem__CAppResourceGroupInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSystem__CAppResourceGroupInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSystem__CAppResourceGroupInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSystem__CAppResourceGroupInfo * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSystem__CAppResourceGroupInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSystem__CAppResourceGroupInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSystem__CAppResourceGroupInfo * This, __RPC__deref_out_opt __FIIterator_1_Windows__CSystem__CAppResourceGroupInfo **first);
    END_INTERFACE
} __FIIterable_1_Windows__CSystem__CAppResourceGroupInfoVtbl;
interface __FIIterable_1_Windows__CSystem__CAppResourceGroupInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CSystem__CAppResourceGroupInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CSystem__CAppUriHandlerHost __FIIterator_1_Windows__CSystem__CAppUriHandlerHost;
EXTERN_C const IID IID___FIIterator_1_Windows__CSystem__CAppUriHandlerHost;
typedef struct __FIIterator_1_Windows__CSystem__CAppUriHandlerHostVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CSystem__CAppUriHandlerHost * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSystem__CAppUriHandlerHost * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSystem__CAppUriHandlerHost * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSystem__CAppUriHandlerHost * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSystem__CAppUriHandlerHost * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSystem__CAppUriHandlerHost * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSystem__CAppUriHandlerHost * This, __RPC__out __x_ABI_CWindows_CSystem_CIAppUriHandlerHost * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSystem__CAppUriHandlerHost * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSystem__CAppUriHandlerHost * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSystem__CAppUriHandlerHost * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CIAppUriHandlerHost * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CSystem__CAppUriHandlerHostVtbl;
interface __FIIterator_1_Windows__CSystem__CAppUriHandlerHost
{
    CONST_VTBL struct __FIIterator_1_Windows__CSystem__CAppUriHandlerHostVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CSystem__CAppUriHandlerHost __FIIterable_1_Windows__CSystem__CAppUriHandlerHost;
EXTERN_C const IID IID___FIIterable_1_Windows__CSystem__CAppUriHandlerHost;
typedef struct __FIIterable_1_Windows__CSystem__CAppUriHandlerHostVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CSystem__CAppUriHandlerHost * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSystem__CAppUriHandlerHost * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSystem__CAppUriHandlerHost * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSystem__CAppUriHandlerHost * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSystem__CAppUriHandlerHost * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSystem__CAppUriHandlerHost * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSystem__CAppUriHandlerHost * This, __RPC__deref_out_opt __FIIterator_1_Windows__CSystem__CAppUriHandlerHost **first);
    END_INTERFACE
} __FIIterable_1_Windows__CSystem__CAppUriHandlerHostVtbl;
interface __FIIterable_1_Windows__CSystem__CAppUriHandlerHost
{
    CONST_VTBL struct __FIIterable_1_Windows__CSystem__CAppUriHandlerHostVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CSystem__CUser __FIIterator_1_Windows__CSystem__CUser;
EXTERN_C const IID IID___FIIterator_1_Windows__CSystem__CUser;
typedef struct __FIIterator_1_Windows__CSystem__CUserVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CSystem__CUser * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSystem__CUser * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSystem__CUser * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSystem__CUser * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSystem__CUser * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSystem__CUser * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSystem__CUser * This, __RPC__out __x_ABI_CWindows_CSystem_CIUser * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSystem__CUser * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSystem__CUser * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSystem__CUser * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CIUser * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CSystem__CUserVtbl;
interface __FIIterator_1_Windows__CSystem__CUser
{
    CONST_VTBL struct __FIIterator_1_Windows__CSystem__CUserVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CSystem__CUser __FIIterable_1_Windows__CSystem__CUser;
EXTERN_C const IID IID___FIIterable_1_Windows__CSystem__CUser;
typedef struct __FIIterable_1_Windows__CSystem__CUserVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CSystem__CUser * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSystem__CUser * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSystem__CUser * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSystem__CUser * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSystem__CUser * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSystem__CUser * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSystem__CUser * This, __RPC__deref_out_opt __FIIterator_1_Windows__CSystem__CUser **first);
    END_INTERFACE
} __FIIterable_1_Windows__CSystem__CUserVtbl;
interface __FIIterable_1_Windows__CSystem__CUser
{
    CONST_VTBL struct __FIIterable_1_Windows__CSystem__CUserVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo;
EXTERN_C const IID IID___FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo;
typedef struct __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo * This,
                       __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfoVtbl;
interface __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfoVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport __FIVectorView_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport;
EXTERN_C const IID IID___FIVectorView_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport;
typedef struct __FIVectorView_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CSystem_CIAppResourceGroupBackgroundTaskReport * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This,
                       __x_ABI_CWindows_CSystem_CIAppResourceGroupBackgroundTaskReport * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CIAppResourceGroupBackgroundTaskReport * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReportVtbl;
interface __FIVectorView_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReportVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CSystem__CAppResourceGroupInfo __FIVectorView_1_Windows__CSystem__CAppResourceGroupInfo;
EXTERN_C const IID IID___FIVectorView_1_Windows__CSystem__CAppResourceGroupInfo;
typedef struct __FIVectorView_1_Windows__CSystem__CAppResourceGroupInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CAppResourceGroupInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSystem__CAppResourceGroupInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSystem__CAppResourceGroupInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSystem__CAppResourceGroupInfo * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CAppResourceGroupInfo * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CAppResourceGroupInfo * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CSystem__CAppResourceGroupInfo * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CSystem__CAppResourceGroupInfo * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CSystem__CAppResourceGroupInfo * This,
                       __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CSystem__CAppResourceGroupInfo * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CSystem__CAppResourceGroupInfoVtbl;
interface __FIVectorView_1_Windows__CSystem__CAppResourceGroupInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSystem__CAppResourceGroupInfoVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CSystem__CAppUriHandlerHost __FIVectorView_1_Windows__CSystem__CAppUriHandlerHost;
EXTERN_C const IID IID___FIVectorView_1_Windows__CSystem__CAppUriHandlerHost;
typedef struct __FIVectorView_1_Windows__CSystem__CAppUriHandlerHostVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CAppUriHandlerHost * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSystem__CAppUriHandlerHost * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSystem__CAppUriHandlerHost * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSystem__CAppUriHandlerHost * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CAppUriHandlerHost * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CAppUriHandlerHost * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CSystem__CAppUriHandlerHost * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CSystem_CIAppUriHandlerHost * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CSystem__CAppUriHandlerHost * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CSystem__CAppUriHandlerHost * This,
                       __x_ABI_CWindows_CSystem_CIAppUriHandlerHost * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CSystem__CAppUriHandlerHost * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CIAppUriHandlerHost * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CSystem__CAppUriHandlerHostVtbl;
interface __FIVectorView_1_Windows__CSystem__CAppUriHandlerHost
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSystem__CAppUriHandlerHostVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CSystem__CUser __FIVectorView_1_Windows__CSystem__CUser;
EXTERN_C const IID IID___FIVectorView_1_Windows__CSystem__CUser;
typedef struct __FIVectorView_1_Windows__CSystem__CUserVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CUser * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSystem__CUser * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSystem__CUser * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSystem__CUser * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CUser * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CUser * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CSystem__CUser * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CSystem_CIUser * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CSystem__CUser * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CSystem__CUser * This,
                       __x_ABI_CWindows_CSystem_CIUser * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CSystem__CUser * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CIUser * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CSystem__CUserVtbl;
interface __FIVectorView_1_Windows__CSystem__CUser
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSystem__CUserVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CSystem__CAppDiagnosticInfo __FIVector_1_Windows__CSystem__CAppDiagnosticInfo;
EXTERN_C const IID IID___FIVector_1_Windows__CSystem__CAppDiagnosticInfo;
typedef struct __FIVector_1_Windows__CSystem__CAppDiagnosticInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This, __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This,
                   __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This, __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * *value);
    END_INTERFACE
} __FIVector_1_Windows__CSystem__CAppDiagnosticInfoVtbl;
interface __FIVector_1_Windows__CSystem__CAppDiagnosticInfo
{
    CONST_VTBL struct __FIVector_1_Windows__CSystem__CAppDiagnosticInfoVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport __FIVector_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport;
EXTERN_C const IID IID___FIVector_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport;
typedef struct __FIVector_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This, __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIAppResourceGroupBackgroundTaskReport * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIAppResourceGroupBackgroundTaskReport * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This,
                   __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupBackgroundTaskReport * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupBackgroundTaskReport * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupBackgroundTaskReport * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This, __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupBackgroundTaskReport * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CIAppResourceGroupBackgroundTaskReport * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CSystem_CIAppResourceGroupBackgroundTaskReport * *value);
    END_INTERFACE
} __FIVector_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReportVtbl;
interface __FIVector_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport
{
    CONST_VTBL struct __FIVector_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReportVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CSystem__CAppResourceGroupInfo __FIVector_1_Windows__CSystem__CAppResourceGroupInfo;
EXTERN_C const IID IID___FIVector_1_Windows__CSystem__CAppResourceGroupInfo;
typedef struct __FIVector_1_Windows__CSystem__CAppResourceGroupInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupInfo * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupInfo * This, __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupInfo * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupInfo * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupInfo * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CSystem__CAppResourceGroupInfo **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupInfo * This,
                   __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupInfo * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupInfo * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupInfo * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupInfo * This, __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupInfo * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupInfo * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CSystem__CAppResourceGroupInfo * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo * *value);
    END_INTERFACE
} __FIVector_1_Windows__CSystem__CAppResourceGroupInfoVtbl;
interface __FIVector_1_Windows__CSystem__CAppResourceGroupInfo
{
    CONST_VTBL struct __FIVector_1_Windows__CSystem__CAppResourceGroupInfoVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CSystem__CAppUriHandlerHost __FIVector_1_Windows__CSystem__CAppUriHandlerHost;
EXTERN_C const IID IID___FIVector_1_Windows__CSystem__CAppUriHandlerHost;
typedef struct __FIVector_1_Windows__CSystem__CAppUriHandlerHostVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CSystem__CAppUriHandlerHost * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CSystem__CAppUriHandlerHost * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CSystem__CAppUriHandlerHost * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CSystem__CAppUriHandlerHost * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CSystem__CAppUriHandlerHost * This, __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIAppUriHandlerHost * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CSystem__CAppUriHandlerHost * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CSystem__CAppUriHandlerHost * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIAppUriHandlerHost * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CSystem__CAppUriHandlerHost * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CSystem__CAppUriHandlerHost * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CSystem__CAppUriHandlerHost **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CSystem__CAppUriHandlerHost * This,
                   __RPC__in __x_ABI_CWindows_CSystem_CIAppUriHandlerHost * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CSystem__CAppUriHandlerHost * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CSystem_CIAppUriHandlerHost * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CSystem__CAppUriHandlerHost * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CSystem_CIAppUriHandlerHost * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CSystem__CAppUriHandlerHost * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CSystem__CAppUriHandlerHost * This, __RPC__in __x_ABI_CWindows_CSystem_CIAppUriHandlerHost * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CSystem__CAppUriHandlerHost * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CSystem__CAppUriHandlerHost * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CSystem__CAppUriHandlerHost * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CIAppUriHandlerHost * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CSystem__CAppUriHandlerHost * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CSystem_CIAppUriHandlerHost * *value);
    END_INTERFACE
} __FIVector_1_Windows__CSystem__CAppUriHandlerHostVtbl;
interface __FIVector_1_Windows__CSystem__CAppUriHandlerHost
{
    CONST_VTBL struct __FIVector_1_Windows__CSystem__CAppUriHandlerHostVtbl *lpVtbl;
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
typedef interface __FIEventHandler_1_Windows__CSystem__CAppMemoryUsageLimitChangingEventArgs __FIEventHandler_1_Windows__CSystem__CAppMemoryUsageLimitChangingEventArgs;
EXTERN_C const IID IID___FIEventHandler_1_Windows__CSystem__CAppMemoryUsageLimitChangingEventArgs;
typedef struct __FIEventHandler_1_Windows__CSystem__CAppMemoryUsageLimitChangingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CSystem__CAppMemoryUsageLimitChangingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CSystem__CAppMemoryUsageLimitChangingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CSystem__CAppMemoryUsageLimitChangingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CSystem__CAppMemoryUsageLimitChangingEventArgs * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt __x_ABI_CWindows_CSystem_CIAppMemoryUsageLimitChangingEventArgs * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CSystem__CAppMemoryUsageLimitChangingEventArgsVtbl;
interface __FIEventHandler_1_Windows__CSystem__CAppMemoryUsageLimitChangingEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CSystem__CAppMemoryUsageLimitChangingEventArgsVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIEventHandler_1_Windows__CSystem__CUserDeviceAssociationChangedEventArgs __FIEventHandler_1_Windows__CSystem__CUserDeviceAssociationChangedEventArgs;
EXTERN_C const IID IID___FIEventHandler_1_Windows__CSystem__CUserDeviceAssociationChangedEventArgs;
typedef struct __FIEventHandler_1_Windows__CSystem__CUserDeviceAssociationChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CSystem__CUserDeviceAssociationChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CSystem__CUserDeviceAssociationChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CSystem__CUserDeviceAssociationChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CSystem__CUserDeviceAssociationChangedEventArgs * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt __x_ABI_CWindows_CSystem_CIUserDeviceAssociationChangedEventArgs * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CSystem__CUserDeviceAssociationChangedEventArgsVtbl;
interface __FIEventHandler_1_Windows__CSystem__CUserDeviceAssociationChangedEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CSystem__CUserDeviceAssociationChangedEventArgsVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSystem__CUser __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSystem__CUser;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSystem__CUser;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CUser __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CUser;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSystem__CUserVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSystem__CUser * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSystem__CUser * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSystem__CUser * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSystem__CUser * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CUser *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSystem__CUserVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSystem__CUser
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSystem__CUserVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CUser __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CUser;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CUser;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CUserVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CUser * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CUser * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CUser * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CUser * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CUser * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CUser * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CUser * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSystem__CUser *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CUser * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSystem__CUser **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CUser * This, __RPC__out __FIVectorView_1_Windows__CSystem__CUser * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CUserVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CUser
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CUserVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfo __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfo;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfo;
typedef interface __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfo __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfo;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This, __RPC__in_opt __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfo *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfoVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfo
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfo __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfo;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfo;
typedef struct __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfo *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfo **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This, __RPC__out __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfoVtbl;
interface __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfo
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfoVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CSystem__CAppUriHandlerHost __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CSystem__CAppUriHandlerHost;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CSystem__CAppUriHandlerHost;
typedef interface __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppUriHandlerHost __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppUriHandlerHost;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CSystem__CAppUriHandlerHostVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CSystem__CAppUriHandlerHost * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CSystem__CAppUriHandlerHost * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CSystem__CAppUriHandlerHost * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CSystem__CAppUriHandlerHost * This, __RPC__in_opt __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppUriHandlerHost *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CSystem__CAppUriHandlerHostVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CSystem__CAppUriHandlerHost
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CSystem__CAppUriHandlerHostVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppUriHandlerHost __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppUriHandlerHost;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppUriHandlerHost;
typedef struct __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppUriHandlerHostVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppUriHandlerHost * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppUriHandlerHost * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppUriHandlerHost * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppUriHandlerHost * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppUriHandlerHost * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppUriHandlerHost * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppUriHandlerHost * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CSystem__CAppUriHandlerHost *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppUriHandlerHost * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CSystem__CAppUriHandlerHost **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppUriHandlerHost * This, __RPC__out __FIVector_1_Windows__CSystem__CAppUriHandlerHost * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppUriHandlerHostVtbl;
interface __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppUriHandlerHost
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppUriHandlerHostVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAppActivationResult __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAppActivationResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAppActivationResult;
typedef interface __FIAsyncOperation_1_Windows__CSystem__CAppActivationResult __FIAsyncOperation_1_Windows__CSystem__CAppActivationResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAppActivationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAppActivationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAppActivationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAppActivationResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAppActivationResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSystem__CAppActivationResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAppActivationResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAppActivationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAppActivationResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSystem__CAppActivationResult __FIAsyncOperation_1_Windows__CSystem__CAppActivationResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSystem__CAppActivationResult;
typedef struct __FIAsyncOperation_1_Windows__CSystem__CAppActivationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CAppActivationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CAppActivationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CAppActivationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CAppActivationResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CAppActivationResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CAppActivationResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CAppActivationResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAppActivationResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CAppActivationResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAppActivationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CAppActivationResult * This, __RPC__out __x_ABI_CWindows_CSystem_CIAppActivationResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSystem__CAppActivationResultVtbl;
interface __FIAsyncOperation_1_Windows__CSystem__CAppActivationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSystem__CAppActivationResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAppExecutionStateChangeResult __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAppExecutionStateChangeResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAppExecutionStateChangeResult;
typedef interface __FIAsyncOperation_1_Windows__CSystem__CAppExecutionStateChangeResult __FIAsyncOperation_1_Windows__CSystem__CAppExecutionStateChangeResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAppExecutionStateChangeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAppExecutionStateChangeResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAppExecutionStateChangeResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAppExecutionStateChangeResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAppExecutionStateChangeResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSystem__CAppExecutionStateChangeResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAppExecutionStateChangeResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAppExecutionStateChangeResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAppExecutionStateChangeResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSystem__CAppExecutionStateChangeResult __FIAsyncOperation_1_Windows__CSystem__CAppExecutionStateChangeResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSystem__CAppExecutionStateChangeResult;
typedef struct __FIAsyncOperation_1_Windows__CSystem__CAppExecutionStateChangeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CAppExecutionStateChangeResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CAppExecutionStateChangeResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CAppExecutionStateChangeResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CAppExecutionStateChangeResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CAppExecutionStateChangeResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CAppExecutionStateChangeResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CAppExecutionStateChangeResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAppExecutionStateChangeResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CAppExecutionStateChangeResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAppExecutionStateChangeResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CAppExecutionStateChangeResult * This, __RPC__out __x_ABI_CWindows_CSystem_CIAppExecutionStateChangeResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSystem__CAppExecutionStateChangeResultVtbl;
interface __FIAsyncOperation_1_Windows__CSystem__CAppExecutionStateChangeResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSystem__CAppExecutionStateChangeResultVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CSystem_CAutoUpdateTimeZoneStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAutoUpdateTimeZoneStatus __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAutoUpdateTimeZoneStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAutoUpdateTimeZoneStatus;
typedef interface __FIAsyncOperation_1_Windows__CSystem__CAutoUpdateTimeZoneStatus __FIAsyncOperation_1_Windows__CSystem__CAutoUpdateTimeZoneStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAutoUpdateTimeZoneStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAutoUpdateTimeZoneStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAutoUpdateTimeZoneStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAutoUpdateTimeZoneStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAutoUpdateTimeZoneStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSystem__CAutoUpdateTimeZoneStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAutoUpdateTimeZoneStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAutoUpdateTimeZoneStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAutoUpdateTimeZoneStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSystem__CAutoUpdateTimeZoneStatus __FIAsyncOperation_1_Windows__CSystem__CAutoUpdateTimeZoneStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSystem__CAutoUpdateTimeZoneStatus;
typedef struct __FIAsyncOperation_1_Windows__CSystem__CAutoUpdateTimeZoneStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CAutoUpdateTimeZoneStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CAutoUpdateTimeZoneStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CAutoUpdateTimeZoneStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CAutoUpdateTimeZoneStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CAutoUpdateTimeZoneStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CAutoUpdateTimeZoneStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CAutoUpdateTimeZoneStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAutoUpdateTimeZoneStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CAutoUpdateTimeZoneStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CAutoUpdateTimeZoneStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CAutoUpdateTimeZoneStatus * This, __RPC__out enum __x_ABI_CWindows_CSystem_CAutoUpdateTimeZoneStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSystem__CAutoUpdateTimeZoneStatusVtbl;
interface __FIAsyncOperation_1_Windows__CSystem__CAutoUpdateTimeZoneStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSystem__CAutoUpdateTimeZoneStatusVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CSystem_CDiagnosticAccessStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CDiagnosticAccessStatus __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CDiagnosticAccessStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CDiagnosticAccessStatus;
typedef interface __FIAsyncOperation_1_Windows__CSystem__CDiagnosticAccessStatus __FIAsyncOperation_1_Windows__CSystem__CDiagnosticAccessStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CDiagnosticAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CDiagnosticAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CDiagnosticAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CDiagnosticAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CDiagnosticAccessStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSystem__CDiagnosticAccessStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CDiagnosticAccessStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CDiagnosticAccessStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CDiagnosticAccessStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSystem__CDiagnosticAccessStatus __FIAsyncOperation_1_Windows__CSystem__CDiagnosticAccessStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSystem__CDiagnosticAccessStatus;
typedef struct __FIAsyncOperation_1_Windows__CSystem__CDiagnosticAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CDiagnosticAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CDiagnosticAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CDiagnosticAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CDiagnosticAccessStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CDiagnosticAccessStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CDiagnosticAccessStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CDiagnosticAccessStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CDiagnosticAccessStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CDiagnosticAccessStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CDiagnosticAccessStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CDiagnosticAccessStatus * This, __RPC__out enum __x_ABI_CWindows_CSystem_CDiagnosticAccessStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSystem__CDiagnosticAccessStatusVtbl;
interface __FIAsyncOperation_1_Windows__CSystem__CDiagnosticAccessStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSystem__CDiagnosticAccessStatusVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CSystem_CLaunchQuerySupportStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchQuerySupportStatus __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchQuerySupportStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchQuerySupportStatus;
typedef interface __FIAsyncOperation_1_Windows__CSystem__CLaunchQuerySupportStatus __FIAsyncOperation_1_Windows__CSystem__CLaunchQuerySupportStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchQuerySupportStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchQuerySupportStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchQuerySupportStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchQuerySupportStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchQuerySupportStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSystem__CLaunchQuerySupportStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchQuerySupportStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchQuerySupportStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchQuerySupportStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSystem__CLaunchQuerySupportStatus __FIAsyncOperation_1_Windows__CSystem__CLaunchQuerySupportStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSystem__CLaunchQuerySupportStatus;
typedef struct __FIAsyncOperation_1_Windows__CSystem__CLaunchQuerySupportStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CLaunchQuerySupportStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CLaunchQuerySupportStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CLaunchQuerySupportStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CLaunchQuerySupportStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CLaunchQuerySupportStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CLaunchQuerySupportStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CLaunchQuerySupportStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchQuerySupportStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CLaunchQuerySupportStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchQuerySupportStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CLaunchQuerySupportStatus * This, __RPC__out enum __x_ABI_CWindows_CSystem_CLaunchQuerySupportStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSystem__CLaunchQuerySupportStatusVtbl;
interface __FIAsyncOperation_1_Windows__CSystem__CLaunchQuerySupportStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSystem__CLaunchQuerySupportStatusVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchUriResult __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchUriResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchUriResult;
typedef interface __FIAsyncOperation_1_Windows__CSystem__CLaunchUriResult __FIAsyncOperation_1_Windows__CSystem__CLaunchUriResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchUriResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchUriResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchUriResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchUriResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchUriResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSystem__CLaunchUriResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchUriResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchUriResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchUriResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSystem__CLaunchUriResult __FIAsyncOperation_1_Windows__CSystem__CLaunchUriResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSystem__CLaunchUriResult;
typedef struct __FIAsyncOperation_1_Windows__CSystem__CLaunchUriResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CLaunchUriResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CLaunchUriResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CLaunchUriResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CLaunchUriResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CLaunchUriResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CLaunchUriResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CLaunchUriResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchUriResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CLaunchUriResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchUriResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CLaunchUriResult * This, __RPC__out __x_ABI_CWindows_CSystem_CILaunchUriResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSystem__CLaunchUriResultVtbl;
interface __FIAsyncOperation_1_Windows__CSystem__CLaunchUriResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSystem__CLaunchUriResultVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CSystem_CLaunchUriStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchUriStatus __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchUriStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchUriStatus;
typedef interface __FIAsyncOperation_1_Windows__CSystem__CLaunchUriStatus __FIAsyncOperation_1_Windows__CSystem__CLaunchUriStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchUriStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchUriStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchUriStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchUriStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchUriStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSystem__CLaunchUriStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchUriStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchUriStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchUriStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSystem__CLaunchUriStatus __FIAsyncOperation_1_Windows__CSystem__CLaunchUriStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSystem__CLaunchUriStatus;
typedef struct __FIAsyncOperation_1_Windows__CSystem__CLaunchUriStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CLaunchUriStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CLaunchUriStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CLaunchUriStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CLaunchUriStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CLaunchUriStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CLaunchUriStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CLaunchUriStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchUriStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CLaunchUriStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CLaunchUriStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CLaunchUriStatus * This, __RPC__out enum __x_ABI_CWindows_CSystem_CLaunchUriStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSystem__CLaunchUriStatusVtbl;
interface __FIAsyncOperation_1_Windows__CSystem__CLaunchUriStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSystem__CLaunchUriStatusVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CProcessLauncherResult __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CProcessLauncherResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CProcessLauncherResult;
typedef interface __FIAsyncOperation_1_Windows__CSystem__CProcessLauncherResult __FIAsyncOperation_1_Windows__CSystem__CProcessLauncherResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CProcessLauncherResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CProcessLauncherResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CProcessLauncherResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CProcessLauncherResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CProcessLauncherResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSystem__CProcessLauncherResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CProcessLauncherResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CProcessLauncherResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CProcessLauncherResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSystem__CProcessLauncherResult __FIAsyncOperation_1_Windows__CSystem__CProcessLauncherResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSystem__CProcessLauncherResult;
typedef struct __FIAsyncOperation_1_Windows__CSystem__CProcessLauncherResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CProcessLauncherResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CProcessLauncherResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CProcessLauncherResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CProcessLauncherResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CProcessLauncherResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CProcessLauncherResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CProcessLauncherResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CProcessLauncherResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CProcessLauncherResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CProcessLauncherResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CProcessLauncherResult * This, __RPC__out __x_ABI_CWindows_CSystem_CIProcessLauncherResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSystem__CProcessLauncherResultVtbl;
interface __FIAsyncOperation_1_Windows__CSystem__CProcessLauncherResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSystem__CProcessLauncherResultVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CSystem_CRemoteLaunchUriStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteLaunchUriStatus __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteLaunchUriStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteLaunchUriStatus;
typedef interface __FIAsyncOperation_1_Windows__CSystem__CRemoteLaunchUriStatus __FIAsyncOperation_1_Windows__CSystem__CRemoteLaunchUriStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteLaunchUriStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteLaunchUriStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteLaunchUriStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteLaunchUriStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteLaunchUriStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSystem__CRemoteLaunchUriStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteLaunchUriStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteLaunchUriStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteLaunchUriStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSystem__CRemoteLaunchUriStatus __FIAsyncOperation_1_Windows__CSystem__CRemoteLaunchUriStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSystem__CRemoteLaunchUriStatus;
typedef struct __FIAsyncOperation_1_Windows__CSystem__CRemoteLaunchUriStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteLaunchUriStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteLaunchUriStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteLaunchUriStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteLaunchUriStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteLaunchUriStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteLaunchUriStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteLaunchUriStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteLaunchUriStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteLaunchUriStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CRemoteLaunchUriStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CRemoteLaunchUriStatus * This, __RPC__out enum __x_ABI_CWindows_CSystem_CRemoteLaunchUriStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSystem__CRemoteLaunchUriStatusVtbl;
interface __FIAsyncOperation_1_Windows__CSystem__CRemoteLaunchUriStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSystem__CRemoteLaunchUriStatusVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUser __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUser;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUser;
typedef interface __FIAsyncOperation_1_Windows__CSystem__CUser __FIAsyncOperation_1_Windows__CSystem__CUser;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUser * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUser * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUser * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUser * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSystem__CUser *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUser
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUserVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSystem__CUser __FIAsyncOperation_1_Windows__CSystem__CUser;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSystem__CUser;
typedef struct __FIAsyncOperation_1_Windows__CSystem__CUserVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUser * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUser * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUser * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUser * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUser * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUser * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUser * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUser *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUser * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CUser **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CUser * This, __RPC__out __x_ABI_CWindows_CSystem_CIUser * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSystem__CUserVtbl;
interface __FIAsyncOperation_1_Windows__CSystem__CUser
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSystem__CUserVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CGaming_CInput_CIGameController __x_ABI_CWindows_CGaming_CInput_CIGameController;
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
typedef interface __FITypedEventHandler_2_Windows__CSystem__CAppDiagnosticInfoWatcher_IInspectable __FITypedEventHandler_2_Windows__CSystem__CAppDiagnosticInfoWatcher_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CAppDiagnosticInfoWatcher_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CSystem__CAppDiagnosticInfoWatcher_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CAppDiagnosticInfoWatcher_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CAppDiagnosticInfoWatcher_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CAppDiagnosticInfoWatcher_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CAppDiagnosticInfoWatcher_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcher * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CAppDiagnosticInfoWatcher_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CSystem__CAppDiagnosticInfoWatcher_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CAppDiagnosticInfoWatcher_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CSystem__CAppDiagnosticInfoWatcher_Windows__CSystem__CAppDiagnosticInfoWatcherEventArgs __FITypedEventHandler_2_Windows__CSystem__CAppDiagnosticInfoWatcher_Windows__CSystem__CAppDiagnosticInfoWatcherEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CAppDiagnosticInfoWatcher_Windows__CSystem__CAppDiagnosticInfoWatcherEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CSystem__CAppDiagnosticInfoWatcher_Windows__CSystem__CAppDiagnosticInfoWatcherEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CAppDiagnosticInfoWatcher_Windows__CSystem__CAppDiagnosticInfoWatcherEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CAppDiagnosticInfoWatcher_Windows__CSystem__CAppDiagnosticInfoWatcherEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CAppDiagnosticInfoWatcher_Windows__CSystem__CAppDiagnosticInfoWatcherEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CAppDiagnosticInfoWatcher_Windows__CSystem__CAppDiagnosticInfoWatcherEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcherEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CAppDiagnosticInfoWatcher_Windows__CSystem__CAppDiagnosticInfoWatcherEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CSystem__CAppDiagnosticInfoWatcher_Windows__CSystem__CAppDiagnosticInfoWatcherEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CAppDiagnosticInfoWatcher_Windows__CSystem__CAppDiagnosticInfoWatcherEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_IInspectable __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcher * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_Windows__CSystem__CAppResourceGroupInfoWatcherEventArgs __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_Windows__CSystem__CAppResourceGroupInfoWatcherEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_Windows__CSystem__CAppResourceGroupInfoWatcherEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_Windows__CSystem__CAppResourceGroupInfoWatcherEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_Windows__CSystem__CAppResourceGroupInfoWatcherEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_Windows__CSystem__CAppResourceGroupInfoWatcherEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_Windows__CSystem__CAppResourceGroupInfoWatcherEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_Windows__CSystem__CAppResourceGroupInfoWatcherEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_Windows__CSystem__CAppResourceGroupInfoWatcherEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_Windows__CSystem__CAppResourceGroupInfoWatcherEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_Windows__CSystem__CAppResourceGroupInfoWatcherEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_Windows__CSystem__CAppResourceGroupInfoWatcherExecutionStateChangedEventArgs __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_Windows__CSystem__CAppResourceGroupInfoWatcherExecutionStateChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_Windows__CSystem__CAppResourceGroupInfoWatcherExecutionStateChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_Windows__CSystem__CAppResourceGroupInfoWatcherExecutionStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_Windows__CSystem__CAppResourceGroupInfoWatcherExecutionStateChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_Windows__CSystem__CAppResourceGroupInfoWatcherExecutionStateChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_Windows__CSystem__CAppResourceGroupInfoWatcherExecutionStateChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_Windows__CSystem__CAppResourceGroupInfoWatcherExecutionStateChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherExecutionStateChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_Windows__CSystem__CAppResourceGroupInfoWatcherExecutionStateChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_Windows__CSystem__CAppResourceGroupInfoWatcherExecutionStateChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_Windows__CSystem__CAppResourceGroupInfoWatcherExecutionStateChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CSystem__CDispatcherQueue_IInspectable __FITypedEventHandler_2_Windows__CSystem__CDispatcherQueue_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CDispatcherQueue_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CSystem__CDispatcherQueue_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CDispatcherQueue_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CDispatcherQueue_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CDispatcherQueue_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CDispatcherQueue_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CSystem_CIDispatcherQueue * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CDispatcherQueue_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CSystem__CDispatcherQueue_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CDispatcherQueue_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CSystem__CDispatcherQueue_Windows__CSystem__CDispatcherQueueShutdownStartingEventArgs __FITypedEventHandler_2_Windows__CSystem__CDispatcherQueue_Windows__CSystem__CDispatcherQueueShutdownStartingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CDispatcherQueue_Windows__CSystem__CDispatcherQueueShutdownStartingEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CSystem__CDispatcherQueue_Windows__CSystem__CDispatcherQueueShutdownStartingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CDispatcherQueue_Windows__CSystem__CDispatcherQueueShutdownStartingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CDispatcherQueue_Windows__CSystem__CDispatcherQueueShutdownStartingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CDispatcherQueue_Windows__CSystem__CDispatcherQueueShutdownStartingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CDispatcherQueue_Windows__CSystem__CDispatcherQueueShutdownStartingEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CSystem_CIDispatcherQueue * sender, __RPC__in_opt __x_ABI_CWindows_CSystem_CIDispatcherQueueShutdownStartingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CDispatcherQueue_Windows__CSystem__CDispatcherQueueShutdownStartingEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CSystem__CDispatcherQueue_Windows__CSystem__CDispatcherQueueShutdownStartingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CDispatcherQueue_Windows__CSystem__CDispatcherQueueShutdownStartingEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CSystem__CDispatcherQueueTimer_IInspectable __FITypedEventHandler_2_Windows__CSystem__CDispatcherQueueTimer_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CDispatcherQueueTimer_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CSystem__CDispatcherQueueTimer_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CDispatcherQueueTimer_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CDispatcherQueueTimer_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CDispatcherQueueTimer_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CDispatcherQueueTimer_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CSystem_CIDispatcherQueueTimer * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CDispatcherQueueTimer_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CSystem__CDispatcherQueueTimer_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CDispatcherQueueTimer_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_IInspectable __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CUserWatcher_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CSystem_CIUserWatcher * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_Windows__CSystem__CUserAuthenticationStatusChangingEventArgs __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_Windows__CSystem__CUserAuthenticationStatusChangingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CUserWatcher_Windows__CSystem__CUserAuthenticationStatusChangingEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_Windows__CSystem__CUserAuthenticationStatusChangingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_Windows__CSystem__CUserAuthenticationStatusChangingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_Windows__CSystem__CUserAuthenticationStatusChangingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_Windows__CSystem__CUserAuthenticationStatusChangingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_Windows__CSystem__CUserAuthenticationStatusChangingEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CSystem_CIUserWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CSystem_CIUserAuthenticationStatusChangingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_Windows__CSystem__CUserAuthenticationStatusChangingEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_Windows__CSystem__CUserAuthenticationStatusChangingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_Windows__CSystem__CUserAuthenticationStatusChangingEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_Windows__CSystem__CUserChangedEventArgs __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_Windows__CSystem__CUserChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CUserWatcher_Windows__CSystem__CUserChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_Windows__CSystem__CUserChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_Windows__CSystem__CUserChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_Windows__CSystem__CUserChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_Windows__CSystem__CUserChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_Windows__CSystem__CUserChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CSystem_CIUserWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CSystem_CIUserChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_Windows__CSystem__CUserChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_Windows__CSystem__CUserChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_Windows__CSystem__CUserChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo;
typedef interface __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo;
EXTERN_C const IID IID___FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo;
typedef struct __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, __RPC__out __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl;
interface __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo;
EXTERN_C const IID IID___FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo;
typedef struct __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, __RPC__deref_out_opt __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo **first);
    END_INTERFACE
} __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl;
interface __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo;
EXTERN_C const IID IID___FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo;
typedef struct __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                       __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl;
interface __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo;
EXTERN_C const IID IID___FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo;
typedef struct __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                   __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * *value);
    END_INTERFACE
} __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl;
interface __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo
{
    CONST_VTBL struct __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CStorage_CIStorageItem __x_ABI_CWindows_CStorage_CIStorageItem;
typedef interface __FIIterator_1_Windows__CStorage__CIStorageItem __FIIterator_1_Windows__CStorage__CIStorageItem;
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CIStorageItem;
typedef struct __FIIterator_1_Windows__CStorage__CIStorageItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This, __RPC__out __x_ABI_CWindows_CStorage_CIStorageItem * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageItem * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CIStorageItemVtbl;
interface __FIIterator_1_Windows__CStorage__CIStorageItem
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CIStorageItemVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CStorage__CIStorageItem __FIIterable_1_Windows__CStorage__CIStorageItem;
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CIStorageItem;
typedef struct __FIIterable_1_Windows__CStorage__CIStorageItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This, __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CIStorageItem **first);
    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CIStorageItemVtbl;
interface __FIIterable_1_Windows__CStorage__CIStorageItem
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CIStorageItemVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CStorage__CIStorageItem __FIVectorView_1_Windows__CStorage__CIStorageItem;
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CIStorageItem;
typedef struct __FIVectorView_1_Windows__CStorage__CIStorageItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CStorage_CIStorageItem * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
                       __x_ABI_CWindows_CStorage_CIStorageItem * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageItem * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CIStorageItemVtbl;
interface __FIVectorView_1_Windows__CStorage__CIStorageItem
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CIStorageItemVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CStorage__CIStorageItem __FIVector_1_Windows__CStorage__CIStorageItem;
EXTERN_C const IID IID___FIVector_1_Windows__CStorage__CIStorageItem;
typedef struct __FIVector_1_Windows__CStorage__CIStorageItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This, __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageItem * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageItem * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CStorage__CIStorageItem **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This,
                   __RPC__in __x_ABI_CWindows_CStorage_CIStorageItem * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CStorage_CIStorageItem * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CStorage_CIStorageItem * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This, __RPC__in __x_ABI_CWindows_CStorage_CIStorageItem * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageItem * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CStorage__CIStorageItem * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CStorage_CIStorageItem * *value);
    END_INTERFACE
} __FIVector_1_Windows__CStorage__CIStorageItemVtbl;
interface __FIVector_1_Windows__CStorage__CIStorageItem
{
    CONST_VTBL struct __FIVector_1_Windows__CStorage__CIStorageItemVtbl *lpVtbl;
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
typedef interface __FIMap_2_HSTRING_IInspectable __FIMap_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIMap_2_HSTRING_IInspectable;
typedef struct __FIMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                   HSTRING key,
                            __RPC__deref_out_opt IInspectable * **value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                   HSTRING key,
                   __RPC__in_opt IInspectable * *value,
                            __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    END_INTERFACE
} __FIMap_2_HSTRING_IInspectableVtbl;
interface __FIMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMap_2_HSTRING_IInspectableVtbl *lpVtbl;
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
typedef interface __FIMapChangedEventArgs_1_HSTRING __FIMapChangedEventArgs_1_HSTRING;
EXTERN_C const IID IID___FIMapChangedEventArgs_1_HSTRING;
typedef struct __FIMapChangedEventArgs_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_CollectionChange )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__out __x_ABI_CWindows_CFoundation_CCollections_CCollectionChange *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIMapChangedEventArgs_1_HSTRINGVtbl;
interface __FIMapChangedEventArgs_1_HSTRING
{
    CONST_VTBL struct __FIMapChangedEventArgs_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_CollectionChange(This,value) )
    ( (This)->lpVtbl -> get_Key(This,value) )
typedef interface __FMapChangedEventHandler_2_HSTRING_IInspectable __FMapChangedEventHandler_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FMapChangedEventHandler_2_HSTRING_IInspectable;
typedef interface __FIObservableMap_2_HSTRING_IInspectable __FIObservableMap_2_HSTRING_IInspectable;
typedef interface __FIMapChangedEventArgs_1_HSTRING __FIMapChangedEventArgs_1_HSTRING;
typedef struct __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This,
                   __RPC__in_opt __FIObservableMap_2_HSTRING_IInspectable *sender,
                   __RPC__in_opt __FIMapChangedEventArgs_1_HSTRING *e);
    END_INTERFACE
} __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl;
interface __FMapChangedEventHandler_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIObservableMap_2_HSTRING_IInspectable __FIObservableMap_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIObservableMap_2_HSTRING_IInspectable;
typedef struct __FIObservableMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *add_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                   __RPC__in_opt __FMapChangedEventHandler_2_HSTRING_IInspectable *handler,
                            __RPC__out EventRegistrationToken *token);
    HRESULT ( STDMETHODCALLTYPE *remove_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                   EventRegistrationToken token);
    END_INTERFACE
} __FIObservableMap_2_HSTRING_IInspectableVtbl;
interface __FIObservableMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIObservableMap_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> add_MapChanged(This,handler,token) )
    ( (This)->lpVtbl -> remove_MapChanged(This,token) )
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
typedef interface __x_ABI_CWindows_CApplicationModel_CIAppInfo __x_ABI_CWindows_CApplicationModel_CIAppInfo;
typedef interface __FIIterator_1_Windows__CApplicationModel__CAppInfo __FIIterator_1_Windows__CApplicationModel__CAppInfo;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CAppInfo;
typedef struct __FIIterator_1_Windows__CApplicationModel__CAppInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CIAppInfo * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CIAppInfo * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CAppInfoVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CAppInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CAppInfoVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CAppInfo __FIIterable_1_Windows__CApplicationModel__CAppInfo;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CAppInfo;
typedef struct __FIIterable_1_Windows__CApplicationModel__CAppInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInfo * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInfo * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CAppInfo **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CAppInfoVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CAppInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CAppInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CApplicationModel__CAppInfo __FIVectorView_1_Windows__CApplicationModel__CAppInfo;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CAppInfo;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CIAppInfo * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
                       __x_ABI_CWindows_CApplicationModel_CIAppInfo * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CIAppInfo * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CAppInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This, __RPC__out __FIVectorView_1_Windows__CApplicationModel__CAppInfo * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl *lpVtbl;
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
struct __x_ABI_CWindows_CFoundation_CPoint;
typedef interface __FIReference_1_Windows__CFoundation__CPoint __FIReference_1_Windows__CFoundation__CPoint;
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CPoint;
typedef struct __FIReference_1_Windows__CFoundation__CPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CPoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CPoint * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CPoint * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CPoint * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CPoint * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CPoint * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CPoint * This, __RPC__out struct __x_ABI_CWindows_CFoundation_CPoint *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CPointVtbl;
interface __FIReference_1_Windows__CFoundation__CPoint
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CPointVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
struct __x_ABI_CWindows_CFoundation_CRect;
typedef interface __FIReference_1_Windows__CFoundation__CRect __FIReference_1_Windows__CFoundation__CRect;
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CRect;
typedef struct __FIReference_1_Windows__CFoundation__CRectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CRect * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CRect * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CRect * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CRect * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CRect * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CRect * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CRect * This, __RPC__out struct __x_ABI_CWindows_CFoundation_CRect *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CRectVtbl;
interface __FIReference_1_Windows__CFoundation__CRect
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CRectVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
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
typedef interface __FIAsyncOperationCompletedHandler_1_IInspectable __FIAsyncOperationCompletedHandler_1_IInspectable;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_IInspectable;
typedef interface __FIAsyncOperation_1_IInspectable __FIAsyncOperation_1_IInspectable;
typedef struct __FIAsyncOperationCompletedHandler_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_IInspectable * This, __RPC__in_opt __FIAsyncOperation_1_IInspectable *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_IInspectableVtbl;
interface __FIAsyncOperationCompletedHandler_1_IInspectable
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_IInspectable __FIAsyncOperation_1_IInspectable;
EXTERN_C const IID IID___FIAsyncOperation_1_IInspectable;
typedef struct __FIAsyncOperation_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_IInspectable * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_IInspectable *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_IInspectable * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_IInspectable **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_IInspectable * This, __RPC__out IInspectable * *results);
    END_INTERFACE
} __FIAsyncOperation_1_IInspectableVtbl;
interface __FIAsyncOperation_1_IInspectable
{
    CONST_VTBL struct __FIAsyncOperation_1_IInspectableVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;
typedef interface __FIAsyncOperationCompletedHandler_1___F__CIPropertySet __FIAsyncOperationCompletedHandler_1___F__CIPropertySet;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___F__CIPropertySet;
typedef interface __FIAsyncOperation_1___F__CIPropertySet __FIAsyncOperation_1___F__CIPropertySet;
typedef struct __FIAsyncOperationCompletedHandler_1___F__CIPropertySetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___F__CIPropertySet * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___F__CIPropertySet * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___F__CIPropertySet * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___F__CIPropertySet * This, __RPC__in_opt __FIAsyncOperation_1___F__CIPropertySet *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___F__CIPropertySetVtbl;
interface __FIAsyncOperationCompletedHandler_1___F__CIPropertySet
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___F__CIPropertySetVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___F__CIPropertySet __FIAsyncOperation_1___F__CIPropertySet;
EXTERN_C const IID IID___FIAsyncOperation_1___F__CIPropertySet;
typedef struct __FIAsyncOperation_1___F__CIPropertySetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___F__CIPropertySet * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___F__CIPropertySet * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___F__CIPropertySet * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___F__CIPropertySet * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___F__CIPropertySet * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___F__CIPropertySet * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___F__CIPropertySet * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___F__CIPropertySet *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___F__CIPropertySet * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___F__CIPropertySet **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___F__CIPropertySet * This, __RPC__out __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * *results);
    END_INTERFACE
} __FIAsyncOperation_1___F__CIPropertySetVtbl;
interface __FIAsyncOperation_1___F__CIPropertySet
{
    CONST_VTBL struct __FIAsyncOperation_1___F__CIPropertySetVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReferenceVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReferenceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This, __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReferenceVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReferenceVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFolder __x_ABI_CWindows_CStorage_CIStorageFolder;
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIOutputStream __x_ABI_CWindows_CStorage_CStreams_CIOutputStream;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest;
typedef enum __x_ABI_CWindows_CUI_CPopups_CPlacement __x_ABI_CWindows_CUI_CPopups_CPlacement;
typedef enum __x_ABI_CWindows_CUI_CViewManagement_CViewSizePreference __x_ABI_CWindows_CUI_CViewManagement_CViewSizePreference;
typedef enum __x_ABI_CWindows_CSystem_CAppDiagnosticInfoWatcherStatus __x_ABI_CWindows_CSystem_CAppDiagnosticInfoWatcherStatus;
typedef enum __x_ABI_CWindows_CSystem_CAppMemoryUsageLevel __x_ABI_CWindows_CSystem_CAppMemoryUsageLevel;
typedef enum __x_ABI_CWindows_CSystem_CAppResourceGroupEnergyQuotaState __x_ABI_CWindows_CSystem_CAppResourceGroupEnergyQuotaState;
typedef enum __x_ABI_CWindows_CSystem_CAppResourceGroupExecutionState __x_ABI_CWindows_CSystem_CAppResourceGroupExecutionState;
typedef enum __x_ABI_CWindows_CSystem_CAppResourceGroupInfoWatcherStatus __x_ABI_CWindows_CSystem_CAppResourceGroupInfoWatcherStatus;
typedef enum __x_ABI_CWindows_CSystem_CAutoUpdateTimeZoneStatus __x_ABI_CWindows_CSystem_CAutoUpdateTimeZoneStatus;
typedef enum __x_ABI_CWindows_CSystem_CDiagnosticAccessStatus __x_ABI_CWindows_CSystem_CDiagnosticAccessStatus;
typedef enum __x_ABI_CWindows_CSystem_CDispatcherQueuePriority __x_ABI_CWindows_CSystem_CDispatcherQueuePriority;
typedef enum __x_ABI_CWindows_CSystem_CLaunchFileStatus __x_ABI_CWindows_CSystem_CLaunchFileStatus;
typedef enum __x_ABI_CWindows_CSystem_CLaunchQuerySupportStatus __x_ABI_CWindows_CSystem_CLaunchQuerySupportStatus;
typedef enum __x_ABI_CWindows_CSystem_CLaunchQuerySupportType __x_ABI_CWindows_CSystem_CLaunchQuerySupportType;
typedef enum __x_ABI_CWindows_CSystem_CLaunchUriStatus __x_ABI_CWindows_CSystem_CLaunchUriStatus;
typedef enum __x_ABI_CWindows_CSystem_CPowerState __x_ABI_CWindows_CSystem_CPowerState;
typedef enum __x_ABI_CWindows_CSystem_CProcessorArchitecture __x_ABI_CWindows_CSystem_CProcessorArchitecture;
typedef enum __x_ABI_CWindows_CSystem_CRemoteLaunchUriStatus __x_ABI_CWindows_CSystem_CRemoteLaunchUriStatus;
typedef enum __x_ABI_CWindows_CSystem_CShutdownKind __x_ABI_CWindows_CSystem_CShutdownKind;
typedef enum __x_ABI_CWindows_CSystem_CUserAuthenticationStatus __x_ABI_CWindows_CSystem_CUserAuthenticationStatus;
typedef enum __x_ABI_CWindows_CSystem_CUserPictureSize __x_ABI_CWindows_CSystem_CUserPictureSize;
typedef enum __x_ABI_CWindows_CSystem_CUserType __x_ABI_CWindows_CSystem_CUserType;
typedef enum __x_ABI_CWindows_CSystem_CUserWatcherStatus __x_ABI_CWindows_CSystem_CUserWatcherStatus;
typedef enum __x_ABI_CWindows_CSystem_CVirtualKey __x_ABI_CWindows_CSystem_CVirtualKey;
typedef enum __x_ABI_CWindows_CSystem_CVirtualKeyModifiers __x_ABI_CWindows_CSystem_CVirtualKeyModifiers;
enum __x_ABI_CWindows_CSystem_CAppDiagnosticInfoWatcherStatus
{
    AppDiagnosticInfoWatcherStatus_Created = 0,
    AppDiagnosticInfoWatcherStatus_Started = 1,
    AppDiagnosticInfoWatcherStatus_EnumerationCompleted = 2,
    AppDiagnosticInfoWatcherStatus_Stopping = 3,
    AppDiagnosticInfoWatcherStatus_Stopped = 4,
    AppDiagnosticInfoWatcherStatus_Aborted = 5,
};
enum __x_ABI_CWindows_CSystem_CAppMemoryUsageLevel
{
    AppMemoryUsageLevel_Low = 0,
    AppMemoryUsageLevel_Medium = 1,
    AppMemoryUsageLevel_High = 2,
    AppMemoryUsageLevel_OverLimit = 3,
};
enum __x_ABI_CWindows_CSystem_CAppResourceGroupEnergyQuotaState
{
    AppResourceGroupEnergyQuotaState_Unknown = 0,
    AppResourceGroupEnergyQuotaState_Over = 1,
    AppResourceGroupEnergyQuotaState_Under = 2,
};
enum __x_ABI_CWindows_CSystem_CAppResourceGroupExecutionState
{
    AppResourceGroupExecutionState_Unknown = 0,
    AppResourceGroupExecutionState_Running = 1,
    AppResourceGroupExecutionState_Suspending = 2,
    AppResourceGroupExecutionState_Suspended = 3,
    AppResourceGroupExecutionState_NotRunning = 4,
};
enum __x_ABI_CWindows_CSystem_CAppResourceGroupInfoWatcherStatus
{
    AppResourceGroupInfoWatcherStatus_Created = 0,
    AppResourceGroupInfoWatcherStatus_Started = 1,
    AppResourceGroupInfoWatcherStatus_EnumerationCompleted = 2,
    AppResourceGroupInfoWatcherStatus_Stopping = 3,
    AppResourceGroupInfoWatcherStatus_Stopped = 4,
    AppResourceGroupInfoWatcherStatus_Aborted = 5,
};
enum __x_ABI_CWindows_CSystem_CAutoUpdateTimeZoneStatus
{
    AutoUpdateTimeZoneStatus_Attempted = 0,
    AutoUpdateTimeZoneStatus_TimedOut = 1,
    AutoUpdateTimeZoneStatus_Failed = 2,
};
enum __x_ABI_CWindows_CSystem_CDiagnosticAccessStatus
{
    DiagnosticAccessStatus_Unspecified = 0,
    DiagnosticAccessStatus_Denied = 1,
    DiagnosticAccessStatus_Limited = 2,
    DiagnosticAccessStatus_Allowed = 3,
};
enum __x_ABI_CWindows_CSystem_CDispatcherQueuePriority
{
    DispatcherQueuePriority_Low = -10,
    DispatcherQueuePriority_Normal = 0,
    DispatcherQueuePriority_High = 10,
};
enum __x_ABI_CWindows_CSystem_CLaunchFileStatus
{
    LaunchFileStatus_Success = 0,
    LaunchFileStatus_AppUnavailable = 1,
    LaunchFileStatus_DeniedByPolicy = 2,
    LaunchFileStatus_FileTypeNotSupported = 3,
    LaunchFileStatus_Unknown = 4,
};
enum __x_ABI_CWindows_CSystem_CLaunchQuerySupportStatus
{
    LaunchQuerySupportStatus_Available = 0,
    LaunchQuerySupportStatus_AppNotInstalled = 1,
    LaunchQuerySupportStatus_AppUnavailable = 2,
    LaunchQuerySupportStatus_NotSupported = 3,
    LaunchQuerySupportStatus_Unknown = 4,
};
enum __x_ABI_CWindows_CSystem_CLaunchQuerySupportType
{
    LaunchQuerySupportType_Uri = 0,
    LaunchQuerySupportType_UriForResults = 1,
};
enum __x_ABI_CWindows_CSystem_CLaunchUriStatus
{
    LaunchUriStatus_Success = 0,
    LaunchUriStatus_AppUnavailable = 1,
    LaunchUriStatus_ProtocolUnavailable = 2,
    LaunchUriStatus_Unknown = 3,
};
enum __x_ABI_CWindows_CSystem_CPowerState
{
    PowerState_ConnectedStandby = 0,
    PowerState_SleepS3 = 1,
};
enum __x_ABI_CWindows_CSystem_CProcessorArchitecture
{
    ProcessorArchitecture_X86 = 0,
    ProcessorArchitecture_Arm = 5,
    ProcessorArchitecture_X64 = 9,
    ProcessorArchitecture_Neutral = 11,
    ProcessorArchitecture_Arm64 = 12,
    ProcessorArchitecture_X86OnArm64 = 14,
    ProcessorArchitecture_Unknown = 65535,
};
enum __x_ABI_CWindows_CSystem_CRemoteLaunchUriStatus
{
    RemoteLaunchUriStatus_Unknown = 0,
    RemoteLaunchUriStatus_Success = 1,
    RemoteLaunchUriStatus_AppUnavailable = 2,
    RemoteLaunchUriStatus_ProtocolUnavailable = 3,
    RemoteLaunchUriStatus_RemoteSystemUnavailable = 4,
    RemoteLaunchUriStatus_ValueSetTooLarge = 5,
    RemoteLaunchUriStatus_DeniedByLocalSystem = 6,
    RemoteLaunchUriStatus_DeniedByRemoteSystem = 7,
};
enum __x_ABI_CWindows_CSystem_CShutdownKind
{
    ShutdownKind_Shutdown = 0,
    ShutdownKind_Restart = 1,
};
enum __x_ABI_CWindows_CSystem_CUserAuthenticationStatus
{
    UserAuthenticationStatus_Unauthenticated = 0,
    UserAuthenticationStatus_LocallyAuthenticated = 1,
    UserAuthenticationStatus_RemotelyAuthenticated = 2,
};
enum __x_ABI_CWindows_CSystem_CUserPictureSize
{
    UserPictureSize_Size64x64 = 0,
    UserPictureSize_Size208x208 = 1,
    UserPictureSize_Size424x424 = 2,
    UserPictureSize_Size1080x1080 = 3,
};
enum __x_ABI_CWindows_CSystem_CUserType
{
    UserType_LocalUser = 0,
    UserType_RemoteUser = 1,
    UserType_LocalGuest = 2,
    UserType_RemoteGuest = 3,
};
enum __x_ABI_CWindows_CSystem_CUserWatcherStatus
{
    UserWatcherStatus_Created = 0,
    UserWatcherStatus_Started = 1,
    UserWatcherStatus_EnumerationCompleted = 2,
    UserWatcherStatus_Stopping = 3,
    UserWatcherStatus_Stopped = 4,
    UserWatcherStatus_Aborted = 5,
};
enum __x_ABI_CWindows_CSystem_CVirtualKey
{
    VirtualKey_None = 0,
    VirtualKey_LeftButton = 1,
    VirtualKey_RightButton = 2,
    VirtualKey_Cancel = 3,
    VirtualKey_MiddleButton = 4,
    VirtualKey_XButton1 = 5,
    VirtualKey_XButton2 = 6,
    VirtualKey_Back = 8,
    VirtualKey_Tab = 9,
    VirtualKey_Clear = 12,
    VirtualKey_Enter = 13,
    VirtualKey_Shift = 16,
    VirtualKey_Control = 17,
    VirtualKey_Menu = 18,
    VirtualKey_Pause = 19,
    VirtualKey_CapitalLock = 20,
    VirtualKey_Kana = 21,
    VirtualKey_Hangul = 21,
    VirtualKey_Junja = 23,
    VirtualKey_Final = 24,
    VirtualKey_Hanja = 25,
    VirtualKey_Kanji = 25,
    VirtualKey_Escape = 27,
    VirtualKey_Convert = 28,
    VirtualKey_NonConvert = 29,
    VirtualKey_Accept = 30,
    VirtualKey_ModeChange = 31,
    VirtualKey_Space = 32,
    VirtualKey_PageUp = 33,
    VirtualKey_PageDown = 34,
    VirtualKey_End = 35,
    VirtualKey_Home = 36,
    VirtualKey_Left = 37,
    VirtualKey_Up = 38,
    VirtualKey_Right = 39,
    VirtualKey_Down = 40,
    VirtualKey_Select = 41,
    VirtualKey_Print = 42,
    VirtualKey_Execute = 43,
    VirtualKey_Snapshot = 44,
    VirtualKey_Insert = 45,
    VirtualKey_Delete = 46,
    VirtualKey_Help = 47,
    VirtualKey_Number0 = 48,
    VirtualKey_Number1 = 49,
    VirtualKey_Number2 = 50,
    VirtualKey_Number3 = 51,
    VirtualKey_Number4 = 52,
    VirtualKey_Number5 = 53,
    VirtualKey_Number6 = 54,
    VirtualKey_Number7 = 55,
    VirtualKey_Number8 = 56,
    VirtualKey_Number9 = 57,
    VirtualKey_A = 65,
    VirtualKey_B = 66,
    VirtualKey_C = 67,
    VirtualKey_D = 68,
    VirtualKey_E = 69,
    VirtualKey_F = 70,
    VirtualKey_G = 71,
    VirtualKey_H = 72,
    VirtualKey_I = 73,
    VirtualKey_J = 74,
    VirtualKey_K = 75,
    VirtualKey_L = 76,
    VirtualKey_M = 77,
    VirtualKey_N = 78,
    VirtualKey_O = 79,
    VirtualKey_P = 80,
    VirtualKey_Q = 81,
    VirtualKey_R = 82,
    VirtualKey_S = 83,
    VirtualKey_T = 84,
    VirtualKey_U = 85,
    VirtualKey_V = 86,
    VirtualKey_W = 87,
    VirtualKey_X = 88,
    VirtualKey_Y = 89,
    VirtualKey_Z = 90,
    VirtualKey_LeftWindows = 91,
    VirtualKey_RightWindows = 92,
    VirtualKey_Application = 93,
    VirtualKey_Sleep = 95,
    VirtualKey_NumberPad0 = 96,
    VirtualKey_NumberPad1 = 97,
    VirtualKey_NumberPad2 = 98,
    VirtualKey_NumberPad3 = 99,
    VirtualKey_NumberPad4 = 100,
    VirtualKey_NumberPad5 = 101,
    VirtualKey_NumberPad6 = 102,
    VirtualKey_NumberPad7 = 103,
    VirtualKey_NumberPad8 = 104,
    VirtualKey_NumberPad9 = 105,
    VirtualKey_Multiply = 106,
    VirtualKey_Add = 107,
    VirtualKey_Separator = 108,
    VirtualKey_Subtract = 109,
    VirtualKey_Decimal = 110,
    VirtualKey_Divide = 111,
    VirtualKey_F1 = 112,
    VirtualKey_F2 = 113,
    VirtualKey_F3 = 114,
    VirtualKey_F4 = 115,
    VirtualKey_F5 = 116,
    VirtualKey_F6 = 117,
    VirtualKey_F7 = 118,
    VirtualKey_F8 = 119,
    VirtualKey_F9 = 120,
    VirtualKey_F10 = 121,
    VirtualKey_F11 = 122,
    VirtualKey_F12 = 123,
    VirtualKey_F13 = 124,
    VirtualKey_F14 = 125,
    VirtualKey_F15 = 126,
    VirtualKey_F16 = 127,
    VirtualKey_F17 = 128,
    VirtualKey_F18 = 129,
    VirtualKey_F19 = 130,
    VirtualKey_F20 = 131,
    VirtualKey_F21 = 132,
    VirtualKey_F22 = 133,
    VirtualKey_F23 = 134,
    VirtualKey_F24 = 135,
    VirtualKey_NavigationView = 136,
    VirtualKey_NavigationMenu = 137,
    VirtualKey_NavigationUp = 138,
    VirtualKey_NavigationDown = 139,
    VirtualKey_NavigationLeft = 140,
    VirtualKey_NavigationRight = 141,
    VirtualKey_NavigationAccept = 142,
    VirtualKey_NavigationCancel = 143,
    VirtualKey_NumberKeyLock = 144,
    VirtualKey_Scroll = 145,
    VirtualKey_LeftShift = 160,
    VirtualKey_RightShift = 161,
    VirtualKey_LeftControl = 162,
    VirtualKey_RightControl = 163,
    VirtualKey_LeftMenu = 164,
    VirtualKey_RightMenu = 165,
    VirtualKey_GoBack = 166,
    VirtualKey_GoForward = 167,
    VirtualKey_Refresh = 168,
    VirtualKey_Stop = 169,
    VirtualKey_Search = 170,
    VirtualKey_Favorites = 171,
    VirtualKey_GoHome = 172,
    VirtualKey_GamepadA = 195,
    VirtualKey_GamepadB = 196,
    VirtualKey_GamepadX = 197,
    VirtualKey_GamepadY = 198,
    VirtualKey_GamepadRightShoulder = 199,
    VirtualKey_GamepadLeftShoulder = 200,
    VirtualKey_GamepadLeftTrigger = 201,
    VirtualKey_GamepadRightTrigger = 202,
    VirtualKey_GamepadDPadUp = 203,
    VirtualKey_GamepadDPadDown = 204,
    VirtualKey_GamepadDPadLeft = 205,
    VirtualKey_GamepadDPadRight = 206,
    VirtualKey_GamepadMenu = 207,
    VirtualKey_GamepadView = 208,
    VirtualKey_GamepadLeftThumbstickButton = 209,
    VirtualKey_GamepadRightThumbstickButton = 210,
    VirtualKey_GamepadLeftThumbstickUp = 211,
    VirtualKey_GamepadLeftThumbstickDown = 212,
    VirtualKey_GamepadLeftThumbstickRight = 213,
    VirtualKey_GamepadLeftThumbstickLeft = 214,
    VirtualKey_GamepadRightThumbstickUp = 215,
    VirtualKey_GamepadRightThumbstickDown = 216,
    VirtualKey_GamepadRightThumbstickRight = 217,
    VirtualKey_GamepadRightThumbstickLeft = 218,
};
enum __x_ABI_CWindows_CSystem_CVirtualKeyModifiers
{
    VirtualKeyModifiers_None = 0,
    VirtualKeyModifiers_Control = 0x1,
    VirtualKeyModifiers_Menu = 0x2,
    VirtualKeyModifiers_Shift = 0x4,
    VirtualKeyModifiers_Windows = 0x8,
};
typedef struct __x_ABI_CWindows_CSystem_CIDispatcherQueueHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueueHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueueHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueueHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CSystem_CIDispatcherQueueHandler * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIDispatcherQueueHandlerVtbl;
interface __x_ABI_CWindows_CSystem_CIDispatcherQueueHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIDispatcherQueueHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIDispatcherQueueHandler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IAppActivationResult[] = L"Windows.System.IAppActivationResult";
typedef struct __x_ABI_CWindows_CSystem_CIAppActivationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppActivationResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppActivationResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppActivationResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppActivationResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppActivationResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppActivationResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CSystem_CIAppActivationResult * This,
                           __RPC__out HRESULT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppResourceGroupInfo )(
        __x_ABI_CWindows_CSystem_CIAppActivationResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIAppActivationResultVtbl;
interface __x_ABI_CWindows_CSystem_CIAppActivationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIAppActivationResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
    ( (This)->lpVtbl->get_AppResourceGroupInfo(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIAppActivationResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IAppDiagnosticInfo[] = L"Windows.System.IAppDiagnosticInfo";
typedef struct __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AppInfo )(
        __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIAppInfo * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoVtbl;
interface __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AppInfo(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIAppDiagnosticInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IAppDiagnosticInfo2[] = L"Windows.System.IAppDiagnosticInfo2";
typedef struct __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetResourceGroups )(
        __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo2 * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CSystem__CAppResourceGroupInfo * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateResourceGroupWatcher )(
        __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcher * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo2Vtbl;
interface __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetResourceGroups(This,result) )
    ( (This)->lpVtbl->CreateResourceGroupWatcher(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIAppDiagnosticInfo2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IAppDiagnosticInfo3[] = L"Windows.System.IAppDiagnosticInfo3";
typedef struct __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *LaunchAsync )(
        __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo3 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CAppActivationResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo3Vtbl;
interface __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo3
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->LaunchAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIAppDiagnosticInfo3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IAppDiagnosticInfoStatics[] = L"Windows.System.IAppDiagnosticInfoStatics";
typedef struct __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestInfoAsync )(
        __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfo * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestInfoAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIAppDiagnosticInfoStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IAppDiagnosticInfoStatics2[] = L"Windows.System.IAppDiagnosticInfoStatics2";
typedef struct __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWatcher )(
        __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcher * * watcher
        );
    HRESULT ( STDMETHODCALLTYPE *RequestAccessAsync )(
        __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoStatics2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CDiagnosticAccessStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RequestInfoForPackageAsync )(
        __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoStatics2 * This,
                  __RPC__in HSTRING packageFamilyName,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfo * * operation
        );
                                      HRESULT ( STDMETHODCALLTYPE *RequestInfoForAppAsync )(
        __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoStatics2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfo * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestInfoForAppUserModelId )(
        __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoStatics2 * This,
                  __RPC__in HSTRING appUserModelId,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppDiagnosticInfo * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoStatics2Vtbl;
interface __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWatcher(This,watcher) )
    ( (This)->lpVtbl->RequestAccessAsync(This,operation) )
    ( (This)->lpVtbl->RequestInfoForPackageAsync(This,packageFamilyName,operation) )
    ( (This)->lpVtbl->RequestInfoForAppAsync(This,operation) )
    ( (This)->lpVtbl->RequestInfoForAppUserModelId(This,appUserModelId,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIAppDiagnosticInfoStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IAppDiagnosticInfoWatcher[] = L"Windows.System.IAppDiagnosticInfoWatcher";
typedef struct __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcher * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcher * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcher * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcher * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcher * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcher * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_Added )(
        __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CAppDiagnosticInfoWatcher_Windows__CSystem__CAppDiagnosticInfoWatcherEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Added )(
        __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Removed )(
        __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CAppDiagnosticInfoWatcher_Windows__CSystem__CAppDiagnosticInfoWatcherEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Removed )(
        __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_EnumerationCompleted )(
        __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CAppDiagnosticInfoWatcher_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_EnumerationCompleted )(
        __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Stopped )(
        __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CAppDiagnosticInfoWatcher_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Stopped )(
        __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcher * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcher * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CAppDiagnosticInfoWatcherStatus * value
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcher * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcher * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcherVtbl;
interface __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcher
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcherVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_Added(This,handler,token) )
    ( (This)->lpVtbl->remove_Added(This,token) )
    ( (This)->lpVtbl->add_Removed(This,handler,token) )
    ( (This)->lpVtbl->remove_Removed(This,token) )
    ( (This)->lpVtbl->add_EnumerationCompleted(This,handler,token) )
    ( (This)->lpVtbl->remove_EnumerationCompleted(This,token) )
    ( (This)->lpVtbl->add_Stopped(This,handler,token) )
    ( (This)->lpVtbl->remove_Stopped(This,token) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->Start(This) )
    ( (This)->lpVtbl->Stop(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcher;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IAppDiagnosticInfoWatcherEventArgs[] = L"Windows.System.IAppDiagnosticInfoWatcherEventArgs";
typedef struct __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcherEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcherEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcherEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcherEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcherEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcherEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcherEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AppDiagnosticInfo )(
        __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcherEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcherEventArgsVtbl;
interface __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcherEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcherEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AppDiagnosticInfo(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIAppDiagnosticInfoWatcherEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IAppExecutionStateChangeResult[] = L"Windows.System.IAppExecutionStateChangeResult";
typedef struct __x_ABI_CWindows_CSystem_CIAppExecutionStateChangeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppExecutionStateChangeResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppExecutionStateChangeResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppExecutionStateChangeResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppExecutionStateChangeResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppExecutionStateChangeResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppExecutionStateChangeResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CSystem_CIAppExecutionStateChangeResult * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIAppExecutionStateChangeResultVtbl;
interface __x_ABI_CWindows_CSystem_CIAppExecutionStateChangeResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIAppExecutionStateChangeResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIAppExecutionStateChangeResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IAppMemoryReport[] = L"Windows.System.IAppMemoryReport";
typedef struct __x_ABI_CWindows_CSystem_CIAppMemoryReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppMemoryReport * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppMemoryReport * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppMemoryReport * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppMemoryReport * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppMemoryReport * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppMemoryReport * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PrivateCommitUsage )(
        __x_ABI_CWindows_CSystem_CIAppMemoryReport * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PeakPrivateCommitUsage )(
        __x_ABI_CWindows_CSystem_CIAppMemoryReport * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TotalCommitUsage )(
        __x_ABI_CWindows_CSystem_CIAppMemoryReport * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TotalCommitLimit )(
        __x_ABI_CWindows_CSystem_CIAppMemoryReport * This,
                           __RPC__out UINT64 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIAppMemoryReportVtbl;
interface __x_ABI_CWindows_CSystem_CIAppMemoryReport
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIAppMemoryReportVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PrivateCommitUsage(This,value) )
    ( (This)->lpVtbl->get_PeakPrivateCommitUsage(This,value) )
    ( (This)->lpVtbl->get_TotalCommitUsage(This,value) )
    ( (This)->lpVtbl->get_TotalCommitLimit(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIAppMemoryReport;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IAppMemoryReport2[] = L"Windows.System.IAppMemoryReport2";
typedef struct __x_ABI_CWindows_CSystem_CIAppMemoryReport2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppMemoryReport2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppMemoryReport2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppMemoryReport2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppMemoryReport2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppMemoryReport2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppMemoryReport2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExpectedTotalCommitLimit )(
        __x_ABI_CWindows_CSystem_CIAppMemoryReport2 * This,
                           __RPC__out UINT64 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIAppMemoryReport2Vtbl;
interface __x_ABI_CWindows_CSystem_CIAppMemoryReport2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIAppMemoryReport2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExpectedTotalCommitLimit(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIAppMemoryReport2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IAppMemoryUsageLimitChangingEventArgs[] = L"Windows.System.IAppMemoryUsageLimitChangingEventArgs";
typedef struct __x_ABI_CWindows_CSystem_CIAppMemoryUsageLimitChangingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppMemoryUsageLimitChangingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppMemoryUsageLimitChangingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppMemoryUsageLimitChangingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppMemoryUsageLimitChangingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppMemoryUsageLimitChangingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppMemoryUsageLimitChangingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OldLimit )(
        __x_ABI_CWindows_CSystem_CIAppMemoryUsageLimitChangingEventArgs * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NewLimit )(
        __x_ABI_CWindows_CSystem_CIAppMemoryUsageLimitChangingEventArgs * This,
                           __RPC__out UINT64 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIAppMemoryUsageLimitChangingEventArgsVtbl;
interface __x_ABI_CWindows_CSystem_CIAppMemoryUsageLimitChangingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIAppMemoryUsageLimitChangingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OldLimit(This,value) )
    ( (This)->lpVtbl->get_NewLimit(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIAppMemoryUsageLimitChangingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IAppResourceGroupBackgroundTaskReport[] = L"Windows.System.IAppResourceGroupBackgroundTaskReport";
typedef struct __x_ABI_CWindows_CSystem_CIAppResourceGroupBackgroundTaskReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupBackgroundTaskReport * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupBackgroundTaskReport * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupBackgroundTaskReport * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupBackgroundTaskReport * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupBackgroundTaskReport * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupBackgroundTaskReport * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TaskId )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupBackgroundTaskReport * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupBackgroundTaskReport * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Trigger )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupBackgroundTaskReport * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EntryPoint )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupBackgroundTaskReport * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIAppResourceGroupBackgroundTaskReportVtbl;
interface __x_ABI_CWindows_CSystem_CIAppResourceGroupBackgroundTaskReport
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIAppResourceGroupBackgroundTaskReportVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TaskId(This,value) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_Trigger(This,value) )
    ( (This)->lpVtbl->get_EntryPoint(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIAppResourceGroupBackgroundTaskReport;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IAppResourceGroupInfo[] = L"Windows.System.IAppResourceGroupInfo";
typedef struct __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InstanceId )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsShared )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetBackgroundTaskReports )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CSystem__CAppResourceGroupBackgroundTaskReport * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetMemoryReport )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIAppResourceGroupMemoryReport * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetProcessDiagnosticInfos )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetStateReport )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIAppResourceGroupStateReport * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoVtbl;
interface __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InstanceId(This,value) )
    ( (This)->lpVtbl->get_IsShared(This,value) )
    ( (This)->lpVtbl->GetBackgroundTaskReports(This,result) )
    ( (This)->lpVtbl->GetMemoryReport(This,result) )
    ( (This)->lpVtbl->GetProcessDiagnosticInfos(This,result) )
    ( (This)->lpVtbl->GetStateReport(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIAppResourceGroupInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IAppResourceGroupInfo2[] = L"Windows.System.IAppResourceGroupInfo2";
typedef struct __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *StartSuspendAsync )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CAppExecutionStateChangeResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *StartResumeAsync )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CAppExecutionStateChangeResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *StartTerminateAsync )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CAppExecutionStateChangeResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo2Vtbl;
interface __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->StartSuspendAsync(This,operation) )
    ( (This)->lpVtbl->StartResumeAsync(This,operation) )
    ( (This)->lpVtbl->StartTerminateAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIAppResourceGroupInfo2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IAppResourceGroupInfoWatcher[] = L"Windows.System.IAppResourceGroupInfoWatcher";
typedef struct __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcher * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcher * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcher * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcher * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcher * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcher * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_Added )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_Windows__CSystem__CAppResourceGroupInfoWatcherEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Added )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Removed )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_Windows__CSystem__CAppResourceGroupInfoWatcherEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Removed )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_EnumerationCompleted )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_EnumerationCompleted )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Stopped )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Stopped )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ExecutionStateChanged )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CAppResourceGroupInfoWatcher_Windows__CSystem__CAppResourceGroupInfoWatcherExecutionStateChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ExecutionStateChanged )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcher * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcher * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CAppResourceGroupInfoWatcherStatus * status
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcher * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcher * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherVtbl;
interface __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcher
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_Added(This,handler,token) )
    ( (This)->lpVtbl->remove_Added(This,token) )
    ( (This)->lpVtbl->add_Removed(This,handler,token) )
    ( (This)->lpVtbl->remove_Removed(This,token) )
    ( (This)->lpVtbl->add_EnumerationCompleted(This,handler,token) )
    ( (This)->lpVtbl->remove_EnumerationCompleted(This,token) )
    ( (This)->lpVtbl->add_Stopped(This,handler,token) )
    ( (This)->lpVtbl->remove_Stopped(This,token) )
    ( (This)->lpVtbl->add_ExecutionStateChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ExecutionStateChanged(This,token) )
    ( (This)->lpVtbl->get_Status(This,status) )
    ( (This)->lpVtbl->Start(This) )
    ( (This)->lpVtbl->Stop(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcher;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IAppResourceGroupInfoWatcherEventArgs[] = L"Windows.System.IAppResourceGroupInfoWatcherEventArgs";
typedef struct __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AppDiagnosticInfos )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherEventArgs * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppResourceGroupInfo )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherEventArgsVtbl;
interface __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AppDiagnosticInfos(This,value) )
    ( (This)->lpVtbl->get_AppResourceGroupInfo(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IAppResourceGroupInfoWatcherExecutionStateChangedEventArgs[] = L"Windows.System.IAppResourceGroupInfoWatcherExecutionStateChangedEventArgs";
typedef struct __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherExecutionStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherExecutionStateChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherExecutionStateChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherExecutionStateChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherExecutionStateChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherExecutionStateChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherExecutionStateChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AppDiagnosticInfos )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherExecutionStateChangedEventArgs * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppResourceGroupInfo )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherExecutionStateChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIAppResourceGroupInfo * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherExecutionStateChangedEventArgsVtbl;
interface __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherExecutionStateChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherExecutionStateChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AppDiagnosticInfos(This,value) )
    ( (This)->lpVtbl->get_AppResourceGroupInfo(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIAppResourceGroupInfoWatcherExecutionStateChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IAppResourceGroupMemoryReport[] = L"Windows.System.IAppResourceGroupMemoryReport";
typedef struct __x_ABI_CWindows_CSystem_CIAppResourceGroupMemoryReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupMemoryReport * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupMemoryReport * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupMemoryReport * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupMemoryReport * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupMemoryReport * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupMemoryReport * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CommitUsageLimit )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupMemoryReport * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CommitUsageLevel )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupMemoryReport * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CAppMemoryUsageLevel * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PrivateCommitUsage )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupMemoryReport * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TotalCommitUsage )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupMemoryReport * This,
                           __RPC__out UINT64 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIAppResourceGroupMemoryReportVtbl;
interface __x_ABI_CWindows_CSystem_CIAppResourceGroupMemoryReport
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIAppResourceGroupMemoryReportVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CommitUsageLimit(This,value) )
    ( (This)->lpVtbl->get_CommitUsageLevel(This,value) )
    ( (This)->lpVtbl->get_PrivateCommitUsage(This,value) )
    ( (This)->lpVtbl->get_TotalCommitUsage(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIAppResourceGroupMemoryReport;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IAppResourceGroupStateReport[] = L"Windows.System.IAppResourceGroupStateReport";
typedef struct __x_ABI_CWindows_CSystem_CIAppResourceGroupStateReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupStateReport * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupStateReport * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupStateReport * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupStateReport * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupStateReport * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppResourceGroupStateReport * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExecutionState )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupStateReport * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CAppResourceGroupExecutionState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EnergyQuotaState )(
        __x_ABI_CWindows_CSystem_CIAppResourceGroupStateReport * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CAppResourceGroupEnergyQuotaState * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIAppResourceGroupStateReportVtbl;
interface __x_ABI_CWindows_CSystem_CIAppResourceGroupStateReport
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIAppResourceGroupStateReportVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExecutionState(This,value) )
    ( (This)->lpVtbl->get_EnergyQuotaState(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIAppResourceGroupStateReport;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IAppUriHandlerHost[] = L"Windows.System.IAppUriHandlerHost";
typedef struct __x_ABI_CWindows_CSystem_CIAppUriHandlerHostVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppUriHandlerHost * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppUriHandlerHost * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppUriHandlerHost * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppUriHandlerHost * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppUriHandlerHost * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppUriHandlerHost * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CSystem_CIAppUriHandlerHost * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Name )(
        __x_ABI_CWindows_CSystem_CIAppUriHandlerHost * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIAppUriHandlerHostVtbl;
interface __x_ABI_CWindows_CSystem_CIAppUriHandlerHost
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIAppUriHandlerHostVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->put_Name(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIAppUriHandlerHost;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IAppUriHandlerHostFactory[] = L"Windows.System.IAppUriHandlerHostFactory";
typedef struct __x_ABI_CWindows_CSystem_CIAppUriHandlerHostFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppUriHandlerHostFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppUriHandlerHostFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppUriHandlerHostFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppUriHandlerHostFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppUriHandlerHostFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppUriHandlerHostFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CSystem_CIAppUriHandlerHostFactory * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIAppUriHandlerHost * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIAppUriHandlerHostFactoryVtbl;
interface __x_ABI_CWindows_CSystem_CIAppUriHandlerHostFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIAppUriHandlerHostFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,name,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIAppUriHandlerHostFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IAppUriHandlerRegistration[] = L"Windows.System.IAppUriHandlerRegistration";
typedef struct __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistration * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistration * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAppAddedHostsAsync )(
        __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistration * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVector_1_Windows__CSystem__CAppUriHandlerHost * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SetAppAddedHostsAsync )(
        __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistration * This,
                  __RPC__in_opt __FIIterable_1_Windows__CSystem__CAppUriHandlerHost * hosts,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationVtbl;
interface __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistration
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_User(This,value) )
    ( (This)->lpVtbl->GetAppAddedHostsAsync(This,operation) )
    ( (This)->lpVtbl->SetAppAddedHostsAsync(This,hosts,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIAppUriHandlerRegistration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IAppUriHandlerRegistrationManager[] = L"Windows.System.IAppUriHandlerRegistrationManager";
typedef struct __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationManager * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetRegistration )(
        __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationManager * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistration * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationManagerVtbl;
interface __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationManager
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_User(This,value) )
    ( (This)->lpVtbl->TryGetRegistration(This,name,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IAppUriHandlerRegistrationManagerStatics[] = L"Windows.System.IAppUriHandlerRegistrationManagerStatics";
typedef struct __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationManager * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetForUser )(
        __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationManager * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationManagerStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,result) )
    ( (This)->lpVtbl->GetForUser(This,user,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIAppUriHandlerRegistrationManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IDateTimeSettingsStatics[] = L"Windows.System.IDateTimeSettingsStatics";
typedef struct __x_ABI_CWindows_CSystem_CIDateTimeSettingsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIDateTimeSettingsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDateTimeSettingsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDateTimeSettingsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDateTimeSettingsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDateTimeSettingsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDateTimeSettingsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetSystemDateTime )(
        __x_ABI_CWindows_CSystem_CIDateTimeSettingsStatics * This,
                  __x_ABI_CWindows_CFoundation_CDateTime utcDateTime
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIDateTimeSettingsStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CIDateTimeSettingsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIDateTimeSettingsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetSystemDateTime(This,utcDateTime) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIDateTimeSettingsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IDispatcherQueue[] = L"Windows.System.IDispatcherQueue";
typedef struct __x_ABI_CWindows_CSystem_CIDispatcherQueueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueue * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueue * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueue * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueue * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueue * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueue * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateTimer )(
        __x_ABI_CWindows_CSystem_CIDispatcherQueue * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIDispatcherQueueTimer * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *TryEnqueue )(
        __x_ABI_CWindows_CSystem_CIDispatcherQueue * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIDispatcherQueueHandler * callback,
                           __RPC__out boolean * result
        );
                    HRESULT ( STDMETHODCALLTYPE *TryEnqueueWithPriority )(
        __x_ABI_CWindows_CSystem_CIDispatcherQueue * This,
                  __x_ABI_CWindows_CSystem_CDispatcherQueuePriority priority,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIDispatcherQueueHandler * callback,
                           __RPC__out boolean * result
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ShutdownStarting )(
        __x_ABI_CWindows_CSystem_CIDispatcherQueue * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CDispatcherQueue_Windows__CSystem__CDispatcherQueueShutdownStartingEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ShutdownStarting )(
        __x_ABI_CWindows_CSystem_CIDispatcherQueue * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ShutdownCompleted )(
        __x_ABI_CWindows_CSystem_CIDispatcherQueue * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CDispatcherQueue_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ShutdownCompleted )(
        __x_ABI_CWindows_CSystem_CIDispatcherQueue * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIDispatcherQueueVtbl;
interface __x_ABI_CWindows_CSystem_CIDispatcherQueue
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIDispatcherQueueVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateTimer(This,result) )
    ( (This)->lpVtbl->TryEnqueue(This,callback,result) )
    ( (This)->lpVtbl->TryEnqueueWithPriority(This,priority,callback,result) )
    ( (This)->lpVtbl->add_ShutdownStarting(This,handler,token) )
    ( (This)->lpVtbl->remove_ShutdownStarting(This,token) )
    ( (This)->lpVtbl->add_ShutdownCompleted(This,handler,token) )
    ( (This)->lpVtbl->remove_ShutdownCompleted(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIDispatcherQueue;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IDispatcherQueue2[] = L"Windows.System.IDispatcherQueue2";
typedef struct __x_ABI_CWindows_CSystem_CIDispatcherQueue2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueue2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueue2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueue2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueue2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueue2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueue2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HasThreadAccess )(
        __x_ABI_CWindows_CSystem_CIDispatcherQueue2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIDispatcherQueue2Vtbl;
interface __x_ABI_CWindows_CSystem_CIDispatcherQueue2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIDispatcherQueue2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HasThreadAccess(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIDispatcherQueue2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IDispatcherQueueController[] = L"Windows.System.IDispatcherQueueController";
typedef struct __x_ABI_CWindows_CSystem_CIDispatcherQueueControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueueController * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueueController * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueueController * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueueController * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueueController * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueueController * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DispatcherQueue )(
        __x_ABI_CWindows_CSystem_CIDispatcherQueueController * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIDispatcherQueue * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ShutdownQueueAsync )(
        __x_ABI_CWindows_CSystem_CIDispatcherQueueController * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIDispatcherQueueControllerVtbl;
interface __x_ABI_CWindows_CSystem_CIDispatcherQueueController
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIDispatcherQueueControllerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DispatcherQueue(This,value) )
    ( (This)->lpVtbl->ShutdownQueueAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIDispatcherQueueController;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IDispatcherQueueControllerStatics[] = L"Windows.System.IDispatcherQueueControllerStatics";
typedef struct __x_ABI_CWindows_CSystem_CIDispatcherQueueControllerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueueControllerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueueControllerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueueControllerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueueControllerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueueControllerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueueControllerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateOnDedicatedThread )(
        __x_ABI_CWindows_CSystem_CIDispatcherQueueControllerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIDispatcherQueueController * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIDispatcherQueueControllerStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CIDispatcherQueueControllerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIDispatcherQueueControllerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateOnDedicatedThread(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIDispatcherQueueControllerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IDispatcherQueueShutdownStartingEventArgs[] = L"Windows.System.IDispatcherQueueShutdownStartingEventArgs";
typedef struct __x_ABI_CWindows_CSystem_CIDispatcherQueueShutdownStartingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueueShutdownStartingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueueShutdownStartingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueueShutdownStartingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueueShutdownStartingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueueShutdownStartingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueueShutdownStartingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CSystem_CIDispatcherQueueShutdownStartingEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIDispatcherQueueShutdownStartingEventArgsVtbl;
interface __x_ABI_CWindows_CSystem_CIDispatcherQueueShutdownStartingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIDispatcherQueueShutdownStartingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIDispatcherQueueShutdownStartingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IDispatcherQueueStatics[] = L"Windows.System.IDispatcherQueueStatics";
typedef struct __x_ABI_CWindows_CSystem_CIDispatcherQueueStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueueStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueueStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueueStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueueStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueueStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueueStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentThread )(
        __x_ABI_CWindows_CSystem_CIDispatcherQueueStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIDispatcherQueue * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIDispatcherQueueStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CIDispatcherQueueStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIDispatcherQueueStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentThread(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIDispatcherQueueStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IDispatcherQueueTimer[] = L"Windows.System.IDispatcherQueueTimer";
typedef struct __x_ABI_CWindows_CSystem_CIDispatcherQueueTimerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueueTimer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueueTimer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueueTimer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueueTimer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueueTimer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIDispatcherQueueTimer * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Interval )(
        __x_ABI_CWindows_CSystem_CIDispatcherQueueTimer * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Interval )(
        __x_ABI_CWindows_CSystem_CIDispatcherQueueTimer * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsRunning )(
        __x_ABI_CWindows_CSystem_CIDispatcherQueueTimer * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsRepeating )(
        __x_ABI_CWindows_CSystem_CIDispatcherQueueTimer * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsRepeating )(
        __x_ABI_CWindows_CSystem_CIDispatcherQueueTimer * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CSystem_CIDispatcherQueueTimer * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CSystem_CIDispatcherQueueTimer * This
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Tick )(
        __x_ABI_CWindows_CSystem_CIDispatcherQueueTimer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CDispatcherQueueTimer_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Tick )(
        __x_ABI_CWindows_CSystem_CIDispatcherQueueTimer * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIDispatcherQueueTimerVtbl;
interface __x_ABI_CWindows_CSystem_CIDispatcherQueueTimer
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIDispatcherQueueTimerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Interval(This,value) )
    ( (This)->lpVtbl->put_Interval(This,value) )
    ( (This)->lpVtbl->get_IsRunning(This,value) )
    ( (This)->lpVtbl->get_IsRepeating(This,value) )
    ( (This)->lpVtbl->put_IsRepeating(This,value) )
    ( (This)->lpVtbl->Start(This) )
    ( (This)->lpVtbl->Stop(This) )
    ( (This)->lpVtbl->add_Tick(This,handler,token) )
    ( (This)->lpVtbl->remove_Tick(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIDispatcherQueueTimer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IFolderLauncherOptions[] = L"Windows.System.IFolderLauncherOptions";
typedef struct __x_ABI_CWindows_CSystem_CIFolderLauncherOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIFolderLauncherOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIFolderLauncherOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIFolderLauncherOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIFolderLauncherOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIFolderLauncherOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIFolderLauncherOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ItemsToSelect )(
        __x_ABI_CWindows_CSystem_CIFolderLauncherOptions * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CStorage__CIStorageItem * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIFolderLauncherOptionsVtbl;
interface __x_ABI_CWindows_CSystem_CIFolderLauncherOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIFolderLauncherOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ItemsToSelect(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIFolderLauncherOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IKnownUserPropertiesStatics[] = L"Windows.System.IKnownUserPropertiesStatics";
typedef struct __x_ABI_CWindows_CSystem_CIKnownUserPropertiesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIKnownUserPropertiesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIKnownUserPropertiesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIKnownUserPropertiesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIKnownUserPropertiesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIKnownUserPropertiesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIKnownUserPropertiesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CSystem_CIKnownUserPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FirstName )(
        __x_ABI_CWindows_CSystem_CIKnownUserPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastName )(
        __x_ABI_CWindows_CSystem_CIKnownUserPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProviderName )(
        __x_ABI_CWindows_CSystem_CIKnownUserPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AccountName )(
        __x_ABI_CWindows_CSystem_CIKnownUserPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GuestHost )(
        __x_ABI_CWindows_CSystem_CIKnownUserPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PrincipalName )(
        __x_ABI_CWindows_CSystem_CIKnownUserPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DomainName )(
        __x_ABI_CWindows_CSystem_CIKnownUserPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SessionInitiationProtocolUri )(
        __x_ABI_CWindows_CSystem_CIKnownUserPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIKnownUserPropertiesStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CIKnownUserPropertiesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIKnownUserPropertiesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_FirstName(This,value) )
    ( (This)->lpVtbl->get_LastName(This,value) )
    ( (This)->lpVtbl->get_ProviderName(This,value) )
    ( (This)->lpVtbl->get_AccountName(This,value) )
    ( (This)->lpVtbl->get_GuestHost(This,value) )
    ( (This)->lpVtbl->get_PrincipalName(This,value) )
    ( (This)->lpVtbl->get_DomainName(This,value) )
    ( (This)->lpVtbl->get_SessionInitiationProtocolUri(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIKnownUserPropertiesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_ILaunchUriResult[] = L"Windows.System.ILaunchUriResult";
typedef struct __x_ABI_CWindows_CSystem_CILaunchUriResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CILaunchUriResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CILaunchUriResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CILaunchUriResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CILaunchUriResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CILaunchUriResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CILaunchUriResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CSystem_CILaunchUriResult * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CLaunchUriStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Result )(
        __x_ABI_CWindows_CSystem_CILaunchUriResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CILaunchUriResultVtbl;
interface __x_ABI_CWindows_CSystem_CILaunchUriResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CILaunchUriResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_Result(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CILaunchUriResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_ILauncherOptions[] = L"Windows.System.ILauncherOptions";
typedef struct __x_ABI_CWindows_CSystem_CILauncherOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TreatAsUntrusted )(
        __x_ABI_CWindows_CSystem_CILauncherOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TreatAsUntrusted )(
        __x_ABI_CWindows_CSystem_CILauncherOptions * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayApplicationPicker )(
        __x_ABI_CWindows_CSystem_CILauncherOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DisplayApplicationPicker )(
        __x_ABI_CWindows_CSystem_CILauncherOptions * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UI )(
        __x_ABI_CWindows_CSystem_CILauncherOptions * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CILauncherUIOptions * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PreferredApplicationPackageFamilyName )(
        __x_ABI_CWindows_CSystem_CILauncherOptions * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PreferredApplicationPackageFamilyName )(
        __x_ABI_CWindows_CSystem_CILauncherOptions * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PreferredApplicationDisplayName )(
        __x_ABI_CWindows_CSystem_CILauncherOptions * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PreferredApplicationDisplayName )(
        __x_ABI_CWindows_CSystem_CILauncherOptions * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FallbackUri )(
        __x_ABI_CWindows_CSystem_CILauncherOptions * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FallbackUri )(
        __x_ABI_CWindows_CSystem_CILauncherOptions * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContentType )(
        __x_ABI_CWindows_CSystem_CILauncherOptions * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ContentType )(
        __x_ABI_CWindows_CSystem_CILauncherOptions * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CILauncherOptionsVtbl;
interface __x_ABI_CWindows_CSystem_CILauncherOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CILauncherOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TreatAsUntrusted(This,value) )
    ( (This)->lpVtbl->put_TreatAsUntrusted(This,value) )
    ( (This)->lpVtbl->get_DisplayApplicationPicker(This,value) )
    ( (This)->lpVtbl->put_DisplayApplicationPicker(This,value) )
    ( (This)->lpVtbl->get_UI(This,value) )
    ( (This)->lpVtbl->get_PreferredApplicationPackageFamilyName(This,value) )
    ( (This)->lpVtbl->put_PreferredApplicationPackageFamilyName(This,value) )
    ( (This)->lpVtbl->get_PreferredApplicationDisplayName(This,value) )
    ( (This)->lpVtbl->put_PreferredApplicationDisplayName(This,value) )
    ( (This)->lpVtbl->get_FallbackUri(This,value) )
    ( (This)->lpVtbl->put_FallbackUri(This,value) )
    ( (This)->lpVtbl->get_ContentType(This,value) )
    ( (This)->lpVtbl->put_ContentType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CILauncherOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_ILauncherOptions2[] = L"Windows.System.ILauncherOptions2";
typedef struct __x_ABI_CWindows_CSystem_CILauncherOptions2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TargetApplicationPackageFamilyName )(
        __x_ABI_CWindows_CSystem_CILauncherOptions2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TargetApplicationPackageFamilyName )(
        __x_ABI_CWindows_CSystem_CILauncherOptions2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NeighboringFilesQuery )(
        __x_ABI_CWindows_CSystem_CILauncherOptions2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NeighboringFilesQuery )(
        __x_ABI_CWindows_CSystem_CILauncherOptions2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CILauncherOptions2Vtbl;
interface __x_ABI_CWindows_CSystem_CILauncherOptions2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CILauncherOptions2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TargetApplicationPackageFamilyName(This,value) )
    ( (This)->lpVtbl->put_TargetApplicationPackageFamilyName(This,value) )
    ( (This)->lpVtbl->get_NeighboringFilesQuery(This,value) )
    ( (This)->lpVtbl->put_NeighboringFilesQuery(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CILauncherOptions2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_ILauncherOptions3[] = L"Windows.System.ILauncherOptions3";
typedef struct __x_ABI_CWindows_CSystem_CILauncherOptions3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IgnoreAppUriHandlers )(
        __x_ABI_CWindows_CSystem_CILauncherOptions3 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IgnoreAppUriHandlers )(
        __x_ABI_CWindows_CSystem_CILauncherOptions3 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CILauncherOptions3Vtbl;
interface __x_ABI_CWindows_CSystem_CILauncherOptions3
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CILauncherOptions3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IgnoreAppUriHandlers(This,value) )
    ( (This)->lpVtbl->put_IgnoreAppUriHandlers(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CILauncherOptions3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_ILauncherOptions4[] = L"Windows.System.ILauncherOptions4";
typedef struct __x_ABI_CWindows_CSystem_CILauncherOptions4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherOptions4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LimitPickerToCurrentAppAndAppUriHandlers )(
        __x_ABI_CWindows_CSystem_CILauncherOptions4 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LimitPickerToCurrentAppAndAppUriHandlers )(
        __x_ABI_CWindows_CSystem_CILauncherOptions4 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CILauncherOptions4Vtbl;
interface __x_ABI_CWindows_CSystem_CILauncherOptions4
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CILauncherOptions4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LimitPickerToCurrentAppAndAppUriHandlers(This,value) )
    ( (This)->lpVtbl->put_LimitPickerToCurrentAppAndAppUriHandlers(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CILauncherOptions4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_ILauncherStatics[] = L"Windows.System.ILauncherStatics";
typedef struct __x_ABI_CWindows_CSystem_CILauncherStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *LaunchFileAsync )(
        __x_ABI_CWindows_CSystem_CILauncherStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *LaunchFileWithOptionsAsync )(
        __x_ABI_CWindows_CSystem_CILauncherStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CILauncherOptions * options,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *LaunchUriAsync )(
        __x_ABI_CWindows_CSystem_CILauncherStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *LaunchUriWithOptionsAsync )(
        __x_ABI_CWindows_CSystem_CILauncherStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CILauncherOptions * options,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CILauncherStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CILauncherStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CILauncherStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->LaunchFileAsync(This,file,operation) )
    ( (This)->lpVtbl->LaunchFileWithOptionsAsync(This,file,options,operation) )
    ( (This)->lpVtbl->LaunchUriAsync(This,uri,operation) )
    ( (This)->lpVtbl->LaunchUriWithOptionsAsync(This,uri,options,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CILauncherStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_ILauncherStatics2[] = L"Windows.System.ILauncherStatics2";
typedef struct __x_ABI_CWindows_CSystem_CILauncherStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *LaunchUriForResultsAsync )(
        __x_ABI_CWindows_CSystem_CILauncherStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CILauncherOptions * options,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CLaunchUriResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *LaunchUriForResultsWithDataAsync )(
        __x_ABI_CWindows_CSystem_CILauncherStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CILauncherOptions * options,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * inputData,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CLaunchUriResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *LaunchUriWithDataAsync )(
        __x_ABI_CWindows_CSystem_CILauncherStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CILauncherOptions * options,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * inputData,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *QueryUriSupportAsync )(
        __x_ABI_CWindows_CSystem_CILauncherStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                  __x_ABI_CWindows_CSystem_CLaunchQuerySupportType launchQuerySupportType,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CLaunchQuerySupportStatus * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *QueryUriSupportWithPackageFamilyNameAsync )(
        __x_ABI_CWindows_CSystem_CILauncherStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                  __x_ABI_CWindows_CSystem_CLaunchQuerySupportType launchQuerySupportType,
                  __RPC__in HSTRING packageFamilyName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CLaunchQuerySupportStatus * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *QueryFileSupportAsync )(
        __x_ABI_CWindows_CSystem_CILauncherStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CLaunchQuerySupportStatus * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *QueryFileSupportWithPackageFamilyNameAsync )(
        __x_ABI_CWindows_CSystem_CILauncherStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                  __RPC__in HSTRING packageFamilyName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CLaunchQuerySupportStatus * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *FindUriSchemeHandlersAsync )(
        __x_ABI_CWindows_CSystem_CILauncherStatics2 * This,
                  __RPC__in HSTRING scheme,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *FindUriSchemeHandlersWithLaunchUriTypeAsync )(
        __x_ABI_CWindows_CSystem_CILauncherStatics2 * This,
                  __RPC__in HSTRING scheme,
                  __x_ABI_CWindows_CSystem_CLaunchQuerySupportType launchQuerySupportType,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *FindFileHandlersAsync )(
        __x_ABI_CWindows_CSystem_CILauncherStatics2 * This,
                  __RPC__in HSTRING extension,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CILauncherStatics2Vtbl;
interface __x_ABI_CWindows_CSystem_CILauncherStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CILauncherStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->LaunchUriForResultsAsync(This,uri,options,operation) )
    ( (This)->lpVtbl->LaunchUriForResultsWithDataAsync(This,uri,options,inputData,operation) )
    ( (This)->lpVtbl->LaunchUriWithDataAsync(This,uri,options,inputData,operation) )
    ( (This)->lpVtbl->QueryUriSupportAsync(This,uri,launchQuerySupportType,operation) )
    ( (This)->lpVtbl->QueryUriSupportWithPackageFamilyNameAsync(This,uri,launchQuerySupportType,packageFamilyName,operation) )
    ( (This)->lpVtbl->QueryFileSupportAsync(This,file,operation) )
    ( (This)->lpVtbl->QueryFileSupportWithPackageFamilyNameAsync(This,file,packageFamilyName,operation) )
    ( (This)->lpVtbl->FindUriSchemeHandlersAsync(This,scheme,operation) )
    ( (This)->lpVtbl->FindUriSchemeHandlersWithLaunchUriTypeAsync(This,scheme,launchQuerySupportType,operation) )
    ( (This)->lpVtbl->FindFileHandlersAsync(This,extension,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CILauncherStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_ILauncherStatics3[] = L"Windows.System.ILauncherStatics3";
typedef struct __x_ABI_CWindows_CSystem_CILauncherStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *LaunchFolderAsync )(
        __x_ABI_CWindows_CSystem_CILauncherStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFolder * folder,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *LaunchFolderWithOptionsAsync )(
        __x_ABI_CWindows_CSystem_CILauncherStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFolder * folder,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIFolderLauncherOptions * options,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CILauncherStatics3Vtbl;
interface __x_ABI_CWindows_CSystem_CILauncherStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CILauncherStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->LaunchFolderAsync(This,folder,operation) )
    ( (This)->lpVtbl->LaunchFolderWithOptionsAsync(This,folder,options,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CILauncherStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_ILauncherStatics4[] = L"Windows.System.ILauncherStatics4";
typedef struct __x_ABI_CWindows_CSystem_CILauncherStatics4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *QueryAppUriSupportAsync )(
        __x_ABI_CWindows_CSystem_CILauncherStatics4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CLaunchQuerySupportStatus * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *QueryAppUriSupportWithPackageFamilyNameAsync )(
        __x_ABI_CWindows_CSystem_CILauncherStatics4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                  __RPC__in HSTRING packageFamilyName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CLaunchQuerySupportStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *FindAppUriHandlersAsync )(
        __x_ABI_CWindows_CSystem_CILauncherStatics4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *LaunchUriForUserAsync )(
        __x_ABI_CWindows_CSystem_CILauncherStatics4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CLaunchUriStatus * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *LaunchUriWithOptionsForUserAsync )(
        __x_ABI_CWindows_CSystem_CILauncherStatics4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CILauncherOptions * options,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CLaunchUriStatus * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *LaunchUriWithDataForUserAsync )(
        __x_ABI_CWindows_CSystem_CILauncherStatics4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CILauncherOptions * options,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * inputData,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CLaunchUriStatus * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *LaunchUriForResultsForUserAsync )(
        __x_ABI_CWindows_CSystem_CILauncherStatics4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CILauncherOptions * options,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CLaunchUriResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *LaunchUriForResultsWithDataForUserAsync )(
        __x_ABI_CWindows_CSystem_CILauncherStatics4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CILauncherOptions * options,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * inputData,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CLaunchUriResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CILauncherStatics4Vtbl;
interface __x_ABI_CWindows_CSystem_CILauncherStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CILauncherStatics4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->QueryAppUriSupportAsync(This,uri,operation) )
    ( (This)->lpVtbl->QueryAppUriSupportWithPackageFamilyNameAsync(This,uri,packageFamilyName,operation) )
    ( (This)->lpVtbl->FindAppUriHandlersAsync(This,uri,operation) )
    ( (This)->lpVtbl->LaunchUriForUserAsync(This,user,uri,operation) )
    ( (This)->lpVtbl->LaunchUriWithOptionsForUserAsync(This,user,uri,options,operation) )
    ( (This)->lpVtbl->LaunchUriWithDataForUserAsync(This,user,uri,options,inputData,operation) )
    ( (This)->lpVtbl->LaunchUriForResultsForUserAsync(This,user,uri,options,operation) )
    ( (This)->lpVtbl->LaunchUriForResultsWithDataForUserAsync(This,user,uri,options,inputData,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CILauncherStatics4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_ILauncherStatics5[] = L"Windows.System.ILauncherStatics5";
typedef struct __x_ABI_CWindows_CSystem_CILauncherStatics5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherStatics5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *LaunchFolderPathAsync )(
        __x_ABI_CWindows_CSystem_CILauncherStatics5 * This,
                  __RPC__in HSTRING path,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *LaunchFolderPathWithOptionsAsync )(
        __x_ABI_CWindows_CSystem_CILauncherStatics5 * This,
                  __RPC__in HSTRING path,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIFolderLauncherOptions * options,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *LaunchFolderPathForUserAsync )(
        __x_ABI_CWindows_CSystem_CILauncherStatics5 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in HSTRING path,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *LaunchFolderPathWithOptionsForUserAsync )(
        __x_ABI_CWindows_CSystem_CILauncherStatics5 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                  __RPC__in HSTRING path,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIFolderLauncherOptions * options,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CILauncherStatics5Vtbl;
interface __x_ABI_CWindows_CSystem_CILauncherStatics5
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CILauncherStatics5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->LaunchFolderPathAsync(This,path,operation) )
    ( (This)->lpVtbl->LaunchFolderPathWithOptionsAsync(This,path,options,operation) )
    ( (This)->lpVtbl->LaunchFolderPathForUserAsync(This,user,path,operation) )
    ( (This)->lpVtbl->LaunchFolderPathWithOptionsForUserAsync(This,user,path,options,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CILauncherStatics5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_ILauncherUIOptions[] = L"Windows.System.ILauncherUIOptions";
typedef struct __x_ABI_CWindows_CSystem_CILauncherUIOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherUIOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherUIOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherUIOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherUIOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherUIOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherUIOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InvocationPoint )(
        __x_ABI_CWindows_CSystem_CILauncherUIOptions * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CPoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InvocationPoint )(
        __x_ABI_CWindows_CSystem_CILauncherUIOptions * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectionRect )(
        __x_ABI_CWindows_CSystem_CILauncherUIOptions * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CRect * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SelectionRect )(
        __x_ABI_CWindows_CSystem_CILauncherUIOptions * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PreferredPlacement )(
        __x_ABI_CWindows_CSystem_CILauncherUIOptions * This,
                           __RPC__out __x_ABI_CWindows_CUI_CPopups_CPlacement * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PreferredPlacement )(
        __x_ABI_CWindows_CSystem_CILauncherUIOptions * This,
                  __x_ABI_CWindows_CUI_CPopups_CPlacement value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CILauncherUIOptionsVtbl;
interface __x_ABI_CWindows_CSystem_CILauncherUIOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CILauncherUIOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InvocationPoint(This,value) )
    ( (This)->lpVtbl->put_InvocationPoint(This,value) )
    ( (This)->lpVtbl->get_SelectionRect(This,value) )
    ( (This)->lpVtbl->put_SelectionRect(This,value) )
    ( (This)->lpVtbl->get_PreferredPlacement(This,value) )
    ( (This)->lpVtbl->put_PreferredPlacement(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CILauncherUIOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_ILauncherViewOptions[] = L"Windows.System.ILauncherViewOptions";
typedef struct __x_ABI_CWindows_CSystem_CILauncherViewOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherViewOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherViewOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherViewOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherViewOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherViewOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CILauncherViewOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DesiredRemainingView )(
        __x_ABI_CWindows_CSystem_CILauncherViewOptions * This,
                           __RPC__out __x_ABI_CWindows_CUI_CViewManagement_CViewSizePreference * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DesiredRemainingView )(
        __x_ABI_CWindows_CSystem_CILauncherViewOptions * This,
                  __x_ABI_CWindows_CUI_CViewManagement_CViewSizePreference value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CILauncherViewOptionsVtbl;
interface __x_ABI_CWindows_CSystem_CILauncherViewOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CILauncherViewOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DesiredRemainingView(This,value) )
    ( (This)->lpVtbl->put_DesiredRemainingView(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CILauncherViewOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IMemoryManagerStatics[] = L"Windows.System.IMemoryManagerStatics";
typedef struct __x_ABI_CWindows_CSystem_CIMemoryManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIMemoryManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIMemoryManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIMemoryManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIMemoryManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIMemoryManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIMemoryManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AppMemoryUsage )(
        __x_ABI_CWindows_CSystem_CIMemoryManagerStatics * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppMemoryUsageLimit )(
        __x_ABI_CWindows_CSystem_CIMemoryManagerStatics * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppMemoryUsageLevel )(
        __x_ABI_CWindows_CSystem_CIMemoryManagerStatics * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CAppMemoryUsageLevel * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AppMemoryUsageIncreased )(
        __x_ABI_CWindows_CSystem_CIMemoryManagerStatics * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AppMemoryUsageIncreased )(
        __x_ABI_CWindows_CSystem_CIMemoryManagerStatics * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AppMemoryUsageDecreased )(
        __x_ABI_CWindows_CSystem_CIMemoryManagerStatics * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AppMemoryUsageDecreased )(
        __x_ABI_CWindows_CSystem_CIMemoryManagerStatics * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AppMemoryUsageLimitChanging )(
        __x_ABI_CWindows_CSystem_CIMemoryManagerStatics * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CSystem__CAppMemoryUsageLimitChangingEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AppMemoryUsageLimitChanging )(
        __x_ABI_CWindows_CSystem_CIMemoryManagerStatics * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIMemoryManagerStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CIMemoryManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIMemoryManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AppMemoryUsage(This,value) )
    ( (This)->lpVtbl->get_AppMemoryUsageLimit(This,value) )
    ( (This)->lpVtbl->get_AppMemoryUsageLevel(This,value) )
    ( (This)->lpVtbl->add_AppMemoryUsageIncreased(This,handler,token) )
    ( (This)->lpVtbl->remove_AppMemoryUsageIncreased(This,token) )
    ( (This)->lpVtbl->add_AppMemoryUsageDecreased(This,handler,token) )
    ( (This)->lpVtbl->remove_AppMemoryUsageDecreased(This,token) )
    ( (This)->lpVtbl->add_AppMemoryUsageLimitChanging(This,handler,token) )
    ( (This)->lpVtbl->remove_AppMemoryUsageLimitChanging(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIMemoryManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IMemoryManagerStatics2[] = L"Windows.System.IMemoryManagerStatics2";
typedef struct __x_ABI_CWindows_CSystem_CIMemoryManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIMemoryManagerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIMemoryManagerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIMemoryManagerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIMemoryManagerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIMemoryManagerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIMemoryManagerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAppMemoryReport )(
        __x_ABI_CWindows_CSystem_CIMemoryManagerStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIAppMemoryReport * * memoryReport
        );
    HRESULT ( STDMETHODCALLTYPE *GetProcessMemoryReport )(
        __x_ABI_CWindows_CSystem_CIMemoryManagerStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIProcessMemoryReport * * memoryReport
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIMemoryManagerStatics2Vtbl;
interface __x_ABI_CWindows_CSystem_CIMemoryManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIMemoryManagerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAppMemoryReport(This,memoryReport) )
    ( (This)->lpVtbl->GetProcessMemoryReport(This,memoryReport) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIMemoryManagerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IMemoryManagerStatics3[] = L"Windows.System.IMemoryManagerStatics3";
typedef struct __x_ABI_CWindows_CSystem_CIMemoryManagerStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIMemoryManagerStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIMemoryManagerStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIMemoryManagerStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIMemoryManagerStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIMemoryManagerStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIMemoryManagerStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TrySetAppMemoryUsageLimit )(
        __x_ABI_CWindows_CSystem_CIMemoryManagerStatics3 * This,
                  UINT64 value,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIMemoryManagerStatics3Vtbl;
interface __x_ABI_CWindows_CSystem_CIMemoryManagerStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIMemoryManagerStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TrySetAppMemoryUsageLimit(This,value,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIMemoryManagerStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IMemoryManagerStatics4[] = L"Windows.System.IMemoryManagerStatics4";
typedef struct __x_ABI_CWindows_CSystem_CIMemoryManagerStatics4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIMemoryManagerStatics4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIMemoryManagerStatics4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIMemoryManagerStatics4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIMemoryManagerStatics4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIMemoryManagerStatics4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIMemoryManagerStatics4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExpectedAppMemoryUsageLimit )(
        __x_ABI_CWindows_CSystem_CIMemoryManagerStatics4 * This,
                           __RPC__out UINT64 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIMemoryManagerStatics4Vtbl;
interface __x_ABI_CWindows_CSystem_CIMemoryManagerStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIMemoryManagerStatics4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExpectedAppMemoryUsageLimit(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIMemoryManagerStatics4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IProcessLauncherOptions[] = L"Windows.System.IProcessLauncherOptions";
typedef struct __x_ABI_CWindows_CSystem_CIProcessLauncherOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIProcessLauncherOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIProcessLauncherOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIProcessLauncherOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIProcessLauncherOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIProcessLauncherOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIProcessLauncherOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StandardInput )(
        __x_ABI_CWindows_CSystem_CIProcessLauncherOptions * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StandardInput )(
        __x_ABI_CWindows_CSystem_CIProcessLauncherOptions * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StandardOutput )(
        __x_ABI_CWindows_CSystem_CIProcessLauncherOptions * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StandardOutput )(
        __x_ABI_CWindows_CSystem_CIProcessLauncherOptions * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StandardError )(
        __x_ABI_CWindows_CSystem_CIProcessLauncherOptions * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StandardError )(
        __x_ABI_CWindows_CSystem_CIProcessLauncherOptions * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WorkingDirectory )(
        __x_ABI_CWindows_CSystem_CIProcessLauncherOptions * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_WorkingDirectory )(
        __x_ABI_CWindows_CSystem_CIProcessLauncherOptions * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIProcessLauncherOptionsVtbl;
interface __x_ABI_CWindows_CSystem_CIProcessLauncherOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIProcessLauncherOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StandardInput(This,value) )
    ( (This)->lpVtbl->put_StandardInput(This,value) )
    ( (This)->lpVtbl->get_StandardOutput(This,value) )
    ( (This)->lpVtbl->put_StandardOutput(This,value) )
    ( (This)->lpVtbl->get_StandardError(This,value) )
    ( (This)->lpVtbl->put_StandardError(This,value) )
    ( (This)->lpVtbl->get_WorkingDirectory(This,value) )
    ( (This)->lpVtbl->put_WorkingDirectory(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIProcessLauncherOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IProcessLauncherResult[] = L"Windows.System.IProcessLauncherResult";
typedef struct __x_ABI_CWindows_CSystem_CIProcessLauncherResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIProcessLauncherResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIProcessLauncherResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIProcessLauncherResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIProcessLauncherResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIProcessLauncherResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIProcessLauncherResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExitCode )(
        __x_ABI_CWindows_CSystem_CIProcessLauncherResult * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIProcessLauncherResultVtbl;
interface __x_ABI_CWindows_CSystem_CIProcessLauncherResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIProcessLauncherResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExitCode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIProcessLauncherResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IProcessLauncherStatics[] = L"Windows.System.IProcessLauncherStatics";
typedef struct __x_ABI_CWindows_CSystem_CIProcessLauncherStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIProcessLauncherStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIProcessLauncherStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIProcessLauncherStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIProcessLauncherStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIProcessLauncherStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIProcessLauncherStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *RunToCompletionAsync )(
        __x_ABI_CWindows_CSystem_CIProcessLauncherStatics * This,
                  __RPC__in HSTRING fileName,
                  __RPC__in HSTRING args,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CProcessLauncherResult * * asyncOperationResult
        );
                    HRESULT ( STDMETHODCALLTYPE *RunToCompletionAsyncWithOptions )(
        __x_ABI_CWindows_CSystem_CIProcessLauncherStatics * This,
                  __RPC__in HSTRING fileName,
                  __RPC__in HSTRING args,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIProcessLauncherOptions * options,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CProcessLauncherResult * * asyncOperationResult
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIProcessLauncherStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CIProcessLauncherStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIProcessLauncherStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RunToCompletionAsync(This,fileName,args,asyncOperationResult) )
    ( (This)->lpVtbl->RunToCompletionAsyncWithOptions(This,fileName,args,options,asyncOperationResult) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIProcessLauncherStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IProcessMemoryReport[] = L"Windows.System.IProcessMemoryReport";
typedef struct __x_ABI_CWindows_CSystem_CIProcessMemoryReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIProcessMemoryReport * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIProcessMemoryReport * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIProcessMemoryReport * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIProcessMemoryReport * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIProcessMemoryReport * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIProcessMemoryReport * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PrivateWorkingSetUsage )(
        __x_ABI_CWindows_CSystem_CIProcessMemoryReport * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TotalWorkingSetUsage )(
        __x_ABI_CWindows_CSystem_CIProcessMemoryReport * This,
                           __RPC__out UINT64 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIProcessMemoryReportVtbl;
interface __x_ABI_CWindows_CSystem_CIProcessMemoryReport
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIProcessMemoryReportVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PrivateWorkingSetUsage(This,value) )
    ( (This)->lpVtbl->get_TotalWorkingSetUsage(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIProcessMemoryReport;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IProtocolForResultsOperation[] = L"Windows.System.IProtocolForResultsOperation";
typedef struct __x_ABI_CWindows_CSystem_CIProtocolForResultsOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIProtocolForResultsOperation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIProtocolForResultsOperation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIProtocolForResultsOperation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIProtocolForResultsOperation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIProtocolForResultsOperation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIProtocolForResultsOperation * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ReportCompleted )(
        __x_ABI_CWindows_CSystem_CIProtocolForResultsOperation * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * data
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIProtocolForResultsOperationVtbl;
interface __x_ABI_CWindows_CSystem_CIProtocolForResultsOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIProtocolForResultsOperationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ReportCompleted(This,data) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIProtocolForResultsOperation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IRemoteLauncherOptions[] = L"Windows.System.IRemoteLauncherOptions";
typedef struct __x_ABI_CWindows_CSystem_CIRemoteLauncherOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIRemoteLauncherOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIRemoteLauncherOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIRemoteLauncherOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIRemoteLauncherOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIRemoteLauncherOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIRemoteLauncherOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FallbackUri )(
        __x_ABI_CWindows_CSystem_CIRemoteLauncherOptions * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FallbackUri )(
        __x_ABI_CWindows_CSystem_CIRemoteLauncherOptions * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PreferredAppIds )(
        __x_ABI_CWindows_CSystem_CIRemoteLauncherOptions * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIRemoteLauncherOptionsVtbl;
interface __x_ABI_CWindows_CSystem_CIRemoteLauncherOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIRemoteLauncherOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FallbackUri(This,value) )
    ( (This)->lpVtbl->put_FallbackUri(This,value) )
    ( (This)->lpVtbl->get_PreferredAppIds(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIRemoteLauncherOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IRemoteLauncherStatics[] = L"Windows.System.IRemoteLauncherStatics";
typedef struct __x_ABI_CWindows_CSystem_CIRemoteLauncherStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIRemoteLauncherStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIRemoteLauncherStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIRemoteLauncherStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIRemoteLauncherStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIRemoteLauncherStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIRemoteLauncherStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *LaunchUriAsync )(
        __x_ABI_CWindows_CSystem_CIRemoteLauncherStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest * remoteSystemConnectionRequest,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CRemoteLaunchUriStatus * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *LaunchUriWithOptionsAsync )(
        __x_ABI_CWindows_CSystem_CIRemoteLauncherStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest * remoteSystemConnectionRequest,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIRemoteLauncherOptions * options,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CRemoteLaunchUriStatus * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *LaunchUriWithDataAsync )(
        __x_ABI_CWindows_CSystem_CIRemoteLauncherStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemConnectionRequest * remoteSystemConnectionRequest,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIRemoteLauncherOptions * options,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * inputData,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CRemoteLaunchUriStatus * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIRemoteLauncherStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CIRemoteLauncherStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIRemoteLauncherStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->LaunchUriAsync(This,remoteSystemConnectionRequest,uri,operation) )
    ( (This)->lpVtbl->LaunchUriWithOptionsAsync(This,remoteSystemConnectionRequest,uri,options,operation) )
    ( (This)->lpVtbl->LaunchUriWithDataAsync(This,remoteSystemConnectionRequest,uri,options,inputData,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIRemoteLauncherStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IShutdownManagerStatics[] = L"Windows.System.IShutdownManagerStatics";
typedef struct __x_ABI_CWindows_CSystem_CIShutdownManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIShutdownManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIShutdownManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIShutdownManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIShutdownManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIShutdownManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIShutdownManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *BeginShutdown )(
        __x_ABI_CWindows_CSystem_CIShutdownManagerStatics * This,
                  __x_ABI_CWindows_CSystem_CShutdownKind shutdownKind,
                  __x_ABI_CWindows_CFoundation_CTimeSpan timeout
        );
    HRESULT ( STDMETHODCALLTYPE *CancelShutdown )(
        __x_ABI_CWindows_CSystem_CIShutdownManagerStatics * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIShutdownManagerStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CIShutdownManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIShutdownManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->BeginShutdown(This,shutdownKind,timeout) )
    ( (This)->lpVtbl->CancelShutdown(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIShutdownManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IShutdownManagerStatics2[] = L"Windows.System.IShutdownManagerStatics2";
typedef struct __x_ABI_CWindows_CSystem_CIShutdownManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIShutdownManagerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIShutdownManagerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIShutdownManagerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIShutdownManagerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIShutdownManagerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIShutdownManagerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsPowerStateSupported )(
        __x_ABI_CWindows_CSystem_CIShutdownManagerStatics2 * This,
                  __x_ABI_CWindows_CSystem_CPowerState powerState,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *EnterPowerState )(
        __x_ABI_CWindows_CSystem_CIShutdownManagerStatics2 * This,
                  __x_ABI_CWindows_CSystem_CPowerState powerState
        );
                    HRESULT ( STDMETHODCALLTYPE *EnterPowerStateWithTimeSpan )(
        __x_ABI_CWindows_CSystem_CIShutdownManagerStatics2 * This,
                  __x_ABI_CWindows_CSystem_CPowerState powerState,
                  __x_ABI_CWindows_CFoundation_CTimeSpan wakeUpAfter
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIShutdownManagerStatics2Vtbl;
interface __x_ABI_CWindows_CSystem_CIShutdownManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIShutdownManagerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsPowerStateSupported(This,powerState,value) )
    ( (This)->lpVtbl->EnterPowerState(This,powerState) )
    ( (This)->lpVtbl->EnterPowerStateWithTimeSpan(This,powerState,wakeUpAfter) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIShutdownManagerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_ITimeZoneSettingsStatics[] = L"Windows.System.ITimeZoneSettingsStatics";
typedef struct __x_ABI_CWindows_CSystem_CITimeZoneSettingsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CITimeZoneSettingsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CITimeZoneSettingsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CITimeZoneSettingsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CITimeZoneSettingsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CITimeZoneSettingsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CITimeZoneSettingsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CurrentTimeZoneDisplayName )(
        __x_ABI_CWindows_CSystem_CITimeZoneSettingsStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedTimeZoneDisplayNames )(
        __x_ABI_CWindows_CSystem_CITimeZoneSettingsStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanChangeTimeZone )(
        __x_ABI_CWindows_CSystem_CITimeZoneSettingsStatics * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *ChangeTimeZoneByDisplayName )(
        __x_ABI_CWindows_CSystem_CITimeZoneSettingsStatics * This,
                  __RPC__in HSTRING timeZoneDisplayName
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CITimeZoneSettingsStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CITimeZoneSettingsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CITimeZoneSettingsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CurrentTimeZoneDisplayName(This,value) )
    ( (This)->lpVtbl->get_SupportedTimeZoneDisplayNames(This,value) )
    ( (This)->lpVtbl->get_CanChangeTimeZone(This,value) )
    ( (This)->lpVtbl->ChangeTimeZoneByDisplayName(This,timeZoneDisplayName) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CITimeZoneSettingsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_ITimeZoneSettingsStatics2[] = L"Windows.System.ITimeZoneSettingsStatics2";
typedef struct __x_ABI_CWindows_CSystem_CITimeZoneSettingsStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CITimeZoneSettingsStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CITimeZoneSettingsStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CITimeZoneSettingsStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CITimeZoneSettingsStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CITimeZoneSettingsStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CITimeZoneSettingsStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AutoUpdateTimeZoneAsync )(
        __x_ABI_CWindows_CSystem_CITimeZoneSettingsStatics2 * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan timeout,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CAutoUpdateTimeZoneStatus * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CITimeZoneSettingsStatics2Vtbl;
interface __x_ABI_CWindows_CSystem_CITimeZoneSettingsStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CITimeZoneSettingsStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AutoUpdateTimeZoneAsync(This,timeout,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CITimeZoneSettingsStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IUser[] = L"Windows.System.IUser";
typedef struct __x_ABI_CWindows_CSystem_CIUserVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIUser * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUser * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUser * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUser * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUser * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUser * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NonRoamableId )(
        __x_ABI_CWindows_CSystem_CIUser * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AuthenticationStatus )(
        __x_ABI_CWindows_CSystem_CIUser * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CUserAuthenticationStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CSystem_CIUser * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CUserType * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPropertyAsync )(
        __x_ABI_CWindows_CSystem_CIUser * This,
                  __RPC__in HSTRING value,
                           __RPC__deref_out_opt __FIAsyncOperation_1_IInspectable * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetPropertiesAsync )(
        __x_ABI_CWindows_CSystem_CIUser * This,
                  __RPC__in_opt __FIVectorView_1_HSTRING * values,
                           __RPC__deref_out_opt __FIAsyncOperation_1___F__CIPropertySet * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetPictureAsync )(
        __x_ABI_CWindows_CSystem_CIUser * This,
                  __x_ABI_CWindows_CSystem_CUserPictureSize desiredSize,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIUserVtbl;
interface __x_ABI_CWindows_CSystem_CIUser
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIUserVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NonRoamableId(This,value) )
    ( (This)->lpVtbl->get_AuthenticationStatus(This,value) )
    ( (This)->lpVtbl->get_Type(This,value) )
    ( (This)->lpVtbl->GetPropertyAsync(This,value,operation) )
    ( (This)->lpVtbl->GetPropertiesAsync(This,values,operation) )
    ( (This)->lpVtbl->GetPictureAsync(This,desiredSize,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIUser;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IUserAuthenticationStatusChangeDeferral[] = L"Windows.System.IUserAuthenticationStatusChangeDeferral";
typedef struct __x_ABI_CWindows_CSystem_CIUserAuthenticationStatusChangeDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserAuthenticationStatusChangeDeferral * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserAuthenticationStatusChangeDeferral * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserAuthenticationStatusChangeDeferral * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserAuthenticationStatusChangeDeferral * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserAuthenticationStatusChangeDeferral * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserAuthenticationStatusChangeDeferral * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CSystem_CIUserAuthenticationStatusChangeDeferral * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIUserAuthenticationStatusChangeDeferralVtbl;
interface __x_ABI_CWindows_CSystem_CIUserAuthenticationStatusChangeDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIUserAuthenticationStatusChangeDeferralVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Complete(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIUserAuthenticationStatusChangeDeferral;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IUserAuthenticationStatusChangingEventArgs[] = L"Windows.System.IUserAuthenticationStatusChangingEventArgs";
typedef struct __x_ABI_CWindows_CSystem_CIUserAuthenticationStatusChangingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserAuthenticationStatusChangingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserAuthenticationStatusChangingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserAuthenticationStatusChangingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserAuthenticationStatusChangingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserAuthenticationStatusChangingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserAuthenticationStatusChangingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CSystem_CIUserAuthenticationStatusChangingEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUserAuthenticationStatusChangeDeferral * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CSystem_CIUserAuthenticationStatusChangingEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NewStatus )(
        __x_ABI_CWindows_CSystem_CIUserAuthenticationStatusChangingEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CUserAuthenticationStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrentStatus )(
        __x_ABI_CWindows_CSystem_CIUserAuthenticationStatusChangingEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CUserAuthenticationStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIUserAuthenticationStatusChangingEventArgsVtbl;
interface __x_ABI_CWindows_CSystem_CIUserAuthenticationStatusChangingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIUserAuthenticationStatusChangingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
    ( (This)->lpVtbl->get_User(This,value) )
    ( (This)->lpVtbl->get_NewStatus(This,value) )
    ( (This)->lpVtbl->get_CurrentStatus(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIUserAuthenticationStatusChangingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IUserChangedEventArgs[] = L"Windows.System.IUserChangedEventArgs";
typedef struct __x_ABI_CWindows_CSystem_CIUserChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_User )(
        __x_ABI_CWindows_CSystem_CIUserChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIUserChangedEventArgsVtbl;
interface __x_ABI_CWindows_CSystem_CIUserChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIUserChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_User(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIUserChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IUserDeviceAssociationChangedEventArgs[] = L"Windows.System.IUserDeviceAssociationChangedEventArgs";
typedef struct __x_ABI_CWindows_CSystem_CIUserDeviceAssociationChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserDeviceAssociationChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserDeviceAssociationChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserDeviceAssociationChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserDeviceAssociationChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserDeviceAssociationChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserDeviceAssociationChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CSystem_CIUserDeviceAssociationChangedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NewUser )(
        __x_ABI_CWindows_CSystem_CIUserDeviceAssociationChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OldUser )(
        __x_ABI_CWindows_CSystem_CIUserDeviceAssociationChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIUserDeviceAssociationChangedEventArgsVtbl;
interface __x_ABI_CWindows_CSystem_CIUserDeviceAssociationChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIUserDeviceAssociationChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_NewUser(This,value) )
    ( (This)->lpVtbl->get_OldUser(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIUserDeviceAssociationChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IUserDeviceAssociationStatics[] = L"Windows.System.IUserDeviceAssociationStatics";
typedef struct __x_ABI_CWindows_CSystem_CIUserDeviceAssociationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserDeviceAssociationStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserDeviceAssociationStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserDeviceAssociationStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserDeviceAssociationStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserDeviceAssociationStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserDeviceAssociationStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FindUserFromDeviceId )(
        __x_ABI_CWindows_CSystem_CIUserDeviceAssociationStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * user
        );
                    HRESULT ( STDMETHODCALLTYPE *add_UserDeviceAssociationChanged )(
        __x_ABI_CWindows_CSystem_CIUserDeviceAssociationStatics * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CSystem__CUserDeviceAssociationChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_UserDeviceAssociationChanged )(
        __x_ABI_CWindows_CSystem_CIUserDeviceAssociationStatics * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIUserDeviceAssociationStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CIUserDeviceAssociationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIUserDeviceAssociationStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FindUserFromDeviceId(This,deviceId,user) )
    ( (This)->lpVtbl->add_UserDeviceAssociationChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_UserDeviceAssociationChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIUserDeviceAssociationStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IUserPicker[] = L"Windows.System.IUserPicker";
typedef struct __x_ABI_CWindows_CSystem_CIUserPickerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserPicker * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserPicker * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserPicker * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserPicker * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserPicker * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserPicker * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AllowGuestAccounts )(
        __x_ABI_CWindows_CSystem_CIUserPicker * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllowGuestAccounts )(
        __x_ABI_CWindows_CSystem_CIUserPicker * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SuggestedSelectedUser )(
        __x_ABI_CWindows_CSystem_CIUserPicker * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SuggestedSelectedUser )(
        __x_ABI_CWindows_CSystem_CIUserPicker * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * value
        );
    HRESULT ( STDMETHODCALLTYPE *PickSingleUserAsync )(
        __x_ABI_CWindows_CSystem_CIUserPicker * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CUser * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIUserPickerVtbl;
interface __x_ABI_CWindows_CSystem_CIUserPicker
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIUserPickerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AllowGuestAccounts(This,value) )
    ( (This)->lpVtbl->put_AllowGuestAccounts(This,value) )
    ( (This)->lpVtbl->get_SuggestedSelectedUser(This,value) )
    ( (This)->lpVtbl->put_SuggestedSelectedUser(This,value) )
    ( (This)->lpVtbl->PickSingleUserAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIUserPicker;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IUserPickerStatics[] = L"Windows.System.IUserPickerStatics";
typedef struct __x_ABI_CWindows_CSystem_CIUserPickerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserPickerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserPickerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserPickerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserPickerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserPickerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserPickerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsSupported )(
        __x_ABI_CWindows_CSystem_CIUserPickerStatics * This,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIUserPickerStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CIUserPickerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIUserPickerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsSupported(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIUserPickerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IUserStatics[] = L"Windows.System.IUserStatics";
typedef struct __x_ABI_CWindows_CSystem_CIUserStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWatcher )(
        __x_ABI_CWindows_CSystem_CIUserStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUserWatcher * * result
        );
                                      HRESULT ( STDMETHODCALLTYPE *FindAllAsync )(
        __x_ABI_CWindows_CSystem_CIUserStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CUser * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *FindAllAsyncByType )(
        __x_ABI_CWindows_CSystem_CIUserStatics * This,
                  __x_ABI_CWindows_CSystem_CUserType type,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CUser * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *FindAllAsyncByTypeAndStatus )(
        __x_ABI_CWindows_CSystem_CIUserStatics * This,
                  __x_ABI_CWindows_CSystem_CUserType type,
                  __x_ABI_CWindows_CSystem_CUserAuthenticationStatus status,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CSystem__CUser * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetFromId )(
        __x_ABI_CWindows_CSystem_CIUserStatics * This,
                  __RPC__in HSTRING nonRoamableId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIUserStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CIUserStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIUserStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWatcher(This,result) )
    ( (This)->lpVtbl->FindAllAsync(This,operation) )
    ( (This)->lpVtbl->FindAllAsyncByType(This,type,operation) )
    ( (This)->lpVtbl->FindAllAsyncByTypeAndStatus(This,type,status,operation) )
    ( (This)->lpVtbl->GetFromId(This,nonRoamableId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIUserStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_IUserWatcher[] = L"Windows.System.IUserWatcher";
typedef struct __x_ABI_CWindows_CSystem_CIUserWatcherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserWatcher * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserWatcher * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserWatcher * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserWatcher * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserWatcher * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CIUserWatcher * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CSystem_CIUserWatcher * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CUserWatcherStatus * value
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CSystem_CIUserWatcher * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CSystem_CIUserWatcher * This
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Added )(
        __x_ABI_CWindows_CSystem_CIUserWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_Windows__CSystem__CUserChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Added )(
        __x_ABI_CWindows_CSystem_CIUserWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Removed )(
        __x_ABI_CWindows_CSystem_CIUserWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_Windows__CSystem__CUserChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Removed )(
        __x_ABI_CWindows_CSystem_CIUserWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Updated )(
        __x_ABI_CWindows_CSystem_CIUserWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_Windows__CSystem__CUserChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Updated )(
        __x_ABI_CWindows_CSystem_CIUserWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AuthenticationStatusChanged )(
        __x_ABI_CWindows_CSystem_CIUserWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_Windows__CSystem__CUserChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AuthenticationStatusChanged )(
        __x_ABI_CWindows_CSystem_CIUserWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AuthenticationStatusChanging )(
        __x_ABI_CWindows_CSystem_CIUserWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_Windows__CSystem__CUserAuthenticationStatusChangingEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AuthenticationStatusChanging )(
        __x_ABI_CWindows_CSystem_CIUserWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_EnumerationCompleted )(
        __x_ABI_CWindows_CSystem_CIUserWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_EnumerationCompleted )(
        __x_ABI_CWindows_CSystem_CIUserWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Stopped )(
        __x_ABI_CWindows_CSystem_CIUserWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CUserWatcher_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Stopped )(
        __x_ABI_CWindows_CSystem_CIUserWatcher * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIUserWatcherVtbl;
interface __x_ABI_CWindows_CSystem_CIUserWatcher
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CIUserWatcherVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->Start(This) )
    ( (This)->lpVtbl->Stop(This) )
    ( (This)->lpVtbl->add_Added(This,handler,token) )
    ( (This)->lpVtbl->remove_Added(This,token) )
    ( (This)->lpVtbl->add_Removed(This,handler,token) )
    ( (This)->lpVtbl->remove_Removed(This,token) )
    ( (This)->lpVtbl->add_Updated(This,handler,token) )
    ( (This)->lpVtbl->remove_Updated(This,token) )
    ( (This)->lpVtbl->add_AuthenticationStatusChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_AuthenticationStatusChanged(This,token) )
    ( (This)->lpVtbl->add_AuthenticationStatusChanging(This,handler,token) )
    ( (This)->lpVtbl->remove_AuthenticationStatusChanging(This,token) )
    ( (This)->lpVtbl->add_EnumerationCompleted(This,handler,token) )
    ( (This)->lpVtbl->remove_EnumerationCompleted(This,token) )
    ( (This)->lpVtbl->add_Stopped(This,handler,token) )
    ( (This)->lpVtbl->remove_Stopped(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CIUserWatcher;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_AppActivationResult[] = L"Windows.System.AppActivationResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_AppDiagnosticInfo[] = L"Windows.System.AppDiagnosticInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_AppDiagnosticInfoWatcher[] = L"Windows.System.AppDiagnosticInfoWatcher";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_AppDiagnosticInfoWatcherEventArgs[] = L"Windows.System.AppDiagnosticInfoWatcherEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_AppExecutionStateChangeResult[] = L"Windows.System.AppExecutionStateChangeResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_AppMemoryReport[] = L"Windows.System.AppMemoryReport";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_AppMemoryUsageLimitChangingEventArgs[] = L"Windows.System.AppMemoryUsageLimitChangingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_AppResourceGroupBackgroundTaskReport[] = L"Windows.System.AppResourceGroupBackgroundTaskReport";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_AppResourceGroupInfo[] = L"Windows.System.AppResourceGroupInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_AppResourceGroupInfoWatcher[] = L"Windows.System.AppResourceGroupInfoWatcher";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_AppResourceGroupInfoWatcherEventArgs[] = L"Windows.System.AppResourceGroupInfoWatcherEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_AppResourceGroupInfoWatcherExecutionStateChangedEventArgs[] = L"Windows.System.AppResourceGroupInfoWatcherExecutionStateChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_AppResourceGroupMemoryReport[] = L"Windows.System.AppResourceGroupMemoryReport";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_AppResourceGroupStateReport[] = L"Windows.System.AppResourceGroupStateReport";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_AppUriHandlerHost[] = L"Windows.System.AppUriHandlerHost";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_AppUriHandlerRegistration[] = L"Windows.System.AppUriHandlerRegistration";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_AppUriHandlerRegistrationManager[] = L"Windows.System.AppUriHandlerRegistrationManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_DateTimeSettings[] = L"Windows.System.DateTimeSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_DispatcherQueue[] = L"Windows.System.DispatcherQueue";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_DispatcherQueueController[] = L"Windows.System.DispatcherQueueController";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_DispatcherQueueShutdownStartingEventArgs[] = L"Windows.System.DispatcherQueueShutdownStartingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_DispatcherQueueTimer[] = L"Windows.System.DispatcherQueueTimer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_FolderLauncherOptions[] = L"Windows.System.FolderLauncherOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_KnownUserProperties[] = L"Windows.System.KnownUserProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_LaunchUriResult[] = L"Windows.System.LaunchUriResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Launcher[] = L"Windows.System.Launcher";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_LauncherOptions[] = L"Windows.System.LauncherOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_LauncherUIOptions[] = L"Windows.System.LauncherUIOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_MemoryManager[] = L"Windows.System.MemoryManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_ProcessLauncher[] = L"Windows.System.ProcessLauncher";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_ProcessLauncherOptions[] = L"Windows.System.ProcessLauncherOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_ProcessLauncherResult[] = L"Windows.System.ProcessLauncherResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_ProcessMemoryReport[] = L"Windows.System.ProcessMemoryReport";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_ProtocolForResultsOperation[] = L"Windows.System.ProtocolForResultsOperation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteLauncher[] = L"Windows.System.RemoteLauncher";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteLauncherOptions[] = L"Windows.System.RemoteLauncherOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_ShutdownManager[] = L"Windows.System.ShutdownManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_TimeZoneSettings[] = L"Windows.System.TimeZoneSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_User[] = L"Windows.System.User";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_UserAuthenticationStatusChangeDeferral[] = L"Windows.System.UserAuthenticationStatusChangeDeferral";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_UserAuthenticationStatusChangingEventArgs[] = L"Windows.System.UserAuthenticationStatusChangingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_UserChangedEventArgs[] = L"Windows.System.UserChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_UserDeviceAssociation[] = L"Windows.System.UserDeviceAssociation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_UserDeviceAssociationChangedEventArgs[] = L"Windows.System.UserDeviceAssociationChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_UserPicker[] = L"Windows.System.UserPicker";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_UserWatcher[] = L"Windows.System.UserWatcher";
       
       
#pragma clang diagnostic pop
