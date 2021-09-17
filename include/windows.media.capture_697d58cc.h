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
#include "Windows.Graphics.DirectX.Direct3D11.h"
#include "Windows.Graphics.Imaging.h"
#include "Windows.Media.h"
#include "Windows.Media.Capture.Core.h"
#include "Windows.Media.Capture.Frames.h"
#include "Windows.Media.Core.h"
#include "Windows.Media.Devices.h"
#include "Windows.Media.Effects.h"
#include "Windows.Media.MediaProperties.h"
#include "Windows.Security.Authentication.Web.h"
#include "Windows.Storage.h"
#include "Windows.Storage.Streams.h"
#include "Windows.System.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFailedEventHandler __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFailedEventHandler;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIRecordLimitationExceededEventHandler __x_ABI_CWindows_CMedia_CCapture_CIRecordLimitationExceededEventHandler;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAdvancedCapturedPhoto __x_ABI_CWindows_CMedia_CCapture_CIAdvancedCapturedPhoto;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAdvancedCapturedPhoto2 __x_ABI_CWindows_CMedia_CCapture_CIAdvancedCapturedPhoto2;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAdvancedPhotoCapture __x_ABI_CWindows_CMedia_CCapture_CIAdvancedPhotoCapture;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService2 __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService2;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo2 __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo2;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo2 __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo2;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastCameraCaptureStateChangedEventArgs __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastCameraCaptureStateChangedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastHeartbeatRequestedEventArgs __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastHeartbeatRequestedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastManagerStatics __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastManagerStatics;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastMicrophoneCaptureStateChangedEventArgs __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastMicrophoneCaptureStateChangedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugIn __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugIn;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInManager __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInManager;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInManagerStatics __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInManagerStatics;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInStateChangedEventArgs __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInStateChangedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreview __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreview;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStateChangedEventArgs __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStateChangedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamReader __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamReader;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamVideoFrame __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamVideoFrame;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamVideoHeader __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamVideoHeader;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastProviderSettings __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastProviderSettings;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastServices __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastServices;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastSignInStateChangedEventArgs __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastSignInStateChangedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioFrame __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioFrame;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioHeader __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioHeader;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamReader __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamReader;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamStateChangedEventArgs __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamStateChangedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoFrame __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoFrame;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoHeader __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoHeader;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastTriggerDetails __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastTriggerDetails;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastViewerCountChangedEventArgs __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastViewerCountChangedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppCapture __x_ABI_CWindows_CMedia_CCapture_CIAppCapture;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys2 __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys2;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys3 __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys3;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureDurationGeneratedEventArgs __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureDurationGeneratedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureFileGeneratedEventArgs __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureFileGeneratedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureManagerStatics __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureManagerStatics;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMetadataWriter __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMetadataWriter;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMicrophoneCaptureStateChangedEventArgs __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMicrophoneCaptureStateChangedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordOperation __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordOperation;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordingStateChangedEventArgs __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordingStateChangedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureServices __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureServices;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings2 __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings2;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings3 __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings3;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings4 __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings4;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings5 __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings5;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureState __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureState;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureStatics __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureStatics;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureStatics2 __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureStatics2;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUI __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUI;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CICameraOptionsUIStatics __x_ABI_CWindows_CMedia_CCapture_CICameraOptionsUIStatics;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame2 __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame2;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues2 __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues2;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameWithSoftwareBitmap __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameWithSoftwareBitmap;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CICapturedPhoto __x_ABI_CWindows_CMedia_CCapture_CICapturedPhoto;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIGameBarServices __x_ABI_CWindows_CMedia_CCapture_CIGameBarServices;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesCommandEventArgs __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesCommandEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManager __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManager;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManagerGameBarServicesCreatedEventArgs __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManagerGameBarServicesCreatedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManagerStatics __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManagerStatics;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesTargetInfo __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesTargetInfo;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording2 __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording2;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording3 __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording3;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoCapture __x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoCapture;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoSequenceCapture __x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoSequenceCapture;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture2 __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture2;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture3 __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture3;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture4 __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture4;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture5 __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture5;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture6 __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture6;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureDeviceExclusiveControlStatusChangedEventArgs __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureDeviceExclusiveControlStatusChangedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFailedEventArgs __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFailedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFocusChangedEventArgs __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFocusChangedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings2 __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings2;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings3 __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings3;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings4 __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings4;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings5 __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings5;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings6 __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings6;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCapturePauseResult __x_ABI_CWindows_CMedia_CCapture_CIMediaCapturePauseResult;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings2 __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings2;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings3 __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings3;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureStatics __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureStatics;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureStopResult __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureStopResult;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoPreview __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoPreview;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile2 __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile2;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription2 __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription2;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIOptionalReferencePhotoCapturedEventArgs __x_ABI_CWindows_CMedia_CCapture_CIOptionalReferencePhotoCapturedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIPhotoCapturedEventArgs __x_ABI_CWindows_CMedia_CCapture_CIPhotoCapturedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIPhotoConfirmationCapturedEventArgs __x_ABI_CWindows_CMedia_CCapture_CIPhotoConfirmationCapturedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIVideoStreamConfiguration __x_ABI_CWindows_CMedia_CCapture_CIVideoStreamConfiguration;
typedef interface __FIIterator_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn __FIIterator_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn;
typedef struct __FIIterator_1_Windows__CMedia__CCapture__CAppBroadcastPlugInVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn * This, __RPC__out __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugIn * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugIn * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCapture__CAppBroadcastPlugInVtbl;
interface __FIIterator_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCapture__CAppBroadcastPlugInVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn __FIIterable_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn;
typedef struct __FIIterable_1_Windows__CMedia__CCapture__CAppBroadcastPlugInVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCapture__CAppBroadcastPlugInVtbl;
interface __FIIterable_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCapture__CAppBroadcastPlugInVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile;
typedef struct __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile * This, __RPC__out __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileVtbl;
interface __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile;
typedef struct __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileVtbl;
interface __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription;
typedef struct __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescriptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This, __RPC__out __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescriptionVtbl;
interface __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescriptionVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription;
typedef struct __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescriptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescriptionVtbl;
interface __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescriptionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn __FIVectorView_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn;
typedef struct __FIVectorView_1_Windows__CMedia__CCapture__CAppBroadcastPlugInVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugIn * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn * This,
                       __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugIn * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugIn * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCapture__CAppBroadcastPlugInVtbl;
interface __FIVectorView_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCapture__CAppBroadcastPlugInVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile;
typedef struct __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile * This,
                       __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileVtbl;
interface __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription;
typedef struct __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescriptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This,
                       __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescriptionVtbl;
