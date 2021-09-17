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
#include "Windows.Media.Capture.h"
#include "Windows.Media.Devices.Core.h"
#include "Windows.Media.MediaProperties.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler __x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3 __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4 __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5 __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController6 __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController6;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController7 __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController7;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CICallControl __x_ABI_CWindows_CMedia_CDevices_CICallControl;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CICallControlStatics __x_ABI_CWindows_CMedia_CDevices_CICallControlStatics;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIExposureControl __x_ABI_CWindows_CMedia_CDevices_CIExposureControl;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIFlashControl __x_ABI_CWindows_CMedia_CDevices_CIFlashControl;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2 __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIFocusControl __x_ABI_CWindows_CMedia_CDevices_CIFocusControl;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIInfraredTorchControl __x_ABI_CWindows_CMedia_CDevices_CIInfraredTorchControl;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2 __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2 __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CITorchControl __x_ABI_CWindows_CMedia_CDevices_CITorchControl;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIVideoTemporalDenoisingControl __x_ABI_CWindows_CMedia_CDevices_CIVideoTemporalDenoisingControl;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIZoomControl __x_ABI_CWindows_CMedia_CDevices_CIZoomControl;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2 __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings;
enum __x_ABI_CWindows_CMedia_CDevices_CAdvancedPhotoMode;
typedef interface __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode;
typedef struct __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoModeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This, __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CAdvancedPhotoMode *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CAdvancedPhotoMode *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoModeVtbl;
interface __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoModeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode;
typedef struct __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoModeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CDevices__CAdvancedPhotoMode **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoModeVtbl;
interface __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoMode
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CDevices__CAdvancedPhotoModeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule;
typedef struct __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModuleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule * This, __RPC__out __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModuleVtbl;
interface __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModuleVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule;
typedef struct __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModuleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CDevices__CAudioDeviceModule **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModuleVtbl;
interface __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModule
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CDevices__CAudioDeviceModuleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
enum __x_ABI_CWindows_CMedia_CDevices_CAutoFocusRange;
typedef interface __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange;
typedef struct __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange * This, __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CAutoFocusRange *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CAutoFocusRange *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRangeVtbl;
interface __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRangeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange;
typedef struct __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CDevices__CAutoFocusRange **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRangeVtbl;
interface __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRange
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CDevices__CAutoFocusRangeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
enum __x_ABI_CWindows_CMedia_CDevices_CCaptureSceneMode;
typedef interface __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode;
typedef struct __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneModeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode * This, __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CCaptureSceneMode *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CCaptureSceneMode *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneModeVtbl;
interface __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneModeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode;
typedef struct __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneModeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CDevices__CCaptureSceneMode **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneModeVtbl;
interface __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneMode
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CDevices__CCaptureSceneModeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
enum __x_ABI_CWindows_CMedia_CDevices_CFocusMode;
typedef interface __FIIterator_1_Windows__CMedia__CDevices__CFocusMode __FIIterator_1_Windows__CMedia__CDevices__CFocusMode;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CDevices__CFocusMode;
typedef struct __FIIterator_1_Windows__CMedia__CDevices__CFocusModeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusMode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusMode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusMode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusMode * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusMode * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusMode * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusMode * This, __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CFocusMode *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusMode * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusMode * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusMode * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CFocusMode *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CDevices__CFocusModeVtbl;
interface __FIIterator_1_Windows__CMedia__CDevices__CFocusMode
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CDevices__CFocusModeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CDevices__CFocusMode __FIIterable_1_Windows__CMedia__CDevices__CFocusMode;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CDevices__CFocusMode;
typedef struct __FIIterable_1_Windows__CMedia__CDevices__CFocusModeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CDevices__CFocusMode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CFocusMode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CFocusMode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CFocusMode * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CFocusMode * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CFocusMode * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CFocusMode * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CDevices__CFocusMode **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CDevices__CFocusModeVtbl;
interface __FIIterable_1_Windows__CMedia__CDevices__CFocusMode
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CDevices__CFocusModeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
enum __x_ABI_CWindows_CMedia_CDevices_CFocusPreset;
typedef interface __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CDevices__CFocusPreset;
typedef struct __FIIterator_1_Windows__CMedia__CDevices__CFocusPresetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset * This, __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CFocusPreset *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CFocusPreset *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CDevices__CFocusPresetVtbl;
interface __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CDevices__CFocusPresetVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CDevices__CFocusPreset __FIIterable_1_Windows__CMedia__CDevices__CFocusPreset;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CDevices__CFocusPreset;
typedef struct __FIIterable_1_Windows__CMedia__CDevices__CFocusPresetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CDevices__CFocusPreset * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CFocusPreset * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CFocusPreset * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CFocusPreset * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CFocusPreset * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CFocusPreset * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CFocusPreset * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CDevices__CFocusPreset **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CDevices__CFocusPresetVtbl;
interface __FIIterable_1_Windows__CMedia__CDevices__CFocusPreset
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CDevices__CFocusPresetVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
enum __x_ABI_CWindows_CMedia_CDevices_CHdrVideoMode;
typedef interface __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode;
typedef struct __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoModeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode * This, __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CHdrVideoMode *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CHdrVideoMode *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoModeVtbl;
interface __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoModeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode;
typedef struct __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoModeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CDevices__CHdrVideoMode **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoModeVtbl;
interface __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoMode
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CDevices__CHdrVideoModeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
enum __x_ABI_CWindows_CMedia_CDevices_CInfraredTorchMode;
typedef interface __FIIterator_1_Windows__CMedia__CDevices__CInfraredTorchMode __FIIterator_1_Windows__CMedia__CDevices__CInfraredTorchMode;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CDevices__CInfraredTorchMode;
typedef struct __FIIterator_1_Windows__CMedia__CDevices__CInfraredTorchModeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CDevices__CInfraredTorchMode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CInfraredTorchMode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CInfraredTorchMode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CInfraredTorchMode * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CInfraredTorchMode * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CInfraredTorchMode * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CInfraredTorchMode * This, __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CInfraredTorchMode *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CInfraredTorchMode * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CInfraredTorchMode * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CInfraredTorchMode * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CInfraredTorchMode *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CDevices__CInfraredTorchModeVtbl;
interface __FIIterator_1_Windows__CMedia__CDevices__CInfraredTorchMode
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CDevices__CInfraredTorchModeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CDevices__CInfraredTorchMode __FIIterable_1_Windows__CMedia__CDevices__CInfraredTorchMode;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CDevices__CInfraredTorchMode;
typedef struct __FIIterable_1_Windows__CMedia__CDevices__CInfraredTorchModeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CDevices__CInfraredTorchMode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CInfraredTorchMode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CInfraredTorchMode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CInfraredTorchMode * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CInfraredTorchMode * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CInfraredTorchMode * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CInfraredTorchMode * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CDevices__CInfraredTorchMode **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CDevices__CInfraredTorchModeVtbl;
interface __FIIterable_1_Windows__CMedia__CDevices__CInfraredTorchMode
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CDevices__CInfraredTorchModeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
enum __x_ABI_CWindows_CMedia_CDevices_CIsoSpeedPreset;
typedef interface __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset;
typedef struct __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPresetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This, __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CIsoSpeedPreset *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CIsoSpeedPreset *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPresetVtbl;
interface __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPresetVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset;
typedef struct __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPresetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CDevices__CIsoSpeedPreset **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPresetVtbl;
interface __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPreset
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CDevices__CIsoSpeedPresetVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
enum __x_ABI_CWindows_CMedia_CDevices_CManualFocusDistance;
typedef interface __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance;
typedef struct __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistanceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance * This, __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CManualFocusDistance *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CManualFocusDistance *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistanceVtbl;
interface __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistanceVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance;
typedef struct __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistanceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CDevices__CManualFocusDistance **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistanceVtbl;
interface __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistance
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CDevices__CManualFocusDistanceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
enum __x_ABI_CWindows_CMedia_CDevices_COpticalImageStabilizationMode;
typedef interface __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode;
typedef struct __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationModeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This, __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_COpticalImageStabilizationMode *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_COpticalImageStabilizationMode *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationModeVtbl;
interface __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationModeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode;
typedef struct __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationModeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationModeVtbl;
interface __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CDevices__COpticalImageStabilizationModeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest;
typedef struct __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest * This, __RPC__out __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterestVtbl;
interface __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterestVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest;
typedef struct __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CDevices__CRegionOfInterest **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterestVtbl;
interface __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterestVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
enum __x_ABI_CWindows_CMedia_CDevices_CVideoTemporalDenoisingMode;
typedef interface __FIIterator_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode __FIIterator_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode;
typedef struct __FIIterator_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingModeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode * This, __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CVideoTemporalDenoisingMode *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CVideoTemporalDenoisingMode *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingModeVtbl;
interface __FIIterator_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingModeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode __FIIterable_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode;
typedef struct __FIIterable_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingModeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingModeVtbl;
interface __FIIterable_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingModeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
enum __x_ABI_CWindows_CMedia_CDevices_CZoomTransitionMode;
typedef interface __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode;
typedef struct __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionModeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode * This, __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CZoomTransitionMode *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CZoomTransitionMode *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionModeVtbl;
interface __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionModeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode;
typedef struct __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionModeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CDevices__CZoomTransitionMode **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionModeVtbl;
interface __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionMode
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CDevices__CZoomTransitionModeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode;
typedef struct __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoModeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CAdvancedPhotoMode *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This,
                       enum __x_ABI_CWindows_CMedia_CDevices_CAdvancedPhotoMode item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CAdvancedPhotoMode *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoModeVtbl;
interface __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoModeVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule;
typedef struct __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModuleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule * This,
                       __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModuleVtbl;
interface __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModuleVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange;
typedef struct __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CAutoFocusRange *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange * This,
                       enum __x_ABI_CWindows_CMedia_CDevices_CAutoFocusRange item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CAutoFocusRange *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRangeVtbl;
interface __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRangeVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode;
typedef struct __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneModeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CCaptureSceneMode *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode * This,
                       enum __x_ABI_CWindows_CMedia_CDevices_CCaptureSceneMode item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CCaptureSceneMode *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneModeVtbl;
interface __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneModeVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CDevices__CFocusMode;
typedef struct __FIVectorView_1_Windows__CMedia__CDevices__CFocusModeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CFocusMode *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode * This,
                       enum __x_ABI_CWindows_CMedia_CDevices_CFocusMode item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CFocusMode *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CDevices__CFocusModeVtbl;
interface __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CDevices__CFocusModeVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset;
typedef struct __FIVectorView_1_Windows__CMedia__CDevices__CFocusPresetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CFocusPreset *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset * This,
                       enum __x_ABI_CWindows_CMedia_CDevices_CFocusPreset item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CFocusPreset *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CDevices__CFocusPresetVtbl;
interface __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CDevices__CFocusPresetVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode;
typedef struct __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoModeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CHdrVideoMode *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode * This,
                       enum __x_ABI_CWindows_CMedia_CDevices_CHdrVideoMode item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CHdrVideoMode *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoModeVtbl;
interface __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoModeVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CDevices__CInfraredTorchMode __FIVectorView_1_Windows__CMedia__CDevices__CInfraredTorchMode;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CDevices__CInfraredTorchMode;
typedef struct __FIVectorView_1_Windows__CMedia__CDevices__CInfraredTorchModeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CInfraredTorchMode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CInfraredTorchMode * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CInfraredTorchMode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CInfraredTorchMode * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CInfraredTorchMode * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CInfraredTorchMode * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CInfraredTorchMode * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CInfraredTorchMode *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CInfraredTorchMode * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CInfraredTorchMode * This,
                       enum __x_ABI_CWindows_CMedia_CDevices_CInfraredTorchMode item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CInfraredTorchMode * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CInfraredTorchMode *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CDevices__CInfraredTorchModeVtbl;
interface __FIVectorView_1_Windows__CMedia__CDevices__CInfraredTorchMode
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CDevices__CInfraredTorchModeVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset;
typedef struct __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPresetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CIsoSpeedPreset *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This,
                       enum __x_ABI_CWindows_CMedia_CDevices_CIsoSpeedPreset item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CIsoSpeedPreset *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPresetVtbl;
interface __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPresetVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance;
typedef struct __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistanceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CManualFocusDistance *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance * This,
                       enum __x_ABI_CWindows_CMedia_CDevices_CManualFocusDistance item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CManualFocusDistance *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistanceVtbl;
interface __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistanceVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode;
typedef struct __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationModeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_COpticalImageStabilizationMode *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This,
                       enum __x_ABI_CWindows_CMedia_CDevices_COpticalImageStabilizationMode item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_COpticalImageStabilizationMode *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationModeVtbl;
interface __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationModeVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode __FIVectorView_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode;
typedef struct __FIVectorView_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingModeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CVideoTemporalDenoisingMode *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode * This,
                       enum __x_ABI_CWindows_CMedia_CDevices_CVideoTemporalDenoisingMode item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CVideoTemporalDenoisingMode *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingModeVtbl;
interface __FIVectorView_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingModeVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode;
typedef struct __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionModeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CZoomTransitionMode *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode * This,
                       enum __x_ABI_CWindows_CMedia_CDevices_CZoomTransitionMode item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CMedia_CDevices_CZoomTransitionMode *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionModeVtbl;