interface __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescriptionVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CAdvancedCapturedPhoto __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CAdvancedCapturedPhoto;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CAdvancedCapturedPhoto;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedCapturedPhoto __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedCapturedPhoto;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CAdvancedCapturedPhotoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CAdvancedCapturedPhoto * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CAdvancedCapturedPhoto * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CAdvancedCapturedPhoto * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CAdvancedCapturedPhoto * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedCapturedPhoto *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CAdvancedCapturedPhotoVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CAdvancedCapturedPhoto
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CAdvancedCapturedPhotoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedCapturedPhoto __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedCapturedPhoto;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedCapturedPhoto;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedCapturedPhotoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedCapturedPhoto * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedCapturedPhoto * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedCapturedPhoto * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedCapturedPhoto * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedCapturedPhoto * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedCapturedPhoto * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedCapturedPhoto * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CAdvancedCapturedPhoto *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedCapturedPhoto * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CAdvancedCapturedPhoto **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedCapturedPhoto * This, __RPC__out __x_ABI_CWindows_CMedia_CCapture_CIAdvancedCapturedPhoto * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedCapturedPhotoVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedCapturedPhoto
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedCapturedPhotoVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CAdvancedPhotoCapture __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CAdvancedPhotoCapture;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CAdvancedPhotoCapture;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedPhotoCapture __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedPhotoCapture;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CAdvancedPhotoCaptureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CAdvancedPhotoCapture * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CAdvancedPhotoCapture * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CAdvancedPhotoCapture * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CAdvancedPhotoCapture * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedPhotoCapture *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CAdvancedPhotoCaptureVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CAdvancedPhotoCapture
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CAdvancedPhotoCaptureVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedPhotoCapture __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedPhotoCapture;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedPhotoCapture;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedPhotoCaptureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedPhotoCapture * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedPhotoCapture * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedPhotoCapture * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedPhotoCapture * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedPhotoCapture * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedPhotoCapture * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedPhotoCapture * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CAdvancedPhotoCapture *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedPhotoCapture * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CAdvancedPhotoCapture **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedPhotoCapture * This, __RPC__out __x_ABI_CWindows_CMedia_CCapture_CIAdvancedPhotoCapture * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedPhotoCaptureVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedPhotoCapture
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedPhotoCaptureVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCapturedPhoto __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCapturedPhoto;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCapturedPhoto;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CCapturedPhoto __FIAsyncOperation_1_Windows__CMedia__CCapture__CCapturedPhoto;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCapturedPhotoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCapturedPhoto * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCapturedPhoto * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCapturedPhoto * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCapturedPhoto * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CCapturedPhoto *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCapturedPhotoVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCapturedPhoto
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCapturedPhotoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CCapturedPhoto __FIAsyncOperation_1_Windows__CMedia__CCapture__CCapturedPhoto;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CCapture__CCapturedPhoto;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CCapturedPhotoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CCapturedPhoto * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CCapturedPhoto * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CCapturedPhoto * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CCapturedPhoto * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CCapturedPhoto * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CCapturedPhoto * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CCapturedPhoto * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCapturedPhoto *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CCapturedPhoto * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCapturedPhoto **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CCapturedPhoto * This, __RPC__out __x_ABI_CWindows_CMedia_CCapture_CICapturedPhoto * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CCapture__CCapturedPhotoVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CCapturedPhoto
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CCapturedPhotoVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagMediaRecording __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagMediaRecording;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagMediaRecording;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagMediaRecording __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagMediaRecording;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagMediaRecordingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagMediaRecording * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagMediaRecording * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagMediaRecording * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagMediaRecording * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagMediaRecording *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagMediaRecordingVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagMediaRecording
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagMediaRecordingVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagMediaRecording __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagMediaRecording;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagMediaRecording;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagMediaRecordingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagMediaRecording * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagMediaRecording * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagMediaRecording * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagMediaRecording * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagMediaRecording * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagMediaRecording * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagMediaRecording * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagMediaRecording *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagMediaRecording * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagMediaRecording **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagMediaRecording * This, __RPC__out __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagMediaRecordingVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagMediaRecording
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagMediaRecordingVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagPhotoCapture __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagPhotoCapture;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagPhotoCapture;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoCapture __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoCapture;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagPhotoCaptureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagPhotoCapture * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagPhotoCapture * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagPhotoCapture * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagPhotoCapture * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoCapture *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagPhotoCaptureVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagPhotoCapture
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagPhotoCaptureVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoCapture __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoCapture;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoCapture;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoCaptureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoCapture * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoCapture * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoCapture * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoCapture * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoCapture * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoCapture * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoCapture * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagPhotoCapture *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoCapture * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagPhotoCapture **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoCapture * This, __RPC__out __x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoCapture * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoCaptureVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoCapture
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoCaptureVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagPhotoSequenceCaptureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagPhotoSequenceCaptureVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagPhotoSequenceCaptureVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoSequenceCaptureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture * This, __RPC__out __x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoSequenceCapture * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoSequenceCaptureVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoSequenceCaptureVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CMediaCapturePauseResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CMediaCapturePauseResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CMediaCapturePauseResult;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCapturePauseResult __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCapturePauseResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CMediaCapturePauseResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CMediaCapturePauseResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CMediaCapturePauseResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CMediaCapturePauseResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CMediaCapturePauseResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCapturePauseResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CMediaCapturePauseResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CMediaCapturePauseResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CMediaCapturePauseResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCapturePauseResult __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCapturePauseResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCapturePauseResult;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCapturePauseResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCapturePauseResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCapturePauseResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCapturePauseResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCapturePauseResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCapturePauseResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCapturePauseResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCapturePauseResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CMediaCapturePauseResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCapturePauseResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CMediaCapturePauseResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCapturePauseResult * This, __RPC__out __x_ABI_CWindows_CMedia_CCapture_CIMediaCapturePauseResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCapturePauseResultVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCapturePauseResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCapturePauseResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CMediaCaptureStopResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CMediaCaptureStopResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CMediaCaptureStopResult;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCaptureStopResult __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCaptureStopResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CMediaCaptureStopResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CMediaCaptureStopResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CMediaCaptureStopResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CMediaCaptureStopResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CMediaCaptureStopResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCaptureStopResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CMediaCaptureStopResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CMediaCaptureStopResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CMediaCaptureStopResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCaptureStopResult __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCaptureStopResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCaptureStopResult;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCaptureStopResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCaptureStopResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCaptureStopResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCaptureStopResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCaptureStopResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCaptureStopResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCaptureStopResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCaptureStopResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CMediaCaptureStopResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCaptureStopResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CMediaCaptureStopResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCaptureStopResult * This, __RPC__out __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureStopResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCaptureStopResultVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCaptureStopResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCaptureStopResultVtbl *lpVtbl;
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
struct __x_ABI_CWindows_CMedia_CCapture_CWhiteBalanceGain;
typedef interface __FIReference_1_Windows__CMedia__CCapture__CWhiteBalanceGain __FIReference_1_Windows__CMedia__CCapture__CWhiteBalanceGain;
EXTERN_C const IID IID___FIReference_1_Windows__CMedia__CCapture__CWhiteBalanceGain;
typedef struct __FIReference_1_Windows__CMedia__CCapture__CWhiteBalanceGainVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CMedia__CCapture__CWhiteBalanceGain * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CMedia__CCapture__CWhiteBalanceGain * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CMedia__CCapture__CWhiteBalanceGain * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CMedia__CCapture__CWhiteBalanceGain * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CMedia__CCapture__CWhiteBalanceGain * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CMedia__CCapture__CWhiteBalanceGain * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CMedia__CCapture__CWhiteBalanceGain * This, __RPC__out struct __x_ABI_CWindows_CMedia_CCapture_CWhiteBalanceGain *value);
    END_INTERFACE
} __FIReference_1_Windows__CMedia__CCapture__CWhiteBalanceGainVtbl;
interface __FIReference_1_Windows__CMedia__CCapture__CWhiteBalanceGain
{
    CONST_VTBL struct __FIReference_1_Windows__CMedia__CCapture__CWhiteBalanceGainVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAdvancedPhotoCapture_IInspectable __FITypedEventHandler_2_Windows__CMedia__CCapture__CAdvancedPhotoCapture_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CAdvancedPhotoCapture_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAdvancedPhotoCapture_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAdvancedPhotoCapture_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAdvancedPhotoCapture_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAdvancedPhotoCapture_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAdvancedPhotoCapture_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAdvancedPhotoCapture * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CAdvancedPhotoCapture_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAdvancedPhotoCapture_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAdvancedPhotoCapture_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAdvancedPhotoCapture_Windows__CMedia__CCapture__COptionalReferencePhotoCapturedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCapture__CAdvancedPhotoCapture_Windows__CMedia__CCapture__COptionalReferencePhotoCapturedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CAdvancedPhotoCapture_Windows__CMedia__CCapture__COptionalReferencePhotoCapturedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAdvancedPhotoCapture_Windows__CMedia__CCapture__COptionalReferencePhotoCapturedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAdvancedPhotoCapture_Windows__CMedia__CCapture__COptionalReferencePhotoCapturedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAdvancedPhotoCapture_Windows__CMedia__CCapture__COptionalReferencePhotoCapturedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAdvancedPhotoCapture_Windows__CMedia__CCapture__COptionalReferencePhotoCapturedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAdvancedPhotoCapture_Windows__CMedia__CCapture__COptionalReferencePhotoCapturedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAdvancedPhotoCapture * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIOptionalReferencePhotoCapturedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CAdvancedPhotoCapture_Windows__CMedia__CCapture__COptionalReferencePhotoCapturedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAdvancedPhotoCapture_Windows__CMedia__CCapture__COptionalReferencePhotoCapturedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAdvancedPhotoCapture_Windows__CMedia__CCapture__COptionalReferencePhotoCapturedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundService_IInspectable __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundService_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundService_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundService_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundService_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundService_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundService_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundService_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundService_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundService_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundService_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundService_Windows__CMedia__CCapture__CAppBroadcastHeartbeatRequestedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundService_Windows__CMedia__CCapture__CAppBroadcastHeartbeatRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundService_Windows__CMedia__CCapture__CAppBroadcastHeartbeatRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundService_Windows__CMedia__CCapture__CAppBroadcastHeartbeatRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundService_Windows__CMedia__CCapture__CAppBroadcastHeartbeatRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundService_Windows__CMedia__CCapture__CAppBroadcastHeartbeatRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundService_Windows__CMedia__CCapture__CAppBroadcastHeartbeatRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundService_Windows__CMedia__CCapture__CAppBroadcastHeartbeatRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastHeartbeatRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundService_Windows__CMedia__CCapture__CAppBroadcastHeartbeatRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundService_Windows__CMedia__CCapture__CAppBroadcastHeartbeatRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundService_Windows__CMedia__CCapture__CAppBroadcastHeartbeatRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceSignInInfo_IInspectable __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceSignInInfo_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceSignInInfo_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceSignInInfo_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceSignInInfo_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceSignInInfo_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceSignInInfo_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceSignInInfo_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceSignInInfo_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceSignInInfo_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceSignInInfo_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceSignInInfo_Windows__CMedia__CCapture__CAppBroadcastSignInStateChangedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceSignInInfo_Windows__CMedia__CCapture__CAppBroadcastSignInStateChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceSignInInfo_Windows__CMedia__CCapture__CAppBroadcastSignInStateChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceSignInInfo_Windows__CMedia__CCapture__CAppBroadcastSignInStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceSignInInfo_Windows__CMedia__CCapture__CAppBroadcastSignInStateChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceSignInInfo_Windows__CMedia__CCapture__CAppBroadcastSignInStateChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceSignInInfo_Windows__CMedia__CCapture__CAppBroadcastSignInStateChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceSignInInfo_Windows__CMedia__CCapture__CAppBroadcastSignInStateChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastSignInStateChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceSignInInfo_Windows__CMedia__CCapture__CAppBroadcastSignInStateChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceSignInInfo_Windows__CMedia__CCapture__CAppBroadcastSignInStateChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceSignInInfo_Windows__CMedia__CCapture__CAppBroadcastSignInStateChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceStreamInfo_IInspectable __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceStreamInfo_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceStreamInfo_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceStreamInfo_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceStreamInfo_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceStreamInfo_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceStreamInfo_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceStreamInfo_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceStreamInfo_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceStreamInfo_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceStreamInfo_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceStreamInfo_Windows__CMedia__CCapture__CAppBroadcastStreamStateChangedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceStreamInfo_Windows__CMedia__CCapture__CAppBroadcastStreamStateChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceStreamInfo_Windows__CMedia__CCapture__CAppBroadcastStreamStateChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceStreamInfo_Windows__CMedia__CCapture__CAppBroadcastStreamStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceStreamInfo_Windows__CMedia__CCapture__CAppBroadcastStreamStateChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceStreamInfo_Windows__CMedia__CCapture__CAppBroadcastStreamStateChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceStreamInfo_Windows__CMedia__CCapture__CAppBroadcastStreamStateChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceStreamInfo_Windows__CMedia__CCapture__CAppBroadcastStreamStateChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamStateChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceStreamInfo_Windows__CMedia__CCapture__CAppBroadcastStreamStateChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceStreamInfo_Windows__CMedia__CCapture__CAppBroadcastStreamStateChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceStreamInfo_Windows__CMedia__CCapture__CAppBroadcastStreamStateChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastPreview_Windows__CMedia__CCapture__CAppBroadcastPreviewStateChangedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastPreview_Windows__CMedia__CCapture__CAppBroadcastPreviewStateChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastPreview_Windows__CMedia__CCapture__CAppBroadcastPreviewStateChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastPreview_Windows__CMedia__CCapture__CAppBroadcastPreviewStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastPreview_Windows__CMedia__CCapture__CAppBroadcastPreviewStateChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastPreview_Windows__CMedia__CCapture__CAppBroadcastPreviewStateChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastPreview_Windows__CMedia__CCapture__CAppBroadcastPreviewStateChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastPreview_Windows__CMedia__CCapture__CAppBroadcastPreviewStateChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreview * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStateChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastPreview_Windows__CMedia__CCapture__CAppBroadcastPreviewStateChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastPreview_Windows__CMedia__CCapture__CAppBroadcastPreviewStateChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastPreview_Windows__CMedia__CCapture__CAppBroadcastPreviewStateChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastPreviewStreamReader_IInspectable __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastPreviewStreamReader_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastPreviewStreamReader_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastPreviewStreamReader_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastPreviewStreamReader_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastPreviewStreamReader_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastPreviewStreamReader_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastPreviewStreamReader_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamReader * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastPreviewStreamReader_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastPreviewStreamReader_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastPreviewStreamReader_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_IInspectable __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastCameraCaptureStateChangedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastCameraCaptureStateChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastCameraCaptureStateChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastCameraCaptureStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastCameraCaptureStateChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastCameraCaptureStateChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastCameraCaptureStateChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastCameraCaptureStateChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastCameraCaptureStateChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastCameraCaptureStateChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastCameraCaptureStateChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastCameraCaptureStateChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastMicrophoneCaptureStateChangedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastMicrophoneCaptureStateChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastMicrophoneCaptureStateChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastMicrophoneCaptureStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastMicrophoneCaptureStateChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastMicrophoneCaptureStateChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastMicrophoneCaptureStateChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastMicrophoneCaptureStateChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastMicrophoneCaptureStateChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastMicrophoneCaptureStateChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastMicrophoneCaptureStateChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastMicrophoneCaptureStateChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastPlugInStateChangedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastPlugInStateChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastPlugInStateChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastPlugInStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastPlugInStateChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastPlugInStateChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastPlugInStateChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastPlugInStateChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInStateChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastPlugInStateChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastPlugInStateChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastPlugInStateChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastStreamStateChangedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastStreamStateChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastStreamStateChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastStreamStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastStreamStateChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastStreamStateChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastStreamStateChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastStreamStateChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamStateChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastStreamStateChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastStreamStateChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastStreamStateChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastViewerCountChangedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastViewerCountChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastViewerCountChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastViewerCountChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastViewerCountChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastViewerCountChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastViewerCountChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastViewerCountChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastViewerCountChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastViewerCountChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastViewerCountChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastViewerCountChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastStreamReader_IInspectable __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastStreamReader_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastStreamReader_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastStreamReader_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastStreamReader_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastStreamReader_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastStreamReader_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastStreamReader_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamReader * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastStreamReader_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastStreamReader_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastStreamReader_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCapture_IInspectable __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCapture_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCapture_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCapture_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCapture_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCapture_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCapture_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCapture_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppCapture * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCapture_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCapture_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCapture_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureMetadataWriter_IInspectable __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureMetadataWriter_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureMetadataWriter_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureMetadataWriter_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureMetadataWriter_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureMetadataWriter_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureMetadataWriter_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureMetadataWriter_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMetadataWriter * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureMetadataWriter_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureMetadataWriter_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureMetadataWriter_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureDurationGeneratedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureDurationGeneratedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureDurationGeneratedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureDurationGeneratedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureDurationGeneratedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureDurationGeneratedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureDurationGeneratedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureDurationGeneratedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordOperation * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureDurationGeneratedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureDurationGeneratedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureDurationGeneratedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureDurationGeneratedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureFileGeneratedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureFileGeneratedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureFileGeneratedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureFileGeneratedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureFileGeneratedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureFileGeneratedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureFileGeneratedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureFileGeneratedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordOperation * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureFileGeneratedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureFileGeneratedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureFileGeneratedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureFileGeneratedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureRecordingStateChangedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureRecordingStateChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureRecordingStateChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureRecordingStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureRecordingStateChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureRecordingStateChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureRecordingStateChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureRecordingStateChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordOperation * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordingStateChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureRecordingStateChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureRecordingStateChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureRecordingStateChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureState_IInspectable __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureState_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureState_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureState_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureState_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureState_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureState_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureState_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureState * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureState_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureState_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureState_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureState_Windows__CMedia__CCapture__CAppCaptureMicrophoneCaptureStateChangedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureState_Windows__CMedia__CCapture__CAppCaptureMicrophoneCaptureStateChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureState_Windows__CMedia__CCapture__CAppCaptureMicrophoneCaptureStateChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureState_Windows__CMedia__CCapture__CAppCaptureMicrophoneCaptureStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureState_Windows__CMedia__CCapture__CAppCaptureMicrophoneCaptureStateChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureState_Windows__CMedia__CCapture__CAppCaptureMicrophoneCaptureStateChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureState_Windows__CMedia__CCapture__CAppCaptureMicrophoneCaptureStateChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureState_Windows__CMedia__CCapture__CAppCaptureMicrophoneCaptureStateChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureState * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMicrophoneCaptureStateChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureState_Windows__CMedia__CCapture__CAppCaptureMicrophoneCaptureStateChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureState_Windows__CMedia__CCapture__CAppCaptureMicrophoneCaptureStateChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureState_Windows__CMedia__CCapture__CAppCaptureMicrophoneCaptureStateChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CGameBarServices_Windows__CMedia__CCapture__CGameBarServicesCommandEventArgs __FITypedEventHandler_2_Windows__CMedia__CCapture__CGameBarServices_Windows__CMedia__CCapture__CGameBarServicesCommandEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CGameBarServices_Windows__CMedia__CCapture__CGameBarServicesCommandEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CGameBarServices_Windows__CMedia__CCapture__CGameBarServicesCommandEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CGameBarServices_Windows__CMedia__CCapture__CGameBarServicesCommandEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CGameBarServices_Windows__CMedia__CCapture__CGameBarServicesCommandEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CGameBarServices_Windows__CMedia__CCapture__CGameBarServicesCommandEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CGameBarServices_Windows__CMedia__CCapture__CGameBarServicesCommandEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIGameBarServices * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesCommandEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CGameBarServices_Windows__CMedia__CCapture__CGameBarServicesCommandEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CGameBarServices_Windows__CMedia__CCapture__CGameBarServicesCommandEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CGameBarServices_Windows__CMedia__CCapture__CGameBarServicesCommandEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CGameBarServicesManager_Windows__CMedia__CCapture__CGameBarServicesManagerGameBarServicesCreatedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCapture__CGameBarServicesManager_Windows__CMedia__CCapture__CGameBarServicesManagerGameBarServicesCreatedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CGameBarServicesManager_Windows__CMedia__CCapture__CGameBarServicesManagerGameBarServicesCreatedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CGameBarServicesManager_Windows__CMedia__CCapture__CGameBarServicesManagerGameBarServicesCreatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CGameBarServicesManager_Windows__CMedia__CCapture__CGameBarServicesManagerGameBarServicesCreatedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CGameBarServicesManager_Windows__CMedia__CCapture__CGameBarServicesManagerGameBarServicesCreatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CGameBarServicesManager_Windows__CMedia__CCapture__CGameBarServicesManagerGameBarServicesCreatedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CGameBarServicesManager_Windows__CMedia__CCapture__CGameBarServicesManagerGameBarServicesCreatedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManager * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManagerGameBarServicesCreatedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CGameBarServicesManager_Windows__CMedia__CCapture__CGameBarServicesManagerGameBarServicesCreatedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CGameBarServicesManager_Windows__CMedia__CCapture__CGameBarServicesManagerGameBarServicesCreatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CGameBarServicesManager_Windows__CMedia__CCapture__CGameBarServicesManagerGameBarServicesCreatedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture_Windows__CMedia__CCapture__CPhotoCapturedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture_Windows__CMedia__CCapture__CPhotoCapturedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture_Windows__CMedia__CCapture__CPhotoCapturedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture_Windows__CMedia__CCapture__CPhotoCapturedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture_Windows__CMedia__CCapture__CPhotoCapturedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture_Windows__CMedia__CCapture__CPhotoCapturedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture_Windows__CMedia__CCapture__CPhotoCapturedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture_Windows__CMedia__CCapture__CPhotoCapturedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoSequenceCapture * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIPhotoCapturedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture_Windows__CMedia__CCapture__CPhotoCapturedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture_Windows__CMedia__CCapture__CPhotoCapturedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture_Windows__CMedia__CCapture__CPhotoCapturedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_IInspectable __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CMediaCaptureDeviceExclusiveControlStatusChangedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CMediaCaptureDeviceExclusiveControlStatusChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CMediaCaptureDeviceExclusiveControlStatusChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CMediaCaptureDeviceExclusiveControlStatusChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CMediaCaptureDeviceExclusiveControlStatusChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CMediaCaptureDeviceExclusiveControlStatusChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CMediaCaptureDeviceExclusiveControlStatusChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CMediaCaptureDeviceExclusiveControlStatusChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureDeviceExclusiveControlStatusChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CMediaCaptureDeviceExclusiveControlStatusChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CMediaCaptureDeviceExclusiveControlStatusChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CMediaCaptureDeviceExclusiveControlStatusChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CMediaCaptureFocusChangedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CMediaCaptureFocusChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CMediaCaptureFocusChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CMediaCaptureFocusChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CMediaCaptureFocusChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CMediaCaptureFocusChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CMediaCaptureFocusChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CMediaCaptureFocusChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFocusChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CMediaCaptureFocusChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CMediaCaptureFocusChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CMediaCaptureFocusChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CPhotoConfirmationCapturedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CPhotoConfirmationCapturedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CPhotoConfirmationCapturedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CPhotoConfirmationCapturedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CPhotoConfirmationCapturedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CPhotoConfirmationCapturedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CPhotoConfirmationCapturedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CPhotoConfirmationCapturedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIPhotoConfirmationCapturedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CPhotoConfirmationCapturedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CPhotoConfirmationCapturedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CPhotoConfirmationCapturedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
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
typedef interface __FIAsyncOperationCompletedHandler_1_UINT32 __FIAsyncOperationCompletedHandler_1_UINT32;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_UINT32;
typedef interface __FIAsyncOperation_1_UINT32 __FIAsyncOperation_1_UINT32;
typedef struct __FIAsyncOperationCompletedHandler_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This, __RPC__in_opt __FIAsyncOperation_1_UINT32 *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_UINT32Vtbl;
interface __FIAsyncOperationCompletedHandler_1_UINT32
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_UINT32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_UINT32 __FIAsyncOperation_1_UINT32;
EXTERN_C const IID IID___FIAsyncOperation_1_UINT32;
typedef struct __FIAsyncOperation_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_UINT32 * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_UINT32 *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_UINT32 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_UINT32 * This, __RPC__out unsigned int *results);
    END_INTERFACE
} __FIAsyncOperation_1_UINT32Vtbl;
interface __FIAsyncOperation_1_UINT32
{
    CONST_VTBL struct __FIAsyncOperation_1_UINT32Vtbl *lpVtbl;
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
typedef interface __FIReference_1_boolean __FIReference_1_boolean;
EXTERN_C const IID IID___FIReference_1_boolean;
typedef struct __FIReference_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_boolean * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_boolean * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_boolean * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_boolean * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_boolean * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_boolean * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_boolean * This, __RPC__out boolean *value);
    END_INTERFACE
} __FIReference_1_booleanVtbl;
interface __FIReference_1_boolean
{
    CONST_VTBL struct __FIReference_1_booleanVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStorageFile __FIAsyncOperation_1_Windows__CStorage__CStorageFile;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFileVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStorageFile __FIAsyncOperation_1_Windows__CStorage__CStorageFile;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStorageFile;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, __RPC__out __x_ABI_CWindows_CStorage_CIStorageFile * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStorageFileVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue;
typedef interface __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue;
typedef struct __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl;
interface __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue;
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue;
typedef struct __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl;
interface __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl *lpVtbl;
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
typedef interface __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue;
EXTERN_C const IID IID___FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue;
typedef struct __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
                   HSTRING key,
                            __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue * **value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
                   HSTRING key,
                   __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue * *value,
                            __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This);
    END_INTERFACE
} __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl;
interface __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue
{
    CONST_VTBL struct __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl *lpVtbl;
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
typedef interface __FIReference_1_float __FIReference_1_float;
EXTERN_C const IID IID___FIReference_1_float;
typedef struct __FIReference_1_floatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_float * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_float * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_float * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_float * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_float * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_float * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_float * This, __RPC__out float *value);
    END_INTERFACE
} __FIReference_1_floatVtbl;
interface __FIReference_1_float
{
    CONST_VTBL struct __FIReference_1_floatVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
enum __x_ABI_CWindows_CMedia_CDevices_CCaptureSceneMode;
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
typedef interface __FIReference_1_double __FIReference_1_double;
EXTERN_C const IID IID___FIReference_1_double;
typedef struct __FIReference_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_double * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_double * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_double * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_double * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_double * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_double * This, __RPC__out double *value);
    END_INTERFACE
} __FIReference_1_doubleVtbl;
interface __FIReference_1_double
{
    CONST_VTBL struct __FIReference_1_doubleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIKeyValuePair_2_GUID_IInspectable __FIKeyValuePair_2_GUID_IInspectable;
EXTERN_C const IID IID___FIKeyValuePair_2_GUID_IInspectable;
typedef struct __FIKeyValuePair_2_GUID_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_GUID_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_GUID_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_GUID_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_GUID_IInspectable * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_GUID_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_GUID_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_GUID_IInspectable * This, __RPC__out GUID *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_GUID_IInspectable * This, __RPC__deref_out_opt IInspectable * *value);
    END_INTERFACE
} __FIKeyValuePair_2_GUID_IInspectableVtbl;
interface __FIKeyValuePair_2_GUID_IInspectable
{
    CONST_VTBL struct __FIKeyValuePair_2_GUID_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_GUID_IInspectable;
typedef struct __FIIterator_1___FIKeyValuePair_2_GUID_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable * This, __RPC__out __FIKeyValuePair_2_GUID_IInspectable * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_GUID_IInspectable * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_GUID_IInspectableVtbl;
interface __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_GUID_IInspectableVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_GUID_IInspectable;
typedef struct __FIIterable_1___FIKeyValuePair_2_GUID_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_GUID_IInspectableVtbl;
interface __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_GUID_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_GUID_IInspectable __FIMapView_2_GUID_IInspectable;
EXTERN_C const IID IID___FIMapView_2_GUID_IInspectable;
typedef struct __FIMapView_2_GUID_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_GUID_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_GUID_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_GUID_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_GUID_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_GUID_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_GUID_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_GUID_IInspectable * This,
                   __RPC__in GUID key,
                            __RPC__deref_out_opt IInspectable * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_GUID_IInspectable * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_GUID_IInspectable * This, __RPC__in GUID key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_GUID_IInspectable * This, __RPC__deref_out_opt __FIMapView_2_GUID_IInspectable **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_GUID_IInspectable **secondPartition);
    END_INTERFACE
} __FIMapView_2_GUID_IInspectableVtbl;
interface __FIMapView_2_GUID_IInspectable
{
    CONST_VTBL struct __FIMapView_2_GUID_IInspectableVtbl *lpVtbl;
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
typedef interface __FIMap_2_GUID_IInspectable __FIMap_2_GUID_IInspectable;
EXTERN_C const IID IID___FIMap_2_GUID_IInspectable;
typedef struct __FIMap_2_GUID_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_GUID_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_GUID_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_GUID_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_GUID_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_GUID_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_GUID_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_GUID_IInspectable * This,
                   GUID key,
                            __RPC__deref_out_opt IInspectable * **value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_GUID_IInspectable * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_GUID_IInspectable * This, GUID key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_GUID_IInspectable * This, __RPC__deref_out_opt __FIMapView_2_GUID_IInspectable **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_GUID_IInspectable * This,
                   GUID key,
                   __RPC__in_opt IInspectable * *value,
                            __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_GUID_IInspectable * This, GUID key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_GUID_IInspectable * This);
    END_INTERFACE
} __FIMap_2_GUID_IInspectableVtbl;
interface __FIMap_2_GUID_IInspectable
{
    CONST_VTBL struct __FIMap_2_GUID_IInspectableVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCaptureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCaptureVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCaptureVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCaptureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture * This, __RPC__out __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCaptureVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCaptureVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CMedia_CIMediaExtension __x_ABI_CWindows_CMedia_CIMediaExtension;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtensionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtensionVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtensionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CIMediaExtension;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CIMediaExtensionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension * This, __RPC__out __x_ABI_CWindows_CMedia_CIMediaExtension * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CIMediaExtensionVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CIMediaExtensionVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CMedia_CIVideoFrame __x_ABI_CWindows_CMedia_CIVideoFrame;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CVideoFrame __FIAsyncOperation_1_Windows__CMedia__CVideoFrame;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CVideoFrame *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrameVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrameVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CVideoFrame __FIAsyncOperation_1_Windows__CMedia__CVideoFrame;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CVideoFrame;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CVideoFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CVideoFrame * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CVideoFrame * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CVideoFrame * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CVideoFrame * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CVideoFrame * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CVideoFrame * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CVideoFrame * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CVideoFrame * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CVideoFrame * This, __RPC__out __x_ABI_CWindows_CMedia_CIVideoFrame * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CVideoFrameVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CVideoFrame
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CVideoFrameVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource;
typedef interface __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;
typedef struct __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl;
interface __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;
typedef struct __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl;
interface __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This, __RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderVtbl *lpVtbl;
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
typedef interface __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;
typedef struct __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl;
interface __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;
typedef struct __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl;
interface __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This, __RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderVtbl *lpVtbl;
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
typedef interface __FIReference_1_int __FIReference_1_int;
EXTERN_C const IID IID___FIReference_1_int;
typedef struct __FIReference_1_intVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_int * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_int * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_int * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_int * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_int * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_int * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_int * This, __RPC__out int *value);
    END_INTERFACE
} __FIReference_1_intVtbl;
interface __FIReference_1_int
{
    CONST_VTBL struct __FIReference_1_intVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo;
typedef interface __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo;
typedef struct __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This, __RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfoVtbl;
interface __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfoVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo;
typedef struct __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfoVtbl;
interface __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo;
typedef struct __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
                       __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfoVtbl;
interface __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfoVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice;
typedef enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode;
typedef enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat;
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize;
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap;
typedef enum __x_ABI_CWindows_CMedia_CAudioProcessing __x_ABI_CWindows_CMedia_CAudioProcessing;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaSource __x_ABI_CWindows_CMedia_CCore_CIMediaSource;
typedef enum __x_ABI_CWindows_CMedia_CDevices_CAdvancedPhotoMode __x_ABI_CWindows_CMedia_CDevices_CAdvancedPhotoMode;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController;
typedef enum __x_ABI_CWindows_CMedia_CDevices_CCameraStreamState __x_ABI_CWindows_CMedia_CDevices_CCameraStreamState;
typedef enum __x_ABI_CWindows_CMedia_CDevices_CCaptureSceneMode __x_ABI_CWindows_CMedia_CDevices_CCaptureSceneMode;
typedef enum __x_ABI_CWindows_CMedia_CDevices_CMediaCaptureFocusState __x_ABI_CWindows_CMedia_CDevices_CMediaCaptureFocusState;
typedef enum __x_ABI_CWindows_CMedia_CDevices_CMediaCapturePauseBehavior __x_ABI_CWindows_CMedia_CDevices_CMediaCapturePauseBehavior;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController;
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition;
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties;
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFolder __x_ABI_CWindows_CStorage_CIStorageFolder;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIOutputStream __x_ABI_CWindows_CStorage_CStreams_CIOutputStream;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType;
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef enum __x_ABI_CWindows_CSystem_CVirtualKey __x_ABI_CWindows_CSystem_CVirtualKey;
typedef enum __x_ABI_CWindows_CSystem_CVirtualKeyModifiers __x_ABI_CWindows_CSystem_CVirtualKeyModifiers;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastCameraCaptureState __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastCameraCaptureState;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastCameraOverlayLocation __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastCameraOverlayLocation;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastCameraOverlaySize __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastCameraOverlaySize;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastCaptureTargetType __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastCaptureTargetType;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastExitBroadcastModeReason __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastExitBroadcastModeReason;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastMicrophoneCaptureState __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastMicrophoneCaptureState;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastPlugInState __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastPlugInState;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastPreviewState __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastPreviewState;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastSignInResult __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastSignInResult;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastSignInState __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastSignInState;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastStreamState __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastStreamState;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastTerminationReason __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastTerminationReason;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastVideoEncodingBitrateMode __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastVideoEncodingBitrateMode;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastVideoEncodingResolutionMode __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastVideoEncodingResolutionMode;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CAppCaptureHistoricalBufferLengthUnit __x_ABI_CWindows_CMedia_CCapture_CAppCaptureHistoricalBufferLengthUnit;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CAppCaptureMetadataPriority __x_ABI_CWindows_CMedia_CCapture_CAppCaptureMetadataPriority;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CAppCaptureMicrophoneCaptureState __x_ABI_CWindows_CMedia_CCapture_CAppCaptureMicrophoneCaptureState;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CAppCaptureRecordingState __x_ABI_CWindows_CMedia_CCapture_CAppCaptureRecordingState;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CAppCaptureVideoEncodingBitrateMode __x_ABI_CWindows_CMedia_CCapture_CAppCaptureVideoEncodingBitrateMode;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CAppCaptureVideoEncodingFrameRateMode __x_ABI_CWindows_CMedia_CCapture_CAppCaptureVideoEncodingFrameRateMode;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CAppCaptureVideoEncodingResolutionMode __x_ABI_CWindows_CMedia_CCapture_CAppCaptureVideoEncodingResolutionMode;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CCameraCaptureUIMaxPhotoResolution __x_ABI_CWindows_CMedia_CCapture_CCameraCaptureUIMaxPhotoResolution;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CCameraCaptureUIMaxVideoResolution __x_ABI_CWindows_CMedia_CCapture_CCameraCaptureUIMaxVideoResolution;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CCameraCaptureUIMode __x_ABI_CWindows_CMedia_CCapture_CCameraCaptureUIMode;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CCameraCaptureUIPhotoFormat __x_ABI_CWindows_CMedia_CCapture_CCameraCaptureUIPhotoFormat;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CCameraCaptureUIVideoFormat __x_ABI_CWindows_CMedia_CCapture_CCameraCaptureUIVideoFormat;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CForegroundActivationArgument __x_ABI_CWindows_CMedia_CCapture_CForegroundActivationArgument;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CGameBarCommand __x_ABI_CWindows_CMedia_CCapture_CGameBarCommand;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CGameBarCommandOrigin __x_ABI_CWindows_CMedia_CCapture_CGameBarCommandOrigin;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CGameBarServicesDisplayMode __x_ABI_CWindows_CMedia_CCapture_CGameBarServicesDisplayMode;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CGameBarTargetCapturePolicy __x_ABI_CWindows_CMedia_CCapture_CGameBarTargetCapturePolicy;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CKnownVideoProfile __x_ABI_CWindows_CMedia_CCapture_CKnownVideoProfile;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CMediaCaptureDeviceExclusiveControlStatus __x_ABI_CWindows_CMedia_CCapture_CMediaCaptureDeviceExclusiveControlStatus;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CMediaCaptureMemoryPreference __x_ABI_CWindows_CMedia_CCapture_CMediaCaptureMemoryPreference;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CMediaCaptureSharingMode __x_ABI_CWindows_CMedia_CCapture_CMediaCaptureSharingMode;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CMediaCaptureThermalStatus __x_ABI_CWindows_CMedia_CCapture_CMediaCaptureThermalStatus;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CMediaCategory __x_ABI_CWindows_CMedia_CCapture_CMediaCategory;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CMediaStreamType __x_ABI_CWindows_CMedia_CCapture_CMediaStreamType;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CPhotoCaptureSource __x_ABI_CWindows_CMedia_CCapture_CPhotoCaptureSource;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CPowerlineFrequency __x_ABI_CWindows_CMedia_CCapture_CPowerlineFrequency;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CStreamingCaptureMode __x_ABI_CWindows_CMedia_CCapture_CStreamingCaptureMode;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CVideoDeviceCharacteristic __x_ABI_CWindows_CMedia_CCapture_CVideoDeviceCharacteristic;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CVideoRotation __x_ABI_CWindows_CMedia_CCapture_CVideoRotation;
typedef struct __x_ABI_CWindows_CMedia_CCapture_CWhiteBalanceGain __x_ABI_CWindows_CMedia_CCapture_CWhiteBalanceGain;
enum __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastCameraCaptureState
{
    AppBroadcastCameraCaptureState_Stopped = 0,
    AppBroadcastCameraCaptureState_Started = 1,
    AppBroadcastCameraCaptureState_Failed = 2,
};
enum __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastCameraOverlayLocation
{
    AppBroadcastCameraOverlayLocation_TopLeft = 0,
    AppBroadcastCameraOverlayLocation_TopCenter = 1,
    AppBroadcastCameraOverlayLocation_TopRight = 2,
    AppBroadcastCameraOverlayLocation_MiddleLeft = 3,
    AppBroadcastCameraOverlayLocation_MiddleCenter = 4,
    AppBroadcastCameraOverlayLocation_MiddleRight = 5,
    AppBroadcastCameraOverlayLocation_BottomLeft = 6,
    AppBroadcastCameraOverlayLocation_BottomCenter = 7,
    AppBroadcastCameraOverlayLocation_BottomRight = 8,
};
enum __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastCameraOverlaySize
{
    AppBroadcastCameraOverlaySize_Small = 0,
    AppBroadcastCameraOverlaySize_Medium = 1,
    AppBroadcastCameraOverlaySize_Large = 2,
};
enum __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastCaptureTargetType
{
    AppBroadcastCaptureTargetType_AppView = 0,
    AppBroadcastCaptureTargetType_EntireDisplay = 1,
};
enum __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastExitBroadcastModeReason
{
    AppBroadcastExitBroadcastModeReason_NormalExit = 0,
    AppBroadcastExitBroadcastModeReason_UserCanceled = 1,
    AppBroadcastExitBroadcastModeReason_AuthorizationFail = 2,
    AppBroadcastExitBroadcastModeReason_ForegroundAppActivated = 3,
};
enum __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastMicrophoneCaptureState
{
    AppBroadcastMicrophoneCaptureState_Stopped = 0,
    AppBroadcastMicrophoneCaptureState_Started = 1,
    AppBroadcastMicrophoneCaptureState_Failed = 2,
};
enum __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastPlugInState
{
    AppBroadcastPlugInState_Unknown = 0,
    AppBroadcastPlugInState_Initialized = 1,
    AppBroadcastPlugInState_MicrosoftSignInRequired = 2,
    AppBroadcastPlugInState_OAuthSignInRequired = 3,
    AppBroadcastPlugInState_ProviderSignInRequired = 4,
    AppBroadcastPlugInState_InBandwidthTest = 5,
    AppBroadcastPlugInState_ReadyToBroadcast = 6,
};
enum __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastPreviewState
{
    AppBroadcastPreviewState_Started = 0,
    AppBroadcastPreviewState_Stopped = 1,
    AppBroadcastPreviewState_Failed = 2,
};
enum __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastSignInResult
{
    AppBroadcastSignInResult_Success = 0,
    AppBroadcastSignInResult_AuthenticationFailed = 1,
    AppBroadcastSignInResult_Unauthorized = 2,
    AppBroadcastSignInResult_ServiceUnavailable = 3,
    AppBroadcastSignInResult_Unknown = 4,
};
enum __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastSignInState
{
    AppBroadcastSignInState_NotSignedIn = 0,
    AppBroadcastSignInState_MicrosoftSignInInProgress = 1,
    AppBroadcastSignInState_MicrosoftSignInComplete = 2,
    AppBroadcastSignInState_OAuthSignInInProgress = 3,
    AppBroadcastSignInState_OAuthSignInComplete = 4,
};
enum __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastStreamState
{
    AppBroadcastStreamState_Initializing = 0,
    AppBroadcastStreamState_StreamReady = 1,
    AppBroadcastStreamState_Started = 2,
    AppBroadcastStreamState_Paused = 3,
    AppBroadcastStreamState_Terminated = 4,
};
enum __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastTerminationReason
{
    AppBroadcastTerminationReason_NormalTermination = 0,
    AppBroadcastTerminationReason_LostConnectionToService = 1,
    AppBroadcastTerminationReason_NoNetworkConnectivity = 2,
    AppBroadcastTerminationReason_ServiceAbort = 3,
    AppBroadcastTerminationReason_ServiceError = 4,
    AppBroadcastTerminationReason_ServiceUnavailable = 5,
    AppBroadcastTerminationReason_InternalError = 6,
    AppBroadcastTerminationReason_UnsupportedFormat = 7,
    AppBroadcastTerminationReason_BackgroundTaskTerminated = 8,
    AppBroadcastTerminationReason_BackgroundTaskUnresponsive = 9,
};
enum __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastVideoEncodingBitrateMode
{
    AppBroadcastVideoEncodingBitrateMode_Custom = 0,
    AppBroadcastVideoEncodingBitrateMode_Auto = 1,
};
enum __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastVideoEncodingResolutionMode
{
    AppBroadcastVideoEncodingResolutionMode_Custom = 0,
    AppBroadcastVideoEncodingResolutionMode_Auto = 1,
};
enum __x_ABI_CWindows_CMedia_CCapture_CAppCaptureHistoricalBufferLengthUnit
{
    AppCaptureHistoricalBufferLengthUnit_Megabytes = 0,
    AppCaptureHistoricalBufferLengthUnit_Seconds = 1,
};
enum __x_ABI_CWindows_CMedia_CCapture_CAppCaptureMetadataPriority
{
    AppCaptureMetadataPriority_Informational = 0,
    AppCaptureMetadataPriority_Important = 1,
};
enum __x_ABI_CWindows_CMedia_CCapture_CAppCaptureMicrophoneCaptureState
{
    AppCaptureMicrophoneCaptureState_Stopped = 0,
    AppCaptureMicrophoneCaptureState_Started = 1,
    AppCaptureMicrophoneCaptureState_Failed = 2,
};
enum __x_ABI_CWindows_CMedia_CCapture_CAppCaptureRecordingState
{
    AppCaptureRecordingState_InProgress = 0,
    AppCaptureRecordingState_Completed = 1,
    AppCaptureRecordingState_Failed = 2,
};
enum __x_ABI_CWindows_CMedia_CCapture_CAppCaptureVideoEncodingBitrateMode
{
    AppCaptureVideoEncodingBitrateMode_Custom = 0,
    AppCaptureVideoEncodingBitrateMode_High = 1,
    AppCaptureVideoEncodingBitrateMode_Standard = 2,
};
enum __x_ABI_CWindows_CMedia_CCapture_CAppCaptureVideoEncodingFrameRateMode
{
    AppCaptureVideoEncodingFrameRateMode_Standard = 0,
    AppCaptureVideoEncodingFrameRateMode_High = 1,
};
enum __x_ABI_CWindows_CMedia_CCapture_CAppCaptureVideoEncodingResolutionMode
{
    AppCaptureVideoEncodingResolutionMode_Custom = 0,
    AppCaptureVideoEncodingResolutionMode_High = 1,
    AppCaptureVideoEncodingResolutionMode_Standard = 2,
};
enum __x_ABI_CWindows_CMedia_CCapture_CCameraCaptureUIMaxPhotoResolution
{
    CameraCaptureUIMaxPhotoResolution_HighestAvailable = 0,
    CameraCaptureUIMaxPhotoResolution_VerySmallQvga = 1,
    CameraCaptureUIMaxPhotoResolution_SmallVga = 2,
    CameraCaptureUIMaxPhotoResolution_MediumXga = 3,
    CameraCaptureUIMaxPhotoResolution_Large3M = 4,
    CameraCaptureUIMaxPhotoResolution_VeryLarge5M = 5,
};
enum __x_ABI_CWindows_CMedia_CCapture_CCameraCaptureUIMaxVideoResolution
{
    CameraCaptureUIMaxVideoResolution_HighestAvailable = 0,
    CameraCaptureUIMaxVideoResolution_LowDefinition = 1,
    CameraCaptureUIMaxVideoResolution_StandardDefinition = 2,
    CameraCaptureUIMaxVideoResolution_HighDefinition = 3,
};
enum __x_ABI_CWindows_CMedia_CCapture_CCameraCaptureUIMode
{
    CameraCaptureUIMode_PhotoOrVideo = 0,
    CameraCaptureUIMode_Photo = 1,
    CameraCaptureUIMode_Video = 2,
};
enum __x_ABI_CWindows_CMedia_CCapture_CCameraCaptureUIPhotoFormat
{
    CameraCaptureUIPhotoFormat_Jpeg = 0,
    CameraCaptureUIPhotoFormat_Png = 1,
    CameraCaptureUIPhotoFormat_JpegXR = 2,
};
enum __x_ABI_CWindows_CMedia_CCapture_CCameraCaptureUIVideoFormat
{
    CameraCaptureUIVideoFormat_Mp4 = 0,
    CameraCaptureUIVideoFormat_Wmv = 1,
};
enum __x_ABI_CWindows_CMedia_CCapture_CForegroundActivationArgument
{
    ForegroundActivationArgument_SignInRequired = 0,
    ForegroundActivationArgument_MoreSettings = 1,
};
enum __x_ABI_CWindows_CMedia_CCapture_CGameBarCommand
{
    GameBarCommand_OpenGameBar = 0,
    GameBarCommand_RecordHistoricalBuffer = 1,
    GameBarCommand_ToggleStartStopRecord = 2,
    GameBarCommand_StartRecord = 3,
    GameBarCommand_StopRecord = 4,
    GameBarCommand_TakeScreenshot = 5,
    GameBarCommand_StartBroadcast = 6,
    GameBarCommand_StopBroadcast = 7,
    GameBarCommand_PauseBroadcast = 8,
    GameBarCommand_ResumeBroadcast = 9,
    GameBarCommand_ToggleStartStopBroadcast = 10,
    GameBarCommand_ToggleMicrophoneCapture = 11,
    GameBarCommand_ToggleCameraCapture = 12,
    GameBarCommand_ToggleRecordingIndicator = 13,
};
enum __x_ABI_CWindows_CMedia_CCapture_CGameBarCommandOrigin
{
    GameBarCommandOrigin_ShortcutKey = 0,
    GameBarCommandOrigin_Cortana = 1,
    GameBarCommandOrigin_AppCommand = 2,
};
enum __x_ABI_CWindows_CMedia_CCapture_CGameBarServicesDisplayMode
{
    GameBarServicesDisplayMode_Windowed = 0,
    GameBarServicesDisplayMode_FullScreenExclusive = 1,
};
enum __x_ABI_CWindows_CMedia_CCapture_CGameBarTargetCapturePolicy
{
    GameBarTargetCapturePolicy_EnabledBySystem = 0,
    GameBarTargetCapturePolicy_EnabledByUser = 1,
    GameBarTargetCapturePolicy_NotEnabled = 2,
    GameBarTargetCapturePolicy_ProhibitedBySystem = 3,
    GameBarTargetCapturePolicy_ProhibitedByPublisher = 4,
};
enum __x_ABI_CWindows_CMedia_CCapture_CKnownVideoProfile
{
    KnownVideoProfile_VideoRecording = 0,
    KnownVideoProfile_HighQualityPhoto = 1,
    KnownVideoProfile_BalancedVideoAndPhoto = 2,
    KnownVideoProfile_VideoConferencing = 3,
    KnownVideoProfile_PhotoSequence = 4,
    KnownVideoProfile_HighFrameRate = 5,
    KnownVideoProfile_VariablePhotoSequence = 6,
    KnownVideoProfile_HdrWithWcgVideo = 7,
    KnownVideoProfile_HdrWithWcgPhoto = 8,
    KnownVideoProfile_VideoHdr8 = 9,
};
enum __x_ABI_CWindows_CMedia_CCapture_CMediaCaptureDeviceExclusiveControlStatus
{
    MediaCaptureDeviceExclusiveControlStatus_ExclusiveControlAvailable = 0,
    MediaCaptureDeviceExclusiveControlStatus_SharedReadOnlyAvailable = 1,
};
enum __x_ABI_CWindows_CMedia_CCapture_CMediaCaptureMemoryPreference
{
    MediaCaptureMemoryPreference_Auto = 0,
    MediaCaptureMemoryPreference_Cpu = 1,
};
enum __x_ABI_CWindows_CMedia_CCapture_CMediaCaptureSharingMode
{
    MediaCaptureSharingMode_ExclusiveControl = 0,
    MediaCaptureSharingMode_SharedReadOnly = 1,
};
enum __x_ABI_CWindows_CMedia_CCapture_CMediaCaptureThermalStatus
{
    MediaCaptureThermalStatus_Normal = 0,
    MediaCaptureThermalStatus_Overheated = 1,
};
enum __x_ABI_CWindows_CMedia_CCapture_CMediaCategory
{
    MediaCategory_Other = 0,
    MediaCategory_Communications = 1,
    MediaCategory_Media = 2,
    MediaCategory_GameChat = 3,
    MediaCategory_Speech = 4,
};
enum __x_ABI_CWindows_CMedia_CCapture_CMediaStreamType
{
    MediaStreamType_VideoPreview = 0,
    MediaStreamType_VideoRecord = 1,
    MediaStreamType_Audio = 2,
    MediaStreamType_Photo = 3,
};
enum __x_ABI_CWindows_CMedia_CCapture_CPhotoCaptureSource
{
    PhotoCaptureSource_Auto = 0,
    PhotoCaptureSource_VideoPreview = 1,
    PhotoCaptureSource_Photo = 2,
};
enum __x_ABI_CWindows_CMedia_CCapture_CPowerlineFrequency
{
    PowerlineFrequency_Disabled = 0,
    PowerlineFrequency_FiftyHertz = 1,
    PowerlineFrequency_SixtyHertz = 2,
    PowerlineFrequency_Auto = 3,
};
enum __x_ABI_CWindows_CMedia_CCapture_CStreamingCaptureMode
{
    StreamingCaptureMode_AudioAndVideo = 0,
    StreamingCaptureMode_Audio = 1,
    StreamingCaptureMode_Video = 2,
};
enum __x_ABI_CWindows_CMedia_CCapture_CVideoDeviceCharacteristic
{
    VideoDeviceCharacteristic_AllStreamsIndependent = 0,
    VideoDeviceCharacteristic_PreviewRecordStreamsIdentical = 1,
    VideoDeviceCharacteristic_PreviewPhotoStreamsIdentical = 2,
    VideoDeviceCharacteristic_RecordPhotoStreamsIdentical = 3,
    VideoDeviceCharacteristic_AllStreamsIdentical = 4,
};
enum __x_ABI_CWindows_CMedia_CCapture_CVideoRotation
{
    VideoRotation_None = 0,
    VideoRotation_Clockwise90Degrees = 1,
    VideoRotation_Clockwise180Degrees = 2,
    VideoRotation_Clockwise270Degrees = 3,
};
struct __x_ABI_CWindows_CMedia_CCapture_CWhiteBalanceGain
{
    DOUBLE R;
    DOUBLE G;
    DOUBLE B;
};
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFailedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFailedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFailedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFailedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFailedEventHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * sender,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFailedEventArgs * errorEventArgs
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFailedEventHandlerVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFailedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFailedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,errorEventArgs) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFailedEventHandler;
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIRecordLimitationExceededEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIRecordLimitationExceededEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIRecordLimitationExceededEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIRecordLimitationExceededEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CMedia_CCapture_CIRecordLimitationExceededEventHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * sender
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIRecordLimitationExceededEventHandlerVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIRecordLimitationExceededEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIRecordLimitationExceededEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIRecordLimitationExceededEventHandler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAdvancedCapturedPhoto[] = L"Windows.Media.Capture.IAdvancedCapturedPhoto";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAdvancedCapturedPhotoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAdvancedCapturedPhoto * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAdvancedCapturedPhoto * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAdvancedCapturedPhoto * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAdvancedCapturedPhoto * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAdvancedCapturedPhoto * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAdvancedCapturedPhoto * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Frame )(
        __x_ABI_CWindows_CMedia_CCapture_CIAdvancedCapturedPhoto * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CMedia_CCapture_CIAdvancedCapturedPhoto * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CDevices_CAdvancedPhotoMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Context )(
        __x_ABI_CWindows_CMedia_CCapture_CIAdvancedCapturedPhoto * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAdvancedCapturedPhotoVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAdvancedCapturedPhoto
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAdvancedCapturedPhotoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Frame(This,value) )
    ( (This)->lpVtbl->get_Mode(This,value) )
    ( (This)->lpVtbl->get_Context(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAdvancedCapturedPhoto;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAdvancedCapturedPhoto2[] = L"Windows.Media.Capture.IAdvancedCapturedPhoto2";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAdvancedCapturedPhoto2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAdvancedCapturedPhoto2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAdvancedCapturedPhoto2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAdvancedCapturedPhoto2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAdvancedCapturedPhoto2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAdvancedCapturedPhoto2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAdvancedCapturedPhoto2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FrameBoundsRelativeToReferencePhoto )(
        __x_ABI_CWindows_CMedia_CCapture_CIAdvancedCapturedPhoto2 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CRect * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAdvancedCapturedPhoto2Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAdvancedCapturedPhoto2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAdvancedCapturedPhoto2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FrameBoundsRelativeToReferencePhoto(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAdvancedCapturedPhoto2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAdvancedPhotoCapture[] = L"Windows.Media.Capture.IAdvancedPhotoCapture";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAdvancedPhotoCaptureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAdvancedPhotoCapture * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAdvancedPhotoCapture * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAdvancedPhotoCapture * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAdvancedPhotoCapture * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAdvancedPhotoCapture * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAdvancedPhotoCapture * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CaptureAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIAdvancedPhotoCapture * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedCapturedPhoto * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *CaptureWithContextAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIAdvancedPhotoCapture * This,
                  __RPC__in_opt IInspectable * context,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedCapturedPhoto * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *add_OptionalReferencePhotoCaptured )(
        __x_ABI_CWindows_CMedia_CCapture_CIAdvancedPhotoCapture * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CAdvancedPhotoCapture_Windows__CMedia__CCapture__COptionalReferencePhotoCapturedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_OptionalReferencePhotoCaptured )(
        __x_ABI_CWindows_CMedia_CCapture_CIAdvancedPhotoCapture * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AllPhotosCaptured )(
        __x_ABI_CWindows_CMedia_CCapture_CIAdvancedPhotoCapture * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CAdvancedPhotoCapture_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AllPhotosCaptured )(
        __x_ABI_CWindows_CMedia_CCapture_CIAdvancedPhotoCapture * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *FinishAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIAdvancedPhotoCapture * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAdvancedPhotoCaptureVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAdvancedPhotoCapture
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAdvancedPhotoCaptureVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CaptureAsync(This,operation) )
    ( (This)->lpVtbl->CaptureWithContextAsync(This,context,operation) )
    ( (This)->lpVtbl->add_OptionalReferencePhotoCaptured(This,handler,token) )
    ( (This)->lpVtbl->remove_OptionalReferencePhotoCaptured(This,token) )
    ( (This)->lpVtbl->add_AllPhotosCaptured(This,handler,token) )
    ( (This)->lpVtbl->remove_AllPhotosCaptured(This,token) )
    ( (This)->lpVtbl->FinishAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAdvancedPhotoCapture;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppBroadcastBackgroundService[] = L"Windows.Media.Capture.IAppBroadcastBackgroundService";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_PlugInState )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService * This,
                  __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastPlugInState value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PlugInState )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastPlugInState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SignInInfo )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SignInInfo )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StreamInfo )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StreamInfo )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppId )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BroadcastTitle )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ViewerCount )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ViewerCount )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService * This,
                           __RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *TerminateBroadcast )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService * This,
                  __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastTerminationReason reason,
                  UINT32 providerSpecificReason
        );
                    HRESULT ( STDMETHODCALLTYPE *add_HeartbeatRequested )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundService_Windows__CMedia__CCapture__CAppBroadcastHeartbeatRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_HeartbeatRequested )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TitleId )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_PlugInState(This,value) )
    ( (This)->lpVtbl->get_PlugInState(This,value) )
    ( (This)->lpVtbl->put_SignInInfo(This,value) )
    ( (This)->lpVtbl->get_SignInInfo(This,value) )
    ( (This)->lpVtbl->put_StreamInfo(This,value) )
    ( (This)->lpVtbl->get_StreamInfo(This,value) )
    ( (This)->lpVtbl->get_AppId(This,value) )
    ( (This)->lpVtbl->get_BroadcastTitle(This,value) )
    ( (This)->lpVtbl->put_ViewerCount(This,value) )
    ( (This)->lpVtbl->get_ViewerCount(This,value) )
    ( (This)->lpVtbl->TerminateBroadcast(This,reason,providerSpecificReason) )
    ( (This)->lpVtbl->add_HeartbeatRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_HeartbeatRequested(This,token) )
    ( (This)->lpVtbl->get_TitleId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppBroadcastBackgroundService2[] = L"Windows.Media.Capture.IAppBroadcastBackgroundService2";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_BroadcastTitle )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BroadcastLanguage )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BroadcastLanguage )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BroadcastChannel )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BroadcastChannel )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService2 * This,
                  __RPC__in HSTRING value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_BroadcastTitleChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundService_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_BroadcastTitleChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService2 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_BroadcastLanguageChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundService_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_BroadcastLanguageChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService2 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_BroadcastChannelChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundService_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_BroadcastChannelChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService2 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService2Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_BroadcastTitle(This,value) )
    ( (This)->lpVtbl->get_BroadcastLanguage(This,value) )
    ( (This)->lpVtbl->put_BroadcastLanguage(This,value) )
    ( (This)->lpVtbl->get_BroadcastChannel(This,value) )
    ( (This)->lpVtbl->put_BroadcastChannel(This,value) )
    ( (This)->lpVtbl->add_BroadcastTitleChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_BroadcastTitleChanged(This,token) )
    ( (This)->lpVtbl->add_BroadcastLanguageChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_BroadcastLanguageChanged(This,token) )
    ( (This)->lpVtbl->add_BroadcastChannelChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_BroadcastChannelChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppBroadcastBackgroundServiceSignInInfo[] = L"Windows.Media.Capture.IAppBroadcastBackgroundServiceSignInInfo";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SignInState )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastSignInState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OAuthRequestUri )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OAuthRequestUri )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OAuthCallbackUri )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OAuthCallbackUri )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AuthenticationResult )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_UserName )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UserName )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SignInStateChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceSignInInfo_Windows__CMedia__CCapture__CAppBroadcastSignInStateChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SignInStateChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfoVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SignInState(This,value) )
    ( (This)->lpVtbl->put_OAuthRequestUri(This,value) )
    ( (This)->lpVtbl->get_OAuthRequestUri(This,value) )
    ( (This)->lpVtbl->put_OAuthCallbackUri(This,value) )
    ( (This)->lpVtbl->get_OAuthCallbackUri(This,value) )
    ( (This)->lpVtbl->get_AuthenticationResult(This,value) )
    ( (This)->lpVtbl->put_UserName(This,value) )
    ( (This)->lpVtbl->get_UserName(This,value) )
    ( (This)->lpVtbl->add_SignInStateChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_SignInStateChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppBroadcastBackgroundServiceSignInInfo2[] = L"Windows.Media.Capture.IAppBroadcastBackgroundServiceSignInInfo2";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_UserNameChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceSignInInfo_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_UserNameChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo2 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo2Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_UserNameChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_UserNameChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceSignInInfo2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppBroadcastBackgroundServiceStreamInfo[] = L"Windows.Media.Capture.IAppBroadcastBackgroundServiceStreamInfo";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StreamState )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastStreamState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DesiredVideoEncodingBitrate )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo * This,
                  UINT64 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DesiredVideoEncodingBitrate )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BandwidthTestBitrate )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo * This,
                  UINT64 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BandwidthTestBitrate )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AudioCodec )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioCodec )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BroadcastStreamReader )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamReader * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_StreamStateChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceStreamInfo_Windows__CMedia__CCapture__CAppBroadcastStreamStateChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StreamStateChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_VideoEncodingResolutionChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceStreamInfo_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_VideoEncodingResolutionChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_VideoEncodingBitrateChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastBackgroundServiceStreamInfo_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_VideoEncodingBitrateChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfoVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StreamState(This,value) )
    ( (This)->lpVtbl->put_DesiredVideoEncodingBitrate(This,value) )
    ( (This)->lpVtbl->get_DesiredVideoEncodingBitrate(This,value) )
    ( (This)->lpVtbl->put_BandwidthTestBitrate(This,value) )
    ( (This)->lpVtbl->get_BandwidthTestBitrate(This,value) )
    ( (This)->lpVtbl->put_AudioCodec(This,value) )
    ( (This)->lpVtbl->get_AudioCodec(This,value) )
    ( (This)->lpVtbl->get_BroadcastStreamReader(This,value) )
    ( (This)->lpVtbl->add_StreamStateChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_StreamStateChanged(This,token) )
    ( (This)->lpVtbl->add_VideoEncodingResolutionChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_VideoEncodingResolutionChanged(This,token) )
    ( (This)->lpVtbl->add_VideoEncodingBitrateChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_VideoEncodingBitrateChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppBroadcastBackgroundServiceStreamInfo2[] = L"Windows.Media.Capture.IAppBroadcastBackgroundServiceStreamInfo2";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ReportProblemWithStream )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo2 * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo2Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ReportProblemWithStream(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundServiceStreamInfo2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppBroadcastCameraCaptureStateChangedEventArgs[] = L"Windows.Media.Capture.IAppBroadcastCameraCaptureStateChangedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastCameraCaptureStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastCameraCaptureStateChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastCameraCaptureStateChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastCameraCaptureStateChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastCameraCaptureStateChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastCameraCaptureStateChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastCameraCaptureStateChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastCameraCaptureStateChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastCameraCaptureState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ErrorCode )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastCameraCaptureStateChangedEventArgs * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastCameraCaptureStateChangedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastCameraCaptureStateChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastCameraCaptureStateChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->get_ErrorCode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastCameraCaptureStateChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppBroadcastGlobalSettings[] = L"Windows.Media.Capture.IAppBroadcastGlobalSettings";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsBroadcastEnabled )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDisabledByPolicy )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsGpuConstrained )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasHardwareEncoder )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsAudioCaptureEnabled )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsAudioCaptureEnabled )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsMicrophoneCaptureEnabledByDefault )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsMicrophoneCaptureEnabledByDefault )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsEchoCancellationEnabled )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsEchoCancellationEnabled )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SystemAudioGain )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SystemAudioGain )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MicrophoneGain )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MicrophoneGain )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsCameraCaptureEnabledByDefault )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCameraCaptureEnabledByDefault )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SelectedCameraId )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedCameraId )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CameraOverlayLocation )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings * This,
                  __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastCameraOverlayLocation value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CameraOverlayLocation )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastCameraOverlayLocation * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CameraOverlaySize )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings * This,
                  __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastCameraOverlaySize value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CameraOverlaySize )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastCameraOverlaySize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsCursorImageCaptureEnabled )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCursorImageCaptureEnabled )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettingsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsBroadcastEnabled(This,value) )
    ( (This)->lpVtbl->get_IsDisabledByPolicy(This,value) )
    ( (This)->lpVtbl->get_IsGpuConstrained(This,value) )
    ( (This)->lpVtbl->get_HasHardwareEncoder(This,value) )
    ( (This)->lpVtbl->put_IsAudioCaptureEnabled(This,value) )
    ( (This)->lpVtbl->get_IsAudioCaptureEnabled(This,value) )
    ( (This)->lpVtbl->put_IsMicrophoneCaptureEnabledByDefault(This,value) )
    ( (This)->lpVtbl->get_IsMicrophoneCaptureEnabledByDefault(This,value) )
    ( (This)->lpVtbl->put_IsEchoCancellationEnabled(This,value) )
    ( (This)->lpVtbl->get_IsEchoCancellationEnabled(This,value) )
    ( (This)->lpVtbl->put_SystemAudioGain(This,value) )
    ( (This)->lpVtbl->get_SystemAudioGain(This,value) )
    ( (This)->lpVtbl->put_MicrophoneGain(This,value) )
    ( (This)->lpVtbl->get_MicrophoneGain(This,value) )
    ( (This)->lpVtbl->put_IsCameraCaptureEnabledByDefault(This,value) )
    ( (This)->lpVtbl->get_IsCameraCaptureEnabledByDefault(This,value) )
    ( (This)->lpVtbl->put_SelectedCameraId(This,value) )
    ( (This)->lpVtbl->get_SelectedCameraId(This,value) )
    ( (This)->lpVtbl->put_CameraOverlayLocation(This,value) )
    ( (This)->lpVtbl->get_CameraOverlayLocation(This,value) )
    ( (This)->lpVtbl->put_CameraOverlaySize(This,value) )
    ( (This)->lpVtbl->get_CameraOverlaySize(This,value) )
    ( (This)->lpVtbl->put_IsCursorImageCaptureEnabled(This,value) )
    ( (This)->lpVtbl->get_IsCursorImageCaptureEnabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppBroadcastHeartbeatRequestedEventArgs[] = L"Windows.Media.Capture.IAppBroadcastHeartbeatRequestedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastHeartbeatRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastHeartbeatRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastHeartbeatRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastHeartbeatRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastHeartbeatRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastHeartbeatRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastHeartbeatRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastHeartbeatRequestedEventArgs * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastHeartbeatRequestedEventArgs * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastHeartbeatRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastHeartbeatRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastHeartbeatRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Handled(This,value) )
    ( (This)->lpVtbl->get_Handled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastHeartbeatRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppBroadcastManagerStatics[] = L"Windows.Media.Capture.IAppBroadcastManagerStatics";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetGlobalSettings )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ApplyGlobalSettings )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastGlobalSettings * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetProviderSettings )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastProviderSettings * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ApplyProviderSettings )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastProviderSettings * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastManagerStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetGlobalSettings(This,value) )
    ( (This)->lpVtbl->ApplyGlobalSettings(This,value) )
    ( (This)->lpVtbl->GetProviderSettings(This,value) )
    ( (This)->lpVtbl->ApplyProviderSettings(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppBroadcastMicrophoneCaptureStateChangedEventArgs[] = L"Windows.Media.Capture.IAppBroadcastMicrophoneCaptureStateChangedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastMicrophoneCaptureStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastMicrophoneCaptureStateChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastMicrophoneCaptureStateChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastMicrophoneCaptureStateChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastMicrophoneCaptureStateChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastMicrophoneCaptureStateChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastMicrophoneCaptureStateChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastMicrophoneCaptureStateChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastMicrophoneCaptureState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ErrorCode )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastMicrophoneCaptureStateChangedEventArgs * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastMicrophoneCaptureStateChangedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastMicrophoneCaptureStateChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastMicrophoneCaptureStateChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->get_ErrorCode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastMicrophoneCaptureStateChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppBroadcastPlugIn[] = L"Windows.Media.Capture.IAppBroadcastPlugIn";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugIn * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugIn * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugIn * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugIn * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugIn * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugIn * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AppId )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugIn * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProviderSettings )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugIn * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastProviderSettings * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Logo )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugIn * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugIn * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugIn
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AppId(This,value) )
    ( (This)->lpVtbl->get_ProviderSettings(This,value) )
    ( (This)->lpVtbl->get_Logo(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugIn;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppBroadcastPlugInManager[] = L"Windows.Media.Capture.IAppBroadcastPlugInManager";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsBroadcastProviderAvailable )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInManager * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PlugInList )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInManager * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCapture__CAppBroadcastPlugIn * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DefaultPlugIn )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInManager * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugIn * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DefaultPlugIn )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugIn * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInManagerVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInManager
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsBroadcastProviderAvailable(This,value) )
    ( (This)->lpVtbl->get_PlugInList(This,value) )
    ( (This)->lpVtbl->get_DefaultPlugIn(This,value) )
    ( (This)->lpVtbl->put_DefaultPlugIn(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppBroadcastPlugInManagerStatics[] = L"Windows.Media.Capture.IAppBroadcastPlugInManagerStatics";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInManager * * ppInstance
        );
    HRESULT ( STDMETHODCALLTYPE *GetForUser )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInManager * * ppInstance
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInManagerStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,ppInstance) )
    ( (This)->lpVtbl->GetForUser(This,user,ppInstance) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppBroadcastPlugInStateChangedEventArgs[] = L"Windows.Media.Capture.IAppBroadcastPlugInStateChangedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInStateChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInStateChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInStateChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInStateChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInStateChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInStateChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PlugInState )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInStateChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastPlugInState * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInStateChangedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInStateChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInStateChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PlugInState(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugInStateChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppBroadcastPreview[] = L"Windows.Media.Capture.IAppBroadcastPreview";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreview * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreview * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreview * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreview * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreview * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreview * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *StopPreview )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreview * This
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PreviewState )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreview * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastPreviewState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ErrorCode )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreview * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PreviewStateChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreview * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastPreview_Windows__CMedia__CCapture__CAppBroadcastPreviewStateChangedEventArgs * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PreviewStateChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreview * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PreviewStreamReader )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreview * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamReader * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreview
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->StopPreview(This) )
    ( (This)->lpVtbl->get_PreviewState(This,value) )
    ( (This)->lpVtbl->get_ErrorCode(This,value) )
    ( (This)->lpVtbl->add_PreviewStateChanged(This,value,token) )
    ( (This)->lpVtbl->remove_PreviewStateChanged(This,token) )
    ( (This)->lpVtbl->get_PreviewStreamReader(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreview;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppBroadcastPreviewStateChangedEventArgs[] = L"Windows.Media.Capture.IAppBroadcastPreviewStateChangedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStateChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStateChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStateChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStateChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStateChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStateChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PreviewState )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStateChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastPreviewState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ErrorCode )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStateChangedEventArgs * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStateChangedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStateChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStateChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PreviewState(This,value) )
    ( (This)->lpVtbl->get_ErrorCode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStateChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppBroadcastPreviewStreamReader[] = L"Windows.Media.Capture.IAppBroadcastPreviewStreamReader";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamReader * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamReader * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamReader * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamReader * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamReader * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamReader * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_VideoWidth )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamReader * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoHeight )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamReader * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoStride )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamReader * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoBitmapPixelFormat )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamReader * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoBitmapAlphaMode )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamReader * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetNextVideoFrame )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamReader * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamVideoFrame * * frame
        );
                    HRESULT ( STDMETHODCALLTYPE *add_VideoFrameArrived )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamReader * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastPreviewStreamReader_IInspectable * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_VideoFrameArrived )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamReader * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamReaderVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamReader
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamReaderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_VideoWidth(This,value) )
    ( (This)->lpVtbl->get_VideoHeight(This,value) )
    ( (This)->lpVtbl->get_VideoStride(This,value) )
    ( (This)->lpVtbl->get_VideoBitmapPixelFormat(This,value) )
    ( (This)->lpVtbl->get_VideoBitmapAlphaMode(This,value) )
    ( (This)->lpVtbl->TryGetNextVideoFrame(This,frame) )
    ( (This)->lpVtbl->add_VideoFrameArrived(This,value,token) )
    ( (This)->lpVtbl->remove_VideoFrameArrived(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamReader;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppBroadcastPreviewStreamVideoFrame[] = L"Windows.Media.Capture.IAppBroadcastPreviewStreamVideoFrame";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamVideoFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamVideoFrame * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamVideoFrame * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamVideoFrame * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamVideoFrame * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamVideoFrame * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamVideoFrame * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_VideoHeader )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamVideoFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamVideoHeader * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoBuffer )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamVideoFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamVideoFrameVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamVideoFrame
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamVideoFrameVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_VideoHeader(This,value) )
    ( (This)->lpVtbl->get_VideoBuffer(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamVideoFrame;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppBroadcastPreviewStreamVideoHeader[] = L"Windows.Media.Capture.IAppBroadcastPreviewStreamVideoHeader";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamVideoHeaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamVideoHeader * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamVideoHeader * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamVideoHeader * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamVideoHeader * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamVideoHeader * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamVideoHeader * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AbsoluteTimestamp )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamVideoHeader * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RelativeTimestamp )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamVideoHeader * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamVideoHeader * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FrameId )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamVideoHeader * This,
                           __RPC__out UINT64 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamVideoHeaderVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamVideoHeader
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamVideoHeaderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AbsoluteTimestamp(This,value) )
    ( (This)->lpVtbl->get_RelativeTimestamp(This,value) )
    ( (This)->lpVtbl->get_Duration(This,value) )
    ( (This)->lpVtbl->get_FrameId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreviewStreamVideoHeader;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppBroadcastProviderSettings[] = L"Windows.Media.Capture.IAppBroadcastProviderSettings";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastProviderSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastProviderSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastProviderSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastProviderSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastProviderSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastProviderSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastProviderSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_DefaultBroadcastTitle )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastProviderSettings * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DefaultBroadcastTitle )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastProviderSettings * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AudioEncodingBitrate )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastProviderSettings * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioEncodingBitrate )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastProviderSettings * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CustomVideoEncodingBitrate )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastProviderSettings * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CustomVideoEncodingBitrate )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastProviderSettings * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CustomVideoEncodingHeight )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastProviderSettings * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CustomVideoEncodingHeight )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastProviderSettings * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CustomVideoEncodingWidth )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastProviderSettings * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CustomVideoEncodingWidth )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastProviderSettings * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_VideoEncodingBitrateMode )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastProviderSettings * This,
                  __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastVideoEncodingBitrateMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoEncodingBitrateMode )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastProviderSettings * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastVideoEncodingBitrateMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_VideoEncodingResolutionMode )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastProviderSettings * This,
                  __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastVideoEncodingResolutionMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoEncodingResolutionMode )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastProviderSettings * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastVideoEncodingResolutionMode * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastProviderSettingsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastProviderSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastProviderSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_DefaultBroadcastTitle(This,value) )
    ( (This)->lpVtbl->get_DefaultBroadcastTitle(This,value) )
    ( (This)->lpVtbl->put_AudioEncodingBitrate(This,value) )
    ( (This)->lpVtbl->get_AudioEncodingBitrate(This,value) )
    ( (This)->lpVtbl->put_CustomVideoEncodingBitrate(This,value) )
    ( (This)->lpVtbl->get_CustomVideoEncodingBitrate(This,value) )
    ( (This)->lpVtbl->put_CustomVideoEncodingHeight(This,value) )
    ( (This)->lpVtbl->get_CustomVideoEncodingHeight(This,value) )
    ( (This)->lpVtbl->put_CustomVideoEncodingWidth(This,value) )
    ( (This)->lpVtbl->get_CustomVideoEncodingWidth(This,value) )
    ( (This)->lpVtbl->put_VideoEncodingBitrateMode(This,value) )
    ( (This)->lpVtbl->get_VideoEncodingBitrateMode(This,value) )
    ( (This)->lpVtbl->put_VideoEncodingResolutionMode(This,value) )
    ( (This)->lpVtbl->get_VideoEncodingResolutionMode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastProviderSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppBroadcastServices[] = L"Windows.Media.Capture.IAppBroadcastServices";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastServicesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastServices * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastServices * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastServices * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastServices * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastServices * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastServices * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CaptureTargetType )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastServices * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastCaptureTargetType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CaptureTargetType )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastServices * This,
                  __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastCaptureTargetType value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BroadcastTitle )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastServices * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BroadcastTitle )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastServices * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BroadcastLanguage )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastServices * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BroadcastLanguage )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastServices * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UserName )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastServices * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanCapture )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastServices * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *EnterBroadcastModeAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastServices * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPlugIn * plugIn,
                           __RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ExitBroadcastMode )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastServices * This,
                  __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastExitBroadcastModeReason reason
        );
    HRESULT ( STDMETHODCALLTYPE *StartBroadcast )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastServices * This
        );
    HRESULT ( STDMETHODCALLTYPE *PauseBroadcast )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastServices * This
        );
    HRESULT ( STDMETHODCALLTYPE *ResumeBroadcast )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastServices * This
        );
    HRESULT ( STDMETHODCALLTYPE *StartPreview )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastServices * This,
                  __x_ABI_CWindows_CFoundation_CSize desiredSize,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastPreview * * preview
        );
                   HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastServices * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastServicesVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastServices
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastServicesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CaptureTargetType(This,value) )
    ( (This)->lpVtbl->put_CaptureTargetType(This,value) )
    ( (This)->lpVtbl->get_BroadcastTitle(This,value) )
    ( (This)->lpVtbl->put_BroadcastTitle(This,value) )
    ( (This)->lpVtbl->get_BroadcastLanguage(This,value) )
    ( (This)->lpVtbl->put_BroadcastLanguage(This,value) )
    ( (This)->lpVtbl->get_UserName(This,value) )
    ( (This)->lpVtbl->get_CanCapture(This,value) )
    ( (This)->lpVtbl->EnterBroadcastModeAsync(This,plugIn,operation) )
    ( (This)->lpVtbl->ExitBroadcastMode(This,reason) )
    ( (This)->lpVtbl->StartBroadcast(This) )
    ( (This)->lpVtbl->PauseBroadcast(This) )
    ( (This)->lpVtbl->ResumeBroadcast(This) )
    ( (This)->lpVtbl->StartPreview(This,desiredSize,preview) )
    ( (This)->lpVtbl->get_State(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastServices;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppBroadcastSignInStateChangedEventArgs[] = L"Windows.Media.Capture.IAppBroadcastSignInStateChangedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastSignInStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastSignInStateChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastSignInStateChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastSignInStateChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastSignInStateChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastSignInStateChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastSignInStateChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SignInState )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastSignInStateChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastSignInState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Result )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastSignInStateChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastSignInResult * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastSignInStateChangedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastSignInStateChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastSignInStateChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SignInState(This,value) )
    ( (This)->lpVtbl->get_Result(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastSignInStateChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppBroadcastState[] = L"Windows.Media.Capture.IAppBroadcastState";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsCaptureTargetRunning )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ViewerCount )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShouldCaptureMicrophone )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ShouldCaptureMicrophone )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *RestartMicrophoneCapture )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShouldCaptureCamera )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ShouldCaptureCamera )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *RestartCameraCapture )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EncodedVideoSize )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MicrophoneCaptureState )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastMicrophoneCaptureState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MicrophoneCaptureError )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CameraCaptureState )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastCameraCaptureState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CameraCaptureError )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StreamState )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastStreamState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PlugInState )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastPlugInState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OAuthRequestUri )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OAuthCallbackUri )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AuthenticationResult )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AuthenticationResult )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CIWebAuthenticationResult * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SignInState )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                  __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastSignInState value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SignInState )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastSignInState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TerminationReason )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastTerminationReason * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TerminationReasonPlugInSpecific )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                           __RPC__out UINT32 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ViewerCountChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastViewerCountChangedEventArgs * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ViewerCountChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_MicrophoneCaptureStateChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastMicrophoneCaptureStateChangedEventArgs * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MicrophoneCaptureStateChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CameraCaptureStateChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastCameraCaptureStateChangedEventArgs * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CameraCaptureStateChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PlugInStateChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastPlugInStateChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PlugInStateChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_StreamStateChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_Windows__CMedia__CCapture__CAppBroadcastStreamStateChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StreamStateChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CaptureTargetClosed )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastState_IInspectable * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CaptureTargetClosed )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStateVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStateVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsCaptureTargetRunning(This,value) )
    ( (This)->lpVtbl->get_ViewerCount(This,value) )
    ( (This)->lpVtbl->get_ShouldCaptureMicrophone(This,value) )
    ( (This)->lpVtbl->put_ShouldCaptureMicrophone(This,value) )
    ( (This)->lpVtbl->RestartMicrophoneCapture(This) )
    ( (This)->lpVtbl->get_ShouldCaptureCamera(This,value) )
    ( (This)->lpVtbl->put_ShouldCaptureCamera(This,value) )
    ( (This)->lpVtbl->RestartCameraCapture(This) )
    ( (This)->lpVtbl->get_EncodedVideoSize(This,value) )
    ( (This)->lpVtbl->get_MicrophoneCaptureState(This,value) )
    ( (This)->lpVtbl->get_MicrophoneCaptureError(This,value) )
    ( (This)->lpVtbl->get_CameraCaptureState(This,value) )
    ( (This)->lpVtbl->get_CameraCaptureError(This,value) )
    ( (This)->lpVtbl->get_StreamState(This,value) )
    ( (This)->lpVtbl->get_PlugInState(This,value) )
    ( (This)->lpVtbl->get_OAuthRequestUri(This,value) )
    ( (This)->lpVtbl->get_OAuthCallbackUri(This,value) )
    ( (This)->lpVtbl->get_AuthenticationResult(This,value) )
    ( (This)->lpVtbl->put_AuthenticationResult(This,value) )
    ( (This)->lpVtbl->put_SignInState(This,value) )
    ( (This)->lpVtbl->get_SignInState(This,value) )
    ( (This)->lpVtbl->get_TerminationReason(This,value) )
    ( (This)->lpVtbl->get_TerminationReasonPlugInSpecific(This,value) )
    ( (This)->lpVtbl->add_ViewerCountChanged(This,value,token) )
    ( (This)->lpVtbl->remove_ViewerCountChanged(This,token) )
    ( (This)->lpVtbl->add_MicrophoneCaptureStateChanged(This,value,token) )
    ( (This)->lpVtbl->remove_MicrophoneCaptureStateChanged(This,token) )
    ( (This)->lpVtbl->add_CameraCaptureStateChanged(This,value,token) )
    ( (This)->lpVtbl->remove_CameraCaptureStateChanged(This,token) )
    ( (This)->lpVtbl->add_PlugInStateChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_PlugInStateChanged(This,token) )
    ( (This)->lpVtbl->add_StreamStateChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_StreamStateChanged(This,token) )
    ( (This)->lpVtbl->add_CaptureTargetClosed(This,value,token) )
    ( (This)->lpVtbl->remove_CaptureTargetClosed(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastState;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppBroadcastStreamAudioFrame[] = L"Windows.Media.Capture.IAppBroadcastStreamAudioFrame";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioFrame * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioFrame * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioFrame * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioFrame * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioFrame * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioFrame * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AudioHeader )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioHeader * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioBuffer )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioFrameVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioFrame
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioFrameVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AudioHeader(This,value) )
    ( (This)->lpVtbl->get_AudioBuffer(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioFrame;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppBroadcastStreamAudioHeader[] = L"Windows.Media.Capture.IAppBroadcastStreamAudioHeader";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioHeaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioHeader * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioHeader * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioHeader * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioHeader * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioHeader * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioHeader * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AbsoluteTimestamp )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioHeader * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RelativeTimestamp )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioHeader * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioHeader * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasDiscontinuity )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioHeader * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FrameId )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioHeader * This,
                           __RPC__out UINT64 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioHeaderVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioHeader
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioHeaderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AbsoluteTimestamp(This,value) )
    ( (This)->lpVtbl->get_RelativeTimestamp(This,value) )
    ( (This)->lpVtbl->get_Duration(This,value) )
    ( (This)->lpVtbl->get_HasDiscontinuity(This,value) )
    ( (This)->lpVtbl->get_FrameId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioHeader;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppBroadcastStreamReader[] = L"Windows.Media.Capture.IAppBroadcastStreamReader";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamReader * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamReader * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamReader * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamReader * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamReader * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamReader * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AudioChannels )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamReader * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioSampleRate )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamReader * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioAacSequence )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamReader * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioBitrate )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamReader * This,
                           __RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetNextAudioFrame )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamReader * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamAudioFrame * * frame
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoWidth )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamReader * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoHeight )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamReader * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoBitrate )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamReader * This,
                           __RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetNextVideoFrame )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamReader * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoFrame * * frame
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AudioFrameArrived )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamReader * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastStreamReader_IInspectable * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AudioFrameArrived )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamReader * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_VideoFrameArrived )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamReader * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppBroadcastStreamReader_IInspectable * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_VideoFrameArrived )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamReader * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamReaderVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamReader
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamReaderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AudioChannels(This,value) )
    ( (This)->lpVtbl->get_AudioSampleRate(This,value) )
    ( (This)->lpVtbl->get_AudioAacSequence(This,value) )
    ( (This)->lpVtbl->get_AudioBitrate(This,value) )
    ( (This)->lpVtbl->TryGetNextAudioFrame(This,frame) )
    ( (This)->lpVtbl->get_VideoWidth(This,value) )
    ( (This)->lpVtbl->get_VideoHeight(This,value) )
    ( (This)->lpVtbl->get_VideoBitrate(This,value) )
    ( (This)->lpVtbl->TryGetNextVideoFrame(This,frame) )
    ( (This)->lpVtbl->add_AudioFrameArrived(This,value,token) )
    ( (This)->lpVtbl->remove_AudioFrameArrived(This,token) )
    ( (This)->lpVtbl->add_VideoFrameArrived(This,value,token) )
    ( (This)->lpVtbl->remove_VideoFrameArrived(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamReader;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppBroadcastStreamStateChangedEventArgs[] = L"Windows.Media.Capture.IAppBroadcastStreamStateChangedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamStateChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamStateChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamStateChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamStateChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamStateChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamStateChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StreamState )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamStateChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CAppBroadcastStreamState * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamStateChangedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamStateChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamStateChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StreamState(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamStateChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppBroadcastStreamVideoFrame[] = L"Windows.Media.Capture.IAppBroadcastStreamVideoFrame";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoFrame * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoFrame * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoFrame * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoFrame * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoFrame * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoFrame * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_VideoHeader )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoHeader * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoBuffer )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoFrameVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoFrame
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoFrameVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_VideoHeader(This,value) )
    ( (This)->lpVtbl->get_VideoBuffer(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoFrame;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppBroadcastStreamVideoHeader[] = L"Windows.Media.Capture.IAppBroadcastStreamVideoHeader";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoHeaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoHeader * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoHeader * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoHeader * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoHeader * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoHeader * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoHeader * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AbsoluteTimestamp )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoHeader * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RelativeTimestamp )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoHeader * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoHeader * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsKeyFrame )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoHeader * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasDiscontinuity )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoHeader * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FrameId )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoHeader * This,
                           __RPC__out UINT64 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoHeaderVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoHeader
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoHeaderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AbsoluteTimestamp(This,value) )
    ( (This)->lpVtbl->get_RelativeTimestamp(This,value) )
    ( (This)->lpVtbl->get_Duration(This,value) )
    ( (This)->lpVtbl->get_IsKeyFrame(This,value) )
    ( (This)->lpVtbl->get_HasDiscontinuity(This,value) )
    ( (This)->lpVtbl->get_FrameId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastStreamVideoHeader;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppBroadcastTriggerDetails[] = L"Windows.Media.Capture.IAppBroadcastTriggerDetails";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BackgroundService )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastTriggerDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastBackgroundService * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastTriggerDetailsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BackgroundService(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppBroadcastViewerCountChangedEventArgs[] = L"Windows.Media.Capture.IAppBroadcastViewerCountChangedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastViewerCountChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastViewerCountChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastViewerCountChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastViewerCountChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastViewerCountChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastViewerCountChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastViewerCountChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ViewerCount )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastViewerCountChangedEventArgs * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastViewerCountChangedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastViewerCountChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastViewerCountChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ViewerCount(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastViewerCountChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppCapture[] = L"Windows.Media.Capture.IAppCapture";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCapture * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCapture * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCapture * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCapture * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCapture * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCapture * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsCapturingAudio )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCapture * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCapturingVideo )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCapture * This,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CapturingChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCapture * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCapture_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CapturingChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCapture * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppCapture
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsCapturingAudio(This,value) )
    ( (This)->lpVtbl->get_IsCapturingVideo(This,value) )
    ( (This)->lpVtbl->add_CapturingChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_CapturingChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppCapture;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys[] = L"Windows.Media.Capture.IAppCaptureAlternateShortcutKeys";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeysVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_ToggleGameBarKey )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys * This,
                  __x_ABI_CWindows_CSystem_CVirtualKey value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ToggleGameBarKey )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CVirtualKey * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ToggleGameBarKeyModifiers )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys * This,
                  __x_ABI_CWindows_CSystem_CVirtualKeyModifiers value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ToggleGameBarKeyModifiers )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CVirtualKeyModifiers * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SaveHistoricalVideoKey )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys * This,
                  __x_ABI_CWindows_CSystem_CVirtualKey value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SaveHistoricalVideoKey )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CVirtualKey * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SaveHistoricalVideoKeyModifiers )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys * This,
                  __x_ABI_CWindows_CSystem_CVirtualKeyModifiers value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SaveHistoricalVideoKeyModifiers )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CVirtualKeyModifiers * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ToggleRecordingKey )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys * This,
                  __x_ABI_CWindows_CSystem_CVirtualKey value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ToggleRecordingKey )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CVirtualKey * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ToggleRecordingKeyModifiers )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys * This,
                  __x_ABI_CWindows_CSystem_CVirtualKeyModifiers value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ToggleRecordingKeyModifiers )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CVirtualKeyModifiers * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TakeScreenshotKey )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys * This,
                  __x_ABI_CWindows_CSystem_CVirtualKey value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TakeScreenshotKey )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CVirtualKey * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TakeScreenshotKeyModifiers )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys * This,
                  __x_ABI_CWindows_CSystem_CVirtualKeyModifiers value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TakeScreenshotKeyModifiers )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CVirtualKeyModifiers * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ToggleRecordingIndicatorKey )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys * This,
                  __x_ABI_CWindows_CSystem_CVirtualKey value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ToggleRecordingIndicatorKey )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CVirtualKey * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ToggleRecordingIndicatorKeyModifiers )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys * This,
                  __x_ABI_CWindows_CSystem_CVirtualKeyModifiers value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ToggleRecordingIndicatorKeyModifiers )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CVirtualKeyModifiers * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeysVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeysVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_ToggleGameBarKey(This,value) )
    ( (This)->lpVtbl->get_ToggleGameBarKey(This,value) )
    ( (This)->lpVtbl->put_ToggleGameBarKeyModifiers(This,value) )
    ( (This)->lpVtbl->get_ToggleGameBarKeyModifiers(This,value) )
    ( (This)->lpVtbl->put_SaveHistoricalVideoKey(This,value) )
    ( (This)->lpVtbl->get_SaveHistoricalVideoKey(This,value) )
    ( (This)->lpVtbl->put_SaveHistoricalVideoKeyModifiers(This,value) )
    ( (This)->lpVtbl->get_SaveHistoricalVideoKeyModifiers(This,value) )
    ( (This)->lpVtbl->put_ToggleRecordingKey(This,value) )
    ( (This)->lpVtbl->get_ToggleRecordingKey(This,value) )
    ( (This)->lpVtbl->put_ToggleRecordingKeyModifiers(This,value) )
    ( (This)->lpVtbl->get_ToggleRecordingKeyModifiers(This,value) )
    ( (This)->lpVtbl->put_TakeScreenshotKey(This,value) )
    ( (This)->lpVtbl->get_TakeScreenshotKey(This,value) )
    ( (This)->lpVtbl->put_TakeScreenshotKeyModifiers(This,value) )
    ( (This)->lpVtbl->get_TakeScreenshotKeyModifiers(This,value) )
    ( (This)->lpVtbl->put_ToggleRecordingIndicatorKey(This,value) )
    ( (This)->lpVtbl->get_ToggleRecordingIndicatorKey(This,value) )
    ( (This)->lpVtbl->put_ToggleRecordingIndicatorKeyModifiers(This,value) )
    ( (This)->lpVtbl->get_ToggleRecordingIndicatorKeyModifiers(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys2[] = L"Windows.Media.Capture.IAppCaptureAlternateShortcutKeys2";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_ToggleMicrophoneCaptureKey )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys2 * This,
                  __x_ABI_CWindows_CSystem_CVirtualKey value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ToggleMicrophoneCaptureKey )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys2 * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CVirtualKey * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ToggleMicrophoneCaptureKeyModifiers )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys2 * This,
                  __x_ABI_CWindows_CSystem_CVirtualKeyModifiers value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ToggleMicrophoneCaptureKeyModifiers )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys2 * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CVirtualKeyModifiers * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys2Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_ToggleMicrophoneCaptureKey(This,value) )
    ( (This)->lpVtbl->get_ToggleMicrophoneCaptureKey(This,value) )
    ( (This)->lpVtbl->put_ToggleMicrophoneCaptureKeyModifiers(This,value) )
    ( (This)->lpVtbl->get_ToggleMicrophoneCaptureKeyModifiers(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys3[] = L"Windows.Media.Capture.IAppCaptureAlternateShortcutKeys3";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_ToggleCameraCaptureKey )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys3 * This,
                  __x_ABI_CWindows_CSystem_CVirtualKey value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ToggleCameraCaptureKey )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys3 * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CVirtualKey * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ToggleCameraCaptureKeyModifiers )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys3 * This,
                  __x_ABI_CWindows_CSystem_CVirtualKeyModifiers value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ToggleCameraCaptureKeyModifiers )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys3 * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CVirtualKeyModifiers * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ToggleBroadcastKey )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys3 * This,
                  __x_ABI_CWindows_CSystem_CVirtualKey value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ToggleBroadcastKey )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys3 * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CVirtualKey * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ToggleBroadcastKeyModifiers )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys3 * This,
                  __x_ABI_CWindows_CSystem_CVirtualKeyModifiers value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ToggleBroadcastKeyModifiers )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys3 * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CVirtualKeyModifiers * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys3Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_ToggleCameraCaptureKey(This,value) )
    ( (This)->lpVtbl->get_ToggleCameraCaptureKey(This,value) )
    ( (This)->lpVtbl->put_ToggleCameraCaptureKeyModifiers(This,value) )
    ( (This)->lpVtbl->get_ToggleCameraCaptureKeyModifiers(This,value) )
    ( (This)->lpVtbl->put_ToggleBroadcastKey(This,value) )
    ( (This)->lpVtbl->get_ToggleBroadcastKey(This,value) )
    ( (This)->lpVtbl->put_ToggleBroadcastKeyModifiers(This,value) )
    ( (This)->lpVtbl->get_ToggleBroadcastKeyModifiers(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppCaptureDurationGeneratedEventArgs[] = L"Windows.Media.Capture.IAppCaptureDurationGeneratedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureDurationGeneratedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureDurationGeneratedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureDurationGeneratedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureDurationGeneratedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureDurationGeneratedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureDurationGeneratedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureDurationGeneratedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureDurationGeneratedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureDurationGeneratedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureDurationGeneratedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureDurationGeneratedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Duration(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppCaptureDurationGeneratedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppCaptureFileGeneratedEventArgs[] = L"Windows.Media.Capture.IAppCaptureFileGeneratedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureFileGeneratedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureFileGeneratedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureFileGeneratedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureFileGeneratedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureFileGeneratedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureFileGeneratedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureFileGeneratedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_File )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureFileGeneratedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureFileGeneratedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureFileGeneratedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureFileGeneratedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_File(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppCaptureFileGeneratedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppCaptureManagerStatics[] = L"Windows.Media.Capture.IAppCaptureManagerStatics";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCurrentSettings )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ApplySettings )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * appCaptureSettings
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureManagerStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCurrentSettings(This,value) )
    ( (This)->lpVtbl->ApplySettings(This,appCaptureSettings) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppCaptureManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppCaptureMetadataWriter[] = L"Windows.Media.Capture.IAppCaptureMetadataWriter";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMetadataWriterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMetadataWriter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMetadataWriter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMetadataWriter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMetadataWriter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMetadataWriter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMetadataWriter * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AddStringEvent )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMetadataWriter * This,
                  __RPC__in HSTRING name,
                  __RPC__in HSTRING value,
                  __x_ABI_CWindows_CMedia_CCapture_CAppCaptureMetadataPriority priority
        );
    HRESULT ( STDMETHODCALLTYPE *AddInt32Event )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMetadataWriter * This,
                  __RPC__in HSTRING name,
                  INT32 value,
                  __x_ABI_CWindows_CMedia_CCapture_CAppCaptureMetadataPriority priority
        );
    HRESULT ( STDMETHODCALLTYPE *AddDoubleEvent )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMetadataWriter * This,
                  __RPC__in HSTRING name,
                  DOUBLE value,
                  __x_ABI_CWindows_CMedia_CCapture_CAppCaptureMetadataPriority priority
        );
    HRESULT ( STDMETHODCALLTYPE *StartStringState )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMetadataWriter * This,
                  __RPC__in HSTRING name,
                  __RPC__in HSTRING value,
                  __x_ABI_CWindows_CMedia_CCapture_CAppCaptureMetadataPriority priority
        );
    HRESULT ( STDMETHODCALLTYPE *StartInt32State )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMetadataWriter * This,
                  __RPC__in HSTRING name,
                  INT32 value,
                  __x_ABI_CWindows_CMedia_CCapture_CAppCaptureMetadataPriority priority
        );
    HRESULT ( STDMETHODCALLTYPE *StartDoubleState )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMetadataWriter * This,
                  __RPC__in HSTRING name,
                  DOUBLE value,
                  __x_ABI_CWindows_CMedia_CCapture_CAppCaptureMetadataPriority priority
        );
    HRESULT ( STDMETHODCALLTYPE *StopState )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMetadataWriter * This,
                  __RPC__in HSTRING name
        );
    HRESULT ( STDMETHODCALLTYPE *StopAllStates )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMetadataWriter * This
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemainingStorageBytesAvailable )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMetadataWriter * This,
                           __RPC__out UINT64 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_MetadataPurged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMetadataWriter * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureMetadataWriter_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MetadataPurged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMetadataWriter * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMetadataWriterVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMetadataWriter
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMetadataWriterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AddStringEvent(This,name,value,priority) )
    ( (This)->lpVtbl->AddInt32Event(This,name,value,priority) )
    ( (This)->lpVtbl->AddDoubleEvent(This,name,value,priority) )
    ( (This)->lpVtbl->StartStringState(This,name,value,priority) )
    ( (This)->lpVtbl->StartInt32State(This,name,value,priority) )
    ( (This)->lpVtbl->StartDoubleState(This,name,value,priority) )
    ( (This)->lpVtbl->StopState(This,name) )
    ( (This)->lpVtbl->StopAllStates(This) )
    ( (This)->lpVtbl->get_RemainingStorageBytesAvailable(This,value) )
    ( (This)->lpVtbl->add_MetadataPurged(This,handler,token) )
    ( (This)->lpVtbl->remove_MetadataPurged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMetadataWriter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppCaptureMicrophoneCaptureStateChangedEventArgs[] = L"Windows.Media.Capture.IAppCaptureMicrophoneCaptureStateChangedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMicrophoneCaptureStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMicrophoneCaptureStateChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMicrophoneCaptureStateChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMicrophoneCaptureStateChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMicrophoneCaptureStateChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMicrophoneCaptureStateChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMicrophoneCaptureStateChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMicrophoneCaptureStateChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CAppCaptureMicrophoneCaptureState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ErrorCode )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMicrophoneCaptureStateChangedEventArgs * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMicrophoneCaptureStateChangedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMicrophoneCaptureStateChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMicrophoneCaptureStateChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->get_ErrorCode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppCaptureMicrophoneCaptureStateChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppCaptureRecordOperation[] = L"Windows.Media.Capture.IAppCaptureRecordOperation";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordOperation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordOperation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordOperation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordOperation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordOperation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordOperation * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *StopRecording )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordOperation * This
        );
                   HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordOperation * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CAppCaptureRecordingState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ErrorCode )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordOperation * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordOperation * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_File )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordOperation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsFileTruncated )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordOperation * This,
                           __RPC__deref_out_opt __FIReference_1_boolean * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_StateChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordOperation * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureRecordingStateChangedEventArgs * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StateChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordOperation * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DurationGenerated )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordOperation * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureDurationGeneratedEventArgs * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DurationGenerated )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordOperation * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_FileGenerated )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordOperation * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureRecordOperation_Windows__CMedia__CCapture__CAppCaptureFileGeneratedEventArgs * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_FileGenerated )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordOperation * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordOperationVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordOperationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->StopRecording(This) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->get_ErrorCode(This,value) )
    ( (This)->lpVtbl->get_Duration(This,value) )
    ( (This)->lpVtbl->get_File(This,value) )
    ( (This)->lpVtbl->get_IsFileTruncated(This,value) )
    ( (This)->lpVtbl->add_StateChanged(This,value,token) )
    ( (This)->lpVtbl->remove_StateChanged(This,token) )
    ( (This)->lpVtbl->add_DurationGenerated(This,value,token) )
    ( (This)->lpVtbl->remove_DurationGenerated(This,token) )
    ( (This)->lpVtbl->add_FileGenerated(This,value,token) )
    ( (This)->lpVtbl->remove_FileGenerated(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordOperation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppCaptureRecordingStateChangedEventArgs[] = L"Windows.Media.Capture.IAppCaptureRecordingStateChangedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordingStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordingStateChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordingStateChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordingStateChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordingStateChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordingStateChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordingStateChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordingStateChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CAppCaptureRecordingState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ErrorCode )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordingStateChangedEventArgs * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordingStateChangedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordingStateChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordingStateChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->get_ErrorCode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordingStateChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppCaptureServices[] = L"Windows.Media.Capture.IAppCaptureServices";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureServicesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureServices * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureServices * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureServices * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureServices * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureServices * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureServices * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Record )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureServices * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordOperation * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RecordTimeSpan )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureServices * This,
                  __x_ABI_CWindows_CFoundation_CDateTime startTime,
                  __x_ABI_CWindows_CFoundation_CTimeSpan duration,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureRecordOperation * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanCapture )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureServices * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureServices * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureState * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureServicesVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureServices
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureServicesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Record(This,operation) )
    ( (This)->lpVtbl->RecordTimeSpan(This,startTime,duration,operation) )
    ( (This)->lpVtbl->get_CanCapture(This,value) )
    ( (This)->lpVtbl->get_State(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppCaptureServices;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppCaptureSettings[] = L"Windows.Media.Capture.IAppCaptureSettings";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_AppCaptureDestinationFolder )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFolder * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppCaptureDestinationFolder )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AudioEncodingBitrate )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioEncodingBitrate )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsAudioCaptureEnabled )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsAudioCaptureEnabled )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CustomVideoEncodingBitrate )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CustomVideoEncodingBitrate )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CustomVideoEncodingHeight )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CustomVideoEncodingHeight )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CustomVideoEncodingWidth )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CustomVideoEncodingWidth )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_HistoricalBufferLength )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HistoricalBufferLength )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_HistoricalBufferLengthUnit )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                  __x_ABI_CWindows_CMedia_CCapture_CAppCaptureHistoricalBufferLengthUnit value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HistoricalBufferLengthUnit )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CAppCaptureHistoricalBufferLengthUnit * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsHistoricalCaptureEnabled )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsHistoricalCaptureEnabled )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsHistoricalCaptureOnBatteryAllowed )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsHistoricalCaptureOnBatteryAllowed )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsHistoricalCaptureOnWirelessDisplayAllowed )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsHistoricalCaptureOnWirelessDisplayAllowed )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaximumRecordLength )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaximumRecordLength )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ScreenshotDestinationFolder )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFolder * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScreenshotDestinationFolder )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_VideoEncodingBitrateMode )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                  __x_ABI_CWindows_CMedia_CCapture_CAppCaptureVideoEncodingBitrateMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoEncodingBitrateMode )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CAppCaptureVideoEncodingBitrateMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_VideoEncodingResolutionMode )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                  __x_ABI_CWindows_CMedia_CCapture_CAppCaptureVideoEncodingResolutionMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoEncodingResolutionMode )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CAppCaptureVideoEncodingResolutionMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsAppCaptureEnabled )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsAppCaptureEnabled )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCpuConstrained )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDisabledByPolicy )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsMemoryConstrained )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasHardwareEncoder )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettingsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_AppCaptureDestinationFolder(This,value) )
    ( (This)->lpVtbl->get_AppCaptureDestinationFolder(This,value) )
    ( (This)->lpVtbl->put_AudioEncodingBitrate(This,value) )
    ( (This)->lpVtbl->get_AudioEncodingBitrate(This,value) )
    ( (This)->lpVtbl->put_IsAudioCaptureEnabled(This,value) )
    ( (This)->lpVtbl->get_IsAudioCaptureEnabled(This,value) )
    ( (This)->lpVtbl->put_CustomVideoEncodingBitrate(This,value) )
    ( (This)->lpVtbl->get_CustomVideoEncodingBitrate(This,value) )
    ( (This)->lpVtbl->put_CustomVideoEncodingHeight(This,value) )
    ( (This)->lpVtbl->get_CustomVideoEncodingHeight(This,value) )
    ( (This)->lpVtbl->put_CustomVideoEncodingWidth(This,value) )
    ( (This)->lpVtbl->get_CustomVideoEncodingWidth(This,value) )
    ( (This)->lpVtbl->put_HistoricalBufferLength(This,value) )
    ( (This)->lpVtbl->get_HistoricalBufferLength(This,value) )
    ( (This)->lpVtbl->put_HistoricalBufferLengthUnit(This,value) )
    ( (This)->lpVtbl->get_HistoricalBufferLengthUnit(This,value) )
    ( (This)->lpVtbl->put_IsHistoricalCaptureEnabled(This,value) )
    ( (This)->lpVtbl->get_IsHistoricalCaptureEnabled(This,value) )
    ( (This)->lpVtbl->put_IsHistoricalCaptureOnBatteryAllowed(This,value) )
    ( (This)->lpVtbl->get_IsHistoricalCaptureOnBatteryAllowed(This,value) )
    ( (This)->lpVtbl->put_IsHistoricalCaptureOnWirelessDisplayAllowed(This,value) )
    ( (This)->lpVtbl->get_IsHistoricalCaptureOnWirelessDisplayAllowed(This,value) )
    ( (This)->lpVtbl->put_MaximumRecordLength(This,value) )
    ( (This)->lpVtbl->get_MaximumRecordLength(This,value) )
    ( (This)->lpVtbl->put_ScreenshotDestinationFolder(This,value) )
    ( (This)->lpVtbl->get_ScreenshotDestinationFolder(This,value) )
    ( (This)->lpVtbl->put_VideoEncodingBitrateMode(This,value) )
    ( (This)->lpVtbl->get_VideoEncodingBitrateMode(This,value) )
    ( (This)->lpVtbl->put_VideoEncodingResolutionMode(This,value) )
    ( (This)->lpVtbl->get_VideoEncodingResolutionMode(This,value) )
    ( (This)->lpVtbl->put_IsAppCaptureEnabled(This,value) )
    ( (This)->lpVtbl->get_IsAppCaptureEnabled(This,value) )
    ( (This)->lpVtbl->get_IsCpuConstrained(This,value) )
    ( (This)->lpVtbl->get_IsDisabledByPolicy(This,value) )
    ( (This)->lpVtbl->get_IsMemoryConstrained(This,value) )
    ( (This)->lpVtbl->get_HasHardwareEncoder(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppCaptureSettings2[] = L"Windows.Media.Capture.IAppCaptureSettings2";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsGpuConstrained )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AlternateShortcutKeys )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureAlternateShortcutKeys * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings2Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsGpuConstrained(This,value) )
    ( (This)->lpVtbl->get_AlternateShortcutKeys(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppCaptureSettings3[] = L"Windows.Media.Capture.IAppCaptureSettings3";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_IsMicrophoneCaptureEnabled )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings3 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsMicrophoneCaptureEnabled )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings3 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings3Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_IsMicrophoneCaptureEnabled(This,value) )
    ( (This)->lpVtbl->get_IsMicrophoneCaptureEnabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppCaptureSettings4[] = L"Windows.Media.Capture.IAppCaptureSettings4";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_IsMicrophoneCaptureEnabledByDefault )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings4 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsMicrophoneCaptureEnabledByDefault )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings4 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SystemAudioGain )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings4 * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SystemAudioGain )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings4 * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MicrophoneGain )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings4 * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MicrophoneGain )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings4 * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_VideoEncodingFrameRateMode )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings4 * This,
                  __x_ABI_CWindows_CMedia_CCapture_CAppCaptureVideoEncodingFrameRateMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoEncodingFrameRateMode )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings4 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CAppCaptureVideoEncodingFrameRateMode * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings4Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings4
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_IsMicrophoneCaptureEnabledByDefault(This,value) )
    ( (This)->lpVtbl->get_IsMicrophoneCaptureEnabledByDefault(This,value) )
    ( (This)->lpVtbl->put_SystemAudioGain(This,value) )
    ( (This)->lpVtbl->get_SystemAudioGain(This,value) )
    ( (This)->lpVtbl->put_MicrophoneGain(This,value) )
    ( (This)->lpVtbl->get_MicrophoneGain(This,value) )
    ( (This)->lpVtbl->put_VideoEncodingFrameRateMode(This,value) )
    ( (This)->lpVtbl->get_VideoEncodingFrameRateMode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppCaptureSettings5[] = L"Windows.Media.Capture.IAppCaptureSettings5";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_IsEchoCancellationEnabled )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings5 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsEchoCancellationEnabled )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings5 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsCursorImageCaptureEnabled )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings5 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCursorImageCaptureEnabled )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings5 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings5Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings5
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_IsEchoCancellationEnabled(This,value) )
    ( (This)->lpVtbl->get_IsEchoCancellationEnabled(This,value) )
    ( (This)->lpVtbl->put_IsCursorImageCaptureEnabled(This,value) )
    ( (This)->lpVtbl->get_IsCursorImageCaptureEnabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppCaptureSettings5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppCaptureState[] = L"Windows.Media.Capture.IAppCaptureState";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureStateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureState * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureState * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureState * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureState * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureState * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureState * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsTargetRunning )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureState * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsHistoricalCaptureEnabled )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureState * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShouldCaptureMicrophone )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureState * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ShouldCaptureMicrophone )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureState * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *RestartMicrophoneCapture )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureState * This
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MicrophoneCaptureState )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureState * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CAppCaptureMicrophoneCaptureState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MicrophoneCaptureError )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureState * This,
                           __RPC__out UINT32 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_MicrophoneCaptureStateChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureState * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureState_Windows__CMedia__CCapture__CAppCaptureMicrophoneCaptureStateChangedEventArgs * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MicrophoneCaptureStateChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureState * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CaptureTargetClosed )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureState * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CAppCaptureState_IInspectable * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CaptureTargetClosed )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureState * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureStateVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureState
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureStateVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsTargetRunning(This,value) )
    ( (This)->lpVtbl->get_IsHistoricalCaptureEnabled(This,value) )
    ( (This)->lpVtbl->get_ShouldCaptureMicrophone(This,value) )
    ( (This)->lpVtbl->put_ShouldCaptureMicrophone(This,value) )
    ( (This)->lpVtbl->RestartMicrophoneCapture(This) )
    ( (This)->lpVtbl->get_MicrophoneCaptureState(This,value) )
    ( (This)->lpVtbl->get_MicrophoneCaptureError(This,value) )
    ( (This)->lpVtbl->add_MicrophoneCaptureStateChanged(This,value,token) )
    ( (This)->lpVtbl->remove_MicrophoneCaptureStateChanged(This,token) )
    ( (This)->lpVtbl->add_CaptureTargetClosed(This,value,token) )
    ( (This)->lpVtbl->remove_CaptureTargetClosed(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppCaptureState;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppCaptureStatics[] = L"Windows.Media.Capture.IAppCaptureStatics";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIAppCapture * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentView(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppCaptureStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IAppCaptureStatics2[] = L"Windows.Media.Capture.IAppCaptureStatics2";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetAllowedAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureStatics2 * This,
                  boolean allowed,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureStatics2Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetAllowedAsync(This,allowed,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIAppCaptureStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_ICameraCaptureUI[] = L"Windows.Media.Capture.ICameraCaptureUI";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUI * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUI * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUI * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUI * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUI * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUI * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PhotoSettings )(
        __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUI * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoSettings )(
        __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUI * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CaptureFileAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUI * This,
                  __x_ABI_CWindows_CMedia_CCapture_CCameraCaptureUIMode mode,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUI
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PhotoSettings(This,value) )
    ( (This)->lpVtbl->get_VideoSettings(This,value) )
    ( (This)->lpVtbl->CaptureFileAsync(This,mode,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUI;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_ICameraCaptureUIPhotoCaptureSettings[] = L"Windows.Media.Capture.ICameraCaptureUIPhotoCaptureSettings";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Format )(
        __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CCameraCaptureUIPhotoFormat * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Format )(
        __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings * This,
                  __x_ABI_CWindows_CMedia_CCapture_CCameraCaptureUIPhotoFormat value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxResolution )(
        __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CCameraCaptureUIMaxPhotoResolution * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxResolution )(
        __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings * This,
                  __x_ABI_CWindows_CMedia_CCapture_CCameraCaptureUIMaxPhotoResolution value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CroppedSizeInPixels )(
        __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CroppedSizeInPixels )(
        __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings * This,
                  __x_ABI_CWindows_CFoundation_CSize value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CroppedAspectRatio )(
        __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CroppedAspectRatio )(
        __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings * This,
                  __x_ABI_CWindows_CFoundation_CSize value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowCropping )(
        __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllowCropping )(
        __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettingsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Format(This,value) )
    ( (This)->lpVtbl->put_Format(This,value) )
    ( (This)->lpVtbl->get_MaxResolution(This,value) )
    ( (This)->lpVtbl->put_MaxResolution(This,value) )
    ( (This)->lpVtbl->get_CroppedSizeInPixels(This,value) )
    ( (This)->lpVtbl->put_CroppedSizeInPixels(This,value) )
    ( (This)->lpVtbl->get_CroppedAspectRatio(This,value) )
    ( (This)->lpVtbl->put_CroppedAspectRatio(This,value) )
    ( (This)->lpVtbl->get_AllowCropping(This,value) )
    ( (This)->lpVtbl->put_AllowCropping(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_ICameraCaptureUIVideoCaptureSettings[] = L"Windows.Media.Capture.ICameraCaptureUIVideoCaptureSettings";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Format )(
        __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CCameraCaptureUIVideoFormat * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Format )(
        __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings * This,
                  __x_ABI_CWindows_CMedia_CCapture_CCameraCaptureUIVideoFormat value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxResolution )(
        __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CCameraCaptureUIMaxVideoResolution * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxResolution )(
        __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings * This,
                  __x_ABI_CWindows_CMedia_CCapture_CCameraCaptureUIMaxVideoResolution value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxDurationInSeconds )(
        __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxDurationInSeconds )(
        __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowTrimming )(
        __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllowTrimming )(
        __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettingsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Format(This,value) )
    ( (This)->lpVtbl->put_Format(This,value) )
    ( (This)->lpVtbl->get_MaxResolution(This,value) )
    ( (This)->lpVtbl->put_MaxResolution(This,value) )
    ( (This)->lpVtbl->get_MaxDurationInSeconds(This,value) )
    ( (This)->lpVtbl->put_MaxDurationInSeconds(This,value) )
    ( (This)->lpVtbl->get_AllowTrimming(This,value) )
    ( (This)->lpVtbl->put_AllowTrimming(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_ICameraOptionsUIStatics[] = L"Windows.Media.Capture.ICameraOptionsUIStatics";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CICameraOptionsUIStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICameraOptionsUIStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICameraOptionsUIStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICameraOptionsUIStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICameraOptionsUIStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICameraOptionsUIStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICameraOptionsUIStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Show )(
        __x_ABI_CWindows_CMedia_CCapture_CICameraOptionsUIStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * mediaCapture
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CICameraOptionsUIStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CICameraOptionsUIStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CICameraOptionsUIStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Show(This,mediaCapture) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CICameraOptionsUIStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_ICapturedFrame[] = L"Windows.Media.Capture.ICapturedFrame";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Width )(
        __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Height )(
        __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Width(This,value) )
    ( (This)->lpVtbl->get_Height(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CICapturedFrame;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_ICapturedFrame2[] = L"Windows.Media.Capture.ICapturedFrame2";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ControlValues )(
        __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BitmapProperties )(
        __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame2 * This,
                           __RPC__deref_out_opt __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame2Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ControlValues(This,value) )
    ( (This)->lpVtbl->get_BitmapProperties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CICapturedFrame2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_ICapturedFrameControlValues[] = L"Windows.Media.Capture.ICapturedFrameControlValues";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValuesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Exposure )(
        __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExposureCompensation )(
        __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues * This,
                           __RPC__deref_out_opt __FIReference_1_float * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsoSpeed )(
        __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Focus )(
        __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SceneMode )(
        __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CMedia__CDevices__CCaptureSceneMode * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Flashed )(
        __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues * This,
                           __RPC__deref_out_opt __FIReference_1_boolean * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FlashPowerPercent )(
        __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues * This,
                           __RPC__deref_out_opt __FIReference_1_float * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WhiteBalance )(
        __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ZoomFactor )(
        __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues * This,
                           __RPC__deref_out_opt __FIReference_1_float * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValuesVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValuesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Exposure(This,value) )
    ( (This)->lpVtbl->get_ExposureCompensation(This,value) )
    ( (This)->lpVtbl->get_IsoSpeed(This,value) )
    ( (This)->lpVtbl->get_Focus(This,value) )
    ( (This)->lpVtbl->get_SceneMode(This,value) )
    ( (This)->lpVtbl->get_Flashed(This,value) )
    ( (This)->lpVtbl->get_FlashPowerPercent(This,value) )
    ( (This)->lpVtbl->get_WhiteBalance(This,value) )
    ( (This)->lpVtbl->get_ZoomFactor(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_ICapturedFrameControlValues2[] = L"Windows.Media.Capture.ICapturedFrameControlValues2";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FocusState )(
        __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues2 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CMedia__CDevices__CMediaCaptureFocusState * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsoDigitalGain )(
        __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues2 * This,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsoAnalogGain )(
        __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues2 * This,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SensorFrameRate )(
        __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WhiteBalanceGain )(
        __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues2 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CMedia__CCapture__CWhiteBalanceGain * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues2Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FocusState(This,value) )
    ( (This)->lpVtbl->get_IsoDigitalGain(This,value) )
    ( (This)->lpVtbl->get_IsoAnalogGain(This,value) )
    ( (This)->lpVtbl->get_SensorFrameRate(This,value) )
    ( (This)->lpVtbl->get_WhiteBalanceGain(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_ICapturedFrameWithSoftwareBitmap[] = L"Windows.Media.Capture.ICapturedFrameWithSoftwareBitmap";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameWithSoftwareBitmapVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameWithSoftwareBitmap * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameWithSoftwareBitmap * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameWithSoftwareBitmap * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameWithSoftwareBitmap * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameWithSoftwareBitmap * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameWithSoftwareBitmap * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SoftwareBitmap )(
        __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameWithSoftwareBitmap * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameWithSoftwareBitmapVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameWithSoftwareBitmap
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameWithSoftwareBitmapVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SoftwareBitmap(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CICapturedFrameWithSoftwareBitmap;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_ICapturedPhoto[] = L"Windows.Media.Capture.ICapturedPhoto";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CICapturedPhotoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedPhoto * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedPhoto * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedPhoto * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedPhoto * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedPhoto * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CICapturedPhoto * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Frame )(
        __x_ABI_CWindows_CMedia_CCapture_CICapturedPhoto * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Thumbnail )(
        __x_ABI_CWindows_CMedia_CCapture_CICapturedPhoto * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CICapturedPhotoVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CICapturedPhoto
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CICapturedPhotoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Frame(This,value) )
    ( (This)->lpVtbl->get_Thumbnail(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CICapturedPhoto;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IGameBarServices[] = L"Windows.Media.Capture.IGameBarServices";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServices * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServices * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServices * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServices * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServices * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServices * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TargetCapturePolicy )(
        __x_ABI_CWindows_CMedia_CCapture_CIGameBarServices * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CGameBarTargetCapturePolicy * value
        );
    HRESULT ( STDMETHODCALLTYPE *EnableCapture )(
        __x_ABI_CWindows_CMedia_CCapture_CIGameBarServices * This
        );
    HRESULT ( STDMETHODCALLTYPE *DisableCapture )(
        __x_ABI_CWindows_CMedia_CCapture_CIGameBarServices * This
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TargetInfo )(
        __x_ABI_CWindows_CMedia_CCapture_CIGameBarServices * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesTargetInfo * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SessionId )(
        __x_ABI_CWindows_CMedia_CCapture_CIGameBarServices * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppBroadcastServices )(
        __x_ABI_CWindows_CMedia_CCapture_CIGameBarServices * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIAppBroadcastServices * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppCaptureServices )(
        __x_ABI_CWindows_CMedia_CCapture_CIGameBarServices * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIAppCaptureServices * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CommandReceived )(
        __x_ABI_CWindows_CMedia_CCapture_CIGameBarServices * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CGameBarServices_Windows__CMedia__CCapture__CGameBarServicesCommandEventArgs * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CommandReceived )(
        __x_ABI_CWindows_CMedia_CCapture_CIGameBarServices * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIGameBarServices
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TargetCapturePolicy(This,value) )
    ( (This)->lpVtbl->EnableCapture(This) )
    ( (This)->lpVtbl->DisableCapture(This) )
    ( (This)->lpVtbl->get_TargetInfo(This,value) )
    ( (This)->lpVtbl->get_SessionId(This,value) )
    ( (This)->lpVtbl->get_AppBroadcastServices(This,value) )
    ( (This)->lpVtbl->get_AppCaptureServices(This,value) )
    ( (This)->lpVtbl->add_CommandReceived(This,value,token) )
    ( (This)->lpVtbl->remove_CommandReceived(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIGameBarServices;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IGameBarServicesCommandEventArgs[] = L"Windows.Media.Capture.IGameBarServicesCommandEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesCommandEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesCommandEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesCommandEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesCommandEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesCommandEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesCommandEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesCommandEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Command )(
        __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesCommandEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CGameBarCommand * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Origin )(
        __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesCommandEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CGameBarCommandOrigin * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesCommandEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesCommandEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesCommandEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Command(This,value) )
    ( (This)->lpVtbl->get_Origin(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesCommandEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IGameBarServicesManager[] = L"Windows.Media.Capture.IGameBarServicesManager";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_GameBarServicesCreated )(
        __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CGameBarServicesManager_Windows__CMedia__CCapture__CGameBarServicesManagerGameBarServicesCreatedEventArgs * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_GameBarServicesCreated )(
        __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManager * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManagerVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManager
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_GameBarServicesCreated(This,value,token) )
    ( (This)->lpVtbl->remove_GameBarServicesCreated(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IGameBarServicesManagerGameBarServicesCreatedEventArgs[] = L"Windows.Media.Capture.IGameBarServicesManagerGameBarServicesCreatedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManagerGameBarServicesCreatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManagerGameBarServicesCreatedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManagerGameBarServicesCreatedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManagerGameBarServicesCreatedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManagerGameBarServicesCreatedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManagerGameBarServicesCreatedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManagerGameBarServicesCreatedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_GameBarServices )(
        __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManagerGameBarServicesCreatedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIGameBarServices * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManagerGameBarServicesCreatedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManagerGameBarServicesCreatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManagerGameBarServicesCreatedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_GameBarServices(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManagerGameBarServicesCreatedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IGameBarServicesManagerStatics[] = L"Windows.Media.Capture.IGameBarServicesManagerStatics";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManager * * ppInstance
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManagerStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,ppInstance) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IGameBarServicesTargetInfo[] = L"Windows.Media.Capture.IGameBarServicesTargetInfo";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesTargetInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesTargetInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesTargetInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesTargetInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesTargetInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesTargetInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesTargetInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesTargetInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppId )(
        __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesTargetInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TitleId )(
        __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesTargetInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayMode )(
        __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesTargetInfo * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CGameBarServicesDisplayMode * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesTargetInfoVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesTargetInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesTargetInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_AppId(This,value) )
    ( (This)->lpVtbl->get_TitleId(This,value) )
    ( (This)->lpVtbl->get_DisplayMode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIGameBarServicesTargetInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_ILowLagMediaRecording[] = L"Windows.Media.Capture.ILowLagMediaRecording";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecordingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *StartAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *StopAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *FinishAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecordingVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecordingVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->StartAsync(This,operation) )
    ( (This)->lpVtbl->StopAsync(This,operation) )
    ( (This)->lpVtbl->FinishAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_ILowLagMediaRecording2[] = L"Windows.Media.Capture.ILowLagMediaRecording2";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *PauseAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording2 * This,
                  __x_ABI_CWindows_CMedia_CDevices_CMediaCapturePauseBehavior behavior,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ResumeAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording2Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->PauseAsync(This,behavior,operation) )
    ( (This)->lpVtbl->ResumeAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_ILowLagMediaRecording3[] = L"Windows.Media.Capture.ILowLagMediaRecording3";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *PauseWithResultAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording3 * This,
                  __x_ABI_CWindows_CMedia_CDevices_CMediaCapturePauseBehavior behavior,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCapturePauseResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *StopWithResultAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording3 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCaptureStopResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording3Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->PauseWithResultAsync(This,behavior,operation) )
    ( (This)->lpVtbl->StopWithResultAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CILowLagMediaRecording3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_ILowLagPhotoCapture[] = L"Windows.Media.Capture.ILowLagPhotoCapture";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoCaptureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoCapture * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoCapture * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoCapture * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoCapture * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoCapture * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoCapture * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CaptureAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoCapture * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CCapturedPhoto * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *FinishAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoCapture * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoCaptureVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoCapture
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoCaptureVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CaptureAsync(This,operation) )
    ( (This)->lpVtbl->FinishAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoCapture;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_ILowLagPhotoSequenceCapture[] = L"Windows.Media.Capture.ILowLagPhotoSequenceCapture";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoSequenceCaptureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoSequenceCapture * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoSequenceCapture * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoSequenceCapture * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoSequenceCapture * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoSequenceCapture * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoSequenceCapture * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *StartAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoSequenceCapture * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *StopAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoSequenceCapture * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *FinishAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoSequenceCapture * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PhotoCaptured )(
        __x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoSequenceCapture * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture_Windows__CMedia__CCapture__CPhotoCapturedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PhotoCaptured )(
        __x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoSequenceCapture * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoSequenceCaptureVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoSequenceCapture
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoSequenceCaptureVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->StartAsync(This,operation) )
    ( (This)->lpVtbl->StopAsync(This,operation) )
    ( (This)->lpVtbl->FinishAsync(This,operation) )
    ( (This)->lpVtbl->add_PhotoCaptured(This,handler,token) )
    ( (This)->lpVtbl->remove_PhotoCaptured(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CILowLagPhotoSequenceCapture;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IMediaCapture[] = L"Windows.Media.Capture.IMediaCapture";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *InitializeAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
                    HRESULT ( STDMETHODCALLTYPE *InitializeWithSettingsAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings * mediaCaptureInitializationSettings,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *StartRecordToStorageFileAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * encodingProfile,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *StartRecordToStreamAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * encodingProfile,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * stream,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
                    HRESULT ( STDMETHODCALLTYPE *StartRecordToCustomSinkAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * encodingProfile,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CIMediaExtension * customMediaSink,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
                    HRESULT ( STDMETHODCALLTYPE *StartRecordToCustomSinkIdAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * encodingProfile,
                  __RPC__in HSTRING customSinkActivationId,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * customSinkSettings,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *StopRecordAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *CapturePhotoToStorageFileAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * type,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *CapturePhotoToStreamAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * type,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * stream,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    DEPRECATED("AddEffectAsync might not be available in future versions of Windows. Starting with Windows Threshold, use AddAudioEffectAsync and AddVideoEffectAsync instead")
                      HRESULT ( STDMETHODCALLTYPE *AddEffectAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * This,
                  __x_ABI_CWindows_CMedia_CCapture_CMediaStreamType mediaStreamType,
                  __RPC__in HSTRING effectActivationID,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * effectSettings,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *ClearEffectsAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * This,
                  __x_ABI_CWindows_CMedia_CCapture_CMediaStreamType mediaStreamType,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *SetEncoderProperty )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * This,
                  __x_ABI_CWindows_CMedia_CCapture_CMediaStreamType mediaStreamType,
                  GUID propertyId,
                  __RPC__in_opt IInspectable * propertyValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetEncoderProperty )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * This,
                  __x_ABI_CWindows_CMedia_CCapture_CMediaStreamType mediaStreamType,
                  GUID propertyId,
                           __RPC__deref_out_opt IInspectable * * propertyValue
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Failed )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFailedEventHandler * errorEventHandler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Failed )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * This,
                  EventRegistrationToken eventCookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_RecordLimitationExceeded )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIRecordLimitationExceededEventHandler * recordLimitationExceededEventHandler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_RecordLimitationExceeded )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * This,
                  EventRegistrationToken eventCookie
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediaCaptureSettings )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioDeviceController )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoDeviceController )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPreviewMirroring )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPreviewMirroring )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPreviewRotation )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * This,
                  __x_ABI_CWindows_CMedia_CCapture_CVideoRotation value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPreviewRotation )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CVideoRotation * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetRecordRotation )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * This,
                  __x_ABI_CWindows_CMedia_CCapture_CVideoRotation value
        );
    HRESULT ( STDMETHODCALLTYPE *GetRecordRotation )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CVideoRotation * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->InitializeAsync(This,asyncInfo) )
    ( (This)->lpVtbl->InitializeWithSettingsAsync(This,mediaCaptureInitializationSettings,asyncInfo) )
    ( (This)->lpVtbl->StartRecordToStorageFileAsync(This,encodingProfile,file,asyncInfo) )
    ( (This)->lpVtbl->StartRecordToStreamAsync(This,encodingProfile,stream,asyncInfo) )
    ( (This)->lpVtbl->StartRecordToCustomSinkAsync(This,encodingProfile,customMediaSink,asyncInfo) )
    ( (This)->lpVtbl->StartRecordToCustomSinkIdAsync(This,encodingProfile,customSinkActivationId,customSinkSettings,asyncInfo) )
    ( (This)->lpVtbl->StopRecordAsync(This,asyncInfo) )
    ( (This)->lpVtbl->CapturePhotoToStorageFileAsync(This,type,file,asyncInfo) )
    ( (This)->lpVtbl->CapturePhotoToStreamAsync(This,type,stream,asyncInfo) )
DEPRECATED("AddEffectAsync might not be available in future versions of Windows. Starting with Windows Threshold, use AddAudioEffectAsync and AddVideoEffectAsync instead")
    ( (This)->lpVtbl->AddEffectAsync(This,mediaStreamType,effectActivationID,effectSettings,asyncInfo) )
    ( (This)->lpVtbl->ClearEffectsAsync(This,mediaStreamType,asyncInfo) )
    ( (This)->lpVtbl->SetEncoderProperty(This,mediaStreamType,propertyId,propertyValue) )
    ( (This)->lpVtbl->GetEncoderProperty(This,mediaStreamType,propertyId,propertyValue) )
    ( (This)->lpVtbl->add_Failed(This,errorEventHandler,eventCookie) )
    ( (This)->lpVtbl->remove_Failed(This,eventCookie) )
    ( (This)->lpVtbl->add_RecordLimitationExceeded(This,recordLimitationExceededEventHandler,eventCookie) )
    ( (This)->lpVtbl->remove_RecordLimitationExceeded(This,eventCookie) )
    ( (This)->lpVtbl->get_MediaCaptureSettings(This,value) )
    ( (This)->lpVtbl->get_AudioDeviceController(This,value) )
    ( (This)->lpVtbl->get_VideoDeviceController(This,value) )
    ( (This)->lpVtbl->SetPreviewMirroring(This,value) )
    ( (This)->lpVtbl->GetPreviewMirroring(This,value) )
    ( (This)->lpVtbl->SetPreviewRotation(This,value) )
    ( (This)->lpVtbl->GetPreviewRotation(This,value) )
    ( (This)->lpVtbl->SetRecordRotation(This,value) )
    ( (This)->lpVtbl->GetRecordRotation(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIMediaCapture;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IMediaCapture2[] = L"Windows.Media.Capture.IMediaCapture2";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *PrepareLowLagRecordToStorageFileAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * encodingProfile,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagMediaRecording * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *PrepareLowLagRecordToStreamAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * encodingProfile,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * stream,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagMediaRecording * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *PrepareLowLagRecordToCustomSinkAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * encodingProfile,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CIMediaExtension * customMediaSink,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagMediaRecording * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *PrepareLowLagRecordToCustomSinkIdAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * encodingProfile,
                  __RPC__in HSTRING customSinkActivationId,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * customSinkSettings,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagMediaRecording * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *PrepareLowLagPhotoCaptureAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * type,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoCapture * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *PrepareLowLagPhotoSequenceCaptureAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * type,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CLowLagPhotoSequenceCapture * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SetEncodingPropertiesAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture2 * This,
                  __x_ABI_CWindows_CMedia_CCapture_CMediaStreamType mediaStreamType,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * mediaEncodingProperties,
                  __RPC__in_opt __FIMap_2_GUID_IInspectable * encoderProperties,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture2Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->PrepareLowLagRecordToStorageFileAsync(This,encodingProfile,file,operation) )
    ( (This)->lpVtbl->PrepareLowLagRecordToStreamAsync(This,encodingProfile,stream,operation) )
    ( (This)->lpVtbl->PrepareLowLagRecordToCustomSinkAsync(This,encodingProfile,customMediaSink,operation) )
    ( (This)->lpVtbl->PrepareLowLagRecordToCustomSinkIdAsync(This,encodingProfile,customSinkActivationId,customSinkSettings,operation) )
    ( (This)->lpVtbl->PrepareLowLagPhotoCaptureAsync(This,type,operation) )
    ( (This)->lpVtbl->PrepareLowLagPhotoSequenceCaptureAsync(This,type,operation) )
    ( (This)->lpVtbl->SetEncodingPropertiesAsync(This,mediaStreamType,mediaEncodingProperties,encoderProperties,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIMediaCapture2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IMediaCapture3[] = L"Windows.Media.Capture.IMediaCapture3";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *PrepareVariablePhotoSequenceCaptureAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * type,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *add_FocusChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture3 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CMediaCaptureFocusChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_FocusChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture3 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PhotoConfirmationCaptured )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture3 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CPhotoConfirmationCapturedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PhotoConfirmationCaptured )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture3 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture3Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->PrepareVariablePhotoSequenceCaptureAsync(This,type,operation) )
    ( (This)->lpVtbl->add_FocusChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_FocusChanged(This,token) )
    ( (This)->lpVtbl->add_PhotoConfirmationCaptured(This,handler,token) )
    ( (This)->lpVtbl->remove_PhotoConfirmationCaptured(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIMediaCapture3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IMediaCapture4[] = L"Windows.Media.Capture.IMediaCapture4";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AddAudioEffectAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * definition,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension * * op
        );
    HRESULT ( STDMETHODCALLTYPE *AddVideoEffectAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * definition,
                  __x_ABI_CWindows_CMedia_CCapture_CMediaStreamType mediaStreamType,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension * * op
        );
    HRESULT ( STDMETHODCALLTYPE *PauseRecordAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture4 * This,
                  __x_ABI_CWindows_CMedia_CDevices_CMediaCapturePauseBehavior behavior,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *ResumeRecordAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CameraStreamStateChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture4 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CameraStreamStateChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture4 * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CameraStreamState )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture4 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CDevices_CCameraStreamState * streamState
        );
                    HRESULT ( STDMETHODCALLTYPE *GetPreviewFrameAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture4 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CVideoFrame * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetPreviewFrameCopyAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CIVideoFrame * destination,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CVideoFrame * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ThermalStatusChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture4 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ThermalStatusChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture4 * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ThermalStatus )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture4 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CMediaCaptureThermalStatus * value
        );
    HRESULT ( STDMETHODCALLTYPE *PrepareAdvancedPhotoCaptureAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * encodingProperties,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CAdvancedPhotoCapture * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture4Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture4
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AddAudioEffectAsync(This,definition,op) )
    ( (This)->lpVtbl->AddVideoEffectAsync(This,definition,mediaStreamType,op) )
    ( (This)->lpVtbl->PauseRecordAsync(This,behavior,asyncInfo) )
    ( (This)->lpVtbl->ResumeRecordAsync(This,asyncInfo) )
    ( (This)->lpVtbl->add_CameraStreamStateChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_CameraStreamStateChanged(This,token) )
    ( (This)->lpVtbl->get_CameraStreamState(This,streamState) )
    ( (This)->lpVtbl->GetPreviewFrameAsync(This,operation) )
    ( (This)->lpVtbl->GetPreviewFrameCopyAsync(This,destination,operation) )
    ( (This)->lpVtbl->add_ThermalStatusChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ThermalStatusChanged(This,token) )
    ( (This)->lpVtbl->get_ThermalStatus(This,value) )
    ( (This)->lpVtbl->PrepareAdvancedPhotoCaptureAsync(This,encodingProperties,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIMediaCapture4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IMediaCapture5[] = L"Windows.Media.Capture.IMediaCapture5";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RemoveEffectAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture5 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CIMediaExtension * effect,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *PauseRecordWithResultAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture5 * This,
                  __x_ABI_CWindows_CMedia_CDevices_CMediaCapturePauseBehavior behavior,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCapturePauseResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *StopRecordWithResultAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture5 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CMediaCaptureStopResult * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FrameSources )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture5 * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFrameReaderAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture5 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * inputSource,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFrameReaderWithSubtypeAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture5 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * inputSource,
                  __RPC__in HSTRING outputSubtype,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFrameReaderWithSubtypeAndSizeAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture5 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * inputSource,
                  __RPC__in HSTRING outputSubtype,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize outputSize,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture5Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture5
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RemoveEffectAsync(This,effect,asyncInfo) )
    ( (This)->lpVtbl->PauseRecordWithResultAsync(This,behavior,operation) )
    ( (This)->lpVtbl->StopRecordWithResultAsync(This,operation) )
    ( (This)->lpVtbl->get_FrameSources(This,value) )
    ( (This)->lpVtbl->CreateFrameReaderAsync(This,inputSource,value) )
    ( (This)->lpVtbl->CreateFrameReaderWithSubtypeAsync(This,inputSource,outputSubtype,value) )
    ( (This)->lpVtbl->CreateFrameReaderWithSubtypeAndSizeAsync(This,inputSource,outputSubtype,outputSize,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIMediaCapture5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IMediaCapture6[] = L"Windows.Media.Capture.IMediaCapture6";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture6Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture6 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture6 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture6 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture6 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture6 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture6 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_CaptureDeviceExclusiveControlStatusChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture6 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CMediaCapture_Windows__CMedia__CCapture__CMediaCaptureDeviceExclusiveControlStatusChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CaptureDeviceExclusiveControlStatusChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture6 * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *CreateMultiSourceFrameReaderAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture6 * This,
                  __RPC__in_opt __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * inputSources,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture6Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture6
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCapture6Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_CaptureDeviceExclusiveControlStatusChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_CaptureDeviceExclusiveControlStatusChanged(This,token) )
    ( (This)->lpVtbl->CreateMultiSourceFrameReaderAsync(This,inputSources,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIMediaCapture6;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs[] = L"Windows.Media.Capture.IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureDeviceExclusiveControlStatusChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureDeviceExclusiveControlStatusChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureDeviceExclusiveControlStatusChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureDeviceExclusiveControlStatusChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureDeviceExclusiveControlStatusChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureDeviceExclusiveControlStatusChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureDeviceExclusiveControlStatusChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureDeviceExclusiveControlStatusChangedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureDeviceExclusiveControlStatusChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CMediaCaptureDeviceExclusiveControlStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureDeviceExclusiveControlStatusChangedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureDeviceExclusiveControlStatusChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureDeviceExclusiveControlStatusChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureDeviceExclusiveControlStatusChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IMediaCaptureFailedEventArgs[] = L"Windows.Media.Capture.IMediaCaptureFailedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFailedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFailedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFailedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFailedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFailedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFailedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFailedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFailedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Code )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFailedEventArgs * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFailedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFailedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFailedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Message(This,value) )
    ( (This)->lpVtbl->get_Code(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFailedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IMediaCaptureFocusChangedEventArgs[] = L"Windows.Media.Capture.IMediaCaptureFocusChangedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFocusChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFocusChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFocusChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFocusChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFocusChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFocusChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFocusChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FocusState )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFocusChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CDevices_CMediaCaptureFocusState * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFocusChangedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFocusChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFocusChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FocusState(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureFocusChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IMediaCaptureInitializationSettings[] = L"Windows.Media.Capture.IMediaCaptureInitializationSettings";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_AudioDeviceId )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioDeviceId )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_VideoDeviceId )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoDeviceId )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StreamingCaptureMode )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings * This,
                  __x_ABI_CWindows_CMedia_CCapture_CStreamingCaptureMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StreamingCaptureMode )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CStreamingCaptureMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PhotoCaptureSource )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings * This,
                  __x_ABI_CWindows_CMedia_CCapture_CPhotoCaptureSource value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhotoCaptureSource )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CPhotoCaptureSource * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettingsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_AudioDeviceId(This,value) )
    ( (This)->lpVtbl->get_AudioDeviceId(This,value) )
    ( (This)->lpVtbl->put_VideoDeviceId(This,value) )
    ( (This)->lpVtbl->get_VideoDeviceId(This,value) )
    ( (This)->lpVtbl->put_StreamingCaptureMode(This,value) )
    ( (This)->lpVtbl->get_StreamingCaptureMode(This,value) )
    ( (This)->lpVtbl->put_PhotoCaptureSource(This,value) )
    ( (This)->lpVtbl->get_PhotoCaptureSource(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IMediaCaptureInitializationSettings2[] = L"Windows.Media.Capture.IMediaCaptureInitializationSettings2";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_MediaCategory )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings2 * This,
                  __x_ABI_CWindows_CMedia_CCapture_CMediaCategory value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediaCategory )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings2 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CMediaCategory * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AudioProcessing )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings2 * This,
                  __x_ABI_CWindows_CMedia_CAudioProcessing value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioProcessing )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings2 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CAudioProcessing * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings2Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_MediaCategory(This,value) )
    ( (This)->lpVtbl->get_MediaCategory(This,value) )
    ( (This)->lpVtbl->put_AudioProcessing(This,value) )
    ( (This)->lpVtbl->get_AudioProcessing(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IMediaCaptureInitializationSettings3[] = L"Windows.Media.Capture.IMediaCaptureInitializationSettings3";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_AudioSource )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSource * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioSource )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSource * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_VideoSource )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSource * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoSource )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSource * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings3Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_AudioSource(This,value) )
    ( (This)->lpVtbl->get_AudioSource(This,value) )
    ( (This)->lpVtbl->put_VideoSource(This,value) )
    ( (This)->lpVtbl->get_VideoSource(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IMediaCaptureInitializationSettings4[] = L"Windows.Media.Capture.IMediaCaptureInitializationSettings4";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_VideoProfile )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_VideoProfile )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PreviewMediaDescription )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PreviewMediaDescription )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RecordMediaDescription )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RecordMediaDescription )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhotoMediaDescription )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PhotoMediaDescription )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings4Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings4
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_VideoProfile(This,value) )
    ( (This)->lpVtbl->put_VideoProfile(This,value) )
    ( (This)->lpVtbl->get_PreviewMediaDescription(This,value) )
    ( (This)->lpVtbl->put_PreviewMediaDescription(This,value) )
    ( (This)->lpVtbl->get_RecordMediaDescription(This,value) )
    ( (This)->lpVtbl->put_RecordMediaDescription(This,value) )
    ( (This)->lpVtbl->get_PhotoMediaDescription(This,value) )
    ( (This)->lpVtbl->put_PhotoMediaDescription(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IMediaCaptureInitializationSettings5[] = L"Windows.Media.Capture.IMediaCaptureInitializationSettings5";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SourceGroup )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SourceGroup )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings5 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SharingMode )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings5 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CMediaCaptureSharingMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SharingMode )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings5 * This,
                  __x_ABI_CWindows_CMedia_CCapture_CMediaCaptureSharingMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MemoryPreference )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings5 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CMediaCaptureMemoryPreference * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MemoryPreference )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings5 * This,
                  __x_ABI_CWindows_CMedia_CCapture_CMediaCaptureMemoryPreference value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings5Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings5
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SourceGroup(This,value) )
    ( (This)->lpVtbl->put_SourceGroup(This,value) )
    ( (This)->lpVtbl->get_SharingMode(This,value) )
    ( (This)->lpVtbl->put_SharingMode(This,value) )
    ( (This)->lpVtbl->get_MemoryPreference(This,value) )
    ( (This)->lpVtbl->put_MemoryPreference(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IMediaCaptureInitializationSettings6[] = L"Windows.Media.Capture.IMediaCaptureInitializationSettings6";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings6Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings6 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings6 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings6 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings6 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings6 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings6 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AlwaysPlaySystemShutterSound )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings6 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AlwaysPlaySystemShutterSound )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings6 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings6Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings6
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings6Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AlwaysPlaySystemShutterSound(This,value) )
    ( (This)->lpVtbl->put_AlwaysPlaySystemShutterSound(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureInitializationSettings6;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IMediaCapturePauseResult[] = L"Windows.Media.Capture.IMediaCapturePauseResult";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCapturePauseResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapturePauseResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapturePauseResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapturePauseResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapturePauseResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapturePauseResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCapturePauseResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LastFrame )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapturePauseResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIVideoFrame * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RecordDuration )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCapturePauseResult * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIMediaCapturePauseResultVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCapturePauseResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCapturePauseResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LastFrame(This,value) )
    ( (This)->lpVtbl->get_RecordDuration(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIMediaCapturePauseResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IMediaCaptureSettings[] = L"Windows.Media.Capture.IMediaCaptureSettings";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AudioDeviceId )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoDeviceId )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StreamingCaptureMode )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CStreamingCaptureMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhotoCaptureSource )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CPhotoCaptureSource * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoDeviceCharacteristic )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CVideoDeviceCharacteristic * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettingsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AudioDeviceId(This,value) )
    ( (This)->lpVtbl->get_VideoDeviceId(This,value) )
    ( (This)->lpVtbl->get_StreamingCaptureMode(This,value) )
    ( (This)->lpVtbl->get_PhotoCaptureSource(This,value) )
    ( (This)->lpVtbl->get_VideoDeviceCharacteristic(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IMediaCaptureSettings2[] = L"Windows.Media.Capture.IMediaCaptureSettings2";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ConcurrentRecordAndPhotoSupported )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ConcurrentRecordAndPhotoSequenceSupported )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CameraSoundRequiredForRegion )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Horizontal35mmEquivalentFocalLength )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings2 * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PitchOffsetDegrees )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings2 * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Vertical35mmEquivalentFocalLength )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings2 * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediaCategory )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings2 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CMediaCategory * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioProcessing )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings2 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CAudioProcessing * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings2Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ConcurrentRecordAndPhotoSupported(This,value) )
    ( (This)->lpVtbl->get_ConcurrentRecordAndPhotoSequenceSupported(This,value) )
    ( (This)->lpVtbl->get_CameraSoundRequiredForRegion(This,value) )
    ( (This)->lpVtbl->get_Horizontal35mmEquivalentFocalLength(This,value) )
    ( (This)->lpVtbl->get_PitchOffsetDegrees(This,value) )
    ( (This)->lpVtbl->get_Vertical35mmEquivalentFocalLength(This,value) )
    ( (This)->lpVtbl->get_MediaCategory(This,value) )
    ( (This)->lpVtbl->get_AudioProcessing(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IMediaCaptureSettings3[] = L"Windows.Media.Capture.IMediaCaptureSettings3";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Direct3D11Device )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings3Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Direct3D11Device(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureSettings3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IMediaCaptureStatics[] = L"Windows.Media.Capture.IMediaCaptureStatics";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsVideoProfileSupported )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureStatics * This,
                  __RPC__in HSTRING videoDeviceId,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *FindAllVideoProfiles )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureStatics * This,
                  __RPC__in HSTRING videoDeviceId,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile * * value
        );
    HRESULT ( STDMETHODCALLTYPE *FindConcurrentProfiles )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureStatics * This,
                  __RPC__in HSTRING videoDeviceId,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile * * value
        );
    HRESULT ( STDMETHODCALLTYPE *FindKnownVideoProfiles )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureStatics * This,
                  __RPC__in HSTRING videoDeviceId,
                  __x_ABI_CWindows_CMedia_CCapture_CKnownVideoProfile name,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsVideoProfileSupported(This,videoDeviceId,value) )
    ( (This)->lpVtbl->FindAllVideoProfiles(This,videoDeviceId,value) )
    ( (This)->lpVtbl->FindConcurrentProfiles(This,videoDeviceId,value) )
    ( (This)->lpVtbl->FindKnownVideoProfiles(This,videoDeviceId,name,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IMediaCaptureStopResult[] = L"Windows.Media.Capture.IMediaCaptureStopResult";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureStopResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureStopResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureStopResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureStopResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureStopResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureStopResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureStopResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LastFrame )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureStopResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIVideoFrame * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RecordDuration )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureStopResult * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureStopResultVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureStopResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureStopResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LastFrame(This,value) )
    ( (This)->lpVtbl->get_RecordDuration(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureStopResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IMediaCaptureVideoPreview[] = L"Windows.Media.Capture.IMediaCaptureVideoPreview";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoPreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoPreview * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoPreview * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoPreview * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoPreview * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoPreview * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoPreview * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *StartPreviewAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoPreview * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
                    HRESULT ( STDMETHODCALLTYPE *StartPreviewToCustomSinkAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoPreview * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * encodingProfile,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CIMediaExtension * customMediaSink,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
                    HRESULT ( STDMETHODCALLTYPE *StartPreviewToCustomSinkIdAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoPreview * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * encodingProfile,
                  __RPC__in HSTRING customSinkActivationId,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * customSinkSettings,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *StopPreviewAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoPreview * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoPreviewVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoPreview
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoPreviewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->StartPreviewAsync(This,asyncInfo) )
    ( (This)->lpVtbl->StartPreviewToCustomSinkAsync(This,encodingProfile,customMediaSink,asyncInfo) )
    ( (This)->lpVtbl->StartPreviewToCustomSinkIdAsync(This,encodingProfile,customSinkActivationId,customSinkSettings,asyncInfo) )
    ( (This)->lpVtbl->StopPreviewAsync(This,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoPreview;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IMediaCaptureVideoProfile[] = L"Windows.Media.Capture.IMediaCaptureVideoProfile";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoDeviceId )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedPreviewMediaDescription )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedRecordMediaDescription )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedPhotoMediaDescription )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetConcurrency )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfile * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_VideoDeviceId(This,value) )
    ( (This)->lpVtbl->get_SupportedPreviewMediaDescription(This,value) )
    ( (This)->lpVtbl->get_SupportedRecordMediaDescription(This,value) )
    ( (This)->lpVtbl->get_SupportedPhotoMediaDescription(This,value) )
    ( (This)->lpVtbl->GetConcurrency(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IMediaCaptureVideoProfile2[] = L"Windows.Media.Capture.IMediaCaptureVideoProfile2";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FrameSourceInfos )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile2 * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile2 * This,
                           __RPC__deref_out_opt __FIMapView_2_GUID_IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile2Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FrameSourceInfos(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfile2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IMediaCaptureVideoProfileMediaDescription[] = L"Windows.Media.Capture.IMediaCaptureVideoProfileMediaDescription";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescriptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Width )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Height )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FrameRate )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription * This,
                           __RPC__out DOUBLE * value
        );
    DEPRECATED("IsVariablePhotoSequenceSupported might not be available in the next major update following Windows 10, version 1709")
                               HRESULT ( STDMETHODCALLTYPE *get_IsVariablePhotoSequenceSupported )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription * This,
                           __RPC__out boolean * value
        );
    DEPRECATED("IsHdrVideoSupported might not be available in the next major update following Windows 10, version 1709")
                               HRESULT ( STDMETHODCALLTYPE *get_IsHdrVideoSupported )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescriptionVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescriptionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Width(This,value) )
    ( (This)->lpVtbl->get_Height(This,value) )
    ( (This)->lpVtbl->get_FrameRate(This,value) )