interface __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionModeVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CDevices__CModuleCommandResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult * This, __RPC__out __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResultVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResultVtbl *lpVtbl;
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
typedef interface __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode;
EXTERN_C const IID IID___FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode;
typedef struct __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneModeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode * This, __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CCaptureSceneMode *value);
    END_INTERFACE
} __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneModeVtbl;
interface __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode
{
    CONST_VTBL struct __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneModeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance;
EXTERN_C const IID IID___FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance;
typedef struct __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistanceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance * This, __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CManualFocusDistance *value);
    END_INTERFACE
} __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistanceVtbl;
interface __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance
{
    CONST_VTBL struct __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistanceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
enum __x_ABI_CWindows_CMedia_CDevices_CMediaCaptureFocusState;
typedef interface __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState;
EXTERN_C const IID IID___FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState;
typedef struct __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusStateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState * This, __RPC__out enum __x_ABI_CWindows_CMedia_CDevices_CMediaCaptureFocusState *value);
    END_INTERFACE
} __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusStateVtbl;
interface __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState
{
    CONST_VTBL struct __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusStateVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgs __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgs;
typedef struct __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgs * This, __RPC__in_opt IInspectable * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgsVtbl;
interface __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgs __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgs;
typedef struct __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgs * This, __RPC__in_opt IInspectable * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgsVtbl;
interface __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgs __FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
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
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties;
typedef interface __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties;
typedef struct __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This, __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl;
interface __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties;
typedef struct __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl;
interface __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties;
typedef struct __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
                       __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl;
interface __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CMediaStreamType __x_ABI_CWindows_CMedia_CCapture_CMediaStreamType;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CPowerlineFrequency __x_ABI_CWindows_CMedia_CCapture_CPowerlineFrequency;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController;
typedef enum __x_ABI_CWindows_CMedia_CMediaProperties_CMediaPixelFormat __x_ABI_CWindows_CMedia_CMediaProperties_CMediaPixelFormat;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio;
typedef enum __x_ABI_CWindows_CMedia_CMediaProperties_CMediaThumbnailFormat __x_ABI_CWindows_CMedia_CMediaProperties_CMediaThumbnailFormat;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef enum __x_ABI_CWindows_CMedia_CDevices_CAdvancedPhotoMode __x_ABI_CWindows_CMedia_CDevices_CAdvancedPhotoMode;
typedef enum __x_ABI_CWindows_CMedia_CDevices_CAudioDeviceRole __x_ABI_CWindows_CMedia_CDevices_CAudioDeviceRole;
typedef enum __x_ABI_CWindows_CMedia_CDevices_CAutoFocusRange __x_ABI_CWindows_CMedia_CDevices_CAutoFocusRange;
typedef enum __x_ABI_CWindows_CMedia_CDevices_CCameraStreamState __x_ABI_CWindows_CMedia_CDevices_CCameraStreamState;
typedef enum __x_ABI_CWindows_CMedia_CDevices_CCaptureSceneMode __x_ABI_CWindows_CMedia_CDevices_CCaptureSceneMode;
typedef enum __x_ABI_CWindows_CMedia_CDevices_CCaptureUse __x_ABI_CWindows_CMedia_CDevices_CCaptureUse;
typedef enum __x_ABI_CWindows_CMedia_CDevices_CColorTemperaturePreset __x_ABI_CWindows_CMedia_CDevices_CColorTemperaturePreset;
typedef enum __x_ABI_CWindows_CMedia_CDevices_CFocusMode __x_ABI_CWindows_CMedia_CDevices_CFocusMode;
typedef enum __x_ABI_CWindows_CMedia_CDevices_CFocusPreset __x_ABI_CWindows_CMedia_CDevices_CFocusPreset;
typedef enum __x_ABI_CWindows_CMedia_CDevices_CHdrVideoMode __x_ABI_CWindows_CMedia_CDevices_CHdrVideoMode;
typedef enum __x_ABI_CWindows_CMedia_CDevices_CInfraredTorchMode __x_ABI_CWindows_CMedia_CDevices_CInfraredTorchMode;
typedef enum __x_ABI_CWindows_CMedia_CDevices_CIsoSpeedPreset __x_ABI_CWindows_CMedia_CDevices_CIsoSpeedPreset;
typedef enum __x_ABI_CWindows_CMedia_CDevices_CManualFocusDistance __x_ABI_CWindows_CMedia_CDevices_CManualFocusDistance;
typedef enum __x_ABI_CWindows_CMedia_CDevices_CMediaCaptureFocusState __x_ABI_CWindows_CMedia_CDevices_CMediaCaptureFocusState;
typedef enum __x_ABI_CWindows_CMedia_CDevices_CMediaCaptureOptimization __x_ABI_CWindows_CMedia_CDevices_CMediaCaptureOptimization;
typedef enum __x_ABI_CWindows_CMedia_CDevices_CMediaCapturePauseBehavior __x_ABI_CWindows_CMedia_CDevices_CMediaCapturePauseBehavior;
typedef enum __x_ABI_CWindows_CMedia_CDevices_COpticalImageStabilizationMode __x_ABI_CWindows_CMedia_CDevices_COpticalImageStabilizationMode;
typedef enum __x_ABI_CWindows_CMedia_CDevices_CRegionOfInterestType __x_ABI_CWindows_CMedia_CDevices_CRegionOfInterestType;
typedef enum __x_ABI_CWindows_CMedia_CDevices_CSendCommandStatus __x_ABI_CWindows_CMedia_CDevices_CSendCommandStatus;
typedef enum __x_ABI_CWindows_CMedia_CDevices_CTelephonyKey __x_ABI_CWindows_CMedia_CDevices_CTelephonyKey;
typedef enum __x_ABI_CWindows_CMedia_CDevices_CVideoDeviceControllerGetDevicePropertyStatus __x_ABI_CWindows_CMedia_CDevices_CVideoDeviceControllerGetDevicePropertyStatus;
typedef enum __x_ABI_CWindows_CMedia_CDevices_CVideoDeviceControllerSetDevicePropertyStatus __x_ABI_CWindows_CMedia_CDevices_CVideoDeviceControllerSetDevicePropertyStatus;
typedef enum __x_ABI_CWindows_CMedia_CDevices_CVideoTemporalDenoisingMode __x_ABI_CWindows_CMedia_CDevices_CVideoTemporalDenoisingMode;
typedef enum __x_ABI_CWindows_CMedia_CDevices_CZoomTransitionMode __x_ABI_CWindows_CMedia_CDevices_CZoomTransitionMode;
enum __x_ABI_CWindows_CMedia_CDevices_CAdvancedPhotoMode
{
    AdvancedPhotoMode_Auto = 0,
    AdvancedPhotoMode_Standard = 1,
    AdvancedPhotoMode_Hdr = 2,
    AdvancedPhotoMode_LowLight = 3,
};
enum __x_ABI_CWindows_CMedia_CDevices_CAudioDeviceRole
{
    AudioDeviceRole_Default = 0,
    AudioDeviceRole_Communications = 1,
};
enum __x_ABI_CWindows_CMedia_CDevices_CAutoFocusRange
{
    AutoFocusRange_FullRange = 0,
    AutoFocusRange_Macro = 1,
    AutoFocusRange_Normal = 2,
};
enum __x_ABI_CWindows_CMedia_CDevices_CCameraStreamState
{
    CameraStreamState_NotStreaming = 0,
    CameraStreamState_Streaming = 1,
    CameraStreamState_BlockedForPrivacy = 2,
    CameraStreamState_Shutdown = 3,
};
enum __x_ABI_CWindows_CMedia_CDevices_CCaptureSceneMode
{
    CaptureSceneMode_Auto = 0,
    CaptureSceneMode_Manual = 1,
    CaptureSceneMode_Macro = 2,
    CaptureSceneMode_Portrait = 3,
    CaptureSceneMode_Sport = 4,
    CaptureSceneMode_Snow = 5,
    CaptureSceneMode_Night = 6,
    CaptureSceneMode_Beach = 7,
    CaptureSceneMode_Sunset = 8,
    CaptureSceneMode_Candlelight = 9,
    CaptureSceneMode_Landscape = 10,
    CaptureSceneMode_NightPortrait = 11,
    CaptureSceneMode_Backlit = 12,
};
enum __x_ABI_CWindows_CMedia_CDevices_CCaptureUse
{
    CaptureUse_None = 0,
    CaptureUse_Photo = 1,
    CaptureUse_Video = 2,
};
enum __x_ABI_CWindows_CMedia_CDevices_CColorTemperaturePreset
{
    ColorTemperaturePreset_Auto = 0,
    ColorTemperaturePreset_Manual = 1,
    ColorTemperaturePreset_Cloudy = 2,
    ColorTemperaturePreset_Daylight = 3,
    ColorTemperaturePreset_Flash = 4,
    ColorTemperaturePreset_Fluorescent = 5,
    ColorTemperaturePreset_Tungsten = 6,
    ColorTemperaturePreset_Candlelight = 7,
};
enum __x_ABI_CWindows_CMedia_CDevices_CFocusMode
{
    FocusMode_Auto = 0,
    FocusMode_Single = 1,
    FocusMode_Continuous = 2,
    FocusMode_Manual = 3,
};
enum __x_ABI_CWindows_CMedia_CDevices_CFocusPreset
{
    FocusPreset_Auto = 0,
    FocusPreset_Manual = 1,
    FocusPreset_AutoMacro = 2,
    FocusPreset_AutoNormal = 3,
    FocusPreset_AutoInfinity = 4,
    FocusPreset_AutoHyperfocal = 5,
};
enum __x_ABI_CWindows_CMedia_CDevices_CHdrVideoMode
{
    HdrVideoMode_Off = 0,
    HdrVideoMode_On = 1,
    HdrVideoMode_Auto = 2,
};
enum __x_ABI_CWindows_CMedia_CDevices_CInfraredTorchMode
{
    InfraredTorchMode_Off = 0,
    InfraredTorchMode_On = 1,
    InfraredTorchMode_AlternatingFrameIllumination = 2,
};
enum
DEPRECATED("IsoSpeedPreset may not be available in future versions of Windows Phone. Starting with Windows Phone 8.1, use SetAutoAsync, Auto, SetValueAsync, and Value instead")
__x_ABI_CWindows_CMedia_CDevices_CIsoSpeedPreset
{
    IsoSpeedPreset_Auto = 0,
    IsoSpeedPreset_Iso50 = 1,
    IsoSpeedPreset_Iso80 = 2,
    IsoSpeedPreset_Iso100 = 3,
    IsoSpeedPreset_Iso200 = 4,
    IsoSpeedPreset_Iso400 = 5,
    IsoSpeedPreset_Iso800 = 6,
    IsoSpeedPreset_Iso1600 = 7,
    IsoSpeedPreset_Iso3200 = 8,
    IsoSpeedPreset_Iso6400 = 9,
    IsoSpeedPreset_Iso12800 = 10,
    IsoSpeedPreset_Iso25600 = 11,
};
enum __x_ABI_CWindows_CMedia_CDevices_CManualFocusDistance
{
    ManualFocusDistance_Infinity = 0,
    ManualFocusDistance_Hyperfocal = 1,
    ManualFocusDistance_Nearest = 2,
};
enum __x_ABI_CWindows_CMedia_CDevices_CMediaCaptureFocusState
{
    MediaCaptureFocusState_Uninitialized = 0,
    MediaCaptureFocusState_Lost = 1,
    MediaCaptureFocusState_Searching = 2,
    MediaCaptureFocusState_Focused = 3,
    MediaCaptureFocusState_Failed = 4,
};
enum __x_ABI_CWindows_CMedia_CDevices_CMediaCaptureOptimization
{
    MediaCaptureOptimization_Default = 0,
    MediaCaptureOptimization_Quality = 1,
    MediaCaptureOptimization_Latency = 2,
    MediaCaptureOptimization_Power = 3,
    MediaCaptureOptimization_LatencyThenQuality = 4,
    MediaCaptureOptimization_LatencyThenPower = 5,
    MediaCaptureOptimization_PowerAndQuality = 6,
};
enum __x_ABI_CWindows_CMedia_CDevices_CMediaCapturePauseBehavior
{
    MediaCapturePauseBehavior_RetainHardwareResources = 0,
    MediaCapturePauseBehavior_ReleaseHardwareResources = 1,
};
enum __x_ABI_CWindows_CMedia_CDevices_COpticalImageStabilizationMode
{
    OpticalImageStabilizationMode_Off = 0,
    OpticalImageStabilizationMode_On = 1,
    OpticalImageStabilizationMode_Auto = 2,
};
enum __x_ABI_CWindows_CMedia_CDevices_CRegionOfInterestType
{
    RegionOfInterestType_Unknown = 0,
    RegionOfInterestType_Face = 1,
};
enum __x_ABI_CWindows_CMedia_CDevices_CSendCommandStatus
{
    SendCommandStatus_Success = 0,
    SendCommandStatus_DeviceNotAvailable = 1,
};
enum __x_ABI_CWindows_CMedia_CDevices_CTelephonyKey
{
    TelephonyKey_D0 = 0,
    TelephonyKey_D1 = 1,
    TelephonyKey_D2 = 2,
    TelephonyKey_D3 = 3,
    TelephonyKey_D4 = 4,
    TelephonyKey_D5 = 5,
    TelephonyKey_D6 = 6,
    TelephonyKey_D7 = 7,
    TelephonyKey_D8 = 8,
    TelephonyKey_D9 = 9,
    TelephonyKey_Star = 10,
    TelephonyKey_Pound = 11,
    TelephonyKey_A = 12,
    TelephonyKey_B = 13,
    TelephonyKey_C = 14,
    TelephonyKey_D = 15,
};
enum __x_ABI_CWindows_CMedia_CDevices_CVideoDeviceControllerGetDevicePropertyStatus
{
    VideoDeviceControllerGetDevicePropertyStatus_Success = 0,
    VideoDeviceControllerGetDevicePropertyStatus_UnknownFailure = 1,
    VideoDeviceControllerGetDevicePropertyStatus_BufferTooSmall = 2,
    VideoDeviceControllerGetDevicePropertyStatus_NotSupported = 3,
    VideoDeviceControllerGetDevicePropertyStatus_DeviceNotAvailable = 4,
    VideoDeviceControllerGetDevicePropertyStatus_MaxPropertyValueSizeTooSmall = 5,
    VideoDeviceControllerGetDevicePropertyStatus_MaxPropertyValueSizeRequired = 6,
};
enum __x_ABI_CWindows_CMedia_CDevices_CVideoDeviceControllerSetDevicePropertyStatus
{
    VideoDeviceControllerSetDevicePropertyStatus_Success = 0,
    VideoDeviceControllerSetDevicePropertyStatus_UnknownFailure = 1,
    VideoDeviceControllerSetDevicePropertyStatus_NotSupported = 2,
    VideoDeviceControllerSetDevicePropertyStatus_InvalidValue = 3,
    VideoDeviceControllerSetDevicePropertyStatus_DeviceNotAvailable = 4,
    VideoDeviceControllerSetDevicePropertyStatus_NotInControl = 5,
};
enum __x_ABI_CWindows_CMedia_CDevices_CVideoTemporalDenoisingMode
{
    VideoTemporalDenoisingMode_Off = 0,
    VideoTemporalDenoisingMode_On = 1,
    VideoTemporalDenoisingMode_Auto = 2,
};
enum __x_ABI_CWindows_CMedia_CDevices_CZoomTransitionMode
{
    ZoomTransitionMode_Auto = 0,
    ZoomTransitionMode_Direct = 1,
    ZoomTransitionMode_Smooth = 2,
};
typedef struct __x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CICallControl * sender
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandlerVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler;
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CICallControl * sender,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandlerVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler;
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CICallControl * sender,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandlerVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler;
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CICallControl * sender,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandlerVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAdvancedPhotoCaptureSettings[] = L"Windows.Media.Devices.IAdvancedPhotoCaptureSettings";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CDevices_CAdvancedPhotoMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Mode )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings * This,
                  __x_ABI_CWindows_CMedia_CDevices_CAdvancedPhotoMode value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettingsVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Mode(This,value) )
    ( (This)->lpVtbl->put_Mode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAdvancedPhotoControl[] = L"Windows.Media.Devices.IAdvancedPhotoControl";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedModes )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CAdvancedPhotoMode * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CDevices_CAdvancedPhotoMode * value
        );
    HRESULT ( STDMETHODCALLTYPE *Configure )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoCaptureSettings * settings
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControlVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Supported(This,value) )
    ( (This)->lpVtbl->get_SupportedModes(This,value) )
    ( (This)->lpVtbl->get_Mode(This,value) )
    ( (This)->lpVtbl->Configure(This,settings) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController[] = L"Windows.Media.Devices.IAdvancedVideoCaptureDeviceController";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetDeviceProperty )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController * This,
                  __RPC__in HSTRING propertyId,
                  __RPC__in_opt IInspectable * propertyValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceProperty )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController * This,
                  __RPC__in HSTRING propertyId,
                           __RPC__deref_out_opt IInspectable * * propertyValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceControllerVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceControllerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetDeviceProperty(This,propertyId,propertyValue) )
    ( (This)->lpVtbl->GetDeviceProperty(This,propertyId,propertyValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController2[] = L"Windows.Media.Devices.IAdvancedVideoCaptureDeviceController2";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LowLagPhotoSequence )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LowLagPhoto )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SceneModeControl )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TorchControl )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CITorchControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FlashControl )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WhiteBalanceControl )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExposureControl )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIExposureControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FocusControl )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExposureCompensationControl )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsoSpeedControl )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RegionsOfInterestControl )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PrimaryUse )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CDevices_CCaptureUse * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PrimaryUse )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2 * This,
                  __x_ABI_CWindows_CMedia_CDevices_CCaptureUse value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2Vtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LowLagPhotoSequence(This,value) )
    ( (This)->lpVtbl->get_LowLagPhoto(This,value) )
    ( (This)->lpVtbl->get_SceneModeControl(This,value) )
    ( (This)->lpVtbl->get_TorchControl(This,value) )
    ( (This)->lpVtbl->get_FlashControl(This,value) )
    ( (This)->lpVtbl->get_WhiteBalanceControl(This,value) )
    ( (This)->lpVtbl->get_ExposureControl(This,value) )
    ( (This)->lpVtbl->get_FocusControl(This,value) )
    ( (This)->lpVtbl->get_ExposureCompensationControl(This,value) )
    ( (This)->lpVtbl->get_IsoSpeedControl(This,value) )
    ( (This)->lpVtbl->get_RegionsOfInterestControl(This,value) )
    ( (This)->lpVtbl->get_PrimaryUse(This,value) )
    ( (This)->lpVtbl->put_PrimaryUse(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController3[] = L"Windows.Media.Devices.IAdvancedVideoCaptureDeviceController3";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_VariablePhotoSequenceController )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CIVariablePhotoSequenceController * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhotoConfirmationControl )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ZoomControl )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIZoomControl * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3Vtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_VariablePhotoSequenceController(This,value) )
    ( (This)->lpVtbl->get_PhotoConfirmationControl(This,value) )
    ( (This)->lpVtbl->get_ZoomControl(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController4[] = L"Windows.Media.Devices.IAdvancedVideoCaptureDeviceController4";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExposurePriorityVideoControl )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DesiredOptimization )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CDevices_CMediaCaptureOptimization * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DesiredOptimization )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4 * This,
                  __x_ABI_CWindows_CMedia_CDevices_CMediaCaptureOptimization value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HdrVideoControl )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OpticalImageStabilizationControl )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AdvancedPhotoControl )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIAdvancedPhotoControl * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4Vtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExposurePriorityVideoControl(This,value) )
    ( (This)->lpVtbl->get_DesiredOptimization(This,value) )
    ( (This)->lpVtbl->put_DesiredOptimization(This,value) )
    ( (This)->lpVtbl->get_HdrVideoControl(This,value) )
    ( (This)->lpVtbl->get_OpticalImageStabilizationControl(This,value) )
    ( (This)->lpVtbl->get_AdvancedPhotoControl(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController5[] = L"Windows.Media.Devices.IAdvancedVideoCaptureDeviceController5";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDevicePropertyById )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5 * This,
                  __RPC__in HSTRING propertyId,
                  __RPC__in_opt __FIReference_1_UINT32 * maxPropertyValueSize,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetDevicePropertyById )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5 * This,
                  __RPC__in HSTRING propertyId,
                  __RPC__in_opt IInspectable * propertyValue,
                           __RPC__out __x_ABI_CWindows_CMedia_CDevices_CVideoDeviceControllerSetDevicePropertyStatus * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDevicePropertyByExtendedId )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5 * This,
                  UINT32 __extendedPropertyIdSize,
                                                     __RPC__in_ecount_full(__extendedPropertyIdSize) BYTE * extendedPropertyId,
                  __RPC__in_opt __FIReference_1_UINT32 * maxPropertyValueSize,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetDevicePropertyByExtendedId )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5 * This,
                  UINT32 __extendedPropertyIdSize,
                                                     __RPC__in_ecount_full(__extendedPropertyIdSize) BYTE * extendedPropertyId,
                  UINT32 __propertyValueSize,
                                                __RPC__in_ecount_full(__propertyValueSize) BYTE * propertyValue,
                           __RPC__out __x_ABI_CWindows_CMedia_CDevices_CVideoDeviceControllerSetDevicePropertyStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5Vtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->GetDevicePropertyById(This,propertyId,maxPropertyValueSize,value) )
    ( (This)->lpVtbl->SetDevicePropertyById(This,propertyId,propertyValue,value) )
    ( (This)->lpVtbl->GetDevicePropertyByExtendedId(This,__extendedPropertyIdSize,extendedPropertyId,maxPropertyValueSize,value) )
    ( (This)->lpVtbl->SetDevicePropertyByExtendedId(This,__extendedPropertyIdSize,extendedPropertyId,__propertyValueSize,propertyValue,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController6[] = L"Windows.Media.Devices.IAdvancedVideoCaptureDeviceController6";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController6Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController6 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController6 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController6 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController6 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController6 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController6 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_VideoTemporalDenoisingControl )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController6 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIVideoTemporalDenoisingControl * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController6Vtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController6
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController6Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_VideoTemporalDenoisingControl(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController6;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAdvancedVideoCaptureDeviceController7[] = L"Windows.Media.Devices.IAdvancedVideoCaptureDeviceController7";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController7Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController7 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController7 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController7 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController7 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController7 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController7 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InfraredTorchControl )(
        __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController7 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIInfraredTorchControl * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController7Vtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController7
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController7Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InfraredTorchControl(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAdvancedVideoCaptureDeviceController7;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAudioDeviceController[] = L"Windows.Media.Devices.IAudioDeviceController";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Muted )(
        __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Muted )(
        __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_VolumePercent )(
        __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VolumePercent )(
        __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController * This,
                           __RPC__out FLOAT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceControllerVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceControllerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Muted(This,value) )
    ( (This)->lpVtbl->get_Muted(This,value) )
    ( (This)->lpVtbl->put_VolumePercent(This,value) )
    ( (This)->lpVtbl->get_VolumePercent(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAudioDeviceModule[] = L"Windows.Media.Devices.IAudioDeviceModule";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ClassId )(
        __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InstanceId )(
        __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MajorVersion )(
        __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinorVersion )(
        __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * This,
                           __RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *SendCommandAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * Command,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CDevices__CModuleCommandResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ClassId(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_InstanceId(This,value) )
    ( (This)->lpVtbl->get_MajorVersion(This,value) )
    ( (This)->lpVtbl->get_MinorVersion(This,value) )
    ( (This)->lpVtbl->SendCommandAsync(This,Command,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAudioDeviceModuleNotificationEventArgs[] = L"Windows.Media.Devices.IAudioDeviceModuleNotificationEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Module )(
        __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModule * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NotificationData )(
        __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Module(This,value) )
    ( (This)->lpVtbl->get_NotificationData(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModuleNotificationEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAudioDeviceModulesManager[] = L"Windows.Media.Devices.IAudioDeviceModulesManager";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_ModuleNotificationReceived )(
        __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CDevices__CAudioDeviceModulesManager_Windows__CMedia__CDevices__CAudioDeviceModuleNotificationEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ModuleNotificationReceived )(
        __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *FindAllById )(
        __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager * This,
                  __RPC__in HSTRING moduleId,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule * * modules
        );
    HRESULT ( STDMETHODCALLTYPE *FindAll )(
        __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CAudioDeviceModule * * modules
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_ModuleNotificationReceived(This,handler,token) )
    ( (This)->lpVtbl->remove_ModuleNotificationReceived(This,token) )
    ( (This)->lpVtbl->FindAllById(This,moduleId,modules) )
    ( (This)->lpVtbl->FindAll(This,modules) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IAudioDeviceModulesManagerFactory[] = L"Windows.Media.Devices.IAudioDeviceModulesManagerFactory";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManager * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,deviceId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceModulesManagerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_ICallControl[] = L"Windows.Media.Devices.ICallControl";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CICallControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CICallControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CICallControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IndicateNewIncomingCall )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
                  boolean enableRinger,
                  __RPC__in HSTRING callerId,
                           __RPC__out UINT64 * callToken
        );
    HRESULT ( STDMETHODCALLTYPE *IndicateNewOutgoingCall )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
                           __RPC__out UINT64 * callToken
        );
    HRESULT ( STDMETHODCALLTYPE *IndicateActiveCall )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
                  UINT64 callToken
        );
    HRESULT ( STDMETHODCALLTYPE *EndCall )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
                  UINT64 callToken
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasRinger )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AnswerRequested )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AnswerRequested )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_HangUpRequested )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_HangUpRequested )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DialRequested )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DialRequested )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_RedialRequested )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_RedialRequested )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_KeypadPressed )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_KeypadPressed )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AudioTransferRequested )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CICallControlEventHandler * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AudioTransferRequested )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControl * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CICallControlVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CICallControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CICallControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IndicateNewIncomingCall(This,enableRinger,callerId,callToken) )
    ( (This)->lpVtbl->IndicateNewOutgoingCall(This,callToken) )
    ( (This)->lpVtbl->IndicateActiveCall(This,callToken) )
    ( (This)->lpVtbl->EndCall(This,callToken) )
    ( (This)->lpVtbl->get_HasRinger(This,value) )
    ( (This)->lpVtbl->add_AnswerRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_AnswerRequested(This,token) )
    ( (This)->lpVtbl->add_HangUpRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_HangUpRequested(This,token) )
    ( (This)->lpVtbl->add_DialRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_DialRequested(This,token) )
    ( (This)->lpVtbl->add_RedialRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_RedialRequested(This,token) )
    ( (This)->lpVtbl->add_KeypadPressed(This,handler,token) )
    ( (This)->lpVtbl->remove_KeypadPressed(This,token) )
    ( (This)->lpVtbl->add_AudioTransferRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_AudioTransferRequested(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CICallControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_ICallControlStatics[] = L"Windows.Media.Devices.ICallControlStatics";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CICallControlStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CICallControlStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CICallControlStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CICallControlStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CICallControlStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CICallControlStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CICallControlStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControlStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CICallControl * * callControl
        );
    HRESULT ( STDMETHODCALLTYPE *FromId )(
        __x_ABI_CWindows_CMedia_CDevices_CICallControlStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CICallControl * * callControl
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CICallControlStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CICallControlStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CICallControlStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,callControl) )
    ( (This)->lpVtbl->FromId(This,deviceId,callControl) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CICallControlStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IDefaultAudioDeviceChangedEventArgs[] = L"Windows.Media.Devices.IDefaultAudioDeviceChangedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Role )(
        __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CDevices_CAudioDeviceRole * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_Role(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIDefaultAudioDeviceChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IDialRequestedEventArgs[] = L"Windows.Media.Devices.IDialRequestedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Handled )(
        __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs * This
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Contact )(
        __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Handled(This) )
    ( (This)->lpVtbl->get_Contact(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIDialRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IExposureCompensationControl[] = L"Windows.Media.Devices.IExposureCompensationControl";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Min )(
        __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Max )(
        __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Step )(
        __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl * This,
                           __RPC__out FLOAT * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetValueAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl * This,
                  FLOAT value,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControlVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Supported(This,value) )
    ( (This)->lpVtbl->get_Min(This,value) )
    ( (This)->lpVtbl->get_Max(This,value) )
    ( (This)->lpVtbl->get_Step(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->SetValueAsync(This,value,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIExposureCompensationControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IExposureControl[] = L"Windows.Media.Devices.IExposureControl";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIExposureControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposureControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposureControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposureControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposureControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposureControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposureControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CIExposureControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Auto )(
        __x_ABI_CWindows_CMedia_CDevices_CIExposureControl * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetAutoAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIExposureControl * This,
                  boolean value,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Min )(
        __x_ABI_CWindows_CMedia_CDevices_CIExposureControl * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Max )(
        __x_ABI_CWindows_CMedia_CDevices_CIExposureControl * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Step )(
        __x_ABI_CWindows_CMedia_CDevices_CIExposureControl * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CIExposureControl * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetValueAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIExposureControl * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan shutterDuration,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIExposureControlVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIExposureControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIExposureControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Supported(This,value) )
    ( (This)->lpVtbl->get_Auto(This,value) )
    ( (This)->lpVtbl->SetAutoAsync(This,value,asyncInfo) )
    ( (This)->lpVtbl->get_Min(This,value) )
    ( (This)->lpVtbl->get_Max(This,value) )
    ( (This)->lpVtbl->get_Step(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->SetValueAsync(This,shutterDuration,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIExposureControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IExposurePriorityVideoControl[] = L"Windows.Media.Devices.IExposurePriorityVideoControl";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
        __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
        __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControlVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Supported(This,value) )
    ( (This)->lpVtbl->get_Enabled(This,value) )
    ( (This)->lpVtbl->put_Enabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIExposurePriorityVideoControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IFlashControl[] = L"Windows.Media.Devices.IFlashControl";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIFlashControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PowerSupported )(
        __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RedEyeReductionSupported )(
        __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
        __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
        __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Auto )(
        __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Auto )(
        __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RedEyeReduction )(
        __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RedEyeReduction )(
        __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PowerPercent )(
        __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PowerPercent )(
        __x_ABI_CWindows_CMedia_CDevices_CIFlashControl * This,
                  FLOAT value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIFlashControlVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIFlashControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIFlashControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Supported(This,value) )
    ( (This)->lpVtbl->get_PowerSupported(This,value) )
    ( (This)->lpVtbl->get_RedEyeReductionSupported(This,value) )
    ( (This)->lpVtbl->get_Enabled(This,value) )
    ( (This)->lpVtbl->put_Enabled(This,value) )
    ( (This)->lpVtbl->get_Auto(This,value) )
    ( (This)->lpVtbl->put_Auto(This,value) )
    ( (This)->lpVtbl->get_RedEyeReduction(This,value) )
    ( (This)->lpVtbl->put_RedEyeReduction(This,value) )
    ( (This)->lpVtbl->get_PowerPercent(This,value) )
    ( (This)->lpVtbl->put_PowerPercent(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIFlashControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IFlashControl2[] = L"Windows.Media.Devices.IFlashControl2";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AssistantLightSupported )(
        __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AssistantLightEnabled )(
        __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AssistantLightEnabled )(
        __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2Vtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIFlashControl2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AssistantLightSupported(This,value) )
    ( (This)->lpVtbl->get_AssistantLightEnabled(This,value) )
    ( (This)->lpVtbl->put_AssistantLightEnabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIFlashControl2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IFocusControl[] = L"Windows.Media.Devices.IFocusControl";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIFocusControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedPresets )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CFocusPreset * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Preset )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CDevices_CFocusPreset * value
        );
                    HRESULT ( STDMETHODCALLTYPE *SetPresetAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * This,
                  __x_ABI_CWindows_CMedia_CDevices_CFocusPreset preset,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
                    HRESULT ( STDMETHODCALLTYPE *SetPresetWithCompletionOptionAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * This,
                  __x_ABI_CWindows_CMedia_CDevices_CFocusPreset preset,
                  boolean completeBeforeFocus,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Min )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Max )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Step )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * This,
                           __RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetValueAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * This,
                  UINT32 focus,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *FocusAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIFocusControlVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIFocusControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIFocusControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Supported(This,value) )
    ( (This)->lpVtbl->get_SupportedPresets(This,value) )
    ( (This)->lpVtbl->get_Preset(This,value) )
    ( (This)->lpVtbl->SetPresetAsync(This,preset,asyncInfo) )
    ( (This)->lpVtbl->SetPresetWithCompletionOptionAsync(This,preset,completeBeforeFocus,asyncInfo) )
    ( (This)->lpVtbl->get_Min(This,value) )
    ( (This)->lpVtbl->get_Max(This,value) )
    ( (This)->lpVtbl->get_Step(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->SetValueAsync(This,focus,asyncInfo) )
    ( (This)->lpVtbl->FocusAsync(This,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIFocusControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IFocusControl2[] = L"Windows.Media.Devices.IFocusControl2";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FocusChangedSupported )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WaitForFocusSupported )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedFocusModes )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CFocusMode * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedFocusDistances )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CManualFocusDistance * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedFocusRanges )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CAutoFocusRange * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CDevices_CFocusMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FocusState )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CDevices_CMediaCaptureFocusState * value
        );
    HRESULT ( STDMETHODCALLTYPE *UnlockAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *LockAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *Configure )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * settings
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2Vtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIFocusControl2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FocusChangedSupported(This,value) )
    ( (This)->lpVtbl->get_WaitForFocusSupported(This,value) )
    ( (This)->lpVtbl->get_SupportedFocusModes(This,value) )
    ( (This)->lpVtbl->get_SupportedFocusDistances(This,value) )
    ( (This)->lpVtbl->get_SupportedFocusRanges(This,value) )
    ( (This)->lpVtbl->get_Mode(This,value) )
    ( (This)->lpVtbl->get_FocusState(This,value) )
    ( (This)->lpVtbl->UnlockAsync(This,asyncInfo) )
    ( (This)->lpVtbl->LockAsync(This,asyncInfo) )
    ( (This)->lpVtbl->Configure(This,settings) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIFocusControl2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IFocusSettings[] = L"Windows.Media.Devices.IFocusSettings";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIFocusSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CDevices_CFocusMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Mode )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This,
                  __x_ABI_CWindows_CMedia_CDevices_CFocusMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AutoFocusRange )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CDevices_CAutoFocusRange * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AutoFocusRange )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This,
                  __x_ABI_CWindows_CMedia_CDevices_CAutoFocusRange value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This,
                  __RPC__in_opt __FIReference_1_UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Distance )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Distance )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This,
                  __RPC__in_opt __FIReference_1_Windows__CMedia__CDevices__CManualFocusDistance * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WaitForFocus )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_WaitForFocus )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisableDriverFallback )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DisableDriverFallback )(
        __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIFocusSettingsVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIFocusSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIFocusSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Mode(This,value) )
    ( (This)->lpVtbl->put_Mode(This,value) )
    ( (This)->lpVtbl->get_AutoFocusRange(This,value) )
    ( (This)->lpVtbl->put_AutoFocusRange(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->put_Value(This,value) )
    ( (This)->lpVtbl->get_Distance(This,value) )
    ( (This)->lpVtbl->put_Distance(This,value) )
    ( (This)->lpVtbl->get_WaitForFocus(This,value) )
    ( (This)->lpVtbl->put_WaitForFocus(This,value) )
    ( (This)->lpVtbl->get_DisableDriverFallback(This,value) )
    ( (This)->lpVtbl->put_DisableDriverFallback(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIFocusSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IHdrVideoControl[] = L"Windows.Media.Devices.IHdrVideoControl";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedModes )(
        __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CHdrVideoMode * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CDevices_CHdrVideoMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Mode )(
        __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl * This,
                  __x_ABI_CWindows_CMedia_CDevices_CHdrVideoMode value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControlVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Supported(This,value) )
    ( (This)->lpVtbl->get_SupportedModes(This,value) )
    ( (This)->lpVtbl->get_Mode(This,value) )
    ( (This)->lpVtbl->put_Mode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIHdrVideoControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IInfraredTorchControl[] = L"Windows.Media.Devices.IInfraredTorchControl";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIInfraredTorchControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIInfraredTorchControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIInfraredTorchControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIInfraredTorchControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIInfraredTorchControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIInfraredTorchControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIInfraredTorchControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsSupported )(
        __x_ABI_CWindows_CMedia_CDevices_CIInfraredTorchControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedModes )(
        __x_ABI_CWindows_CMedia_CDevices_CIInfraredTorchControl * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CInfraredTorchMode * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrentMode )(
        __x_ABI_CWindows_CMedia_CDevices_CIInfraredTorchControl * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CDevices_CInfraredTorchMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CurrentMode )(
        __x_ABI_CWindows_CMedia_CDevices_CIInfraredTorchControl * This,
                  __x_ABI_CWindows_CMedia_CDevices_CInfraredTorchMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinPower )(
        __x_ABI_CWindows_CMedia_CDevices_CIInfraredTorchControl * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxPower )(
        __x_ABI_CWindows_CMedia_CDevices_CIInfraredTorchControl * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PowerStep )(
        __x_ABI_CWindows_CMedia_CDevices_CIInfraredTorchControl * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Power )(
        __x_ABI_CWindows_CMedia_CDevices_CIInfraredTorchControl * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Power )(
        __x_ABI_CWindows_CMedia_CDevices_CIInfraredTorchControl * This,
                  INT32 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIInfraredTorchControlVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIInfraredTorchControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIInfraredTorchControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsSupported(This,value) )
    ( (This)->lpVtbl->get_SupportedModes(This,value) )
    ( (This)->lpVtbl->get_CurrentMode(This,value) )
    ( (This)->lpVtbl->put_CurrentMode(This,value) )
    ( (This)->lpVtbl->get_MinPower(This,value) )
    ( (This)->lpVtbl->get_MaxPower(This,value) )
    ( (This)->lpVtbl->get_PowerStep(This,value) )
    ( (This)->lpVtbl->get_Power(This,value) )
    ( (This)->lpVtbl->put_Power(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIInfraredTorchControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IIsoSpeedControl[] = L"Windows.Media.Devices.IIsoSpeedControl";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl * This,
                           __RPC__out boolean * value
        );
    DEPRECATED("SupportedPresets may not be available in future versions of Windows Phone. Starting with Windows Phone 8.1, use SetAutoAsync, Auto, SetValueAsync, and Value instead")
                               HRESULT ( STDMETHODCALLTYPE *get_SupportedPresets )(
        __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CIsoSpeedPreset * * value
        );
    DEPRECATED("Preset may not be available in future versions of Windows Phone. Starting with Windows Phone 8.1, use SetAutoAsync, Auto, SetValueAsync, and Value instead")
                               HRESULT ( STDMETHODCALLTYPE *get_Preset )(
        __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CDevices_CIsoSpeedPreset * value
        );
    DEPRECATED("SetPresetAsync may not be available in future versions of Windows Phone. Starting with Windows Phone 8.1, use SetAutoAsync, Auto, SetValueAsync, and Value instead")
                      HRESULT ( STDMETHODCALLTYPE *SetPresetAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl * This,
                  __x_ABI_CWindows_CMedia_CDevices_CIsoSpeedPreset preset,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControlVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Supported(This,value) )
DEPRECATED("SupportedPresets may not be available in future versions of Windows Phone. Starting with Windows Phone 8.1, use SetAutoAsync, Auto, SetValueAsync, and Value instead")
    ( (This)->lpVtbl->get_SupportedPresets(This,value) )
DEPRECATED("Preset may not be available in future versions of Windows Phone. Starting with Windows Phone 8.1, use SetAutoAsync, Auto, SetValueAsync, and Value instead")
    ( (This)->lpVtbl->get_Preset(This,value) )
DEPRECATED("SetPresetAsync may not be available in future versions of Windows Phone. Starting with Windows Phone 8.1, use SetAutoAsync, Auto, SetValueAsync, and Value instead")
    ( (This)->lpVtbl->SetPresetAsync(This,preset,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IIsoSpeedControl2[] = L"Windows.Media.Devices.IIsoSpeedControl2";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Min )(
        __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2 * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Max )(
        __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2 * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Step )(
        __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2 * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2 * This,
                           __RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetValueAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2 * This,
                  UINT32 isoSpeed,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Auto )(
        __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2 * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetAutoAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2Vtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Min(This,value) )
    ( (This)->lpVtbl->get_Max(This,value) )
    ( (This)->lpVtbl->get_Step(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->SetValueAsync(This,isoSpeed,asyncInfo) )
    ( (This)->lpVtbl->get_Auto(This,value) )
    ( (This)->lpVtbl->SetAutoAsync(This,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIIsoSpeedControl2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IKeypadPressedEventArgs[] = L"Windows.Media.Devices.IKeypadPressedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TelephonyKey )(
        __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CDevices_CTelephonyKey * telephonyKey
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TelephonyKey(This,telephonyKey) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIKeypadPressedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_ILowLagPhotoControl[] = L"Windows.Media.Devices.ILowLagPhotoControl";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetHighestConcurrentFrameRate )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * captureProperties,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentFrameRate )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ThumbnailEnabled )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ThumbnailEnabled )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ThumbnailFormat )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CMediaThumbnailFormat * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ThumbnailFormat )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl * This,
                  __x_ABI_CWindows_CMedia_CMediaProperties_CMediaThumbnailFormat value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DesiredThumbnailSize )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DesiredThumbnailSize )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HardwareAcceleratedThumbnailSupported )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControlVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetHighestConcurrentFrameRate(This,captureProperties,value) )
    ( (This)->lpVtbl->GetCurrentFrameRate(This,value) )
    ( (This)->lpVtbl->get_ThumbnailEnabled(This,value) )
    ( (This)->lpVtbl->put_ThumbnailEnabled(This,value) )
    ( (This)->lpVtbl->get_ThumbnailFormat(This,value) )
    ( (This)->lpVtbl->put_ThumbnailFormat(This,value) )
    ( (This)->lpVtbl->get_DesiredThumbnailSize(This,value) )
    ( (This)->lpVtbl->put_DesiredThumbnailSize(This,value) )
    ( (This)->lpVtbl->get_HardwareAcceleratedThumbnailSupported(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_ILowLagPhotoSequenceControl[] = L"Windows.Media.Devices.ILowLagPhotoSequenceControl";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxPastPhotos )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxPhotosPerSecond )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PastPhotoLimit )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PastPhotoLimit )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhotosPerSecondLimit )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PhotosPerSecondLimit )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
                  FLOAT value
        );
    HRESULT ( STDMETHODCALLTYPE *GetHighestConcurrentFrameRate )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * captureProperties,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentFrameRate )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ThumbnailEnabled )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ThumbnailEnabled )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ThumbnailFormat )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CMediaThumbnailFormat * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ThumbnailFormat )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
                  __x_ABI_CWindows_CMedia_CMediaProperties_CMediaThumbnailFormat value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DesiredThumbnailSize )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DesiredThumbnailSize )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HardwareAcceleratedThumbnailSupported )(
        __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControlVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Supported(This,value) )
    ( (This)->lpVtbl->get_MaxPastPhotos(This,value) )
    ( (This)->lpVtbl->get_MaxPhotosPerSecond(This,value) )
    ( (This)->lpVtbl->get_PastPhotoLimit(This,value) )
    ( (This)->lpVtbl->put_PastPhotoLimit(This,value) )
    ( (This)->lpVtbl->get_PhotosPerSecondLimit(This,value) )
    ( (This)->lpVtbl->put_PhotosPerSecondLimit(This,value) )
    ( (This)->lpVtbl->GetHighestConcurrentFrameRate(This,captureProperties,value) )
    ( (This)->lpVtbl->GetCurrentFrameRate(This,value) )
    ( (This)->lpVtbl->get_ThumbnailEnabled(This,value) )
    ( (This)->lpVtbl->put_ThumbnailEnabled(This,value) )
    ( (This)->lpVtbl->get_ThumbnailFormat(This,value) )
    ( (This)->lpVtbl->put_ThumbnailFormat(This,value) )
    ( (This)->lpVtbl->get_DesiredThumbnailSize(This,value) )
    ( (This)->lpVtbl->put_DesiredThumbnailSize(This,value) )
    ( (This)->lpVtbl->get_HardwareAcceleratedThumbnailSupported(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CILowLagPhotoSequenceControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IMediaDeviceControl[] = L"Windows.Media.Devices.IMediaDeviceControl";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Capabilities )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetValue )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * This,
                   __RPC__out DOUBLE * value,
                           __RPC__out boolean * succeeded
        );
    HRESULT ( STDMETHODCALLTYPE *TrySetValue )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * This,
                  DOUBLE value,
                           __RPC__out boolean * succeeded
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetAuto )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * This,
                   __RPC__out boolean * value,
                           __RPC__out boolean * succeeded
        );
    HRESULT ( STDMETHODCALLTYPE *TrySetAuto )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * This,
                  boolean value,
                           __RPC__out boolean * succeeded
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Capabilities(This,value) )
    ( (This)->lpVtbl->TryGetValue(This,value,succeeded) )
    ( (This)->lpVtbl->TrySetValue(This,value,succeeded) )
    ( (This)->lpVtbl->TryGetAuto(This,value,succeeded) )
    ( (This)->lpVtbl->TrySetAuto(This,value,succeeded) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IMediaDeviceControlCapabilities[] = L"Windows.Media.Devices.IMediaDeviceControlCapabilities";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Min )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Max )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Step )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Default )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AutoModeSupported )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilitiesVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilitiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Supported(This,value) )
    ( (This)->lpVtbl->get_Min(This,value) )
    ( (This)->lpVtbl->get_Max(This,value) )
    ( (This)->lpVtbl->get_Step(This,value) )
    ( (This)->lpVtbl->get_Default(This,value) )
    ( (This)->lpVtbl->get_AutoModeSupported(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControlCapabilities;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IMediaDeviceController[] = L"Windows.Media.Devices.IMediaDeviceController";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAvailableMediaStreamProperties )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController * This,
                  __x_ABI_CWindows_CMedia_CCapture_CMediaStreamType mediaStreamType,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetMediaStreamProperties )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController * This,
                  __x_ABI_CWindows_CMedia_CCapture_CMediaStreamType mediaStreamType,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetMediaStreamPropertiesAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController * This,
                  __x_ABI_CWindows_CMedia_CCapture_CMediaStreamType mediaStreamType,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * mediaEncodingProperties,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControllerVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControllerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAvailableMediaStreamProperties(This,mediaStreamType,value) )
    ( (This)->lpVtbl->GetMediaStreamProperties(This,mediaStreamType,value) )
    ( (This)->lpVtbl->SetMediaStreamPropertiesAsync(This,mediaStreamType,mediaEncodingProperties,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceController;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IMediaDeviceStatics[] = L"Windows.Media.Devices.IMediaDeviceStatics";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAudioCaptureSelector )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics * This,
                           __RPC__deref_out_opt HSTRING * selector
        );
    HRESULT ( STDMETHODCALLTYPE *GetAudioRenderSelector )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics * This,
                           __RPC__deref_out_opt HSTRING * selector
        );
    HRESULT ( STDMETHODCALLTYPE *GetVideoCaptureSelector )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics * This,
                           __RPC__deref_out_opt HSTRING * selector
        );
    HRESULT ( STDMETHODCALLTYPE *GetDefaultAudioCaptureId )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics * This,
                  __x_ABI_CWindows_CMedia_CDevices_CAudioDeviceRole role,
                           __RPC__deref_out_opt HSTRING * deviceId
        );
    HRESULT ( STDMETHODCALLTYPE *GetDefaultAudioRenderId )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics * This,
                  __x_ABI_CWindows_CMedia_CDevices_CAudioDeviceRole role,
                           __RPC__deref_out_opt HSTRING * deviceId
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DefaultAudioCaptureDeviceChanged )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics * This,
                  __RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioCaptureDeviceChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DefaultAudioCaptureDeviceChanged )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DefaultAudioRenderDeviceChanged )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics * This,
                  __RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CMedia__CDevices__CDefaultAudioRenderDeviceChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DefaultAudioRenderDeviceChanged )(
        __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics * This,
                  EventRegistrationToken cookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAudioCaptureSelector(This,selector) )
    ( (This)->lpVtbl->GetAudioRenderSelector(This,selector) )
    ( (This)->lpVtbl->GetVideoCaptureSelector(This,selector) )
    ( (This)->lpVtbl->GetDefaultAudioCaptureId(This,role,deviceId) )
    ( (This)->lpVtbl->GetDefaultAudioRenderId(This,role,deviceId) )
    ( (This)->lpVtbl->add_DefaultAudioCaptureDeviceChanged(This,handler,cookie) )
    ( (This)->lpVtbl->remove_DefaultAudioCaptureDeviceChanged(This,cookie) )
    ( (This)->lpVtbl->add_DefaultAudioRenderDeviceChanged(This,handler,cookie) )
    ( (This)->lpVtbl->remove_DefaultAudioRenderDeviceChanged(This,cookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IModuleCommandResult[] = L"Windows.Media.Devices.IModuleCommandResult";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CDevices_CSendCommandStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Result )(
        __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResultVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_Result(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIModuleCommandResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IOpticalImageStabilizationControl[] = L"Windows.Media.Devices.IOpticalImageStabilizationControl";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedModes )(
        __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__COpticalImageStabilizationMode * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CDevices_COpticalImageStabilizationMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Mode )(
        __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl * This,
                  __x_ABI_CWindows_CMedia_CDevices_COpticalImageStabilizationMode value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControlVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Supported(This,value) )
    ( (This)->lpVtbl->get_SupportedModes(This,value) )
    ( (This)->lpVtbl->get_Mode(This,value) )
    ( (This)->lpVtbl->put_Mode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIOpticalImageStabilizationControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IPhotoConfirmationControl[] = L"Windows.Media.Devices.IPhotoConfirmationControl";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl * This,
                           __RPC__out boolean * pbSupported
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
        __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
        __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PixelFormat )(
        __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CMediaPixelFormat * format
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PixelFormat )(
        __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl * This,
                  __x_ABI_CWindows_CMedia_CMediaProperties_CMediaPixelFormat format
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControlVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Supported(This,pbSupported) )
    ( (This)->lpVtbl->get_Enabled(This,value) )
    ( (This)->lpVtbl->put_Enabled(This,value) )
    ( (This)->lpVtbl->get_PixelFormat(This,format) )
    ( (This)->lpVtbl->put_PixelFormat(This,format) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIPhotoConfirmationControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IRedialRequestedEventArgs[] = L"Windows.Media.Devices.IRedialRequestedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Handled )(
        __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Handled(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIRedialRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IRegionOfInterest[] = L"Windows.Media.Devices.IRegionOfInterest";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AutoFocusEnabled )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AutoFocusEnabled )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AutoWhiteBalanceEnabled )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AutoWhiteBalanceEnabled )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AutoExposureEnabled )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AutoExposureEnabled )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Bounds )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Bounds )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest * This,
                  __x_ABI_CWindows_CFoundation_CRect value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterestVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AutoFocusEnabled(This,value) )
    ( (This)->lpVtbl->put_AutoFocusEnabled(This,value) )
    ( (This)->lpVtbl->get_AutoWhiteBalanceEnabled(This,value) )
    ( (This)->lpVtbl->put_AutoWhiteBalanceEnabled(This,value) )
    ( (This)->lpVtbl->get_AutoExposureEnabled(This,value) )
    ( (This)->lpVtbl->put_AutoExposureEnabled(This,value) )
    ( (This)->lpVtbl->get_Bounds(This,value) )
    ( (This)->lpVtbl->put_Bounds(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IRegionOfInterest2[] = L"Windows.Media.Devices.IRegionOfInterest2";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CDevices_CRegionOfInterestType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Type )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2 * This,
                  __x_ABI_CWindows_CMedia_CDevices_CRegionOfInterestType value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BoundsNormalized )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BoundsNormalized )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Weight )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2 * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Weight )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2 * This,
                  UINT32 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2Vtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Type(This,value) )
    ( (This)->lpVtbl->put_Type(This,value) )
    ( (This)->lpVtbl->get_BoundsNormalized(This,value) )
    ( (This)->lpVtbl->put_BoundsNormalized(This,value) )
    ( (This)->lpVtbl->get_Weight(This,value) )
    ( (This)->lpVtbl->put_Weight(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIRegionOfInterest2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IRegionsOfInterestControl[] = L"Windows.Media.Devices.IRegionsOfInterestControl";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MaxRegions )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl * This,
                           __RPC__out UINT32 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *SetRegionsAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl * This,
                  __RPC__in_opt __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest * regions,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
                    HRESULT ( STDMETHODCALLTYPE *SetRegionsWithLockAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl * This,
                  __RPC__in_opt __FIIterable_1_Windows__CMedia__CDevices__CRegionOfInterest * regions,
                  boolean lockValues,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *ClearRegionsAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AutoFocusSupported )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AutoWhiteBalanceSupported )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AutoExposureSupported )(
        __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControlVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MaxRegions(This,value) )
    ( (This)->lpVtbl->SetRegionsAsync(This,regions,asyncInfo) )
    ( (This)->lpVtbl->SetRegionsWithLockAsync(This,regions,lockValues,asyncInfo) )
    ( (This)->lpVtbl->ClearRegionsAsync(This,asyncInfo) )
    ( (This)->lpVtbl->get_AutoFocusSupported(This,value) )
    ( (This)->lpVtbl->get_AutoWhiteBalanceSupported(This,value) )
    ( (This)->lpVtbl->get_AutoExposureSupported(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIRegionsOfInterestControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_ISceneModeControl[] = L"Windows.Media.Devices.ISceneModeControl";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CISceneModeControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SupportedModes )(
        __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CCaptureSceneMode * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CDevices_CCaptureSceneMode * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetValueAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl * This,
                  __x_ABI_CWindows_CMedia_CDevices_CCaptureSceneMode sceneMode,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CISceneModeControlVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CISceneModeControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CISceneModeControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SupportedModes(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->SetValueAsync(This,sceneMode,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CISceneModeControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_ITorchControl[] = L"Windows.Media.Devices.ITorchControl";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CITorchControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CITorchControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CITorchControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CITorchControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CITorchControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CITorchControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CITorchControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CITorchControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PowerSupported )(
        __x_ABI_CWindows_CMedia_CDevices_CITorchControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
        __x_ABI_CWindows_CMedia_CDevices_CITorchControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
        __x_ABI_CWindows_CMedia_CDevices_CITorchControl * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PowerPercent )(
        __x_ABI_CWindows_CMedia_CDevices_CITorchControl * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PowerPercent )(
        __x_ABI_CWindows_CMedia_CDevices_CITorchControl * This,
                  FLOAT value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CITorchControlVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CITorchControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CITorchControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Supported(This,value) )
    ( (This)->lpVtbl->get_PowerSupported(This,value) )
    ( (This)->lpVtbl->get_Enabled(This,value) )
    ( (This)->lpVtbl->put_Enabled(This,value) )
    ( (This)->lpVtbl->get_PowerPercent(This,value) )
    ( (This)->lpVtbl->put_PowerPercent(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CITorchControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IVideoDeviceController[] = L"Windows.Media.Devices.IVideoDeviceController";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Brightness )(
        __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Contrast )(
        __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Hue )(
        __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WhiteBalance )(
        __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BacklightCompensation )(
        __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Pan )(
        __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Tilt )(
        __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Zoom )(
        __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Roll )(
        __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Exposure )(
        __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Focus )(
        __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIMediaDeviceControl * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TrySetPowerlineFrequency )(
        __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This,
                  __x_ABI_CWindows_CMedia_CCapture_CPowerlineFrequency value,
                           __RPC__out boolean * succeeded
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetPowerlineFrequency )(
        __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * This,
                   __RPC__out __x_ABI_CWindows_CMedia_CCapture_CPowerlineFrequency * value,
                           __RPC__out boolean * succeeded
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Brightness(This,value) )
    ( (This)->lpVtbl->get_Contrast(This,value) )
    ( (This)->lpVtbl->get_Hue(This,value) )
    ( (This)->lpVtbl->get_WhiteBalance(This,value) )
    ( (This)->lpVtbl->get_BacklightCompensation(This,value) )
    ( (This)->lpVtbl->get_Pan(This,value) )
    ( (This)->lpVtbl->get_Tilt(This,value) )
    ( (This)->lpVtbl->get_Zoom(This,value) )
    ( (This)->lpVtbl->get_Roll(This,value) )
    ( (This)->lpVtbl->get_Exposure(This,value) )
    ( (This)->lpVtbl->get_Focus(This,value) )
    ( (This)->lpVtbl->TrySetPowerlineFrequency(This,value,succeeded) )
    ( (This)->lpVtbl->TryGetPowerlineFrequency(This,value,succeeded) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IVideoDeviceControllerGetDevicePropertyResult[] = L"Windows.Media.Devices.IVideoDeviceControllerGetDevicePropertyResult";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CDevices_CVideoDeviceControllerGetDevicePropertyStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResultVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceControllerGetDevicePropertyResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IVideoTemporalDenoisingControl[] = L"Windows.Media.Devices.IVideoTemporalDenoisingControl";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIVideoTemporalDenoisingControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIVideoTemporalDenoisingControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIVideoTemporalDenoisingControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIVideoTemporalDenoisingControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIVideoTemporalDenoisingControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIVideoTemporalDenoisingControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIVideoTemporalDenoisingControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CIVideoTemporalDenoisingControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedModes )(
        __x_ABI_CWindows_CMedia_CDevices_CIVideoTemporalDenoisingControl * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CVideoTemporalDenoisingMode * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CMedia_CDevices_CIVideoTemporalDenoisingControl * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CDevices_CVideoTemporalDenoisingMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Mode )(
        __x_ABI_CWindows_CMedia_CDevices_CIVideoTemporalDenoisingControl * This,
                  __x_ABI_CWindows_CMedia_CDevices_CVideoTemporalDenoisingMode value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIVideoTemporalDenoisingControlVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIVideoTemporalDenoisingControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIVideoTemporalDenoisingControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Supported(This,value) )
    ( (This)->lpVtbl->get_SupportedModes(This,value) )
    ( (This)->lpVtbl->get_Mode(This,value) )
    ( (This)->lpVtbl->put_Mode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIVideoTemporalDenoisingControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IWhiteBalanceControl[] = L"Windows.Media.Devices.IWhiteBalanceControl";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Preset )(
        __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CDevices_CColorTemperaturePreset * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPresetAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl * This,
                  __x_ABI_CWindows_CMedia_CDevices_CColorTemperaturePreset preset,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Min )(
        __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Max )(
        __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Step )(
        __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl * This,
                           __RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetValueAsync )(
        __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl * This,
                  UINT32 temperature,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControlVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Supported(This,value) )
    ( (This)->lpVtbl->get_Preset(This,value) )
    ( (This)->lpVtbl->SetPresetAsync(This,preset,asyncInfo) )
    ( (This)->lpVtbl->get_Min(This,value) )
    ( (This)->lpVtbl->get_Max(This,value) )
    ( (This)->lpVtbl->get_Step(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->SetValueAsync(This,temperature,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIWhiteBalanceControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IZoomControl[] = L"Windows.Media.Devices.IZoomControl";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIZoomControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Supported )(
        __x_ABI_CWindows_CMedia_CDevices_CIZoomControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Min )(
        __x_ABI_CWindows_CMedia_CDevices_CIZoomControl * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Max )(
        __x_ABI_CWindows_CMedia_CDevices_CIZoomControl * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Step )(
        __x_ABI_CWindows_CMedia_CDevices_CIZoomControl * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CIZoomControl * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CIZoomControl * This,
                  FLOAT value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIZoomControlVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIZoomControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIZoomControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Supported(This,value) )
    ( (This)->lpVtbl->get_Min(This,value) )
    ( (This)->lpVtbl->get_Max(This,value) )
    ( (This)->lpVtbl->get_Step(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->put_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIZoomControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IZoomControl2[] = L"Windows.Media.Devices.IZoomControl2";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SupportedModes )(
        __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2 * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CZoomTransitionMode * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CDevices_CZoomTransitionMode * value
        );
    HRESULT ( STDMETHODCALLTYPE *Configure )(
        __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings * settings
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2Vtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIZoomControl2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SupportedModes(This,value) )
    ( (This)->lpVtbl->get_Mode(This,value) )
    ( (This)->lpVtbl->Configure(This,settings) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIZoomControl2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Devices_IZoomSettings[] = L"Windows.Media.Devices.IZoomSettings";
typedef struct __x_ABI_CWindows_CMedia_CDevices_CIZoomSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CDevices_CZoomTransitionMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Mode )(
        __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings * This,
                  __x_ABI_CWindows_CMedia_CDevices_CZoomTransitionMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings * This,
                  FLOAT value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CDevices_CIZoomSettingsVtbl;
interface __x_ABI_CWindows_CMedia_CDevices_CIZoomSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CDevices_CIZoomSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Mode(This,value) )
    ( (This)->lpVtbl->put_Mode(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->put_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CDevices_CIZoomSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_AdvancedPhotoCaptureSettings[] = L"Windows.Media.Devices.AdvancedPhotoCaptureSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_AdvancedPhotoControl[] = L"Windows.Media.Devices.AdvancedPhotoControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_AudioDeviceController[] = L"Windows.Media.Devices.AudioDeviceController";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_AudioDeviceModule[] = L"Windows.Media.Devices.AudioDeviceModule";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_AudioDeviceModuleNotificationEventArgs[] = L"Windows.Media.Devices.AudioDeviceModuleNotificationEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_AudioDeviceModulesManager[] = L"Windows.Media.Devices.AudioDeviceModulesManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_CallControl[] = L"Windows.Media.Devices.CallControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_DefaultAudioCaptureDeviceChangedEventArgs[] = L"Windows.Media.Devices.DefaultAudioCaptureDeviceChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_DefaultAudioRenderDeviceChangedEventArgs[] = L"Windows.Media.Devices.DefaultAudioRenderDeviceChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_DialRequestedEventArgs[] = L"Windows.Media.Devices.DialRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_ExposureCompensationControl[] = L"Windows.Media.Devices.ExposureCompensationControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_ExposureControl[] = L"Windows.Media.Devices.ExposureControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_ExposurePriorityVideoControl[] = L"Windows.Media.Devices.ExposurePriorityVideoControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_FlashControl[] = L"Windows.Media.Devices.FlashControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_FocusControl[] = L"Windows.Media.Devices.FocusControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_FocusSettings[] = L"Windows.Media.Devices.FocusSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_HdrVideoControl[] = L"Windows.Media.Devices.HdrVideoControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_InfraredTorchControl[] = L"Windows.Media.Devices.InfraredTorchControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_IsoSpeedControl[] = L"Windows.Media.Devices.IsoSpeedControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_KeypadPressedEventArgs[] = L"Windows.Media.Devices.KeypadPressedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_LowLagPhotoControl[] = L"Windows.Media.Devices.LowLagPhotoControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_LowLagPhotoSequenceControl[] = L"Windows.Media.Devices.LowLagPhotoSequenceControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_MediaDevice[] = L"Windows.Media.Devices.MediaDevice";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_MediaDeviceControl[] = L"Windows.Media.Devices.MediaDeviceControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_MediaDeviceControlCapabilities[] = L"Windows.Media.Devices.MediaDeviceControlCapabilities";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_ModuleCommandResult[] = L"Windows.Media.Devices.ModuleCommandResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_OpticalImageStabilizationControl[] = L"Windows.Media.Devices.OpticalImageStabilizationControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_PhotoConfirmationControl[] = L"Windows.Media.Devices.PhotoConfirmationControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_RedialRequestedEventArgs[] = L"Windows.Media.Devices.RedialRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_RegionOfInterest[] = L"Windows.Media.Devices.RegionOfInterest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_RegionsOfInterestControl[] = L"Windows.Media.Devices.RegionsOfInterestControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_SceneModeControl[] = L"Windows.Media.Devices.SceneModeControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_TorchControl[] = L"Windows.Media.Devices.TorchControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_VideoDeviceController[] = L"Windows.Media.Devices.VideoDeviceController";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_VideoDeviceControllerGetDevicePropertyResult[] = L"Windows.Media.Devices.VideoDeviceControllerGetDevicePropertyResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_VideoTemporalDenoisingControl[] = L"Windows.Media.Devices.VideoTemporalDenoisingControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_WhiteBalanceControl[] = L"Windows.Media.Devices.WhiteBalanceControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_ZoomControl[] = L"Windows.Media.Devices.ZoomControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Devices_ZoomSettings[] = L"Windows.Media.Devices.ZoomSettings";
       
       
#pragma clang diagnostic pop