DEPRECATED("IsVariablePhotoSequenceSupported might not be available in the next major update following Windows 10, version 1709")
    ( (This)->lpVtbl->get_IsVariablePhotoSequenceSupported(This,value) )
DEPRECATED("IsHdrVideoSupported might not be available in the next major update following Windows 10, version 1709")
    ( (This)->lpVtbl->get_IsHdrVideoSupported(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IMediaCaptureVideoProfileMediaDescription2[] = L"Windows.Media.Capture.IMediaCaptureVideoProfileMediaDescription2";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Subtype )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription2 * This,
                           __RPC__deref_out_opt __FIMapView_2_GUID_IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription2Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Subtype(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IOptionalReferencePhotoCapturedEventArgs[] = L"Windows.Media.Capture.IOptionalReferencePhotoCapturedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIOptionalReferencePhotoCapturedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIOptionalReferencePhotoCapturedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIOptionalReferencePhotoCapturedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIOptionalReferencePhotoCapturedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIOptionalReferencePhotoCapturedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIOptionalReferencePhotoCapturedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIOptionalReferencePhotoCapturedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Frame )(
        __x_ABI_CWindows_CMedia_CCapture_CIOptionalReferencePhotoCapturedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Context )(
        __x_ABI_CWindows_CMedia_CCapture_CIOptionalReferencePhotoCapturedEventArgs * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIOptionalReferencePhotoCapturedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIOptionalReferencePhotoCapturedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIOptionalReferencePhotoCapturedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Frame(This,value) )
    ( (This)->lpVtbl->get_Context(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIOptionalReferencePhotoCapturedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IPhotoCapturedEventArgs[] = L"Windows.Media.Capture.IPhotoCapturedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIPhotoCapturedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIPhotoCapturedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIPhotoCapturedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIPhotoCapturedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIPhotoCapturedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIPhotoCapturedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIPhotoCapturedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Frame )(
        __x_ABI_CWindows_CMedia_CCapture_CIPhotoCapturedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Thumbnail )(
        __x_ABI_CWindows_CMedia_CCapture_CIPhotoCapturedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CaptureTimeOffset )(
        __x_ABI_CWindows_CMedia_CCapture_CIPhotoCapturedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIPhotoCapturedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIPhotoCapturedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIPhotoCapturedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Frame(This,value) )
    ( (This)->lpVtbl->get_Thumbnail(This,value) )
    ( (This)->lpVtbl->get_CaptureTimeOffset(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIPhotoCapturedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IPhotoConfirmationCapturedEventArgs[] = L"Windows.Media.Capture.IPhotoConfirmationCapturedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIPhotoConfirmationCapturedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIPhotoConfirmationCapturedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIPhotoConfirmationCapturedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIPhotoConfirmationCapturedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIPhotoConfirmationCapturedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIPhotoConfirmationCapturedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIPhotoConfirmationCapturedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Frame )(
        __x_ABI_CWindows_CMedia_CCapture_CIPhotoConfirmationCapturedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CaptureTimeOffset )(
        __x_ABI_CWindows_CMedia_CCapture_CIPhotoConfirmationCapturedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIPhotoConfirmationCapturedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIPhotoConfirmationCapturedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIPhotoConfirmationCapturedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Frame(This,value) )
    ( (This)->lpVtbl->get_CaptureTimeOffset(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIPhotoConfirmationCapturedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_IVideoStreamConfiguration[] = L"Windows.Media.Capture.IVideoStreamConfiguration";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CIVideoStreamConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIVideoStreamConfiguration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIVideoStreamConfiguration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIVideoStreamConfiguration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIVideoStreamConfiguration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIVideoStreamConfiguration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CIVideoStreamConfiguration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InputProperties )(
        __x_ABI_CWindows_CMedia_CCapture_CIVideoStreamConfiguration * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutputProperties )(
        __x_ABI_CWindows_CMedia_CCapture_CIVideoStreamConfiguration * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CIVideoStreamConfigurationVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CIVideoStreamConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CIVideoStreamConfigurationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InputProperties(This,value) )
    ( (This)->lpVtbl->get_OutputProperties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CIVideoStreamConfiguration;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AdvancedCapturedPhoto[] = L"Windows.Media.Capture.AdvancedCapturedPhoto";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AdvancedPhotoCapture[] = L"Windows.Media.Capture.AdvancedPhotoCapture";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppBroadcastBackgroundService[] = L"Windows.Media.Capture.AppBroadcastBackgroundService";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppBroadcastBackgroundServiceSignInInfo[] = L"Windows.Media.Capture.AppBroadcastBackgroundServiceSignInInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppBroadcastBackgroundServiceStreamInfo[] = L"Windows.Media.Capture.AppBroadcastBackgroundServiceStreamInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppBroadcastCameraCaptureStateChangedEventArgs[] = L"Windows.Media.Capture.AppBroadcastCameraCaptureStateChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppBroadcastGlobalSettings[] = L"Windows.Media.Capture.AppBroadcastGlobalSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppBroadcastHeartbeatRequestedEventArgs[] = L"Windows.Media.Capture.AppBroadcastHeartbeatRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppBroadcastManager[] = L"Windows.Media.Capture.AppBroadcastManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppBroadcastMicrophoneCaptureStateChangedEventArgs[] = L"Windows.Media.Capture.AppBroadcastMicrophoneCaptureStateChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppBroadcastPlugIn[] = L"Windows.Media.Capture.AppBroadcastPlugIn";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppBroadcastPlugInManager[] = L"Windows.Media.Capture.AppBroadcastPlugInManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppBroadcastPlugInStateChangedEventArgs[] = L"Windows.Media.Capture.AppBroadcastPlugInStateChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppBroadcastPreview[] = L"Windows.Media.Capture.AppBroadcastPreview";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppBroadcastPreviewStateChangedEventArgs[] = L"Windows.Media.Capture.AppBroadcastPreviewStateChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppBroadcastPreviewStreamReader[] = L"Windows.Media.Capture.AppBroadcastPreviewStreamReader";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppBroadcastPreviewStreamVideoFrame[] = L"Windows.Media.Capture.AppBroadcastPreviewStreamVideoFrame";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppBroadcastPreviewStreamVideoHeader[] = L"Windows.Media.Capture.AppBroadcastPreviewStreamVideoHeader";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppBroadcastProviderSettings[] = L"Windows.Media.Capture.AppBroadcastProviderSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppBroadcastServices[] = L"Windows.Media.Capture.AppBroadcastServices";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppBroadcastSignInStateChangedEventArgs[] = L"Windows.Media.Capture.AppBroadcastSignInStateChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppBroadcastState[] = L"Windows.Media.Capture.AppBroadcastState";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppBroadcastStreamAudioFrame[] = L"Windows.Media.Capture.AppBroadcastStreamAudioFrame";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppBroadcastStreamAudioHeader[] = L"Windows.Media.Capture.AppBroadcastStreamAudioHeader";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppBroadcastStreamReader[] = L"Windows.Media.Capture.AppBroadcastStreamReader";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppBroadcastStreamStateChangedEventArgs[] = L"Windows.Media.Capture.AppBroadcastStreamStateChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppBroadcastStreamVideoFrame[] = L"Windows.Media.Capture.AppBroadcastStreamVideoFrame";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppBroadcastStreamVideoHeader[] = L"Windows.Media.Capture.AppBroadcastStreamVideoHeader";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppBroadcastTriggerDetails[] = L"Windows.Media.Capture.AppBroadcastTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppBroadcastViewerCountChangedEventArgs[] = L"Windows.Media.Capture.AppBroadcastViewerCountChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppCapture[] = L"Windows.Media.Capture.AppCapture";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppCaptureAlternateShortcutKeys[] = L"Windows.Media.Capture.AppCaptureAlternateShortcutKeys";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppCaptureDurationGeneratedEventArgs[] = L"Windows.Media.Capture.AppCaptureDurationGeneratedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppCaptureFileGeneratedEventArgs[] = L"Windows.Media.Capture.AppCaptureFileGeneratedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppCaptureManager[] = L"Windows.Media.Capture.AppCaptureManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppCaptureMetadataWriter[] = L"Windows.Media.Capture.AppCaptureMetadataWriter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppCaptureMicrophoneCaptureStateChangedEventArgs[] = L"Windows.Media.Capture.AppCaptureMicrophoneCaptureStateChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppCaptureRecordOperation[] = L"Windows.Media.Capture.AppCaptureRecordOperation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppCaptureRecordingStateChangedEventArgs[] = L"Windows.Media.Capture.AppCaptureRecordingStateChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppCaptureServices[] = L"Windows.Media.Capture.AppCaptureServices";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppCaptureSettings[] = L"Windows.Media.Capture.AppCaptureSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_AppCaptureState[] = L"Windows.Media.Capture.AppCaptureState";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_CameraCaptureUI[] = L"Windows.Media.Capture.CameraCaptureUI";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_CameraCaptureUIPhotoCaptureSettings[] = L"Windows.Media.Capture.CameraCaptureUIPhotoCaptureSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_CameraCaptureUIVideoCaptureSettings[] = L"Windows.Media.Capture.CameraCaptureUIVideoCaptureSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_CameraOptionsUI[] = L"Windows.Media.Capture.CameraOptionsUI";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_CapturedFrame[] = L"Windows.Media.Capture.CapturedFrame";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_CapturedFrameControlValues[] = L"Windows.Media.Capture.CapturedFrameControlValues";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_CapturedPhoto[] = L"Windows.Media.Capture.CapturedPhoto";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_GameBarServices[] = L"Windows.Media.Capture.GameBarServices";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_GameBarServicesCommandEventArgs[] = L"Windows.Media.Capture.GameBarServicesCommandEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_GameBarServicesManager[] = L"Windows.Media.Capture.GameBarServicesManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_GameBarServicesManagerGameBarServicesCreatedEventArgs[] = L"Windows.Media.Capture.GameBarServicesManagerGameBarServicesCreatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_GameBarServicesTargetInfo[] = L"Windows.Media.Capture.GameBarServicesTargetInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_LowLagMediaRecording[] = L"Windows.Media.Capture.LowLagMediaRecording";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_LowLagPhotoCapture[] = L"Windows.Media.Capture.LowLagPhotoCapture";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_LowLagPhotoSequenceCapture[] = L"Windows.Media.Capture.LowLagPhotoSequenceCapture";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_MediaCapture[] = L"Windows.Media.Capture.MediaCapture";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_MediaCaptureDeviceExclusiveControlStatusChangedEventArgs[] = L"Windows.Media.Capture.MediaCaptureDeviceExclusiveControlStatusChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_MediaCaptureFailedEventArgs[] = L"Windows.Media.Capture.MediaCaptureFailedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_MediaCaptureFocusChangedEventArgs[] = L"Windows.Media.Capture.MediaCaptureFocusChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_MediaCaptureInitializationSettings[] = L"Windows.Media.Capture.MediaCaptureInitializationSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_MediaCapturePauseResult[] = L"Windows.Media.Capture.MediaCapturePauseResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_MediaCaptureSettings[] = L"Windows.Media.Capture.MediaCaptureSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_MediaCaptureStopResult[] = L"Windows.Media.Capture.MediaCaptureStopResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_MediaCaptureVideoProfile[] = L"Windows.Media.Capture.MediaCaptureVideoProfile";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_MediaCaptureVideoProfileMediaDescription[] = L"Windows.Media.Capture.MediaCaptureVideoProfileMediaDescription";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_OptionalReferencePhotoCapturedEventArgs[] = L"Windows.Media.Capture.OptionalReferencePhotoCapturedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_PhotoCapturedEventArgs[] = L"Windows.Media.Capture.PhotoCapturedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_PhotoConfirmationCapturedEventArgs[] = L"Windows.Media.Capture.PhotoConfirmationCapturedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_VideoStreamConfiguration[] = L"Windows.Media.Capture.VideoStreamConfiguration";
       
       
#pragma clang diagnostic pop
