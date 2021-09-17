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
#include "Windows.ApplicationModel.AppService.h"
#include "Windows.Graphics.DirectX.Direct3D11.h"
#include "Windows.Graphics.Imaging.h"
#include "Windows.Media.h"
#include "Windows.Media.Capture.h"
#include "Windows.Media.Capture.Frames.h"
#include "Windows.Media.Devices.h"
#include "Windows.Media.Devices.Core.h"
#include "Windows.Media.Effects.h"
#include "Windows.Media.FaceAnalysis.h"
#include "Windows.Media.MediaProperties.h"
#include "Windows.Media.Playback.h"
#include "Windows.Media.Protection.h"
#include "Windows.Media.Streaming.Adaptive.h"
#include "Windows.Networking.BackgroundTransfer.h"
#include "Windows.Storage.h"
#include "Windows.Storage.FileProperties.h"
#include "Windows.Storage.Streams.h"
#include "Windows.UI.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor2 __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor2;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor3 __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor3;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptorFactory __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptorFactory;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIAudioTrack __x_ABI_CWindows_CMedia_CCore_CIAudioTrack;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIAudioTrackOpenFailedEventArgs __x_ABI_CWindows_CMedia_CCore_CIAudioTrackOpenFailedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIAudioTrackSupportInfo __x_ABI_CWindows_CMedia_CCore_CIAudioTrackSupportInfo;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIChapterCue __x_ABI_CWindows_CMedia_CCore_CIChapterCue;
typedef interface __x_ABI_CWindows_CMedia_CCore_CICodecInfo __x_ABI_CWindows_CMedia_CCore_CICodecInfo;
typedef interface __x_ABI_CWindows_CMedia_CCore_CICodecQuery __x_ABI_CWindows_CMedia_CCore_CICodecQuery;
typedef interface __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIDataCue __x_ABI_CWindows_CMedia_CCore_CIDataCue;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIDataCue2 __x_ABI_CWindows_CMedia_CCore_CIDataCue2;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIFaceDetectedEventArgs __x_ABI_CWindows_CMedia_CCore_CIFaceDetectedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffect __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffect;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectDefinition __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectDefinition;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectFrame __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectFrame;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIHighDynamicRangeControl __x_ABI_CWindows_CMedia_CCore_CIHighDynamicRangeControl;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIHighDynamicRangeOutput __x_ABI_CWindows_CMedia_CCore_CIHighDynamicRangeOutput;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIImageCue __x_ABI_CWindows_CMedia_CCore_CIImageCue;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIInitializeMediaStreamSourceRequestedEventArgs __x_ABI_CWindows_CMedia_CCore_CIInitializeMediaStreamSourceRequestedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCore_CILowLightFusionResult __x_ABI_CWindows_CMedia_CCore_CILowLightFusionResult;
typedef interface __x_ABI_CWindows_CMedia_CCore_CILowLightFusionStatics __x_ABI_CWindows_CMedia_CCore_CILowLightFusionStatics;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaBinder __x_ABI_CWindows_CMedia_CCore_CIMediaBinder;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs2 __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs2;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs3 __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs3;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaCue __x_ABI_CWindows_CMedia_CCore_CIMediaCue;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaCueEventArgs __x_ABI_CWindows_CMedia_CCore_CIMediaCueEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaSource __x_ABI_CWindows_CMedia_CCore_CIMediaSource;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 __x_ABI_CWindows_CMedia_CCore_CIMediaSource2;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaSource3 __x_ABI_CWindows_CMedia_CCore_CIMediaSource3;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaSource4 __x_ABI_CWindows_CMedia_CCore_CIMediaSource4;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaSource5 __x_ABI_CWindows_CMedia_CCore_CIMediaSource5;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaSourceAppServiceConnection __x_ABI_CWindows_CMedia_CCore_CIMediaSourceAppServiceConnection;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaSourceAppServiceConnectionFactory __x_ABI_CWindows_CMedia_CCore_CIMediaSourceAppServiceConnectionFactory;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaSourceError __x_ABI_CWindows_CMedia_CCore_CIMediaSourceError;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaSourceOpenOperationCompletedEventArgs __x_ABI_CWindows_CMedia_CCore_CIMediaSourceOpenOperationCompletedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStateChangedEventArgs __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStateChangedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics2 __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics2;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics3 __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics3;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics4 __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics4;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor2 __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor2;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample2 __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample2;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleProtectionProperties __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleProtectionProperties;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleStatics __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleStatics;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleStatics2 __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleStatics2;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource2 __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource2;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource3 __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource3;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource4 __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource4;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceClosedEventArgs __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceClosedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceClosedRequest __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceClosedRequest;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceFactory __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceFactory;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRenderedEventArgs __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRenderedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequest __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequest;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequestDeferral __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequestDeferral;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequestedEventArgs __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequestedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingEventArgs __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingRequest __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingRequest;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingRequestDeferral __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingRequestDeferral;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequest __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequest;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequestDeferral __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequestDeferral;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequestedEventArgs __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequestedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaTrack __x_ABI_CWindows_CMedia_CCore_CIMediaTrack;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMseSourceBufferList __x_ABI_CWindows_CMedia_CCore_CIMseSourceBufferList;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource2 __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource2;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMseStreamSourceStatics __x_ABI_CWindows_CMedia_CCore_CIMseStreamSourceStatics;
typedef interface __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffect __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffect;
typedef interface __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffectFrame __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffectFrame;
typedef interface __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffectFrame2 __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffectFrame2;
typedef interface __x_ABI_CWindows_CMedia_CCore_CISceneAnalyzedEventArgs __x_ABI_CWindows_CMedia_CCore_CISceneAnalyzedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCore_CISingleSelectMediaTrackList __x_ABI_CWindows_CMedia_CCore_CISingleSelectMediaTrackList;
typedef interface __x_ABI_CWindows_CMedia_CCore_CISpeechCue __x_ABI_CWindows_CMedia_CCore_CISpeechCue;
typedef interface __x_ABI_CWindows_CMedia_CCore_CITimedMetadataStreamDescriptor __x_ABI_CWindows_CMedia_CCore_CITimedMetadataStreamDescriptor;
typedef interface __x_ABI_CWindows_CMedia_CCore_CITimedMetadataStreamDescriptorFactory __x_ABI_CWindows_CMedia_CCore_CITimedMetadataStreamDescriptorFactory;
typedef interface __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack;
typedef interface __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack2 __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack2;
typedef interface __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackError __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackError;
typedef interface __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackFactory __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackFactory;
typedef interface __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackFailedEventArgs __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackFailedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackProvider __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackProvider;
typedef interface __x_ABI_CWindows_CMedia_CCore_CITimedTextCue __x_ABI_CWindows_CMedia_CCore_CITimedTextCue;
typedef interface __x_ABI_CWindows_CMedia_CCore_CITimedTextLine __x_ABI_CWindows_CMedia_CCore_CITimedTextLine;
typedef interface __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion;
typedef interface __x_ABI_CWindows_CMedia_CCore_CITimedTextSource __x_ABI_CWindows_CMedia_CCore_CITimedTextSource;
typedef interface __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceResolveResultEventArgs __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceResolveResultEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceStatics __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceStatics;
typedef interface __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceStatics2 __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceStatics2;
typedef interface __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle;
typedef interface __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle2 __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle2;
typedef interface __x_ABI_CWindows_CMedia_CCore_CITimedTextSubformat __x_ABI_CWindows_CMedia_CCore_CITimedTextSubformat;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIVideoStabilizationEffect __x_ABI_CWindows_CMedia_CCore_CIVideoStabilizationEffect;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIVideoStabilizationEffectEnabledChangedEventArgs __x_ABI_CWindows_CMedia_CCore_CIVideoStabilizationEffectEnabledChangedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor2 __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor2;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptorFactory __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptorFactory;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIVideoTrack __x_ABI_CWindows_CMedia_CCore_CIVideoTrack;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIVideoTrackOpenFailedEventArgs __x_ABI_CWindows_CMedia_CCore_CIVideoTrackOpenFailedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIVideoTrackSupportInfo __x_ABI_CWindows_CMedia_CCore_CIVideoTrackSupportInfo;
typedef interface __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor;
typedef struct __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__out __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl;
interface __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor;
typedef struct __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl;
interface __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CCore__CAudioTrack __FIIterator_1_Windows__CMedia__CCore__CAudioTrack;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCore__CAudioTrack;
typedef struct __FIIterator_1_Windows__CMedia__CCore__CAudioTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioTrack * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioTrack * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioTrack * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioTrack * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioTrack * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioTrack * This, __RPC__out __x_ABI_CWindows_CMedia_CCore_CIMediaTrack * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioTrack * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioTrack * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioTrack * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIMediaTrack * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCore__CAudioTrackVtbl;
interface __FIIterator_1_Windows__CMedia__CCore__CAudioTrack
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCore__CAudioTrackVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CCore__CAudioTrack __FIIterable_1_Windows__CMedia__CCore__CAudioTrack;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCore__CAudioTrack;
typedef struct __FIIterable_1_Windows__CMedia__CCore__CAudioTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioTrack * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioTrack * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioTrack * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioTrack * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioTrack * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioTrack * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCore__CAudioTrack **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCore__CAudioTrackVtbl;
interface __FIIterable_1_Windows__CMedia__CCore__CAudioTrack
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCore__CAudioTrackVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CCore__CCodecInfo __FIIterator_1_Windows__CMedia__CCore__CCodecInfo;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCore__CCodecInfo;
typedef struct __FIIterator_1_Windows__CMedia__CCore__CCodecInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CCore__CCodecInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CCodecInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CCodecInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CCodecInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CCodecInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CCodecInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CCodecInfo * This, __RPC__out __x_ABI_CWindows_CMedia_CCore_CICodecInfo * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CCodecInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CCodecInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CCodecInfo * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CICodecInfo * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCore__CCodecInfoVtbl;
interface __FIIterator_1_Windows__CMedia__CCore__CCodecInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCore__CCodecInfoVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CCore__CCodecInfo __FIIterable_1_Windows__CMedia__CCore__CCodecInfo;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCore__CCodecInfo;
typedef struct __FIIterable_1_Windows__CMedia__CCore__CCodecInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CCore__CCodecInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CCodecInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CCodecInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CCodecInfo * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CCodecInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CCodecInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CCodecInfo * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCore__CCodecInfo **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCore__CCodecInfoVtbl;
interface __FIIterable_1_Windows__CMedia__CCore__CCodecInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCore__CCodecInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CCore__CIMediaCue __FIIterator_1_Windows__CMedia__CCore__CIMediaCue;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCore__CIMediaCue;
typedef struct __FIIterator_1_Windows__CMedia__CCore__CIMediaCueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CCore__CIMediaCue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CIMediaCue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CIMediaCue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CIMediaCue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CIMediaCue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CIMediaCue * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CIMediaCue * This, __RPC__out __x_ABI_CWindows_CMedia_CCore_CIMediaCue * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CIMediaCue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CIMediaCue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CIMediaCue * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIMediaCue * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCore__CIMediaCueVtbl;
interface __FIIterator_1_Windows__CMedia__CCore__CIMediaCue
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCore__CIMediaCueVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CCore__CIMediaCue __FIIterable_1_Windows__CMedia__CCore__CIMediaCue;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCore__CIMediaCue;
typedef struct __FIIterable_1_Windows__CMedia__CCore__CIMediaCueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CCore__CIMediaCue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CIMediaCue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CIMediaCue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CIMediaCue * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CIMediaCue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CIMediaCue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CIMediaCue * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCore__CIMediaCue **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCore__CIMediaCueVtbl;
interface __FIIterable_1_Windows__CMedia__CCore__CIMediaCue
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCore__CIMediaCueVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CCore__CMseSourceBuffer __FIIterator_1_Windows__CMedia__CCore__CMseSourceBuffer;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCore__CMseSourceBuffer;
typedef struct __FIIterator_1_Windows__CMedia__CCore__CMseSourceBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CCore__CMseSourceBuffer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CMseSourceBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CMseSourceBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CMseSourceBuffer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CMseSourceBuffer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CMseSourceBuffer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CMseSourceBuffer * This, __RPC__out __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CMseSourceBuffer * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CMseSourceBuffer * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CMseSourceBuffer * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCore__CMseSourceBufferVtbl;
interface __FIIterator_1_Windows__CMedia__CCore__CMseSourceBuffer
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCore__CMseSourceBufferVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CCore__CMseSourceBuffer __FIIterable_1_Windows__CMedia__CCore__CMseSourceBuffer;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCore__CMseSourceBuffer;
typedef struct __FIIterable_1_Windows__CMedia__CCore__CMseSourceBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CCore__CMseSourceBuffer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CMseSourceBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CMseSourceBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CMseSourceBuffer * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CMseSourceBuffer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CMseSourceBuffer * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CMseSourceBuffer * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCore__CMseSourceBuffer **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCore__CMseSourceBufferVtbl;
interface __FIIterable_1_Windows__CMedia__CCore__CMseSourceBuffer
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCore__CMseSourceBufferVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
struct __x_ABI_CWindows_CMedia_CCore_CMseTimeRange;
typedef interface __FIIterator_1_Windows__CMedia__CCore__CMseTimeRange __FIIterator_1_Windows__CMedia__CCore__CMseTimeRange;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCore__CMseTimeRange;
typedef struct __FIIterator_1_Windows__CMedia__CCore__CMseTimeRangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CCore__CMseTimeRange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CMseTimeRange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CMseTimeRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CMseTimeRange * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CMseTimeRange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CMseTimeRange * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CMseTimeRange * This, __RPC__out struct __x_ABI_CWindows_CMedia_CCore_CMseTimeRange *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CMseTimeRange * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CMseTimeRange * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CMseTimeRange * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CMedia_CCore_CMseTimeRange *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCore__CMseTimeRangeVtbl;
interface __FIIterator_1_Windows__CMedia__CCore__CMseTimeRange
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCore__CMseTimeRangeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CCore__CMseTimeRange __FIIterable_1_Windows__CMedia__CCore__CMseTimeRange;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCore__CMseTimeRange;
typedef struct __FIIterable_1_Windows__CMedia__CCore__CMseTimeRangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CCore__CMseTimeRange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CMseTimeRange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CMseTimeRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CMseTimeRange * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CMseTimeRange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CMseTimeRange * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CMseTimeRange * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCore__CMseTimeRange **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCore__CMseTimeRangeVtbl;
interface __FIIterable_1_Windows__CMedia__CCore__CMseTimeRange
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCore__CMseTimeRangeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor;
typedef struct __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This, __RPC__out __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptorVtbl;
interface __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptorVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor;
typedef struct __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptorVtbl;
interface __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrack __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrack;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrack;
typedef struct __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrack * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrack * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrack * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrack * This, __RPC__out __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrack * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrack * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrackVtbl;
interface __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrack
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrackVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataTrack __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataTrack;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCore__CTimedMetadataTrack;
typedef struct __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataTrack * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataTrack * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataTrack * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataTrack * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrack **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataTrackVtbl;
interface __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataTrack
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataTrackVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CCore__CTimedTextLine __FIIterator_1_Windows__CMedia__CCore__CTimedTextLine;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCore__CTimedTextLine;
typedef struct __FIIterator_1_Windows__CMedia__CCore__CTimedTextLineVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedTextLine * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedTextLine * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedTextLine * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedTextLine * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedTextLine * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedTextLine * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedTextLine * This, __RPC__out __x_ABI_CWindows_CMedia_CCore_CITimedTextLine * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedTextLine * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedTextLine * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedTextLine * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CITimedTextLine * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCore__CTimedTextLineVtbl;
interface __FIIterator_1_Windows__CMedia__CCore__CTimedTextLine
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCore__CTimedTextLineVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CCore__CTimedTextLine __FIIterable_1_Windows__CMedia__CCore__CTimedTextLine;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCore__CTimedTextLine;
typedef struct __FIIterable_1_Windows__CMedia__CCore__CTimedTextLineVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedTextLine * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedTextLine * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedTextLine * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedTextLine * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedTextLine * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedTextLine * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedTextLine * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCore__CTimedTextLine **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCore__CTimedTextLineVtbl;
interface __FIIterable_1_Windows__CMedia__CCore__CTimedTextLine
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCore__CTimedTextLineVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CCore__CTimedTextSource __FIIterator_1_Windows__CMedia__CCore__CTimedTextSource;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCore__CTimedTextSource;
typedef struct __FIIterator_1_Windows__CMedia__CCore__CTimedTextSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedTextSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedTextSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedTextSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedTextSource * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedTextSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedTextSource * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedTextSource * This, __RPC__out __x_ABI_CWindows_CMedia_CCore_CITimedTextSource * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedTextSource * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedTextSource * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedTextSource * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CITimedTextSource * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCore__CTimedTextSourceVtbl;
interface __FIIterator_1_Windows__CMedia__CCore__CTimedTextSource
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCore__CTimedTextSourceVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CCore__CTimedTextSource __FIIterable_1_Windows__CMedia__CCore__CTimedTextSource;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCore__CTimedTextSource;
typedef struct __FIIterable_1_Windows__CMedia__CCore__CTimedTextSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedTextSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedTextSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedTextSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedTextSource * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedTextSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedTextSource * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedTextSource * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCore__CTimedTextSource **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCore__CTimedTextSourceVtbl;
interface __FIIterable_1_Windows__CMedia__CCore__CTimedTextSource
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCore__CTimedTextSourceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CCore__CTimedTextSubformat __FIIterator_1_Windows__CMedia__CCore__CTimedTextSubformat;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCore__CTimedTextSubformat;
typedef struct __FIIterator_1_Windows__CMedia__CCore__CTimedTextSubformatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedTextSubformat * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedTextSubformat * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedTextSubformat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedTextSubformat * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedTextSubformat * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedTextSubformat * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedTextSubformat * This, __RPC__out __x_ABI_CWindows_CMedia_CCore_CITimedTextSubformat * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedTextSubformat * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedTextSubformat * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedTextSubformat * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CITimedTextSubformat * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCore__CTimedTextSubformatVtbl;
interface __FIIterator_1_Windows__CMedia__CCore__CTimedTextSubformat
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCore__CTimedTextSubformatVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CCore__CTimedTextSubformat __FIIterable_1_Windows__CMedia__CCore__CTimedTextSubformat;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCore__CTimedTextSubformat;
typedef struct __FIIterable_1_Windows__CMedia__CCore__CTimedTextSubformatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedTextSubformat * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedTextSubformat * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedTextSubformat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedTextSubformat * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedTextSubformat * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedTextSubformat * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedTextSubformat * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCore__CTimedTextSubformat **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCore__CTimedTextSubformatVtbl;
interface __FIIterable_1_Windows__CMedia__CCore__CTimedTextSubformat
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCore__CTimedTextSubformatVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor;
typedef struct __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__out __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl;
interface __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor;
typedef struct __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl;
interface __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CCore__CVideoTrack __FIIterator_1_Windows__CMedia__CCore__CVideoTrack;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCore__CVideoTrack;
typedef struct __FIIterator_1_Windows__CMedia__CCore__CVideoTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoTrack * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoTrack * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoTrack * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoTrack * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoTrack * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoTrack * This, __RPC__out __x_ABI_CWindows_CMedia_CCore_CIMediaTrack * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoTrack * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoTrack * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoTrack * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIMediaTrack * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCore__CVideoTrackVtbl;
interface __FIIterator_1_Windows__CMedia__CCore__CVideoTrack
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCore__CVideoTrackVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CCore__CVideoTrack __FIIterable_1_Windows__CMedia__CCore__CVideoTrack;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCore__CVideoTrack;
typedef struct __FIIterable_1_Windows__CMedia__CCore__CVideoTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoTrack * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoTrack * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoTrack * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoTrack * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoTrack * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoTrack * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCore__CVideoTrack **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCore__CVideoTrackVtbl;
interface __FIIterable_1_Windows__CMedia__CCore__CVideoTrack
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCore__CVideoTrackVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrack __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrack;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrack;
typedef struct __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrack * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                       __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrackVtbl;
interface __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrack
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrackVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CMedia__CCore__CTimedMetadataTrack __FIVector_1_Windows__CMedia__CCore__CTimedMetadataTrack;
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CCore__CTimedMetadataTrack;
typedef struct __FIVector_1_Windows__CMedia__CCore__CTimedMetadataTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataTrack * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataTrack * This, __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataTrack * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataTrack * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrack **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataTrack * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataTrack * This, __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataTrack * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataTrack * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * *value);
    END_INTERFACE
} __FIVector_1_Windows__CMedia__CCore__CTimedMetadataTrackVtbl;
interface __FIVector_1_Windows__CMedia__CCore__CTimedMetadataTrack
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CCore__CTimedMetadataTrackVtbl *lpVtbl;
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
typedef interface __FVectorChangedEventHandler_1_Windows__CMedia__CCore__CTimedMetadataTrack __FVectorChangedEventHandler_1_Windows__CMedia__CCore__CTimedMetadataTrack;
EXTERN_C const IID IID___FVectorChangedEventHandler_1_Windows__CMedia__CCore__CTimedMetadataTrack;
typedef interface __FIObservableVector_1_Windows__CMedia__CCore__CTimedMetadataTrack __FIObservableVector_1_Windows__CMedia__CCore__CTimedMetadataTrack;
typedef struct __FVectorChangedEventHandler_1_Windows__CMedia__CCore__CTimedMetadataTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FVectorChangedEventHandler_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FVectorChangedEventHandler_1_Windows__CMedia__CCore__CTimedMetadataTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FVectorChangedEventHandler_1_Windows__CMedia__CCore__CTimedMetadataTrack * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FVectorChangedEventHandler_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                   __RPC__in_opt __FIObservableVector_1_Windows__CMedia__CCore__CTimedMetadataTrack *sender,
                   __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs *e);
    END_INTERFACE
} __FVectorChangedEventHandler_1_Windows__CMedia__CCore__CTimedMetadataTrackVtbl;
interface __FVectorChangedEventHandler_1_Windows__CMedia__CCore__CTimedMetadataTrack
{
    CONST_VTBL struct __FVectorChangedEventHandler_1_Windows__CMedia__CCore__CTimedMetadataTrackVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIObservableVector_1_Windows__CMedia__CCore__CTimedMetadataTrack __FIObservableVector_1_Windows__CMedia__CCore__CTimedMetadataTrack;
EXTERN_C const IID IID___FIObservableVector_1_Windows__CMedia__CCore__CTimedMetadataTrack;
typedef struct __FIObservableVector_1_Windows__CMedia__CCore__CTimedMetadataTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIObservableVector_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIObservableVector_1_Windows__CMedia__CCore__CTimedMetadataTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIObservableVector_1_Windows__CMedia__CCore__CTimedMetadataTrack * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIObservableVector_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIObservableVector_1_Windows__CMedia__CCore__CTimedMetadataTrack * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIObservableVector_1_Windows__CMedia__CCore__CTimedMetadataTrack * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *add_VectorChanged )(__RPC__in __FIObservableVector_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                   __RPC__in_opt __FVectorChangedEventHandler_1_Windows__CMedia__CCore__CTimedMetadataTrack *handler,
                            __RPC__out EventRegistrationToken *token);
    HRESULT ( STDMETHODCALLTYPE *remove_VectorChanged )(__RPC__in __FIObservableVector_1_Windows__CMedia__CCore__CTimedMetadataTrack * This, EventRegistrationToken token);
    END_INTERFACE
} __FIObservableVector_1_Windows__CMedia__CCore__CTimedMetadataTrackVtbl;
interface __FIObservableVector_1_Windows__CMedia__CCore__CTimedMetadataTrack
{
    CONST_VTBL struct __FIObservableVector_1_Windows__CMedia__CCore__CTimedMetadataTrackVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> add_VectorChanged(This,handler,token) )
    ( (This)->lpVtbl -> remove_VectorChanged(This,token) )
typedef interface __FIVectorView_1_Windows__CMedia__CCore__CTimedTextSource __FIVectorView_1_Windows__CMedia__CCore__CTimedTextSource;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCore__CTimedTextSource;
typedef struct __FIVectorView_1_Windows__CMedia__CCore__CTimedTextSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedTextSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedTextSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedTextSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedTextSource * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedTextSource * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedTextSource * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedTextSource * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CCore_CITimedTextSource * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedTextSource * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedTextSource * This,
                       __x_ABI_CWindows_CMedia_CCore_CITimedTextSource * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedTextSource * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CITimedTextSource * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCore__CTimedTextSourceVtbl;
interface __FIVectorView_1_Windows__CMedia__CCore__CTimedTextSource
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCore__CTimedTextSourceVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CMedia__CCore__CTimedTextSource __FIVector_1_Windows__CMedia__CCore__CTimedTextSource;
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CCore__CTimedTextSource;
typedef struct __FIVector_1_Windows__CMedia__CCore__CTimedTextSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSource * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSource * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSource * This, __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CITimedTextSource * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSource * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSource * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CITimedTextSource * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSource * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSource * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCore__CTimedTextSource **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSource * This,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSource * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSource * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSource * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSource * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSource * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSource * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSource * This, __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSource * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSource * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSource * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CITimedTextSource * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSource * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CCore_CITimedTextSource * *value);
    END_INTERFACE
} __FIVector_1_Windows__CMedia__CCore__CTimedTextSourceVtbl;
interface __FIVector_1_Windows__CMedia__CCore__CTimedTextSource
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CCore__CTimedTextSourceVtbl *lpVtbl;
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
typedef interface __FVectorChangedEventHandler_1_Windows__CMedia__CCore__CTimedTextSource __FVectorChangedEventHandler_1_Windows__CMedia__CCore__CTimedTextSource;
EXTERN_C const IID IID___FVectorChangedEventHandler_1_Windows__CMedia__CCore__CTimedTextSource;
typedef interface __FIObservableVector_1_Windows__CMedia__CCore__CTimedTextSource __FIObservableVector_1_Windows__CMedia__CCore__CTimedTextSource;
typedef struct __FVectorChangedEventHandler_1_Windows__CMedia__CCore__CTimedTextSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FVectorChangedEventHandler_1_Windows__CMedia__CCore__CTimedTextSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FVectorChangedEventHandler_1_Windows__CMedia__CCore__CTimedTextSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FVectorChangedEventHandler_1_Windows__CMedia__CCore__CTimedTextSource * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FVectorChangedEventHandler_1_Windows__CMedia__CCore__CTimedTextSource * This,
                   __RPC__in_opt __FIObservableVector_1_Windows__CMedia__CCore__CTimedTextSource *sender,
                   __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs *e);
    END_INTERFACE
} __FVectorChangedEventHandler_1_Windows__CMedia__CCore__CTimedTextSourceVtbl;
interface __FVectorChangedEventHandler_1_Windows__CMedia__CCore__CTimedTextSource
{
    CONST_VTBL struct __FVectorChangedEventHandler_1_Windows__CMedia__CCore__CTimedTextSourceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIObservableVector_1_Windows__CMedia__CCore__CTimedTextSource __FIObservableVector_1_Windows__CMedia__CCore__CTimedTextSource;
EXTERN_C const IID IID___FIObservableVector_1_Windows__CMedia__CCore__CTimedTextSource;
typedef struct __FIObservableVector_1_Windows__CMedia__CCore__CTimedTextSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIObservableVector_1_Windows__CMedia__CCore__CTimedTextSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIObservableVector_1_Windows__CMedia__CCore__CTimedTextSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIObservableVector_1_Windows__CMedia__CCore__CTimedTextSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIObservableVector_1_Windows__CMedia__CCore__CTimedTextSource * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIObservableVector_1_Windows__CMedia__CCore__CTimedTextSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIObservableVector_1_Windows__CMedia__CCore__CTimedTextSource * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *add_VectorChanged )(__RPC__in __FIObservableVector_1_Windows__CMedia__CCore__CTimedTextSource * This,
                   __RPC__in_opt __FVectorChangedEventHandler_1_Windows__CMedia__CCore__CTimedTextSource *handler,
                            __RPC__out EventRegistrationToken *token);
    HRESULT ( STDMETHODCALLTYPE *remove_VectorChanged )(__RPC__in __FIObservableVector_1_Windows__CMedia__CCore__CTimedTextSource * This, EventRegistrationToken token);
    END_INTERFACE
} __FIObservableVector_1_Windows__CMedia__CCore__CTimedTextSourceVtbl;
interface __FIObservableVector_1_Windows__CMedia__CCore__CTimedTextSource
{
    CONST_VTBL struct __FIObservableVector_1_Windows__CMedia__CCore__CTimedTextSourceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> add_VectorChanged(This,handler,token) )
    ( (This)->lpVtbl -> remove_VectorChanged(This,token) )
typedef interface __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor;
typedef struct __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                       __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl;
interface __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CCore__CAudioTrack __FIVectorView_1_Windows__CMedia__CCore__CAudioTrack;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCore__CAudioTrack;
typedef struct __FIVectorView_1_Windows__CMedia__CCore__CAudioTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioTrack * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioTrack * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioTrack * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioTrack * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioTrack * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioTrack * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CCore_CIMediaTrack * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioTrack * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioTrack * This,
                       __x_ABI_CWindows_CMedia_CCore_CIMediaTrack * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioTrack * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIMediaTrack * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCore__CAudioTrackVtbl;
interface __FIVectorView_1_Windows__CMedia__CCore__CAudioTrack
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCore__CAudioTrackVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CCore__CCodecInfo __FIVectorView_1_Windows__CMedia__CCore__CCodecInfo;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCore__CCodecInfo;
typedef struct __FIVectorView_1_Windows__CMedia__CCore__CCodecInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CCodecInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CCodecInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CCodecInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CCodecInfo * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CCodecInfo * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CCodecInfo * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CCodecInfo * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CCore_CICodecInfo * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CCodecInfo * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CCodecInfo * This,
                       __x_ABI_CWindows_CMedia_CCore_CICodecInfo * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CCodecInfo * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CICodecInfo * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCore__CCodecInfoVtbl;
interface __FIVectorView_1_Windows__CMedia__CCore__CCodecInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCore__CCodecInfoVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CCore__CIMediaCue __FIVectorView_1_Windows__CMedia__CCore__CIMediaCue;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCore__CIMediaCue;
typedef struct __FIVectorView_1_Windows__CMedia__CCore__CIMediaCueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CIMediaCue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CIMediaCue * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CIMediaCue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CIMediaCue * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CIMediaCue * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CIMediaCue * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CIMediaCue * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CCore_CIMediaCue * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CIMediaCue * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CIMediaCue * This,
                       __x_ABI_CWindows_CMedia_CCore_CIMediaCue * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CIMediaCue * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIMediaCue * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCore__CIMediaCueVtbl;
interface __FIVectorView_1_Windows__CMedia__CCore__CIMediaCue
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCore__CIMediaCueVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CCore__CMseSourceBuffer __FIVectorView_1_Windows__CMedia__CCore__CMseSourceBuffer;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCore__CMseSourceBuffer;
typedef struct __FIVectorView_1_Windows__CMedia__CCore__CMseSourceBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CMseSourceBuffer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CMseSourceBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CMseSourceBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CMseSourceBuffer * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CMseSourceBuffer * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CMseSourceBuffer * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CMseSourceBuffer * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CMseSourceBuffer * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CMseSourceBuffer * This,
                       __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CMseSourceBuffer * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCore__CMseSourceBufferVtbl;
interface __FIVectorView_1_Windows__CMedia__CCore__CMseSourceBuffer
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCore__CMseSourceBufferVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CCore__CMseTimeRange __FIVectorView_1_Windows__CMedia__CCore__CMseTimeRange;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCore__CMseTimeRange;
typedef struct __FIVectorView_1_Windows__CMedia__CCore__CMseTimeRangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CMseTimeRange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CMseTimeRange * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CMseTimeRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CMseTimeRange * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CMseTimeRange * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CMseTimeRange * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CMseTimeRange * This,
                                                    unsigned int index,
                                                             __RPC__out struct __x_ABI_CWindows_CMedia_CCore_CMseTimeRange *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CMseTimeRange * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CMseTimeRange * This,
                       struct __x_ABI_CWindows_CMedia_CCore_CMseTimeRange item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CMseTimeRange * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CMedia_CCore_CMseTimeRange *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCore__CMseTimeRangeVtbl;
interface __FIVectorView_1_Windows__CMedia__CCore__CMseTimeRange
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCore__CMseTimeRangeVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor;
typedef struct __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                       __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptorVtbl;
interface __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptorVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CCore__CTimedTextLine __FIVectorView_1_Windows__CMedia__CCore__CTimedTextLine;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCore__CTimedTextLine;
typedef struct __FIVectorView_1_Windows__CMedia__CCore__CTimedTextLineVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedTextLine * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedTextLine * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedTextLine * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedTextLine * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedTextLine * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedTextLine * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedTextLine * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CCore_CITimedTextLine * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedTextLine * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedTextLine * This,
                       __x_ABI_CWindows_CMedia_CCore_CITimedTextLine * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedTextLine * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CITimedTextLine * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCore__CTimedTextLineVtbl;
interface __FIVectorView_1_Windows__CMedia__CCore__CTimedTextLine
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCore__CTimedTextLineVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CCore__CTimedTextSubformat __FIVectorView_1_Windows__CMedia__CCore__CTimedTextSubformat;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCore__CTimedTextSubformat;
typedef struct __FIVectorView_1_Windows__CMedia__CCore__CTimedTextSubformatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedTextSubformat * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedTextSubformat * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedTextSubformat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedTextSubformat * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedTextSubformat * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedTextSubformat * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedTextSubformat * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CCore_CITimedTextSubformat * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedTextSubformat * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedTextSubformat * This,
                       __x_ABI_CWindows_CMedia_CCore_CITimedTextSubformat * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedTextSubformat * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CITimedTextSubformat * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCore__CTimedTextSubformatVtbl;
interface __FIVectorView_1_Windows__CMedia__CCore__CTimedTextSubformat
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCore__CTimedTextSubformatVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor;
typedef struct __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                       __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl;
interface __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CCore__CVideoTrack __FIVectorView_1_Windows__CMedia__CCore__CVideoTrack;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCore__CVideoTrack;
typedef struct __FIVectorView_1_Windows__CMedia__CCore__CVideoTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoTrack * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoTrack * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoTrack * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoTrack * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoTrack * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoTrack * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CCore_CIMediaTrack * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoTrack * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoTrack * This,
                       __x_ABI_CWindows_CMedia_CCore_CIMediaTrack * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoTrack * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIMediaTrack * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCore__CVideoTrackVtbl;
interface __FIVectorView_1_Windows__CMedia__CCore__CVideoTrack
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCore__CVideoTrackVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor;
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor;
typedef struct __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *value);
    END_INTERFACE
} __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl;
interface __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor;
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor;
typedef struct __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This, __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This, __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * *value);
    END_INTERFACE
} __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptorVtbl;
interface __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptorVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CMedia__CCore__CTimedTextLine __FIVector_1_Windows__CMedia__CCore__CTimedTextLine;
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CCore__CTimedTextLine;
typedef struct __FIVector_1_Windows__CMedia__CCore__CTimedTextLineVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextLine * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextLine * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextLine * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextLine * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextLine * This, __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CITimedTextLine * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextLine * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextLine * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CITimedTextLine * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextLine * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextLine * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCore__CTimedTextLine **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextLine * This,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextLine * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextLine * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextLine * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextLine * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextLine * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextLine * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextLine * This, __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextLine * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextLine * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextLine * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextLine * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CITimedTextLine * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextLine * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CCore_CITimedTextLine * *value);
    END_INTERFACE
} __FIVector_1_Windows__CMedia__CCore__CTimedTextLineVtbl;
interface __FIVector_1_Windows__CMedia__CCore__CTimedTextLine
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CCore__CTimedTextLineVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CMedia__CCore__CTimedTextSubformat __FIVector_1_Windows__CMedia__CCore__CTimedTextSubformat;
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CCore__CTimedTextSubformat;
typedef struct __FIVector_1_Windows__CMedia__CCore__CTimedTextSubformatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSubformat * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSubformat * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSubformat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSubformat * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSubformat * This, __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CITimedTextSubformat * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSubformat * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSubformat * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CITimedTextSubformat * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSubformat * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSubformat * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCore__CTimedTextSubformat **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSubformat * This,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSubformat * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSubformat * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSubformat * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSubformat * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSubformat * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSubformat * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSubformat * This, __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSubformat * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSubformat * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSubformat * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSubformat * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CITimedTextSubformat * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedTextSubformat * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CCore_CITimedTextSubformat * *value);
    END_INTERFACE
} __FIVector_1_Windows__CMedia__CCore__CTimedTextSubformatVtbl;
interface __FIVector_1_Windows__CMedia__CCore__CTimedTextSubformat
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CCore__CTimedTextSubformatVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor;
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor;
typedef struct __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *value);
    END_INTERFACE
} __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl;
interface __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationProgressHandler_2_Windows__CMedia__CCore__CLowLightFusionResult_double __FIAsyncOperationProgressHandler_2_Windows__CMedia__CCore__CLowLightFusionResult_double;
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CMedia__CCore__CLowLightFusionResult_double;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CCore__CLowLightFusionResult_double __FIAsyncOperationWithProgress_2_Windows__CMedia__CCore__CLowLightFusionResult_double;
typedef struct __FIAsyncOperationProgressHandler_2_Windows__CMedia__CCore__CLowLightFusionResult_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CCore__CLowLightFusionResult_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CCore__CLowLightFusionResult_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CCore__CLowLightFusionResult_double * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CCore__CLowLightFusionResult_double * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CCore__CLowLightFusionResult_double *asyncInfo, double progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CMedia__CCore__CLowLightFusionResult_doubleVtbl;
interface __FIAsyncOperationProgressHandler_2_Windows__CMedia__CCore__CLowLightFusionResult_double
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CMedia__CCore__CLowLightFusionResult_doubleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) )
typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CCore__CLowLightFusionResult_double __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CCore__CLowLightFusionResult_double;
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CCore__CLowLightFusionResult_double;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CCore__CLowLightFusionResult_double __FIAsyncOperationWithProgress_2_Windows__CMedia__CCore__CLowLightFusionResult_double;
typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CCore__CLowLightFusionResult_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CCore__CLowLightFusionResult_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CCore__CLowLightFusionResult_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CCore__CLowLightFusionResult_double * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CCore__CLowLightFusionResult_double * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CCore__CLowLightFusionResult_double *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CCore__CLowLightFusionResult_doubleVtbl;
interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CCore__CLowLightFusionResult_double
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CCore__CLowLightFusionResult_doubleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CCore__CLowLightFusionResult_double __FIAsyncOperationWithProgress_2_Windows__CMedia__CCore__CLowLightFusionResult_double;
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CMedia__CCore__CLowLightFusionResult_double;
typedef struct __FIAsyncOperationWithProgress_2_Windows__CMedia__CCore__CLowLightFusionResult_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CCore__CLowLightFusionResult_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CCore__CLowLightFusionResult_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CCore__CLowLightFusionResult_double * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CCore__CLowLightFusionResult_double * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CCore__CLowLightFusionResult_double * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CCore__CLowLightFusionResult_double * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CCore__CLowLightFusionResult_double * This, __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CMedia__CCore__CLowLightFusionResult_double *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CCore__CLowLightFusionResult_double * This, __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CMedia__CCore__CLowLightFusionResult_double **handler);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CCore__CLowLightFusionResult_double * This, __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CCore__CLowLightFusionResult_double *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CCore__CLowLightFusionResult_double * This, __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CCore__CLowLightFusionResult_double **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CCore__CLowLightFusionResult_double * This, __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CILowLightFusionResult * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CMedia__CCore__CLowLightFusionResult_doubleVtbl;
interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CCore__CLowLightFusionResult_double
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CMedia__CCore__CLowLightFusionResult_doubleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Progress(This,handler) )
    ( (This)->lpVtbl -> get_Progress(This,handler) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCore__CCodecInfo __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCore__CCodecInfo;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCore__CCodecInfo;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCore__CCodecInfo __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCore__CCodecInfo;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCore__CCodecInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCore__CCodecInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCore__CCodecInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCore__CCodecInfo * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCore__CCodecInfo * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCore__CCodecInfo *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCore__CCodecInfoVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCore__CCodecInfo
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCore__CCodecInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCore__CCodecInfo __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCore__CCodecInfo;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCore__CCodecInfo;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCore__CCodecInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCore__CCodecInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCore__CCodecInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCore__CCodecInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCore__CCodecInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCore__CCodecInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCore__CCodecInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCore__CCodecInfo * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCore__CCodecInfo *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCore__CCodecInfo * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCore__CCodecInfo **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCore__CCodecInfo * This, __RPC__out __FIVectorView_1_Windows__CMedia__CCore__CCodecInfo * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCore__CCodecInfoVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCore__CCodecInfo
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCore__CCodecInfoVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCore__CMediaStreamSample __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCore__CMediaStreamSample;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCore__CMediaStreamSample;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCore__CMediaStreamSample __FIAsyncOperation_1_Windows__CMedia__CCore__CMediaStreamSample;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCore__CMediaStreamSampleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCore__CMediaStreamSample * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCore__CMediaStreamSample * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCore__CMediaStreamSample * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCore__CMediaStreamSample * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CCore__CMediaStreamSample *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCore__CMediaStreamSampleVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCore__CMediaStreamSample
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCore__CMediaStreamSampleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCore__CMediaStreamSample __FIAsyncOperation_1_Windows__CMedia__CCore__CMediaStreamSample;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CCore__CMediaStreamSample;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CCore__CMediaStreamSampleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCore__CMediaStreamSample * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCore__CMediaStreamSample * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCore__CMediaStreamSample * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCore__CMediaStreamSample * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCore__CMediaStreamSample * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCore__CMediaStreamSample * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCore__CMediaStreamSample * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCore__CMediaStreamSample *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCore__CMediaStreamSample * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCore__CMediaStreamSample **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCore__CMediaStreamSample * This, __RPC__out __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CCore__CMediaStreamSampleVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CCore__CMediaStreamSample
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CCore__CMediaStreamSampleVtbl *lpVtbl;
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
typedef interface __FIReference_1_Windows__CMedia__CCore__CMseTimeRange __FIReference_1_Windows__CMedia__CCore__CMseTimeRange;
EXTERN_C const IID IID___FIReference_1_Windows__CMedia__CCore__CMseTimeRange;
typedef struct __FIReference_1_Windows__CMedia__CCore__CMseTimeRangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CMedia__CCore__CMseTimeRange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CMedia__CCore__CMseTimeRange * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CMedia__CCore__CMseTimeRange * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CMedia__CCore__CMseTimeRange * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CMedia__CCore__CMseTimeRange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CMedia__CCore__CMseTimeRange * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CMedia__CCore__CMseTimeRange * This, __RPC__out struct __x_ABI_CWindows_CMedia_CCore_CMseTimeRange *value);
    END_INTERFACE
} __FIReference_1_Windows__CMedia__CCore__CMseTimeRangeVtbl;
interface __FIReference_1_Windows__CMedia__CCore__CMseTimeRange
{
    CONST_VTBL struct __FIReference_1_Windows__CMedia__CCore__CMseTimeRangeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCore__CAudioTrack_Windows__CMedia__CCore__CAudioTrackOpenFailedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCore__CAudioTrack_Windows__CMedia__CCore__CAudioTrackOpenFailedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCore__CAudioTrack_Windows__CMedia__CCore__CAudioTrackOpenFailedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCore__CAudioTrack_Windows__CMedia__CCore__CAudioTrackOpenFailedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CAudioTrack_Windows__CMedia__CCore__CAudioTrackOpenFailedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CAudioTrack_Windows__CMedia__CCore__CAudioTrackOpenFailedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CAudioTrack_Windows__CMedia__CCore__CAudioTrackOpenFailedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CAudioTrack_Windows__CMedia__CCore__CAudioTrackOpenFailedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaTrack * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIAudioTrackOpenFailedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCore__CAudioTrack_Windows__CMedia__CCore__CAudioTrackOpenFailedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCore__CAudioTrack_Windows__CMedia__CCore__CAudioTrackOpenFailedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCore__CAudioTrack_Windows__CMedia__CCore__CAudioTrackOpenFailedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCore__CFaceDetectionEffect_Windows__CMedia__CCore__CFaceDetectedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCore__CFaceDetectionEffect_Windows__CMedia__CCore__CFaceDetectedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCore__CFaceDetectionEffect_Windows__CMedia__CCore__CFaceDetectedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCore__CFaceDetectionEffect_Windows__CMedia__CCore__CFaceDetectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CFaceDetectionEffect_Windows__CMedia__CCore__CFaceDetectedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CFaceDetectionEffect_Windows__CMedia__CCore__CFaceDetectedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CFaceDetectionEffect_Windows__CMedia__CCore__CFaceDetectedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CFaceDetectionEffect_Windows__CMedia__CCore__CFaceDetectedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffect * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIFaceDetectedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCore__CFaceDetectionEffect_Windows__CMedia__CCore__CFaceDetectedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCore__CFaceDetectionEffect_Windows__CMedia__CCore__CFaceDetectedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCore__CFaceDetectionEffect_Windows__CMedia__CCore__CFaceDetectedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCore__CISingleSelectMediaTrackList_IInspectable __FITypedEventHandler_2_Windows__CMedia__CCore__CISingleSelectMediaTrackList_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCore__CISingleSelectMediaTrackList_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCore__CISingleSelectMediaTrackList_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CISingleSelectMediaTrackList_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CISingleSelectMediaTrackList_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CISingleSelectMediaTrackList_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CISingleSelectMediaTrackList_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CISingleSelectMediaTrackList * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCore__CISingleSelectMediaTrackList_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCore__CISingleSelectMediaTrackList_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCore__CISingleSelectMediaTrackList_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaBinder_Windows__CMedia__CCore__CMediaBindingEventArgs __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaBinder_Windows__CMedia__CCore__CMediaBindingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCore__CMediaBinder_Windows__CMedia__CCore__CMediaBindingEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaBinder_Windows__CMedia__CCore__CMediaBindingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaBinder_Windows__CMedia__CCore__CMediaBindingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaBinder_Windows__CMedia__CCore__CMediaBindingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaBinder_Windows__CMedia__CCore__CMediaBindingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaBinder_Windows__CMedia__CCore__CMediaBindingEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaBinder * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaBinder_Windows__CMedia__CCore__CMediaBindingEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaBinder_Windows__CMedia__CCore__CMediaBindingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaBinder_Windows__CMedia__CCore__CMediaBindingEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaBindingEventArgs_IInspectable __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaBindingEventArgs_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCore__CMediaBindingEventArgs_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaBindingEventArgs_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaBindingEventArgs_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaBindingEventArgs_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaBindingEventArgs_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaBindingEventArgs_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaBindingEventArgs_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaBindingEventArgs_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaBindingEventArgs_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSource_Windows__CMedia__CCore__CMediaSourceOpenOperationCompletedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSource_Windows__CMedia__CCore__CMediaSourceOpenOperationCompletedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSource_Windows__CMedia__CCore__CMediaSourceOpenOperationCompletedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSource_Windows__CMedia__CCore__CMediaSourceOpenOperationCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSource_Windows__CMedia__CCore__CMediaSourceOpenOperationCompletedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSource_Windows__CMedia__CCore__CMediaSourceOpenOperationCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSource_Windows__CMedia__CCore__CMediaSourceOpenOperationCompletedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSource_Windows__CMedia__CCore__CMediaSourceOpenOperationCompletedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSourceOpenOperationCompletedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSource_Windows__CMedia__CCore__CMediaSourceOpenOperationCompletedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSource_Windows__CMedia__CCore__CMediaSourceOpenOperationCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSource_Windows__CMedia__CCore__CMediaSourceOpenOperationCompletedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSource_Windows__CMedia__CCore__CMediaSourceStateChangedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSource_Windows__CMedia__CCore__CMediaSourceStateChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSource_Windows__CMedia__CCore__CMediaSourceStateChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSource_Windows__CMedia__CCore__CMediaSourceStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSource_Windows__CMedia__CCore__CMediaSourceStateChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSource_Windows__CMedia__CCore__CMediaSourceStateChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSource_Windows__CMedia__CCore__CMediaSourceStateChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSource_Windows__CMedia__CCore__CMediaSourceStateChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStateChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSource_Windows__CMedia__CCore__CMediaSourceStateChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSource_Windows__CMedia__CCore__CMediaSourceStateChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSource_Windows__CMedia__CCore__CMediaSourceStateChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSourceAppServiceConnection_Windows__CMedia__CCore__CInitializeMediaStreamSourceRequestedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSourceAppServiceConnection_Windows__CMedia__CCore__CInitializeMediaStreamSourceRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSourceAppServiceConnection_Windows__CMedia__CCore__CInitializeMediaStreamSourceRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSourceAppServiceConnection_Windows__CMedia__CCore__CInitializeMediaStreamSourceRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSourceAppServiceConnection_Windows__CMedia__CCore__CInitializeMediaStreamSourceRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSourceAppServiceConnection_Windows__CMedia__CCore__CInitializeMediaStreamSourceRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSourceAppServiceConnection_Windows__CMedia__CCore__CInitializeMediaStreamSourceRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSourceAppServiceConnection_Windows__CMedia__CCore__CInitializeMediaStreamSourceRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSourceAppServiceConnection * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIInitializeMediaStreamSourceRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSourceAppServiceConnection_Windows__CMedia__CCore__CInitializeMediaStreamSourceRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSourceAppServiceConnection_Windows__CMedia__CCore__CInitializeMediaStreamSourceRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSourceAppServiceConnection_Windows__CMedia__CCore__CInitializeMediaStreamSourceRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSample_IInspectable __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSample_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSample_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSample_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSample_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSample_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSample_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSample_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSample_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSample_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSample_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_IInspectable __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceClosedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceClosedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceClosedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceClosedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceClosedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceClosedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceClosedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceClosedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceClosedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceClosedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceClosedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceClosedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSampleRenderedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSampleRenderedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSampleRenderedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSampleRenderedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSampleRenderedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSampleRenderedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSampleRenderedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSampleRenderedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRenderedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSampleRenderedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSampleRenderedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSampleRenderedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSampleRequestedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSampleRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSampleRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSampleRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSampleRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSampleRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSampleRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSampleRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSampleRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSampleRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSampleRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceStartingEventArgs __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceStartingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceStartingEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceStartingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceStartingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceStartingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceStartingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceStartingEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceStartingEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceStartingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceStartingEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSwitchStreamsRequestedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSwitchStreamsRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSwitchStreamsRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSwitchStreamsRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSwitchStreamsRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSwitchStreamsRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSwitchStreamsRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSwitchStreamsRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSwitchStreamsRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSwitchStreamsRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSwitchStreamsRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCore__CMseSourceBuffer_IInspectable __FITypedEventHandler_2_Windows__CMedia__CCore__CMseSourceBuffer_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCore__CMseSourceBuffer_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCore__CMseSourceBuffer_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMseSourceBuffer_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMseSourceBuffer_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMseSourceBuffer_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMseSourceBuffer_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCore__CMseSourceBuffer_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCore__CMseSourceBuffer_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCore__CMseSourceBuffer_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCore__CMseSourceBufferList_IInspectable __FITypedEventHandler_2_Windows__CMedia__CCore__CMseSourceBufferList_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCore__CMseSourceBufferList_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCore__CMseSourceBufferList_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMseSourceBufferList_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMseSourceBufferList_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMseSourceBufferList_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMseSourceBufferList_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMseSourceBufferList * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCore__CMseSourceBufferList_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCore__CMseSourceBufferList_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCore__CMseSourceBufferList_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCore__CMseStreamSource_IInspectable __FITypedEventHandler_2_Windows__CMedia__CCore__CMseStreamSource_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCore__CMseStreamSource_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCore__CMseStreamSource_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMseStreamSource_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMseStreamSource_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMseStreamSource_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CMseStreamSource_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCore__CMseStreamSource_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCore__CMseStreamSource_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCore__CMseStreamSource_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCore__CSceneAnalysisEffect_Windows__CMedia__CCore__CSceneAnalyzedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCore__CSceneAnalysisEffect_Windows__CMedia__CCore__CSceneAnalyzedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCore__CSceneAnalysisEffect_Windows__CMedia__CCore__CSceneAnalyzedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCore__CSceneAnalysisEffect_Windows__CMedia__CCore__CSceneAnalyzedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CSceneAnalysisEffect_Windows__CMedia__CCore__CSceneAnalyzedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CSceneAnalysisEffect_Windows__CMedia__CCore__CSceneAnalyzedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CSceneAnalysisEffect_Windows__CMedia__CCore__CSceneAnalyzedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CSceneAnalysisEffect_Windows__CMedia__CCore__CSceneAnalyzedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffect * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CISceneAnalyzedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCore__CSceneAnalysisEffect_Windows__CMedia__CCore__CSceneAnalyzedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCore__CSceneAnalysisEffect_Windows__CMedia__CCore__CSceneAnalyzedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCore__CSceneAnalysisEffect_Windows__CMedia__CCore__CSceneAnalyzedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCore__CTimedMetadataTrack_Windows__CMedia__CCore__CMediaCueEventArgs __FITypedEventHandler_2_Windows__CMedia__CCore__CTimedMetadataTrack_Windows__CMedia__CCore__CMediaCueEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCore__CTimedMetadataTrack_Windows__CMedia__CCore__CMediaCueEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCore__CTimedMetadataTrack_Windows__CMedia__CCore__CMediaCueEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CTimedMetadataTrack_Windows__CMedia__CCore__CMediaCueEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CTimedMetadataTrack_Windows__CMedia__CCore__CMediaCueEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CTimedMetadataTrack_Windows__CMedia__CCore__CMediaCueEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CTimedMetadataTrack_Windows__CMedia__CCore__CMediaCueEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaCueEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCore__CTimedMetadataTrack_Windows__CMedia__CCore__CMediaCueEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCore__CTimedMetadataTrack_Windows__CMedia__CCore__CMediaCueEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCore__CTimedMetadataTrack_Windows__CMedia__CCore__CMediaCueEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCore__CTimedMetadataTrack_Windows__CMedia__CCore__CTimedMetadataTrackFailedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCore__CTimedMetadataTrack_Windows__CMedia__CCore__CTimedMetadataTrackFailedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCore__CTimedMetadataTrack_Windows__CMedia__CCore__CTimedMetadataTrackFailedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCore__CTimedMetadataTrack_Windows__CMedia__CCore__CTimedMetadataTrackFailedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CTimedMetadataTrack_Windows__CMedia__CCore__CTimedMetadataTrackFailedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CTimedMetadataTrack_Windows__CMedia__CCore__CTimedMetadataTrackFailedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CTimedMetadataTrack_Windows__CMedia__CCore__CTimedMetadataTrackFailedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CTimedMetadataTrack_Windows__CMedia__CCore__CTimedMetadataTrackFailedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackFailedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCore__CTimedMetadataTrack_Windows__CMedia__CCore__CTimedMetadataTrackFailedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCore__CTimedMetadataTrack_Windows__CMedia__CCore__CTimedMetadataTrackFailedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCore__CTimedMetadataTrack_Windows__CMedia__CCore__CTimedMetadataTrackFailedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCore__CTimedTextSource_Windows__CMedia__CCore__CTimedTextSourceResolveResultEventArgs __FITypedEventHandler_2_Windows__CMedia__CCore__CTimedTextSource_Windows__CMedia__CCore__CTimedTextSourceResolveResultEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCore__CTimedTextSource_Windows__CMedia__CCore__CTimedTextSourceResolveResultEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCore__CTimedTextSource_Windows__CMedia__CCore__CTimedTextSourceResolveResultEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CTimedTextSource_Windows__CMedia__CCore__CTimedTextSourceResolveResultEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CTimedTextSource_Windows__CMedia__CCore__CTimedTextSourceResolveResultEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CTimedTextSource_Windows__CMedia__CCore__CTimedTextSourceResolveResultEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CTimedTextSource_Windows__CMedia__CCore__CTimedTextSourceResolveResultEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CITimedTextSource * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceResolveResultEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCore__CTimedTextSource_Windows__CMedia__CCore__CTimedTextSourceResolveResultEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCore__CTimedTextSource_Windows__CMedia__CCore__CTimedTextSourceResolveResultEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCore__CTimedTextSource_Windows__CMedia__CCore__CTimedTextSourceResolveResultEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCore__CVideoStabilizationEffect_Windows__CMedia__CCore__CVideoStabilizationEffectEnabledChangedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCore__CVideoStabilizationEffect_Windows__CMedia__CCore__CVideoStabilizationEffectEnabledChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCore__CVideoStabilizationEffect_Windows__CMedia__CCore__CVideoStabilizationEffectEnabledChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCore__CVideoStabilizationEffect_Windows__CMedia__CCore__CVideoStabilizationEffectEnabledChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CVideoStabilizationEffect_Windows__CMedia__CCore__CVideoStabilizationEffectEnabledChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CVideoStabilizationEffect_Windows__CMedia__CCore__CVideoStabilizationEffectEnabledChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CVideoStabilizationEffect_Windows__CMedia__CCore__CVideoStabilizationEffectEnabledChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CVideoStabilizationEffect_Windows__CMedia__CCore__CVideoStabilizationEffectEnabledChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIVideoStabilizationEffect * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIVideoStabilizationEffectEnabledChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCore__CVideoStabilizationEffect_Windows__CMedia__CCore__CVideoStabilizationEffectEnabledChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCore__CVideoStabilizationEffect_Windows__CMedia__CCore__CVideoStabilizationEffectEnabledChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCore__CVideoStabilizationEffect_Windows__CMedia__CCore__CVideoStabilizationEffectEnabledChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCore__CVideoTrack_Windows__CMedia__CCore__CVideoTrackOpenFailedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCore__CVideoTrack_Windows__CMedia__CCore__CVideoTrackOpenFailedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCore__CVideoTrack_Windows__CMedia__CCore__CVideoTrackOpenFailedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCore__CVideoTrack_Windows__CMedia__CCore__CVideoTrackOpenFailedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CVideoTrack_Windows__CMedia__CCore__CVideoTrackOpenFailedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CVideoTrack_Windows__CMedia__CCore__CVideoTrackOpenFailedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CVideoTrack_Windows__CMedia__CCore__CVideoTrackOpenFailedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCore__CVideoTrack_Windows__CMedia__CCore__CVideoTrackOpenFailedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaTrack * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIVideoTrackOpenFailedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCore__CVideoTrack_Windows__CMedia__CCore__CVideoTrackOpenFailedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCore__CVideoTrack_Windows__CMedia__CCore__CVideoTrackOpenFailedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCore__CVideoTrack_Windows__CMedia__CCore__CVideoTrackOpenFailedEventArgsVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CMedia_CFaceAnalysis_CIDetectedFace __x_ABI_CWindows_CMedia_CFaceAnalysis_CIDetectedFace;
typedef interface __FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFace __FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFace;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFace;
typedef struct __FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This, __RPC__out __x_ABI_CWindows_CMedia_CFaceAnalysis_CIDetectedFace * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CFaceAnalysis_CIDetectedFace * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFaceVtbl;
interface __FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFace
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFaceVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CFaceAnalysis__CDetectedFace __FIIterable_1_Windows__CMedia__CFaceAnalysis__CDetectedFace;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CFaceAnalysis__CDetectedFace;
typedef struct __FIIterable_1_Windows__CMedia__CFaceAnalysis__CDetectedFaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CFaceAnalysis__CDetectedFace **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CFaceAnalysis__CDetectedFaceVtbl;
interface __FIIterable_1_Windows__CMedia__CFaceAnalysis__CDetectedFace
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CFaceAnalysis__CDetectedFaceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFace __FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFace;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFace;
typedef struct __FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CFaceAnalysis_CIDetectedFace * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                       __x_ABI_CWindows_CMedia_CFaceAnalysis_CIDetectedFace * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CFaceAnalysis_CIDetectedFace * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFaceVtbl;
interface __FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFace
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFaceVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController;
typedef interface __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController;
typedef struct __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController * This, __RPC__out __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameControllerVtbl;
interface __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameControllerVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController;
typedef struct __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CDevices__CCore__CFrameController **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameControllerVtbl;
interface __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameController
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CDevices__CCore__CFrameControllerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController;
typedef struct __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                       __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CDevices_CCore_CIFrameController * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameControllerVtbl;
interface __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameControllerVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat;
typedef interface __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat;
typedef struct __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This, __RPC__out enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl;
interface __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat;
typedef struct __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl;
interface __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat;
typedef struct __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                       enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl;
interface __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap;
typedef interface __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap;
typedef struct __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmapVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmapVtbl;
interface __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmapVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap;
typedef struct __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmapVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmapVtbl;
interface __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmapVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
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
typedef interface __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection;
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface;
typedef enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIVideoStreamConfiguration __x_ABI_CWindows_CMedia_CCapture_CIVideoStreamConfiguration;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController;
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition;
typedef interface __x_ABI_CWindows_CMedia_CIMediaExtension __x_ABI_CWindows_CMedia_CIMediaExtension;
typedef interface __x_ABI_CWindows_CMedia_CIMediaFrame __x_ABI_CWindows_CMedia_CIMediaFrame;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSource __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSource;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource;
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation;
typedef interface __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties;
typedef interface __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;
typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;
typedef enum __x_ABI_CWindows_CMedia_CCore_CAudioDecoderDegradation __x_ABI_CWindows_CMedia_CCore_CAudioDecoderDegradation;
typedef enum __x_ABI_CWindows_CMedia_CCore_CAudioDecoderDegradationReason __x_ABI_CWindows_CMedia_CCore_CAudioDecoderDegradationReason;
typedef enum __x_ABI_CWindows_CMedia_CCore_CCodecCategory __x_ABI_CWindows_CMedia_CCore_CCodecCategory;
typedef enum __x_ABI_CWindows_CMedia_CCore_CCodecKind __x_ABI_CWindows_CMedia_CCore_CCodecKind;
typedef enum __x_ABI_CWindows_CMedia_CCore_CFaceDetectionMode __x_ABI_CWindows_CMedia_CCore_CFaceDetectionMode;
typedef enum __x_ABI_CWindows_CMedia_CCore_CMediaDecoderStatus __x_ABI_CWindows_CMedia_CCore_CMediaDecoderStatus;
typedef enum __x_ABI_CWindows_CMedia_CCore_CMediaSourceState __x_ABI_CWindows_CMedia_CCore_CMediaSourceState;
typedef enum __x_ABI_CWindows_CMedia_CCore_CMediaSourceStatus __x_ABI_CWindows_CMedia_CCore_CMediaSourceStatus;
typedef enum __x_ABI_CWindows_CMedia_CCore_CMediaStreamSourceClosedReason __x_ABI_CWindows_CMedia_CCore_CMediaStreamSourceClosedReason;
typedef enum __x_ABI_CWindows_CMedia_CCore_CMediaStreamSourceErrorStatus __x_ABI_CWindows_CMedia_CCore_CMediaStreamSourceErrorStatus;
typedef enum __x_ABI_CWindows_CMedia_CCore_CMediaTrackKind __x_ABI_CWindows_CMedia_CCore_CMediaTrackKind;
typedef enum __x_ABI_CWindows_CMedia_CCore_CMseAppendMode __x_ABI_CWindows_CMedia_CCore_CMseAppendMode;
typedef enum __x_ABI_CWindows_CMedia_CCore_CMseEndOfStreamStatus __x_ABI_CWindows_CMedia_CCore_CMseEndOfStreamStatus;
typedef enum __x_ABI_CWindows_CMedia_CCore_CMseReadyState __x_ABI_CWindows_CMedia_CCore_CMseReadyState;
typedef enum __x_ABI_CWindows_CMedia_CCore_CSceneAnalysisRecommendation __x_ABI_CWindows_CMedia_CCore_CSceneAnalysisRecommendation;
typedef enum __x_ABI_CWindows_CMedia_CCore_CTimedMetadataKind __x_ABI_CWindows_CMedia_CCore_CTimedMetadataKind;
typedef enum __x_ABI_CWindows_CMedia_CCore_CTimedMetadataTrackErrorCode __x_ABI_CWindows_CMedia_CCore_CTimedMetadataTrackErrorCode;
typedef enum __x_ABI_CWindows_CMedia_CCore_CTimedTextDisplayAlignment __x_ABI_CWindows_CMedia_CCore_CTimedTextDisplayAlignment;
typedef enum __x_ABI_CWindows_CMedia_CCore_CTimedTextFlowDirection __x_ABI_CWindows_CMedia_CCore_CTimedTextFlowDirection;
typedef enum __x_ABI_CWindows_CMedia_CCore_CTimedTextFontStyle __x_ABI_CWindows_CMedia_CCore_CTimedTextFontStyle;
typedef enum __x_ABI_CWindows_CMedia_CCore_CTimedTextLineAlignment __x_ABI_CWindows_CMedia_CCore_CTimedTextLineAlignment;
typedef enum __x_ABI_CWindows_CMedia_CCore_CTimedTextScrollMode __x_ABI_CWindows_CMedia_CCore_CTimedTextScrollMode;
typedef enum __x_ABI_CWindows_CMedia_CCore_CTimedTextUnit __x_ABI_CWindows_CMedia_CCore_CTimedTextUnit;
typedef enum __x_ABI_CWindows_CMedia_CCore_CTimedTextWeight __x_ABI_CWindows_CMedia_CCore_CTimedTextWeight;
typedef enum __x_ABI_CWindows_CMedia_CCore_CTimedTextWrapping __x_ABI_CWindows_CMedia_CCore_CTimedTextWrapping;
typedef enum __x_ABI_CWindows_CMedia_CCore_CTimedTextWritingMode __x_ABI_CWindows_CMedia_CCore_CTimedTextWritingMode;
typedef enum __x_ABI_CWindows_CMedia_CCore_CVideoStabilizationEffectEnabledChangedReason __x_ABI_CWindows_CMedia_CCore_CVideoStabilizationEffectEnabledChangedReason;
typedef struct __x_ABI_CWindows_CMedia_CCore_CMseTimeRange __x_ABI_CWindows_CMedia_CCore_CMseTimeRange;
typedef struct __x_ABI_CWindows_CMedia_CCore_CTimedTextDouble __x_ABI_CWindows_CMedia_CCore_CTimedTextDouble;
typedef struct __x_ABI_CWindows_CMedia_CCore_CTimedTextPadding __x_ABI_CWindows_CMedia_CCore_CTimedTextPadding;
typedef struct __x_ABI_CWindows_CMedia_CCore_CTimedTextPoint __x_ABI_CWindows_CMedia_CCore_CTimedTextPoint;
typedef struct __x_ABI_CWindows_CMedia_CCore_CTimedTextSize __x_ABI_CWindows_CMedia_CCore_CTimedTextSize;
enum __x_ABI_CWindows_CMedia_CCore_CAudioDecoderDegradation
{
    AudioDecoderDegradation_None = 0,
    AudioDecoderDegradation_DownmixTo2Channels = 1,
    AudioDecoderDegradation_DownmixTo6Channels = 2,
    AudioDecoderDegradation_DownmixTo8Channels = 3,
};
enum __x_ABI_CWindows_CMedia_CCore_CAudioDecoderDegradationReason
{
    AudioDecoderDegradationReason_None = 0,
    AudioDecoderDegradationReason_LicensingRequirement = 1,
    AudioDecoderDegradationReason_SpatialAudioNotSupported = 2,
};
enum __x_ABI_CWindows_CMedia_CCore_CCodecCategory
{
    CodecCategory_Encoder = 0,
    CodecCategory_Decoder = 1,
};
enum __x_ABI_CWindows_CMedia_CCore_CCodecKind
{
    CodecKind_Audio = 0,
    CodecKind_Video = 1,
};
enum __x_ABI_CWindows_CMedia_CCore_CFaceDetectionMode
{
    FaceDetectionMode_HighPerformance = 0,
    FaceDetectionMode_Balanced = 1,
    FaceDetectionMode_HighQuality = 2,
};
enum __x_ABI_CWindows_CMedia_CCore_CMediaDecoderStatus
{
    MediaDecoderStatus_FullySupported = 0,
    MediaDecoderStatus_UnsupportedSubtype = 1,
    MediaDecoderStatus_UnsupportedEncoderProperties = 2,
    MediaDecoderStatus_Degraded = 3,
};
enum __x_ABI_CWindows_CMedia_CCore_CMediaSourceState
{
    MediaSourceState_Initial = 0,
    MediaSourceState_Opening = 1,
    MediaSourceState_Opened = 2,
    MediaSourceState_Failed = 3,
    MediaSourceState_Closed = 4,
};
enum __x_ABI_CWindows_CMedia_CCore_CMediaSourceStatus
{
    MediaSourceStatus_FullySupported = 0,
    MediaSourceStatus_Unknown = 1,
};
enum __x_ABI_CWindows_CMedia_CCore_CMediaStreamSourceClosedReason
{
    MediaStreamSourceClosedReason_Done = 0,
    MediaStreamSourceClosedReason_UnknownError = 1,
    MediaStreamSourceClosedReason_AppReportedError = 2,
    MediaStreamSourceClosedReason_UnsupportedProtectionSystem = 3,
    MediaStreamSourceClosedReason_ProtectionSystemFailure = 4,
    MediaStreamSourceClosedReason_UnsupportedEncodingFormat = 5,
    MediaStreamSourceClosedReason_MissingSampleRequestedEventHandler = 6,
};
enum __x_ABI_CWindows_CMedia_CCore_CMediaStreamSourceErrorStatus
{
    MediaStreamSourceErrorStatus_Other = 0,
    MediaStreamSourceErrorStatus_OutOfMemory = 1,
    MediaStreamSourceErrorStatus_FailedToOpenFile = 2,
    MediaStreamSourceErrorStatus_FailedToConnectToServer = 3,
    MediaStreamSourceErrorStatus_ConnectionToServerLost = 4,
    MediaStreamSourceErrorStatus_UnspecifiedNetworkError = 5,
    MediaStreamSourceErrorStatus_DecodeError = 6,
    MediaStreamSourceErrorStatus_UnsupportedMediaFormat = 7,
};
enum __x_ABI_CWindows_CMedia_CCore_CMediaTrackKind
{
    MediaTrackKind_Audio = 0,
    MediaTrackKind_Video = 1,
    MediaTrackKind_TimedMetadata = 2,
};
enum __x_ABI_CWindows_CMedia_CCore_CMseAppendMode
{
    MseAppendMode_Segments = 0,
    MseAppendMode_Sequence = 1,
};
enum __x_ABI_CWindows_CMedia_CCore_CMseEndOfStreamStatus
{
    MseEndOfStreamStatus_Success = 0,
    MseEndOfStreamStatus_NetworkError = 1,
    MseEndOfStreamStatus_DecodeError = 2,
    MseEndOfStreamStatus_UnknownError = 3,
};
enum __x_ABI_CWindows_CMedia_CCore_CMseReadyState
{
    MseReadyState_Closed = 0,
    MseReadyState_Open = 1,
    MseReadyState_Ended = 2,
};
enum __x_ABI_CWindows_CMedia_CCore_CSceneAnalysisRecommendation
{
    SceneAnalysisRecommendation_Standard = 0,
    SceneAnalysisRecommendation_Hdr = 1,
    SceneAnalysisRecommendation_LowLight = 2,
};
enum __x_ABI_CWindows_CMedia_CCore_CTimedMetadataKind
{
    TimedMetadataKind_Caption = 0,
    TimedMetadataKind_Chapter = 1,
    TimedMetadataKind_Custom = 2,
    TimedMetadataKind_Data = 3,
    TimedMetadataKind_Description = 4,
    TimedMetadataKind_Subtitle = 5,
    TimedMetadataKind_ImageSubtitle = 6,
    TimedMetadataKind_Speech = 7,
};
enum __x_ABI_CWindows_CMedia_CCore_CTimedMetadataTrackErrorCode
{
    TimedMetadataTrackErrorCode_None = 0,
    TimedMetadataTrackErrorCode_DataFormatError = 1,
    TimedMetadataTrackErrorCode_NetworkError = 2,
    TimedMetadataTrackErrorCode_InternalError = 3,
};
enum __x_ABI_CWindows_CMedia_CCore_CTimedTextDisplayAlignment
{
    TimedTextDisplayAlignment_Before = 0,
    TimedTextDisplayAlignment_After = 1,
    TimedTextDisplayAlignment_Center = 2,
};
enum __x_ABI_CWindows_CMedia_CCore_CTimedTextFlowDirection
{
    TimedTextFlowDirection_LeftToRight = 0,
    TimedTextFlowDirection_RightToLeft = 1,
};
enum __x_ABI_CWindows_CMedia_CCore_CTimedTextFontStyle
{
    TimedTextFontStyle_Normal = 0,
    TimedTextFontStyle_Oblique = 1,
    TimedTextFontStyle_Italic = 2,
};
enum __x_ABI_CWindows_CMedia_CCore_CTimedTextLineAlignment
{
    TimedTextLineAlignment_Start = 0,
    TimedTextLineAlignment_End = 1,
    TimedTextLineAlignment_Center = 2,
};
enum __x_ABI_CWindows_CMedia_CCore_CTimedTextScrollMode
{
    TimedTextScrollMode_Popon = 0,
    TimedTextScrollMode_Rollup = 1,
};
enum __x_ABI_CWindows_CMedia_CCore_CTimedTextUnit
{
    TimedTextUnit_Pixels = 0,
    TimedTextUnit_Percentage = 1,
};
enum __x_ABI_CWindows_CMedia_CCore_CTimedTextWeight
{
    TimedTextWeight_Normal = 400,
    TimedTextWeight_Bold = 700,
};
enum __x_ABI_CWindows_CMedia_CCore_CTimedTextWrapping
{
    TimedTextWrapping_NoWrap = 0,
    TimedTextWrapping_Wrap = 1,
};
enum __x_ABI_CWindows_CMedia_CCore_CTimedTextWritingMode
{
    TimedTextWritingMode_LeftRightTopBottom = 0,
    TimedTextWritingMode_RightLeftTopBottom = 1,
    TimedTextWritingMode_TopBottomRightLeft = 2,
    TimedTextWritingMode_TopBottomLeftRight = 3,
    TimedTextWritingMode_LeftRight = 4,
    TimedTextWritingMode_RightLeft = 5,
    TimedTextWritingMode_TopBottom = 6,
};
enum __x_ABI_CWindows_CMedia_CCore_CVideoStabilizationEffectEnabledChangedReason
{
    VideoStabilizationEffectEnabledChangedReason_Programmatic = 0,
    VideoStabilizationEffectEnabledChangedReason_PixelRateTooHigh = 1,
    VideoStabilizationEffectEnabledChangedReason_RunningSlowly = 2,
};
struct __x_ABI_CWindows_CMedia_CCore_CMseTimeRange
{
    __x_ABI_CWindows_CFoundation_CTimeSpan Start;
    __x_ABI_CWindows_CFoundation_CTimeSpan End;
};
struct __x_ABI_CWindows_CMedia_CCore_CTimedTextDouble
{
    DOUBLE Value;
    __x_ABI_CWindows_CMedia_CCore_CTimedTextUnit Unit;
};
struct __x_ABI_CWindows_CMedia_CCore_CTimedTextPadding
{
    DOUBLE Before;
    DOUBLE After;
    DOUBLE Start;
    DOUBLE End;
    __x_ABI_CWindows_CMedia_CCore_CTimedTextUnit Unit;
};
struct __x_ABI_CWindows_CMedia_CCore_CTimedTextPoint
{
    DOUBLE X;
    DOUBLE Y;
    __x_ABI_CWindows_CMedia_CCore_CTimedTextUnit Unit;
};
struct __x_ABI_CWindows_CMedia_CCore_CTimedTextSize
{
    DOUBLE Height;
    DOUBLE Width;
    __x_ABI_CWindows_CMedia_CCore_CTimedTextUnit Unit;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IAudioStreamDescriptor[] = L"Windows.Media.Core.IAudioStreamDescriptor";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EncodingProperties )(
        __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * * encodingProperties
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptorVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EncodingProperties(This,encodingProperties) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IAudioStreamDescriptor2[] = L"Windows.Media.Core.IAudioStreamDescriptor2";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_LeadingEncoderPadding )(
        __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor2 * This,
                  __RPC__in_opt __FIReference_1_UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LeadingEncoderPadding )(
        __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor2 * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TrailingEncoderPadding )(
        __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor2 * This,
                  __RPC__in_opt __FIReference_1_UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TrailingEncoderPadding )(
        __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor2 * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor2Vtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_LeadingEncoderPadding(This,value) )
    ( (This)->lpVtbl->get_LeadingEncoderPadding(This,value) )
    ( (This)->lpVtbl->put_TrailingEncoderPadding(This,value) )
    ( (This)->lpVtbl->get_TrailingEncoderPadding(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IAudioStreamDescriptor3[] = L"Windows.Media.Core.IAudioStreamDescriptor3";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Copy )(
        __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor3Vtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Copy(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IAudioStreamDescriptorFactory[] = L"Windows.Media.Core.IAudioStreamDescriptorFactory";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptorFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptorFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptorFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptorFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptorFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptorFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptorFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptorFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * encodingProperties,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptorFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptorFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptorFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,encodingProperties,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptorFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IAudioTrack[] = L"Windows.Media.Core.IAudioTrack";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIAudioTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioTrack * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioTrack * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioTrack * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioTrack * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioTrack * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioTrack * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_OpenFailed )(
        __x_ABI_CWindows_CMedia_CCore_CIAudioTrack * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCore__CAudioTrack_Windows__CMedia__CCore__CAudioTrackOpenFailedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_OpenFailed )(
        __x_ABI_CWindows_CMedia_CCore_CIAudioTrack * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *GetEncodingProperties )(
        __x_ABI_CWindows_CMedia_CCore_CIAudioTrack * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PlaybackItem )(
        __x_ABI_CWindows_CMedia_CCore_CIAudioTrack * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CMedia_CCore_CIAudioTrack * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportInfo )(
        __x_ABI_CWindows_CMedia_CCore_CIAudioTrack * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIAudioTrackSupportInfo * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIAudioTrackVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIAudioTrack
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIAudioTrackVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_OpenFailed(This,handler,token) )
    ( (This)->lpVtbl->remove_OpenFailed(This,token) )
    ( (This)->lpVtbl->GetEncodingProperties(This,value) )
    ( (This)->lpVtbl->get_PlaybackItem(This,value) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_SupportInfo(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIAudioTrack;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IAudioTrackOpenFailedEventArgs[] = L"Windows.Media.Core.IAudioTrackOpenFailedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIAudioTrackOpenFailedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioTrackOpenFailedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioTrackOpenFailedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioTrackOpenFailedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioTrackOpenFailedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioTrackOpenFailedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioTrackOpenFailedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CMedia_CCore_CIAudioTrackOpenFailedEventArgs * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIAudioTrackOpenFailedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIAudioTrackOpenFailedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIAudioTrackOpenFailedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIAudioTrackOpenFailedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IAudioTrackSupportInfo[] = L"Windows.Media.Core.IAudioTrackSupportInfo";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIAudioTrackSupportInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioTrackSupportInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioTrackSupportInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioTrackSupportInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioTrackSupportInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioTrackSupportInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioTrackSupportInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DecoderStatus )(
        __x_ABI_CWindows_CMedia_CCore_CIAudioTrackSupportInfo * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CMediaDecoderStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Degradation )(
        __x_ABI_CWindows_CMedia_CCore_CIAudioTrackSupportInfo * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CAudioDecoderDegradation * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DegradationReason )(
        __x_ABI_CWindows_CMedia_CCore_CIAudioTrackSupportInfo * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CAudioDecoderDegradationReason * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediaSourceStatus )(
        __x_ABI_CWindows_CMedia_CCore_CIAudioTrackSupportInfo * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CMediaSourceStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIAudioTrackSupportInfoVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIAudioTrackSupportInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIAudioTrackSupportInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DecoderStatus(This,value) )
    ( (This)->lpVtbl->get_Degradation(This,value) )
    ( (This)->lpVtbl->get_DegradationReason(This,value) )
    ( (This)->lpVtbl->get_MediaSourceStatus(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIAudioTrackSupportInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IChapterCue[] = L"Windows.Media.Core.IChapterCue";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIChapterCueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIChapterCue * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIChapterCue * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIChapterCue * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIChapterCue * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIChapterCue * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIChapterCue * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CMedia_CCore_CIChapterCue * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CMedia_CCore_CIChapterCue * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIChapterCueVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIChapterCue
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIChapterCueVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Title(This,value) )
    ( (This)->lpVtbl->get_Title(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIChapterCue;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_ICodecInfo[] = L"Windows.Media.Core.ICodecInfo";
typedef struct __x_ABI_CWindows_CMedia_CCore_CICodecInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CICodecInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CICodecInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CICodecInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CICodecInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CICodecInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CICodecInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CMedia_CCore_CICodecInfo * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CCodecKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Category )(
        __x_ABI_CWindows_CMedia_CCore_CICodecInfo * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CCodecCategory * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Subtypes )(
        __x_ABI_CWindows_CMedia_CCore_CICodecInfo * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CMedia_CCore_CICodecInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsTrusted )(
        __x_ABI_CWindows_CMedia_CCore_CICodecInfo * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CICodecInfoVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CICodecInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CICodecInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Kind(This,value) )
    ( (This)->lpVtbl->get_Category(This,value) )
    ( (This)->lpVtbl->get_Subtypes(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_IsTrusted(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CICodecInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_ICodecQuery[] = L"Windows.Media.Core.ICodecQuery";
typedef struct __x_ABI_CWindows_CMedia_CCore_CICodecQueryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CICodecQuery * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CICodecQuery * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CICodecQuery * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CICodecQuery * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CICodecQuery * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CICodecQuery * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FindAllAsync )(
        __x_ABI_CWindows_CMedia_CCore_CICodecQuery * This,
                  __x_ABI_CWindows_CMedia_CCore_CCodecKind kind,
                  __x_ABI_CWindows_CMedia_CCore_CCodecCategory category,
                  __RPC__in HSTRING subType,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCore__CCodecInfo * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CICodecQueryVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CICodecQuery
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CICodecQueryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FindAllAsync(This,kind,category,subType,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CICodecQuery;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_ICodecSubtypesStatics[] = L"Windows.Media.Core.ICodecSubtypesStatics";
typedef struct __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_VideoFormatDV25 )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoFormatDV50 )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoFormatDvc )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoFormatDvh1 )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoFormatDvhD )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoFormatDvsd )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoFormatDvsl )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoFormatH263 )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoFormatH264 )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoFormatH265 )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoFormatH264ES )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoFormatHevc )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoFormatHevcES )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoFormatM4S2 )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoFormatMjpg )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoFormatMP43 )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoFormatMP4S )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoFormatMP4V )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoFormatMpeg2 )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoFormatVP80 )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoFormatVP90 )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoFormatMpg1 )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoFormatMss1 )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoFormatMss2 )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoFormatWmv1 )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoFormatWmv2 )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoFormatWmv3 )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoFormatWvc1 )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoFormat420O )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioFormatAac )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioFormatAdts )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioFormatAlac )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioFormatAmrNB )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioFormatAmrWB )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioFormatAmrWP )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioFormatDolbyAC3 )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioFormatDolbyAC3Spdif )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioFormatDolbyDDPlus )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioFormatDrm )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioFormatDts )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioFormatFlac )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioFormatFloat )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioFormatMP3 )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioFormatMPeg )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioFormatMsp1 )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioFormatOpus )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioFormatPcm )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioFormatWmaSpdif )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioFormatWMAudioLossless )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioFormatWMAudioV8 )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioFormatWMAudioV9 )(
        __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_VideoFormatDV25(This,value) )
    ( (This)->lpVtbl->get_VideoFormatDV50(This,value) )
    ( (This)->lpVtbl->get_VideoFormatDvc(This,value) )
    ( (This)->lpVtbl->get_VideoFormatDvh1(This,value) )
    ( (This)->lpVtbl->get_VideoFormatDvhD(This,value) )
    ( (This)->lpVtbl->get_VideoFormatDvsd(This,value) )
    ( (This)->lpVtbl->get_VideoFormatDvsl(This,value) )
    ( (This)->lpVtbl->get_VideoFormatH263(This,value) )
    ( (This)->lpVtbl->get_VideoFormatH264(This,value) )
    ( (This)->lpVtbl->get_VideoFormatH265(This,value) )
    ( (This)->lpVtbl->get_VideoFormatH264ES(This,value) )
    ( (This)->lpVtbl->get_VideoFormatHevc(This,value) )
    ( (This)->lpVtbl->get_VideoFormatHevcES(This,value) )
    ( (This)->lpVtbl->get_VideoFormatM4S2(This,value) )
    ( (This)->lpVtbl->get_VideoFormatMjpg(This,value) )
    ( (This)->lpVtbl->get_VideoFormatMP43(This,value) )
    ( (This)->lpVtbl->get_VideoFormatMP4S(This,value) )
    ( (This)->lpVtbl->get_VideoFormatMP4V(This,value) )
    ( (This)->lpVtbl->get_VideoFormatMpeg2(This,value) )
    ( (This)->lpVtbl->get_VideoFormatVP80(This,value) )
    ( (This)->lpVtbl->get_VideoFormatVP90(This,value) )
    ( (This)->lpVtbl->get_VideoFormatMpg1(This,value) )
    ( (This)->lpVtbl->get_VideoFormatMss1(This,value) )
    ( (This)->lpVtbl->get_VideoFormatMss2(This,value) )
    ( (This)->lpVtbl->get_VideoFormatWmv1(This,value) )
    ( (This)->lpVtbl->get_VideoFormatWmv2(This,value) )
    ( (This)->lpVtbl->get_VideoFormatWmv3(This,value) )
    ( (This)->lpVtbl->get_VideoFormatWvc1(This,value) )
    ( (This)->lpVtbl->get_VideoFormat420O(This,value) )
    ( (This)->lpVtbl->get_AudioFormatAac(This,value) )
    ( (This)->lpVtbl->get_AudioFormatAdts(This,value) )
    ( (This)->lpVtbl->get_AudioFormatAlac(This,value) )
    ( (This)->lpVtbl->get_AudioFormatAmrNB(This,value) )
    ( (This)->lpVtbl->get_AudioFormatAmrWB(This,value) )
    ( (This)->lpVtbl->get_AudioFormatAmrWP(This,value) )
    ( (This)->lpVtbl->get_AudioFormatDolbyAC3(This,value) )
    ( (This)->lpVtbl->get_AudioFormatDolbyAC3Spdif(This,value) )
    ( (This)->lpVtbl->get_AudioFormatDolbyDDPlus(This,value) )
    ( (This)->lpVtbl->get_AudioFormatDrm(This,value) )
    ( (This)->lpVtbl->get_AudioFormatDts(This,value) )
    ( (This)->lpVtbl->get_AudioFormatFlac(This,value) )
    ( (This)->lpVtbl->get_AudioFormatFloat(This,value) )
    ( (This)->lpVtbl->get_AudioFormatMP3(This,value) )
    ( (This)->lpVtbl->get_AudioFormatMPeg(This,value) )
    ( (This)->lpVtbl->get_AudioFormatMsp1(This,value) )
    ( (This)->lpVtbl->get_AudioFormatOpus(This,value) )
    ( (This)->lpVtbl->get_AudioFormatPcm(This,value) )
    ( (This)->lpVtbl->get_AudioFormatWmaSpdif(This,value) )
    ( (This)->lpVtbl->get_AudioFormatWMAudioLossless(This,value) )
    ( (This)->lpVtbl->get_AudioFormatWMAudioV8(This,value) )
    ( (This)->lpVtbl->get_AudioFormatWMAudioV9(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CICodecSubtypesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IDataCue[] = L"Windows.Media.Core.IDataCue";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIDataCueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIDataCue * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIDataCue * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIDataCue * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIDataCue * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIDataCue * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIDataCue * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Data )(
        __x_ABI_CWindows_CMedia_CCore_CIDataCue * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CMedia_CCore_CIDataCue * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIDataCueVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIDataCue
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIDataCueVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Data(This,value) )
    ( (This)->lpVtbl->get_Data(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIDataCue;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IDataCue2[] = L"Windows.Media.Core.IDataCue2";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIDataCue2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIDataCue2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIDataCue2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIDataCue2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIDataCue2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIDataCue2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIDataCue2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CMedia_CCore_CIDataCue2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIDataCue2Vtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIDataCue2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIDataCue2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Properties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIDataCue2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IFaceDetectedEventArgs[] = L"Windows.Media.Core.IFaceDetectedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIFaceDetectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIFaceDetectedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIFaceDetectedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIFaceDetectedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIFaceDetectedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIFaceDetectedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIFaceDetectedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ResultFrame )(
        __x_ABI_CWindows_CMedia_CCore_CIFaceDetectedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectFrame * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIFaceDetectedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIFaceDetectedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIFaceDetectedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ResultFrame(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIFaceDetectedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IFaceDetectionEffect[] = L"Windows.Media.Core.IFaceDetectionEffect";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffect * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffect * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffect * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffect * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffect * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffect * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
        __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffect * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
        __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffect * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DesiredDetectionInterval )(
        __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffect * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DesiredDetectionInterval )(
        __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffect * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_FaceDetected )(
        __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffect * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCore__CFaceDetectionEffect_Windows__CMedia__CCore__CFaceDetectedEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_FaceDetected )(
        __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffect * This,
                  EventRegistrationToken cookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffect
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Enabled(This,value) )
    ( (This)->lpVtbl->get_Enabled(This,value) )
    ( (This)->lpVtbl->put_DesiredDetectionInterval(This,value) )
    ( (This)->lpVtbl->get_DesiredDetectionInterval(This,value) )
    ( (This)->lpVtbl->add_FaceDetected(This,handler,cookie) )
    ( (This)->lpVtbl->remove_FaceDetected(This,cookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffect;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IFaceDetectionEffectDefinition[] = L"Windows.Media.Core.IFaceDetectionEffectDefinition";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectDefinition * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectDefinition * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectDefinition * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectDefinition * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectDefinition * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectDefinition * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_DetectionMode )(
        __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectDefinition * This,
                  __x_ABI_CWindows_CMedia_CCore_CFaceDetectionMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DetectionMode )(
        __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectDefinition * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CFaceDetectionMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SynchronousDetectionEnabled )(
        __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectDefinition * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SynchronousDetectionEnabled )(
        __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectDefinition * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectDefinitionVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectDefinition
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectDefinitionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_DetectionMode(This,value) )
    ( (This)->lpVtbl->get_DetectionMode(This,value) )
    ( (This)->lpVtbl->put_SynchronousDetectionEnabled(This,value) )
    ( (This)->lpVtbl->get_SynchronousDetectionEnabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectDefinition;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IFaceDetectionEffectFrame[] = L"Windows.Media.Core.IFaceDetectionEffectFrame";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectFrame * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectFrame * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectFrame * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectFrame * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectFrame * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectFrame * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DetectedFaces )(
        __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectFrame * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CFaceAnalysis__CDetectedFace * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectFrameVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectFrame
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectFrameVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DetectedFaces(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIFaceDetectionEffectFrame;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IHighDynamicRangeControl[] = L"Windows.Media.Core.IHighDynamicRangeControl";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIHighDynamicRangeControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIHighDynamicRangeControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIHighDynamicRangeControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIHighDynamicRangeControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIHighDynamicRangeControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIHighDynamicRangeControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIHighDynamicRangeControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
        __x_ABI_CWindows_CMedia_CCore_CIHighDynamicRangeControl * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
        __x_ABI_CWindows_CMedia_CCore_CIHighDynamicRangeControl * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIHighDynamicRangeControlVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIHighDynamicRangeControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIHighDynamicRangeControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Enabled(This,value) )
    ( (This)->lpVtbl->get_Enabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIHighDynamicRangeControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IHighDynamicRangeOutput[] = L"Windows.Media.Core.IHighDynamicRangeOutput";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIHighDynamicRangeOutputVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIHighDynamicRangeOutput * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIHighDynamicRangeOutput * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIHighDynamicRangeOutput * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIHighDynamicRangeOutput * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIHighDynamicRangeOutput * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIHighDynamicRangeOutput * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Certainty )(
        __x_ABI_CWindows_CMedia_CCore_CIHighDynamicRangeOutput * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FrameControllers )(
        __x_ABI_CWindows_CMedia_CCore_CIHighDynamicRangeOutput * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CDevices__CCore__CFrameController * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIHighDynamicRangeOutputVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIHighDynamicRangeOutput
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIHighDynamicRangeOutputVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Certainty(This,value) )
    ( (This)->lpVtbl->get_FrameControllers(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIHighDynamicRangeOutput;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IImageCue[] = L"Windows.Media.Core.IImageCue";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIImageCueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIImageCue * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIImageCue * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIImageCue * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIImageCue * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIImageCue * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIImageCue * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CMedia_CCore_CIImageCue * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CTimedTextPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Position )(
        __x_ABI_CWindows_CMedia_CCore_CIImageCue * This,
                  __x_ABI_CWindows_CMedia_CCore_CTimedTextPoint value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Extent )(
        __x_ABI_CWindows_CMedia_CCore_CIImageCue * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CTimedTextSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Extent )(
        __x_ABI_CWindows_CMedia_CCore_CIImageCue * This,
                  __x_ABI_CWindows_CMedia_CCore_CTimedTextSize value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SoftwareBitmap )(
        __x_ABI_CWindows_CMedia_CCore_CIImageCue * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SoftwareBitmap )(
        __x_ABI_CWindows_CMedia_CCore_CIImageCue * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIImageCueVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIImageCue
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIImageCueVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->put_Position(This,value) )
    ( (This)->lpVtbl->get_Extent(This,value) )
    ( (This)->lpVtbl->put_Extent(This,value) )
    ( (This)->lpVtbl->put_SoftwareBitmap(This,value) )
    ( (This)->lpVtbl->get_SoftwareBitmap(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIImageCue;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IInitializeMediaStreamSourceRequestedEventArgs[] = L"Windows.Media.Core.IInitializeMediaStreamSourceRequestedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIInitializeMediaStreamSourceRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIInitializeMediaStreamSourceRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIInitializeMediaStreamSourceRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIInitializeMediaStreamSourceRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIInitializeMediaStreamSourceRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIInitializeMediaStreamSourceRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIInitializeMediaStreamSourceRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CMedia_CCore_CIInitializeMediaStreamSourceRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RandomAccessStream )(
        __x_ABI_CWindows_CMedia_CCore_CIInitializeMediaStreamSourceRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CMedia_CCore_CIInitializeMediaStreamSourceRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIInitializeMediaStreamSourceRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIInitializeMediaStreamSourceRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIInitializeMediaStreamSourceRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Source(This,value) )
    ( (This)->lpVtbl->get_RandomAccessStream(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIInitializeMediaStreamSourceRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_ILowLightFusionResult[] = L"Windows.Media.Core.ILowLightFusionResult";
typedef struct __x_ABI_CWindows_CMedia_CCore_CILowLightFusionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CILowLightFusionResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CILowLightFusionResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CILowLightFusionResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CILowLightFusionResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CILowLightFusionResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CILowLightFusionResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Frame )(
        __x_ABI_CWindows_CMedia_CCore_CILowLightFusionResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CILowLightFusionResultVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CILowLightFusionResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CILowLightFusionResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Frame(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CILowLightFusionResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_ILowLightFusionStatics[] = L"Windows.Media.Core.ILowLightFusionStatics";
typedef struct __x_ABI_CWindows_CMedia_CCore_CILowLightFusionStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CILowLightFusionStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CILowLightFusionStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CILowLightFusionStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CILowLightFusionStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CILowLightFusionStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CILowLightFusionStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SupportedBitmapPixelFormats )(
        __x_ABI_CWindows_CMedia_CCore_CILowLightFusionStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxSupportedFrameCount )(
        __x_ABI_CWindows_CMedia_CCore_CILowLightFusionStatics * This,
                           __RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *FuseAsync )(
        __x_ABI_CWindows_CMedia_CCore_CILowLightFusionStatics * This,
                  __RPC__in_opt __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap * frameSet,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CCore__CLowLightFusionResult_double * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CILowLightFusionStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CILowLightFusionStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CILowLightFusionStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SupportedBitmapPixelFormats(This,value) )
    ( (This)->lpVtbl->get_MaxSupportedFrameCount(This,value) )
    ( (This)->lpVtbl->FuseAsync(This,frameSet,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CILowLightFusionStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaBinder[] = L"Windows.Media.Core.IMediaBinder";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaBinderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaBinder * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaBinder * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaBinder * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaBinder * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaBinder * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaBinder * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_Binding )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaBinder * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaBinder_Windows__CMedia__CCore__CMediaBindingEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Binding )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaBinder * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Token )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaBinder * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Token )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaBinder * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaBinder * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaBinderVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaBinder
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaBinderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_Binding(This,handler,token) )
    ( (This)->lpVtbl->remove_Binding(This,token) )
    ( (This)->lpVtbl->get_Token(This,value) )
    ( (This)->lpVtbl->put_Token(This,value) )
    ( (This)->lpVtbl->get_Source(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaBinder;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaBindingEventArgs[] = L"Windows.Media.Core.IMediaBindingEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_Canceled )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaBindingEventArgs_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Canceled )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediaBinder )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaBinder * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * deferral
        );
    HRESULT ( STDMETHODCALLTYPE *SetUri )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri
        );
    HRESULT ( STDMETHODCALLTYPE *SetStream )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * stream,
                  __RPC__in HSTRING contentType
        );
    HRESULT ( STDMETHODCALLTYPE *SetStreamReference )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * stream,
                  __RPC__in HSTRING contentType
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_Canceled(This,handler,token) )
    ( (This)->lpVtbl->remove_Canceled(This,token) )
    ( (This)->lpVtbl->get_MediaBinder(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,deferral) )
    ( (This)->lpVtbl->SetUri(This,uri) )
    ( (This)->lpVtbl->SetStream(This,stream,contentType) )
    ( (This)->lpVtbl->SetStreamReference(This,stream,contentType) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaBindingEventArgs2[] = L"Windows.Media.Core.IMediaBindingEventArgs2";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetAdaptiveMediaSource )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * mediaSource
        );
    HRESULT ( STDMETHODCALLTYPE *SetStorageFile )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs2Vtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetAdaptiveMediaSource(This,mediaSource) )
    ( (This)->lpVtbl->SetStorageFile(This,file) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaBindingEventArgs3[] = L"Windows.Media.Core.IMediaBindingEventArgs3";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetDownloadOperation )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * downloadOperation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs3Vtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetDownloadOperation(This,downloadOperation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaBindingEventArgs3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaCue[] = L"Windows.Media.Core.IMediaCue";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaCueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaCue * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaCue * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaCue * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaCue * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaCue * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaCue * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_StartTime )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaCue * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StartTime )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaCue * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Duration )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaCue * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaCue * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Id )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaCue * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaCue * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaCueVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaCue
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaCueVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_StartTime(This,value) )
    ( (This)->lpVtbl->get_StartTime(This,value) )
    ( (This)->lpVtbl->put_Duration(This,value) )
    ( (This)->lpVtbl->get_Duration(This,value) )
    ( (This)->lpVtbl->put_Id(This,value) )
    ( (This)->lpVtbl->get_Id(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaCue;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaCueEventArgs[] = L"Windows.Media.Core.IMediaCueEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaCueEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaCueEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaCueEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaCueEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaCueEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaCueEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaCueEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Cue )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaCueEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaCue * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaCueEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaCueEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaCueEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Cue(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaCueEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaSource[] = L"Windows.Media.Core.IMediaSource";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaSourceVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaSource
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaSource2[] = L"Windows.Media.Core.IMediaSource2";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaSource2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_OpenOperationCompleted )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSource_Windows__CMedia__CCore__CMediaSourceOpenOperationCompletedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_OpenOperationCompleted )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CustomProperties )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsOpen )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExternalTimedTextSources )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * This,
                           __RPC__deref_out_opt __FIObservableVector_1_Windows__CMedia__CCore__CTimedTextSource * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExternalTimedMetadataTracks )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * This,
                           __RPC__deref_out_opt __FIObservableVector_1_Windows__CMedia__CCore__CTimedMetadataTrack * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaSource2Vtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaSource2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaSource2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_OpenOperationCompleted(This,handler,token) )
    ( (This)->lpVtbl->remove_OpenOperationCompleted(This,token) )
    ( (This)->lpVtbl->get_CustomProperties(This,value) )
    ( (This)->lpVtbl->get_Duration(This,value) )
    ( (This)->lpVtbl->get_IsOpen(This,value) )
    ( (This)->lpVtbl->get_ExternalTimedTextSources(This,value) )
    ( (This)->lpVtbl->get_ExternalTimedMetadataTracks(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaSource2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaSource3[] = L"Windows.Media.Core.IMediaSource3";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaSource3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSource3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSource3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSource3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSource3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSource3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSource3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_StateChanged )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSource3 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSource_Windows__CMedia__CCore__CMediaSourceStateChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StateChanged )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSource3 * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSource3 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CMediaSourceState * value
        );
    HRESULT ( STDMETHODCALLTYPE *Reset )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSource3 * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaSource3Vtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaSource3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaSource3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_StateChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_StateChanged(This,token) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->Reset(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaSource3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaSource4[] = L"Windows.Media.Core.IMediaSource4";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaSource4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSource4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSource4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSource4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSource4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSource4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSource4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AdaptiveMediaSource )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSource4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediaStreamSource )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSource4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MseStreamSource )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSource4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSource4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    HRESULT ( STDMETHODCALLTYPE *OpenAsync )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSource4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaSource4Vtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaSource4
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaSource4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AdaptiveMediaSource(This,value) )
    ( (This)->lpVtbl->get_MediaStreamSource(This,value) )
    ( (This)->lpVtbl->get_MseStreamSource(This,value) )
    ( (This)->lpVtbl->get_Uri(This,value) )
    ( (This)->lpVtbl->OpenAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaSource4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaSource5[] = L"Windows.Media.Core.IMediaSource5";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaSource5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSource5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSource5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSource5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSource5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSource5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSource5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DownloadOperation )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSource5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaSource5Vtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaSource5
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaSource5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DownloadOperation(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaSource5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaSourceAppServiceConnection[] = L"Windows.Media.Core.IMediaSourceAppServiceConnection";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaSourceAppServiceConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceAppServiceConnection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceAppServiceConnection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceAppServiceConnection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceAppServiceConnection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceAppServiceConnection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceAppServiceConnection * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_InitializeMediaStreamSourceRequested )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSourceAppServiceConnection * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaSourceAppServiceConnection_Windows__CMedia__CCore__CInitializeMediaStreamSourceRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_InitializeMediaStreamSourceRequested )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSourceAppServiceConnection * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSourceAppServiceConnection * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaSourceAppServiceConnectionVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaSourceAppServiceConnection
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaSourceAppServiceConnectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_InitializeMediaStreamSourceRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_InitializeMediaStreamSourceRequested(This,token) )
    ( (This)->lpVtbl->Start(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaSourceAppServiceConnection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaSourceAppServiceConnectionFactory[] = L"Windows.Media.Core.IMediaSourceAppServiceConnectionFactory";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaSourceAppServiceConnectionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceAppServiceConnectionFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceAppServiceConnectionFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceAppServiceConnectionFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceAppServiceConnectionFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceAppServiceConnectionFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceAppServiceConnectionFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSourceAppServiceConnectionFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection * appServiceConnection,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSourceAppServiceConnection * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaSourceAppServiceConnectionFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaSourceAppServiceConnectionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaSourceAppServiceConnectionFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,appServiceConnection,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaSourceAppServiceConnectionFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaSourceError[] = L"Windows.Media.Core.IMediaSourceError";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaSourceErrorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceError * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceError * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceError * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceError * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceError * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceError * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSourceError * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaSourceErrorVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaSourceError
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaSourceErrorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaSourceError;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaSourceOpenOperationCompletedEventArgs[] = L"Windows.Media.Core.IMediaSourceOpenOperationCompletedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaSourceOpenOperationCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceOpenOperationCompletedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceOpenOperationCompletedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceOpenOperationCompletedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceOpenOperationCompletedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceOpenOperationCompletedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceOpenOperationCompletedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Error )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSourceOpenOperationCompletedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSourceError * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaSourceOpenOperationCompletedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaSourceOpenOperationCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaSourceOpenOperationCompletedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Error(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaSourceOpenOperationCompletedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaSourceStateChangedEventArgs[] = L"Windows.Media.Core.IMediaSourceStateChangedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStateChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStateChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStateChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStateChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStateChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStateChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OldState )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStateChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CMediaSourceState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NewState )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStateChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CMediaSourceState * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStateChangedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStateChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStateChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OldState(This,value) )
    ( (This)->lpVtbl->get_NewState(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaSourceStateChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaSourceStatics[] = L"Windows.Media.Core.IMediaSourceStatics";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromAdaptiveMediaSource )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * mediaSource,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromMediaStreamSource )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * mediaSource,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromMseStreamSource )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource * mediaSource,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromIMediaSource )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSource * mediaSource,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromStorageFile )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromStream )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * stream,
                  __RPC__in HSTRING contentType,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromStreamReference )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * stream,
                  __RPC__in HSTRING contentType,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromUri )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromAdaptiveMediaSource(This,mediaSource,result) )
    ( (This)->lpVtbl->CreateFromMediaStreamSource(This,mediaSource,result) )
    ( (This)->lpVtbl->CreateFromMseStreamSource(This,mediaSource,result) )
    ( (This)->lpVtbl->CreateFromIMediaSource(This,mediaSource,result) )
    ( (This)->lpVtbl->CreateFromStorageFile(This,file,result) )
    ( (This)->lpVtbl->CreateFromStream(This,stream,contentType,result) )
    ( (This)->lpVtbl->CreateFromStreamReference(This,stream,contentType,result) )
    ( (This)->lpVtbl->CreateFromUri(This,uri,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaSourceStatics2[] = L"Windows.Media.Core.IMediaSourceStatics2";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromMediaBinder )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaBinder * binder,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics2Vtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromMediaBinder(This,binder,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaSourceStatics3[] = L"Windows.Media.Core.IMediaSourceStatics3";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromMediaFrameSource )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * frameSource,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics3Vtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromMediaFrameSource(This,frameSource,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaSourceStatics4[] = L"Windows.Media.Core.IMediaSourceStatics4";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromDownloadOperation )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * downloadOperation,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics4Vtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromDownloadOperation(This,downloadOperation,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaSourceStatics4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaStreamDescriptor[] = L"Windows.Media.Core.IMediaStreamDescriptor";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsSelected )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * This,
                           __RPC__out boolean * selected
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Name )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Language )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Language )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptorVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsSelected(This,selected) )
    ( (This)->lpVtbl->put_Name(This,value) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->put_Language(This,value) )
    ( (This)->lpVtbl->get_Language(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaStreamDescriptor2[] = L"Windows.Media.Core.IMediaStreamDescriptor2";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Label )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Label )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor2Vtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Label(This,value) )
    ( (This)->lpVtbl->get_Label(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaStreamSample[] = L"Windows.Media.Core.IMediaStreamSample";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_Processed )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSample_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Processed )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Buffer )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedProperties )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample * This,
                           __RPC__deref_out_opt __FIMap_2_GUID_IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Protection )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleProtectionProperties * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DecodeTimestamp )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DecodeTimestamp )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Duration )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_KeyFrame )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyFrame )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Discontinuous )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Discontinuous )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_Processed(This,handler,token) )
    ( (This)->lpVtbl->remove_Processed(This,token) )
    ( (This)->lpVtbl->get_Buffer(This,value) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
    ( (This)->lpVtbl->get_ExtendedProperties(This,value) )
    ( (This)->lpVtbl->get_Protection(This,value) )
    ( (This)->lpVtbl->put_DecodeTimestamp(This,value) )
    ( (This)->lpVtbl->get_DecodeTimestamp(This,value) )
    ( (This)->lpVtbl->put_Duration(This,value) )
    ( (This)->lpVtbl->get_Duration(This,value) )
    ( (This)->lpVtbl->put_KeyFrame(This,value) )
    ( (This)->lpVtbl->get_KeyFrame(This,value) )
    ( (This)->lpVtbl->put_Discontinuous(This,value) )
    ( (This)->lpVtbl->get_Discontinuous(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaStreamSample2[] = L"Windows.Media.Core.IMediaStreamSample2";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Direct3D11Surface )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample2Vtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Direct3D11Surface(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaStreamSampleProtectionProperties[] = L"Windows.Media.Core.IMediaStreamSampleProtectionProperties";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleProtectionPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleProtectionProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleProtectionProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleProtectionProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleProtectionProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleProtectionProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleProtectionProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetKeyIdentifier )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleProtectionProperties * This,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) BYTE * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetKeyIdentifier )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleProtectionProperties * This,
                   __RPC__out UINT32 * __valueSize,
                                              __RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetInitializationVector )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleProtectionProperties * This,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) BYTE * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetInitializationVector )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleProtectionProperties * This,
                   __RPC__out UINT32 * __valueSize,
                                              __RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetSubSampleMapping )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleProtectionProperties * This,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) BYTE * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetSubSampleMapping )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleProtectionProperties * This,
                   __RPC__out UINT32 * __valueSize,
                                              __RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleProtectionPropertiesVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleProtectionProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleProtectionPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetKeyIdentifier(This,__valueSize,value) )
    ( (This)->lpVtbl->GetKeyIdentifier(This,__valueSize,value) )
    ( (This)->lpVtbl->SetInitializationVector(This,__valueSize,value) )
    ( (This)->lpVtbl->GetInitializationVector(This,__valueSize,value) )
    ( (This)->lpVtbl->SetSubSampleMapping(This,__valueSize,value) )
    ( (This)->lpVtbl->GetSubSampleMapping(This,__valueSize,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleProtectionProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaStreamSampleStatics[] = L"Windows.Media.Core.IMediaStreamSampleStatics";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromBuffer )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer,
                  __x_ABI_CWindows_CFoundation_CTimeSpan timestamp,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromStreamAsync )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * stream,
                  UINT32 count,
                  __x_ABI_CWindows_CFoundation_CTimeSpan timestamp,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCore__CMediaStreamSample * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromBuffer(This,buffer,timestamp,value) )
    ( (This)->lpVtbl->CreateFromStreamAsync(This,stream,count,timestamp,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaStreamSampleStatics2[] = L"Windows.Media.Core.IMediaStreamSampleStatics2";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromDirect3D11Surface )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * surface,
                  __x_ABI_CWindows_CFoundation_CTimeSpan timestamp,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleStatics2Vtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromDirect3D11Surface(This,surface,timestamp,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaStreamSampleStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaStreamSource[] = L"Windows.Media.Core.IMediaStreamSource";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_Closed )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceClosedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Closed )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Starting )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceStartingEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Starting )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Paused )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Paused )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SampleRequested )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSampleRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SampleRequested )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SwitchStreamsRequested )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSwitchStreamsRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SwitchStreamsRequested )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyError )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * This,
                  __x_ABI_CWindows_CMedia_CCore_CMediaStreamSourceErrorStatus errorStatus
        );
    HRESULT ( STDMETHODCALLTYPE *AddStreamDescriptor )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * descriptor
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MediaProtectionManager )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediaProtectionManager )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Duration )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanSeek )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanSeek )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BufferTime )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BufferTime )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetBufferedRange )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan startOffset,
                  __x_ABI_CWindows_CFoundation_CTimeSpan endOffset
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MusicProperties )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CFileProperties_CIMusicProperties * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoProperties )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CFileProperties_CIVideoProperties * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Thumbnail )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Thumbnail )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
    HRESULT ( STDMETHODCALLTYPE *AddProtectionKey )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * streamDescriptor,
                  UINT32 __keyIdentifierSize,
                                                __RPC__in_ecount_full(__keyIdentifierSize) BYTE * keyIdentifier,
                  UINT32 __licenseDataSize,
                                              __RPC__in_ecount_full(__licenseDataSize) BYTE * licenseData
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_Closed(This,handler,token) )
    ( (This)->lpVtbl->remove_Closed(This,token) )
    ( (This)->lpVtbl->add_Starting(This,handler,token) )
    ( (This)->lpVtbl->remove_Starting(This,token) )
    ( (This)->lpVtbl->add_Paused(This,handler,token) )
    ( (This)->lpVtbl->remove_Paused(This,token) )
    ( (This)->lpVtbl->add_SampleRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_SampleRequested(This,token) )
    ( (This)->lpVtbl->add_SwitchStreamsRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_SwitchStreamsRequested(This,token) )
    ( (This)->lpVtbl->NotifyError(This,errorStatus) )
    ( (This)->lpVtbl->AddStreamDescriptor(This,descriptor) )
    ( (This)->lpVtbl->put_MediaProtectionManager(This,value) )
    ( (This)->lpVtbl->get_MediaProtectionManager(This,value) )
    ( (This)->lpVtbl->put_Duration(This,value) )
    ( (This)->lpVtbl->get_Duration(This,value) )
    ( (This)->lpVtbl->put_CanSeek(This,value) )
    ( (This)->lpVtbl->get_CanSeek(This,value) )
    ( (This)->lpVtbl->put_BufferTime(This,value) )
    ( (This)->lpVtbl->get_BufferTime(This,value) )
    ( (This)->lpVtbl->SetBufferedRange(This,startOffset,endOffset) )
    ( (This)->lpVtbl->get_MusicProperties(This,value) )
    ( (This)->lpVtbl->get_VideoProperties(This,value) )
    ( (This)->lpVtbl->put_Thumbnail(This,value) )
    ( (This)->lpVtbl->get_Thumbnail(This,value) )
    ( (This)->lpVtbl->AddProtectionKey(This,streamDescriptor,__keyIdentifierSize,keyIdentifier,__licenseDataSize,licenseData) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaStreamSource2[] = L"Windows.Media.Core.IMediaStreamSource2";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_SampleRendered )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCore__CMediaStreamSource_Windows__CMedia__CCore__CMediaStreamSourceSampleRenderedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SampleRendered )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource2 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource2Vtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_SampleRendered(This,handler,token) )
    ( (This)->lpVtbl->remove_SampleRendered(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaStreamSource3[] = L"Windows.Media.Core.IMediaStreamSource3";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_MaxSupportedPlaybackRate )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource3 * This,
                  __RPC__in_opt __FIReference_1_double * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxSupportedPlaybackRate )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource3 * This,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource3Vtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_MaxSupportedPlaybackRate(This,value) )
    ( (This)->lpVtbl->get_MaxSupportedPlaybackRate(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaStreamSource4[] = L"Windows.Media.Core.IMediaStreamSource4";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_IsLive )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource4 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsLive )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource4 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource4Vtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource4
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_IsLive(This,value) )
    ( (This)->lpVtbl->get_IsLive(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaStreamSourceClosedEventArgs[] = L"Windows.Media.Core.IMediaStreamSourceClosedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceClosedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceClosedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceClosedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceClosedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceClosedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceClosedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceClosedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceClosedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceClosedRequest * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceClosedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceClosedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceClosedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Request(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceClosedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaStreamSourceClosedRequest[] = L"Windows.Media.Core.IMediaStreamSourceClosedRequest";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceClosedRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceClosedRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceClosedRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceClosedRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceClosedRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceClosedRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceClosedRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceClosedRequest * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CMediaStreamSourceClosedReason * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceClosedRequestVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceClosedRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceClosedRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Reason(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceClosedRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaStreamSourceFactory[] = L"Windows.Media.Core.IMediaStreamSourceFactory";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromDescriptor )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * descriptor,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromDescriptors )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * descriptor,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * descriptor2,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromDescriptor(This,descriptor,result) )
    ( (This)->lpVtbl->CreateFromDescriptors(This,descriptor,descriptor2,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaStreamSourceSampleRenderedEventArgs[] = L"Windows.Media.Core.IMediaStreamSourceSampleRenderedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRenderedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRenderedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRenderedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRenderedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRenderedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRenderedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRenderedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SampleLag )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRenderedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRenderedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRenderedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRenderedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SampleLag(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRenderedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaStreamSourceSampleRequest[] = L"Windows.Media.Core.IMediaStreamSourceSampleRequest";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StreamDescriptor )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequestDeferral * * deferral
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Sample )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequest * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Sample )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportSampleProgress )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequest * This,
                  UINT32 progress
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequestVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StreamDescriptor(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,deferral) )
    ( (This)->lpVtbl->put_Sample(This,value) )
    ( (This)->lpVtbl->get_Sample(This,value) )
    ( (This)->lpVtbl->ReportSampleProgress(This,progress) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaStreamSourceSampleRequestDeferral[] = L"Windows.Media.Core.IMediaStreamSourceSampleRequestDeferral";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequestDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequestDeferral * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequestDeferral * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequestDeferral * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequestDeferral * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequestDeferral * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequestDeferral * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequestDeferral * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequestDeferralVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequestDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequestDeferralVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Complete(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequestDeferral;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaStreamSourceSampleRequestedEventArgs[] = L"Windows.Media.Core.IMediaStreamSourceSampleRequestedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequest * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Request(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSampleRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaStreamSourceStartingEventArgs[] = L"Windows.Media.Core.IMediaStreamSourceStartingEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingRequest * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Request(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaStreamSourceStartingRequest[] = L"Windows.Media.Core.IMediaStreamSourceStartingRequest";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StartPosition )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingRequest * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingRequestDeferral * * deferral
        );
    HRESULT ( STDMETHODCALLTYPE *SetActualStartPosition )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingRequest * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan position
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingRequestVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StartPosition(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,deferral) )
    ( (This)->lpVtbl->SetActualStartPosition(This,position) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaStreamSourceStartingRequestDeferral[] = L"Windows.Media.Core.IMediaStreamSourceStartingRequestDeferral";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingRequestDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingRequestDeferral * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingRequestDeferral * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingRequestDeferral * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingRequestDeferral * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingRequestDeferral * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingRequestDeferral * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingRequestDeferral * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingRequestDeferralVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingRequestDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingRequestDeferralVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Complete(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceStartingRequestDeferral;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaStreamSourceSwitchStreamsRequest[] = L"Windows.Media.Core.IMediaStreamSourceSwitchStreamsRequest";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OldStreamDescriptor )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NewStreamDescriptor )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequestDeferral * * deferral
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequestVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OldStreamDescriptor(This,value) )
    ( (This)->lpVtbl->get_NewStreamDescriptor(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,deferral) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaStreamSourceSwitchStreamsRequestDeferral[] = L"Windows.Media.Core.IMediaStreamSourceSwitchStreamsRequestDeferral";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequestDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequestDeferral * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequestDeferral * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequestDeferral * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequestDeferral * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequestDeferral * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequestDeferral * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequestDeferral * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequestDeferralVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequestDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequestDeferralVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Complete(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequestDeferral;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaStreamSourceSwitchStreamsRequestedEventArgs[] = L"Windows.Media.Core.IMediaStreamSourceSwitchStreamsRequestedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequest * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Request(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaStreamSourceSwitchStreamsRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMediaTrack[] = L"Windows.Media.Core.IMediaTrack";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMediaTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaTrack * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaTrack * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaTrack * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaTrack * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaTrack * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaTrack * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaTrack * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Language )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaTrack * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TrackKind )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaTrack * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CMediaTrackKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Label )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaTrack * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Label )(
        __x_ABI_CWindows_CMedia_CCore_CIMediaTrack * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMediaTrackVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMediaTrack
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMediaTrackVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_Language(This,value) )
    ( (This)->lpVtbl->get_TrackKind(This,value) )
    ( (This)->lpVtbl->put_Label(This,value) )
    ( (This)->lpVtbl->get_Label(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMediaTrack;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMseSourceBuffer[] = L"Windows.Media.Core.IMseSourceBuffer";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMseSourceBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_UpdateStarting )(
        __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCore__CMseSourceBuffer_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_UpdateStarting )(
        __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Updated )(
        __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCore__CMseSourceBuffer_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Updated )(
        __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_UpdateEnded )(
        __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCore__CMseSourceBuffer_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_UpdateEnded )(
        __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ErrorOccurred )(
        __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCore__CMseSourceBuffer_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ErrorOccurred )(
        __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Aborted )(
        __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCore__CMseSourceBuffer_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Aborted )(
        __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CMseAppendMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Mode )(
        __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * This,
                  __x_ABI_CWindows_CMedia_CCore_CMseAppendMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsUpdating )(
        __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Buffered )(
        __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCore__CMseTimeRange * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TimestampOffset )(
        __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TimestampOffset )(
        __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppendWindowStart )(
        __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AppendWindowStart )(
        __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppendWindowEnd )(
        __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AppendWindowEnd )(
        __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
    HRESULT ( STDMETHODCALLTYPE *AppendBuffer )(
        __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer
        );
                    HRESULT ( STDMETHODCALLTYPE *AppendStream )(
        __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * stream
        );
                    HRESULT ( STDMETHODCALLTYPE *AppendStreamMaxSize )(
        __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * stream,
                  UINT64 maxSize
        );
    HRESULT ( STDMETHODCALLTYPE *Abort )(
        __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * This
        );
    HRESULT ( STDMETHODCALLTYPE *Remove )(
        __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan start,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * end
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMseSourceBufferVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMseSourceBufferVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_UpdateStarting(This,handler,token) )
    ( (This)->lpVtbl->remove_UpdateStarting(This,token) )
    ( (This)->lpVtbl->add_Updated(This,handler,token) )
    ( (This)->lpVtbl->remove_Updated(This,token) )
    ( (This)->lpVtbl->add_UpdateEnded(This,handler,token) )
    ( (This)->lpVtbl->remove_UpdateEnded(This,token) )
    ( (This)->lpVtbl->add_ErrorOccurred(This,handler,token) )
    ( (This)->lpVtbl->remove_ErrorOccurred(This,token) )
    ( (This)->lpVtbl->add_Aborted(This,handler,token) )
    ( (This)->lpVtbl->remove_Aborted(This,token) )
    ( (This)->lpVtbl->get_Mode(This,value) )
    ( (This)->lpVtbl->put_Mode(This,value) )
    ( (This)->lpVtbl->get_IsUpdating(This,value) )
    ( (This)->lpVtbl->get_Buffered(This,value) )
    ( (This)->lpVtbl->get_TimestampOffset(This,value) )
    ( (This)->lpVtbl->put_TimestampOffset(This,value) )
    ( (This)->lpVtbl->get_AppendWindowStart(This,value) )
    ( (This)->lpVtbl->put_AppendWindowStart(This,value) )
    ( (This)->lpVtbl->get_AppendWindowEnd(This,value) )
    ( (This)->lpVtbl->put_AppendWindowEnd(This,value) )
    ( (This)->lpVtbl->AppendBuffer(This,buffer) )
    ( (This)->lpVtbl->AppendStream(This,stream) )
    ( (This)->lpVtbl->AppendStreamMaxSize(This,stream,maxSize) )
    ( (This)->lpVtbl->Abort(This) )
    ( (This)->lpVtbl->Remove(This,start,end) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMseSourceBufferList[] = L"Windows.Media.Core.IMseSourceBufferList";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMseSourceBufferListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMseSourceBufferList * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMseSourceBufferList * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMseSourceBufferList * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMseSourceBufferList * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMseSourceBufferList * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMseSourceBufferList * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_SourceBufferAdded )(
        __x_ABI_CWindows_CMedia_CCore_CIMseSourceBufferList * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCore__CMseSourceBufferList_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SourceBufferAdded )(
        __x_ABI_CWindows_CMedia_CCore_CIMseSourceBufferList * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SourceBufferRemoved )(
        __x_ABI_CWindows_CMedia_CCore_CIMseSourceBufferList * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCore__CMseSourceBufferList_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SourceBufferRemoved )(
        __x_ABI_CWindows_CMedia_CCore_CIMseSourceBufferList * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Buffers )(
        __x_ABI_CWindows_CMedia_CCore_CIMseSourceBufferList * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCore__CMseSourceBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMseSourceBufferListVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMseSourceBufferList
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMseSourceBufferListVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_SourceBufferAdded(This,handler,token) )
    ( (This)->lpVtbl->remove_SourceBufferAdded(This,token) )
    ( (This)->lpVtbl->add_SourceBufferRemoved(This,handler,token) )
    ( (This)->lpVtbl->remove_SourceBufferRemoved(This,token) )
    ( (This)->lpVtbl->get_Buffers(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMseSourceBufferList;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMseStreamSource[] = L"Windows.Media.Core.IMseStreamSource";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMseStreamSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_Opened )(
        __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCore__CMseStreamSource_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Opened )(
        __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Ended )(
        __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCore__CMseStreamSource_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Ended )(
        __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Closed )(
        __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCore__CMseStreamSource_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Closed )(
        __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SourceBuffers )(
        __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMseSourceBufferList * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ActiveSourceBuffers )(
        __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMseSourceBufferList * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReadyState )(
        __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CMseReadyState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Duration )(
        __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
    HRESULT ( STDMETHODCALLTYPE *AddSourceBuffer )(
        __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource * This,
                  __RPC__in HSTRING mimeType,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * * buffer
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveSourceBuffer )(
        __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMseSourceBuffer * buffer
        );
    HRESULT ( STDMETHODCALLTYPE *EndOfStream )(
        __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource * This,
                  __x_ABI_CWindows_CMedia_CCore_CMseEndOfStreamStatus status
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMseStreamSourceVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMseStreamSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_Opened(This,handler,token) )
    ( (This)->lpVtbl->remove_Opened(This,token) )
    ( (This)->lpVtbl->add_Ended(This,handler,token) )
    ( (This)->lpVtbl->remove_Ended(This,token) )
    ( (This)->lpVtbl->add_Closed(This,handler,token) )
    ( (This)->lpVtbl->remove_Closed(This,token) )
    ( (This)->lpVtbl->get_SourceBuffers(This,value) )
    ( (This)->lpVtbl->get_ActiveSourceBuffers(This,value) )
    ( (This)->lpVtbl->get_ReadyState(This,value) )
    ( (This)->lpVtbl->get_Duration(This,value) )
    ( (This)->lpVtbl->put_Duration(This,value) )
    ( (This)->lpVtbl->AddSourceBuffer(This,mimeType,buffer) )
    ( (This)->lpVtbl->RemoveSourceBuffer(This,buffer) )
    ( (This)->lpVtbl->EndOfStream(This,status) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMseStreamSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMseStreamSource2[] = L"Windows.Media.Core.IMseStreamSource2";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LiveSeekableRange )(
        __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource2 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CMedia__CCore__CMseTimeRange * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LiveSeekableRange )(
        __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource2 * This,
                  __RPC__in_opt __FIReference_1_Windows__CMedia__CCore__CMseTimeRange * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource2Vtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMseStreamSource2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LiveSeekableRange(This,value) )
    ( (This)->lpVtbl->put_LiveSeekableRange(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMseStreamSource2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IMseStreamSourceStatics[] = L"Windows.Media.Core.IMseStreamSourceStatics";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIMseStreamSourceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMseStreamSourceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMseStreamSourceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMseStreamSourceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMseStreamSourceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMseStreamSourceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMseStreamSourceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsContentTypeSupported )(
        __x_ABI_CWindows_CMedia_CCore_CIMseStreamSourceStatics * This,
                  __RPC__in HSTRING contentType,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIMseStreamSourceStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIMseStreamSourceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIMseStreamSourceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsContentTypeSupported(This,contentType,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIMseStreamSourceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_ISceneAnalysisEffect[] = L"Windows.Media.Core.ISceneAnalysisEffect";
typedef struct __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffect * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffect * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffect * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffect * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffect * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffect * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HighDynamicRangeAnalyzer )(
        __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffect * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIHighDynamicRangeControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DesiredAnalysisInterval )(
        __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffect * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DesiredAnalysisInterval )(
        __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffect * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SceneAnalyzed )(
        __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffect * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCore__CSceneAnalysisEffect_Windows__CMedia__CCore__CSceneAnalyzedEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SceneAnalyzed )(
        __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffect * This,
                  EventRegistrationToken cookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffectVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffect
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffectVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HighDynamicRangeAnalyzer(This,value) )
    ( (This)->lpVtbl->put_DesiredAnalysisInterval(This,value) )
    ( (This)->lpVtbl->get_DesiredAnalysisInterval(This,value) )
    ( (This)->lpVtbl->add_SceneAnalyzed(This,handler,cookie) )
    ( (This)->lpVtbl->remove_SceneAnalyzed(This,cookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffect;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_ISceneAnalysisEffectFrame[] = L"Windows.Media.Core.ISceneAnalysisEffectFrame";
typedef struct __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffectFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffectFrame * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffectFrame * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffectFrame * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffectFrame * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffectFrame * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffectFrame * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FrameControlValues )(
        __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffectFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HighDynamicRange )(
        __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffectFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIHighDynamicRangeOutput * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffectFrameVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffectFrame
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffectFrameVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FrameControlValues(This,value) )
    ( (This)->lpVtbl->get_HighDynamicRange(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffectFrame;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_ISceneAnalysisEffectFrame2[] = L"Windows.Media.Core.ISceneAnalysisEffectFrame2";
typedef struct __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffectFrame2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffectFrame2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffectFrame2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffectFrame2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffectFrame2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffectFrame2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffectFrame2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AnalysisRecommendation )(
        __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffectFrame2 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CSceneAnalysisRecommendation * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffectFrame2Vtbl;
interface __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffectFrame2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffectFrame2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AnalysisRecommendation(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffectFrame2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_ISceneAnalyzedEventArgs[] = L"Windows.Media.Core.ISceneAnalyzedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCore_CISceneAnalyzedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISceneAnalyzedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISceneAnalyzedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISceneAnalyzedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISceneAnalyzedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISceneAnalyzedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISceneAnalyzedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ResultFrame )(
        __x_ABI_CWindows_CMedia_CCore_CISceneAnalyzedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CISceneAnalysisEffectFrame * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CISceneAnalyzedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CISceneAnalyzedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CISceneAnalyzedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ResultFrame(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CISceneAnalyzedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_ISingleSelectMediaTrackList[] = L"Windows.Media.Core.ISingleSelectMediaTrackList";
typedef struct __x_ABI_CWindows_CMedia_CCore_CISingleSelectMediaTrackListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISingleSelectMediaTrackList * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISingleSelectMediaTrackList * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISingleSelectMediaTrackList * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISingleSelectMediaTrackList * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISingleSelectMediaTrackList * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISingleSelectMediaTrackList * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_SelectedIndexChanged )(
        __x_ABI_CWindows_CMedia_CCore_CISingleSelectMediaTrackList * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCore__CISingleSelectMediaTrackList_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SelectedIndexChanged )(
        __x_ABI_CWindows_CMedia_CCore_CISingleSelectMediaTrackList * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SelectedIndex )(
        __x_ABI_CWindows_CMedia_CCore_CISingleSelectMediaTrackList * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedIndex )(
        __x_ABI_CWindows_CMedia_CCore_CISingleSelectMediaTrackList * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CISingleSelectMediaTrackListVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CISingleSelectMediaTrackList
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CISingleSelectMediaTrackListVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_SelectedIndexChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_SelectedIndexChanged(This,token) )
    ( (This)->lpVtbl->put_SelectedIndex(This,value) )
    ( (This)->lpVtbl->get_SelectedIndex(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CISingleSelectMediaTrackList;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_ISpeechCue[] = L"Windows.Media.Core.ISpeechCue";
typedef struct __x_ABI_CWindows_CMedia_CCore_CISpeechCueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISpeechCue * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISpeechCue * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISpeechCue * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISpeechCue * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISpeechCue * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CISpeechCue * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CMedia_CCore_CISpeechCue * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Text )(
        __x_ABI_CWindows_CMedia_CCore_CISpeechCue * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StartPositionInInput )(
        __x_ABI_CWindows_CMedia_CCore_CISpeechCue * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StartPositionInInput )(
        __x_ABI_CWindows_CMedia_CCore_CISpeechCue * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EndPositionInInput )(
        __x_ABI_CWindows_CMedia_CCore_CISpeechCue * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_EndPositionInInput )(
        __x_ABI_CWindows_CMedia_CCore_CISpeechCue * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CISpeechCueVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CISpeechCue
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CISpeechCueVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Text(This,value) )
    ( (This)->lpVtbl->put_Text(This,value) )
    ( (This)->lpVtbl->get_StartPositionInInput(This,value) )
    ( (This)->lpVtbl->put_StartPositionInInput(This,value) )
    ( (This)->lpVtbl->get_EndPositionInInput(This,value) )
    ( (This)->lpVtbl->put_EndPositionInInput(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CISpeechCue;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_ITimedMetadataStreamDescriptor[] = L"Windows.Media.Core.ITimedMetadataStreamDescriptor";
typedef struct __x_ABI_CWindows_CMedia_CCore_CITimedMetadataStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataStreamDescriptor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataStreamDescriptor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataStreamDescriptor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataStreamDescriptor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataStreamDescriptor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataStreamDescriptor * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EncodingProperties )(
        __x_ABI_CWindows_CMedia_CCore_CITimedMetadataStreamDescriptor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Copy )(
        __x_ABI_CWindows_CMedia_CCore_CITimedMetadataStreamDescriptor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CITimedMetadataStreamDescriptorVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CITimedMetadataStreamDescriptor
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CITimedMetadataStreamDescriptorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EncodingProperties(This,value) )
    ( (This)->lpVtbl->Copy(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CITimedMetadataStreamDescriptor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_ITimedMetadataStreamDescriptorFactory[] = L"Windows.Media.Core.ITimedMetadataStreamDescriptorFactory";
typedef struct __x_ABI_CWindows_CMedia_CCore_CITimedMetadataStreamDescriptorFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataStreamDescriptorFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataStreamDescriptorFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataStreamDescriptorFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataStreamDescriptorFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataStreamDescriptorFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataStreamDescriptorFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CCore_CITimedMetadataStreamDescriptorFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * encodingProperties,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CITimedMetadataStreamDescriptorFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CITimedMetadataStreamDescriptorFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CITimedMetadataStreamDescriptorFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,encodingProperties,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CITimedMetadataStreamDescriptorFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_ITimedMetadataTrack[] = L"Windows.Media.Core.ITimedMetadataTrack";
typedef struct __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_CueEntered )(
        __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCore__CTimedMetadataTrack_Windows__CMedia__CCore__CMediaCueEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CueEntered )(
        __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CueExited )(
        __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCore__CTimedMetadataTrack_Windows__CMedia__CCore__CMediaCueEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CueExited )(
        __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_TrackFailed )(
        __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCore__CTimedMetadataTrack_Windows__CMedia__CCore__CTimedMetadataTrackFailedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_TrackFailed )(
        __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Cues )(
        __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCore__CIMediaCue * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ActiveCues )(
        __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCore__CIMediaCue * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TimedMetadataKind )(
        __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CTimedMetadataKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DispatchType )(
        __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *AddCue )(
        __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaCue * cue
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveCue )(
        __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaCue * cue
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_CueEntered(This,handler,token) )
    ( (This)->lpVtbl->remove_CueEntered(This,token) )
    ( (This)->lpVtbl->add_CueExited(This,handler,token) )
    ( (This)->lpVtbl->remove_CueExited(This,token) )
    ( (This)->lpVtbl->add_TrackFailed(This,handler,token) )
    ( (This)->lpVtbl->remove_TrackFailed(This,token) )
    ( (This)->lpVtbl->get_Cues(This,value) )
    ( (This)->lpVtbl->get_ActiveCues(This,value) )
    ( (This)->lpVtbl->get_TimedMetadataKind(This,value) )
    ( (This)->lpVtbl->get_DispatchType(This,value) )
    ( (This)->lpVtbl->AddCue(This,cue) )
    ( (This)->lpVtbl->RemoveCue(This,cue) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_ITimedMetadataTrack2[] = L"Windows.Media.Core.ITimedMetadataTrack2";
typedef struct __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PlaybackItem )(
        __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack2Vtbl;
interface __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PlaybackItem(This,value) )
    ( (This)->lpVtbl->get_Name(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_ITimedMetadataTrackError[] = L"Windows.Media.Core.ITimedMetadataTrackError";
typedef struct __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackErrorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackError * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackError * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackError * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackError * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackError * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackError * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ErrorCode )(
        __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackError * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CTimedMetadataTrackErrorCode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackError * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackErrorVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackError
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackErrorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ErrorCode(This,value) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackError;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_ITimedMetadataTrackFactory[] = L"Windows.Media.Core.ITimedMetadataTrackFactory";
typedef struct __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackFactory * This,
                  __RPC__in HSTRING id,
                  __RPC__in HSTRING language,
                  __x_ABI_CWindows_CMedia_CCore_CTimedMetadataKind kind,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,id,language,kind,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_ITimedMetadataTrackFailedEventArgs[] = L"Windows.Media.Core.ITimedMetadataTrackFailedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackFailedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackFailedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackFailedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackFailedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackFailedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackFailedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackFailedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Error )(
        __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackFailedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackError * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackFailedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackFailedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackFailedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Error(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackFailedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_ITimedMetadataTrackProvider[] = L"Windows.Media.Core.ITimedMetadataTrackProvider";
typedef struct __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TimedMetadataTracks )(
        __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackProvider * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrack * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackProviderVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TimedMetadataTracks(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_ITimedTextCue[] = L"Windows.Media.Core.ITimedTextCue";
typedef struct __x_ABI_CWindows_CMedia_CCore_CITimedTextCueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextCue * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextCue * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextCue * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextCue * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextCue * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextCue * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CueRegion )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextCue * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CueRegion )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextCue * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CueStyle )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextCue * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CueStyle )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextCue * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Lines )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextCue * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CMedia__CCore__CTimedTextLine * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CITimedTextCueVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CITimedTextCue
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CITimedTextCueVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CueRegion(This,value) )
    ( (This)->lpVtbl->put_CueRegion(This,value) )
    ( (This)->lpVtbl->get_CueStyle(This,value) )
    ( (This)->lpVtbl->put_CueStyle(This,value) )
    ( (This)->lpVtbl->get_Lines(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CITimedTextCue;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_ITimedTextLine[] = L"Windows.Media.Core.ITimedTextLine";
typedef struct __x_ABI_CWindows_CMedia_CCore_CITimedTextLineVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextLine * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextLine * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextLine * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextLine * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextLine * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextLine * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextLine * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Text )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextLine * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Subformats )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextLine * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CMedia__CCore__CTimedTextSubformat * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CITimedTextLineVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CITimedTextLine
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CITimedTextLineVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Text(This,value) )
    ( (This)->lpVtbl->put_Text(This,value) )
    ( (This)->lpVtbl->get_Subformats(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CITimedTextLine;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_ITimedTextRegion[] = L"Windows.Media.Core.ITimedTextRegion";
typedef struct __x_ABI_CWindows_CMedia_CCore_CITimedTextRegionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Name )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CTimedTextPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Position )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion * This,
                  __x_ABI_CWindows_CMedia_CCore_CTimedTextPoint value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Extent )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CTimedTextSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Extent )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion * This,
                  __x_ABI_CWindows_CMedia_CCore_CTimedTextSize value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Background )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Background )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WritingMode )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CTimedTextWritingMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_WritingMode )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion * This,
                  __x_ABI_CWindows_CMedia_CCore_CTimedTextWritingMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayAlignment )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CTimedTextDisplayAlignment * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DisplayAlignment )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion * This,
                  __x_ABI_CWindows_CMedia_CCore_CTimedTextDisplayAlignment value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LineHeight )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CTimedTextDouble * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LineHeight )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion * This,
                  __x_ABI_CWindows_CMedia_CCore_CTimedTextDouble value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsOverflowClipped )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsOverflowClipped )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Padding )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CTimedTextPadding * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Padding )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion * This,
                  __x_ABI_CWindows_CMedia_CCore_CTimedTextPadding value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TextWrapping )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CTimedTextWrapping * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TextWrapping )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion * This,
                  __x_ABI_CWindows_CMedia_CCore_CTimedTextWrapping value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ZIndex )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ZIndex )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScrollMode )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CTimedTextScrollMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ScrollMode )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion * This,
                  __x_ABI_CWindows_CMedia_CCore_CTimedTextScrollMode value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CITimedTextRegionVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CITimedTextRegion
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CITimedTextRegionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->put_Name(This,value) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->put_Position(This,value) )
    ( (This)->lpVtbl->get_Extent(This,value) )
    ( (This)->lpVtbl->put_Extent(This,value) )
    ( (This)->lpVtbl->get_Background(This,value) )
    ( (This)->lpVtbl->put_Background(This,value) )
    ( (This)->lpVtbl->get_WritingMode(This,value) )
    ( (This)->lpVtbl->put_WritingMode(This,value) )
    ( (This)->lpVtbl->get_DisplayAlignment(This,value) )
    ( (This)->lpVtbl->put_DisplayAlignment(This,value) )
    ( (This)->lpVtbl->get_LineHeight(This,value) )
    ( (This)->lpVtbl->put_LineHeight(This,value) )
    ( (This)->lpVtbl->get_IsOverflowClipped(This,value) )
    ( (This)->lpVtbl->put_IsOverflowClipped(This,value) )
    ( (This)->lpVtbl->get_Padding(This,value) )
    ( (This)->lpVtbl->put_Padding(This,value) )
    ( (This)->lpVtbl->get_TextWrapping(This,value) )
    ( (This)->lpVtbl->put_TextWrapping(This,value) )
    ( (This)->lpVtbl->get_ZIndex(This,value) )
    ( (This)->lpVtbl->put_ZIndex(This,value) )
    ( (This)->lpVtbl->get_ScrollMode(This,value) )
    ( (This)->lpVtbl->put_ScrollMode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CITimedTextRegion;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_ITimedTextSource[] = L"Windows.Media.Core.ITimedTextSource";
typedef struct __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_Resolved )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCore__CTimedTextSource_Windows__CMedia__CCore__CTimedTextSourceResolveResultEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Resolved )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextSource * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CITimedTextSource
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_Resolved(This,handler,token) )
    ( (This)->lpVtbl->remove_Resolved(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CITimedTextSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_ITimedTextSourceResolveResultEventArgs[] = L"Windows.Media.Core.ITimedTextSourceResolveResultEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceResolveResultEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceResolveResultEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceResolveResultEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceResolveResultEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceResolveResultEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceResolveResultEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceResolveResultEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Error )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceResolveResultEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrackError * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Tracks )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceResolveResultEventArgs * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrack * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceResolveResultEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceResolveResultEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceResolveResultEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Error(This,value) )
    ( (This)->lpVtbl->get_Tracks(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CITimedTextSourceResolveResultEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_ITimedTextSourceStatics[] = L"Windows.Media.Core.ITimedTextSourceStatics";
typedef struct __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateFromStream )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * stream,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CITimedTextSource * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFromUri )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CITimedTextSource * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFromStreamWithLanguage )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * stream,
                  __RPC__in HSTRING defaultLanguage,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CITimedTextSource * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFromUriWithLanguage )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                  __RPC__in HSTRING defaultLanguage,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CITimedTextSource * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromStream(This,stream,value) )
    ( (This)->lpVtbl->CreateFromUri(This,uri,value) )
    ( (This)->lpVtbl->CreateFromStreamWithLanguage(This,stream,defaultLanguage,value) )
    ( (This)->lpVtbl->CreateFromUriWithLanguage(This,uri,defaultLanguage,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CITimedTextSourceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_ITimedTextSourceStatics2[] = L"Windows.Media.Core.ITimedTextSourceStatics2";
typedef struct __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateFromStreamWithIndex )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * stream,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * indexStream,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CITimedTextSource * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFromUriWithIndex )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * indexUri,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CITimedTextSource * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFromStreamWithIndexAndLanguage )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * stream,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * indexStream,
                  __RPC__in HSTRING defaultLanguage,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CITimedTextSource * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFromUriWithIndexAndLanguage )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * indexUri,
                  __RPC__in HSTRING defaultLanguage,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CITimedTextSource * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceStatics2Vtbl;
interface __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CITimedTextSourceStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromStreamWithIndex(This,stream,indexStream,result) )
    ( (This)->lpVtbl->CreateFromUriWithIndex(This,uri,indexUri,result) )
    ( (This)->lpVtbl->CreateFromStreamWithIndexAndLanguage(This,stream,indexStream,defaultLanguage,result) )
    ( (This)->lpVtbl->CreateFromUriWithIndexAndLanguage(This,uri,indexUri,defaultLanguage,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CITimedTextSourceStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_ITimedTextStyle[] = L"Windows.Media.Core.ITimedTextStyle";
typedef struct __x_ABI_CWindows_CMedia_CCore_CITimedTextStyleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Name )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FontFamily )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FontFamily )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FontSize )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CTimedTextDouble * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FontSize )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle * This,
                  __x_ABI_CWindows_CMedia_CCore_CTimedTextDouble value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FontWeight )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CTimedTextWeight * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FontWeight )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle * This,
                  __x_ABI_CWindows_CMedia_CCore_CTimedTextWeight value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Foreground )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Foreground )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Background )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Background )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsBackgroundAlwaysShown )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsBackgroundAlwaysShown )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FlowDirection )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CTimedTextFlowDirection * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FlowDirection )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle * This,
                  __x_ABI_CWindows_CMedia_CCore_CTimedTextFlowDirection value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LineAlignment )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CTimedTextLineAlignment * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LineAlignment )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle * This,
                  __x_ABI_CWindows_CMedia_CCore_CTimedTextLineAlignment value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutlineColor )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OutlineColor )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutlineThickness )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CTimedTextDouble * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OutlineThickness )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle * This,
                  __x_ABI_CWindows_CMedia_CCore_CTimedTextDouble value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutlineRadius )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CTimedTextDouble * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OutlineRadius )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle * This,
                  __x_ABI_CWindows_CMedia_CCore_CTimedTextDouble value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CITimedTextStyleVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CITimedTextStyleVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->put_Name(This,value) )
    ( (This)->lpVtbl->get_FontFamily(This,value) )
    ( (This)->lpVtbl->put_FontFamily(This,value) )
    ( (This)->lpVtbl->get_FontSize(This,value) )
    ( (This)->lpVtbl->put_FontSize(This,value) )
    ( (This)->lpVtbl->get_FontWeight(This,value) )
    ( (This)->lpVtbl->put_FontWeight(This,value) )
    ( (This)->lpVtbl->get_Foreground(This,value) )
    ( (This)->lpVtbl->put_Foreground(This,value) )
    ( (This)->lpVtbl->get_Background(This,value) )
    ( (This)->lpVtbl->put_Background(This,value) )
    ( (This)->lpVtbl->get_IsBackgroundAlwaysShown(This,value) )
    ( (This)->lpVtbl->put_IsBackgroundAlwaysShown(This,value) )
    ( (This)->lpVtbl->get_FlowDirection(This,value) )
    ( (This)->lpVtbl->put_FlowDirection(This,value) )
    ( (This)->lpVtbl->get_LineAlignment(This,value) )
    ( (This)->lpVtbl->put_LineAlignment(This,value) )
    ( (This)->lpVtbl->get_OutlineColor(This,value) )
    ( (This)->lpVtbl->put_OutlineColor(This,value) )
    ( (This)->lpVtbl->get_OutlineThickness(This,value) )
    ( (This)->lpVtbl->put_OutlineThickness(This,value) )
    ( (This)->lpVtbl->get_OutlineRadius(This,value) )
    ( (This)->lpVtbl->put_OutlineRadius(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CITimedTextStyle;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_ITimedTextStyle2[] = L"Windows.Media.Core.ITimedTextStyle2";
typedef struct __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FontStyle )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle2 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CTimedTextFontStyle * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FontStyle )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle2 * This,
                  __x_ABI_CWindows_CMedia_CCore_CTimedTextFontStyle value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsUnderlineEnabled )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsUnderlineEnabled )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsLineThroughEnabled )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsLineThroughEnabled )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsOverlineEnabled )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsOverlineEnabled )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle2 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle2Vtbl;
interface __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FontStyle(This,value) )
    ( (This)->lpVtbl->put_FontStyle(This,value) )
    ( (This)->lpVtbl->get_IsUnderlineEnabled(This,value) )
    ( (This)->lpVtbl->put_IsUnderlineEnabled(This,value) )
    ( (This)->lpVtbl->get_IsLineThroughEnabled(This,value) )
    ( (This)->lpVtbl->put_IsLineThroughEnabled(This,value) )
    ( (This)->lpVtbl->get_IsOverlineEnabled(This,value) )
    ( (This)->lpVtbl->put_IsOverlineEnabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CITimedTextStyle2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_ITimedTextSubformat[] = L"Windows.Media.Core.ITimedTextSubformat";
typedef struct __x_ABI_CWindows_CMedia_CCore_CITimedTextSubformatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSubformat * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSubformat * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSubformat * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSubformat * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSubformat * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CITimedTextSubformat * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StartIndex )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextSubformat * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StartIndex )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextSubformat * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Length )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextSubformat * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Length )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextSubformat * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SubformatStyle )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextSubformat * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SubformatStyle )(
        __x_ABI_CWindows_CMedia_CCore_CITimedTextSubformat * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CITimedTextStyle * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CITimedTextSubformatVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CITimedTextSubformat
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CITimedTextSubformatVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StartIndex(This,value) )
    ( (This)->lpVtbl->put_StartIndex(This,value) )
    ( (This)->lpVtbl->get_Length(This,value) )
    ( (This)->lpVtbl->put_Length(This,value) )
    ( (This)->lpVtbl->get_SubformatStyle(This,value) )
    ( (This)->lpVtbl->put_SubformatStyle(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CITimedTextSubformat;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IVideoStabilizationEffect[] = L"Windows.Media.Core.IVideoStabilizationEffect";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIVideoStabilizationEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStabilizationEffect * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStabilizationEffect * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStabilizationEffect * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStabilizationEffect * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStabilizationEffect * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStabilizationEffect * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
        __x_ABI_CWindows_CMedia_CCore_CIVideoStabilizationEffect * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
        __x_ABI_CWindows_CMedia_CCore_CIVideoStabilizationEffect * This,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_EnabledChanged )(
        __x_ABI_CWindows_CMedia_CCore_CIVideoStabilizationEffect * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCore__CVideoStabilizationEffect_Windows__CMedia__CCore__CVideoStabilizationEffectEnabledChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_EnabledChanged )(
        __x_ABI_CWindows_CMedia_CCore_CIVideoStabilizationEffect * This,
                  EventRegistrationToken cookie
        );
    HRESULT ( STDMETHODCALLTYPE *GetRecommendedStreamConfiguration )(
        __x_ABI_CWindows_CMedia_CCore_CIVideoStabilizationEffect * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * controller,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * desiredProperties,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CIVideoStreamConfiguration * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIVideoStabilizationEffectVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIVideoStabilizationEffect
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIVideoStabilizationEffectVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Enabled(This,value) )
    ( (This)->lpVtbl->get_Enabled(This,value) )
    ( (This)->lpVtbl->add_EnabledChanged(This,handler,cookie) )
    ( (This)->lpVtbl->remove_EnabledChanged(This,cookie) )
    ( (This)->lpVtbl->GetRecommendedStreamConfiguration(This,controller,desiredProperties,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIVideoStabilizationEffect;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IVideoStabilizationEffectEnabledChangedEventArgs[] = L"Windows.Media.Core.IVideoStabilizationEffectEnabledChangedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIVideoStabilizationEffectEnabledChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStabilizationEffectEnabledChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStabilizationEffectEnabledChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStabilizationEffectEnabledChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStabilizationEffectEnabledChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStabilizationEffectEnabledChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStabilizationEffectEnabledChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CMedia_CCore_CIVideoStabilizationEffectEnabledChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CVideoStabilizationEffectEnabledChangedReason * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIVideoStabilizationEffectEnabledChangedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIVideoStabilizationEffectEnabledChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIVideoStabilizationEffectEnabledChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Reason(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIVideoStabilizationEffectEnabledChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IVideoStreamDescriptor[] = L"Windows.Media.Core.IVideoStreamDescriptor";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EncodingProperties )(
        __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * * encodingProperties
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptorVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EncodingProperties(This,encodingProperties) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IVideoStreamDescriptor2[] = L"Windows.Media.Core.IVideoStreamDescriptor2";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Copy )(
        __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor2Vtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Copy(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IVideoStreamDescriptorFactory[] = L"Windows.Media.Core.IVideoStreamDescriptorFactory";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptorFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptorFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptorFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptorFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptorFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptorFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptorFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptorFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * encodingProperties,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptorFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptorFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptorFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,encodingProperties,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptorFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IVideoTrack[] = L"Windows.Media.Core.IVideoTrack";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIVideoTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoTrack * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoTrack * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoTrack * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoTrack * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoTrack * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoTrack * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_OpenFailed )(
        __x_ABI_CWindows_CMedia_CCore_CIVideoTrack * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCore__CVideoTrack_Windows__CMedia__CCore__CVideoTrackOpenFailedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_OpenFailed )(
        __x_ABI_CWindows_CMedia_CCore_CIVideoTrack * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *GetEncodingProperties )(
        __x_ABI_CWindows_CMedia_CCore_CIVideoTrack * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PlaybackItem )(
        __x_ABI_CWindows_CMedia_CCore_CIVideoTrack * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CMedia_CCore_CIVideoTrack * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportInfo )(
        __x_ABI_CWindows_CMedia_CCore_CIVideoTrack * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIVideoTrackSupportInfo * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIVideoTrackVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIVideoTrack
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIVideoTrackVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_OpenFailed(This,handler,token) )
    ( (This)->lpVtbl->remove_OpenFailed(This,token) )
    ( (This)->lpVtbl->GetEncodingProperties(This,value) )
    ( (This)->lpVtbl->get_PlaybackItem(This,value) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->get_SupportInfo(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIVideoTrack;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IVideoTrackOpenFailedEventArgs[] = L"Windows.Media.Core.IVideoTrackOpenFailedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIVideoTrackOpenFailedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoTrackOpenFailedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoTrackOpenFailedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoTrackOpenFailedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoTrackOpenFailedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoTrackOpenFailedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoTrackOpenFailedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CMedia_CCore_CIVideoTrackOpenFailedEventArgs * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIVideoTrackOpenFailedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIVideoTrackOpenFailedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIVideoTrackOpenFailedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIVideoTrackOpenFailedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Core_IVideoTrackSupportInfo[] = L"Windows.Media.Core.IVideoTrackSupportInfo";
typedef struct __x_ABI_CWindows_CMedia_CCore_CIVideoTrackSupportInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoTrackSupportInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoTrackSupportInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoTrackSupportInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoTrackSupportInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoTrackSupportInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoTrackSupportInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DecoderStatus )(
        __x_ABI_CWindows_CMedia_CCore_CIVideoTrackSupportInfo * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CMediaDecoderStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediaSourceStatus )(
        __x_ABI_CWindows_CMedia_CCore_CIVideoTrackSupportInfo * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCore_CMediaSourceStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCore_CIVideoTrackSupportInfoVtbl;
interface __x_ABI_CWindows_CMedia_CCore_CIVideoTrackSupportInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCore_CIVideoTrackSupportInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DecoderStatus(This,value) )
    ( (This)->lpVtbl->get_MediaSourceStatus(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCore_CIVideoTrackSupportInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_AudioStreamDescriptor[] = L"Windows.Media.Core.AudioStreamDescriptor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_AudioTrack[] = L"Windows.Media.Core.AudioTrack";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_AudioTrackOpenFailedEventArgs[] = L"Windows.Media.Core.AudioTrackOpenFailedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_AudioTrackSupportInfo[] = L"Windows.Media.Core.AudioTrackSupportInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_ChapterCue[] = L"Windows.Media.Core.ChapterCue";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_CodecInfo[] = L"Windows.Media.Core.CodecInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_CodecQuery[] = L"Windows.Media.Core.CodecQuery";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_CodecSubtypes[] = L"Windows.Media.Core.CodecSubtypes";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_DataCue[] = L"Windows.Media.Core.DataCue";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_FaceDetectedEventArgs[] = L"Windows.Media.Core.FaceDetectedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_FaceDetectionEffect[] = L"Windows.Media.Core.FaceDetectionEffect";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_FaceDetectionEffectDefinition[] = L"Windows.Media.Core.FaceDetectionEffectDefinition";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_FaceDetectionEffectFrame[] = L"Windows.Media.Core.FaceDetectionEffectFrame";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_HighDynamicRangeControl[] = L"Windows.Media.Core.HighDynamicRangeControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_HighDynamicRangeOutput[] = L"Windows.Media.Core.HighDynamicRangeOutput";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_ImageCue[] = L"Windows.Media.Core.ImageCue";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_InitializeMediaStreamSourceRequestedEventArgs[] = L"Windows.Media.Core.InitializeMediaStreamSourceRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_LowLightFusion[] = L"Windows.Media.Core.LowLightFusion";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_LowLightFusionResult[] = L"Windows.Media.Core.LowLightFusionResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_MediaBinder[] = L"Windows.Media.Core.MediaBinder";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_MediaBindingEventArgs[] = L"Windows.Media.Core.MediaBindingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_MediaCueEventArgs[] = L"Windows.Media.Core.MediaCueEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_MediaSource[] = L"Windows.Media.Core.MediaSource";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_MediaSourceAppServiceConnection[] = L"Windows.Media.Core.MediaSourceAppServiceConnection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_MediaSourceError[] = L"Windows.Media.Core.MediaSourceError";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_MediaSourceOpenOperationCompletedEventArgs[] = L"Windows.Media.Core.MediaSourceOpenOperationCompletedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_MediaSourceStateChangedEventArgs[] = L"Windows.Media.Core.MediaSourceStateChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_MediaStreamSample[] = L"Windows.Media.Core.MediaStreamSample";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_MediaStreamSamplePropertySet[] = L"Windows.Media.Core.MediaStreamSamplePropertySet";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_MediaStreamSampleProtectionProperties[] = L"Windows.Media.Core.MediaStreamSampleProtectionProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_MediaStreamSource[] = L"Windows.Media.Core.MediaStreamSource";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_MediaStreamSourceClosedEventArgs[] = L"Windows.Media.Core.MediaStreamSourceClosedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_MediaStreamSourceClosedRequest[] = L"Windows.Media.Core.MediaStreamSourceClosedRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_MediaStreamSourceSampleRenderedEventArgs[] = L"Windows.Media.Core.MediaStreamSourceSampleRenderedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_MediaStreamSourceSampleRequest[] = L"Windows.Media.Core.MediaStreamSourceSampleRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_MediaStreamSourceSampleRequestDeferral[] = L"Windows.Media.Core.MediaStreamSourceSampleRequestDeferral";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_MediaStreamSourceSampleRequestedEventArgs[] = L"Windows.Media.Core.MediaStreamSourceSampleRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_MediaStreamSourceStartingEventArgs[] = L"Windows.Media.Core.MediaStreamSourceStartingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_MediaStreamSourceStartingRequest[] = L"Windows.Media.Core.MediaStreamSourceStartingRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_MediaStreamSourceStartingRequestDeferral[] = L"Windows.Media.Core.MediaStreamSourceStartingRequestDeferral";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_MediaStreamSourceSwitchStreamsRequest[] = L"Windows.Media.Core.MediaStreamSourceSwitchStreamsRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_MediaStreamSourceSwitchStreamsRequestDeferral[] = L"Windows.Media.Core.MediaStreamSourceSwitchStreamsRequestDeferral";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_MediaStreamSourceSwitchStreamsRequestedEventArgs[] = L"Windows.Media.Core.MediaStreamSourceSwitchStreamsRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_MseSourceBuffer[] = L"Windows.Media.Core.MseSourceBuffer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_MseSourceBufferList[] = L"Windows.Media.Core.MseSourceBufferList";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_MseStreamSource[] = L"Windows.Media.Core.MseStreamSource";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_SceneAnalysisEffect[] = L"Windows.Media.Core.SceneAnalysisEffect";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_SceneAnalysisEffectDefinition[] = L"Windows.Media.Core.SceneAnalysisEffectDefinition";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_SceneAnalysisEffectFrame[] = L"Windows.Media.Core.SceneAnalysisEffectFrame";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_SceneAnalyzedEventArgs[] = L"Windows.Media.Core.SceneAnalyzedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_SpeechCue[] = L"Windows.Media.Core.SpeechCue";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_TimedMetadataStreamDescriptor[] = L"Windows.Media.Core.TimedMetadataStreamDescriptor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_TimedMetadataTrack[] = L"Windows.Media.Core.TimedMetadataTrack";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_TimedMetadataTrackError[] = L"Windows.Media.Core.TimedMetadataTrackError";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_TimedMetadataTrackFailedEventArgs[] = L"Windows.Media.Core.TimedMetadataTrackFailedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_TimedTextCue[] = L"Windows.Media.Core.TimedTextCue";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_TimedTextLine[] = L"Windows.Media.Core.TimedTextLine";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_TimedTextRegion[] = L"Windows.Media.Core.TimedTextRegion";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_TimedTextSource[] = L"Windows.Media.Core.TimedTextSource";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_TimedTextSourceResolveResultEventArgs[] = L"Windows.Media.Core.TimedTextSourceResolveResultEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_TimedTextStyle[] = L"Windows.Media.Core.TimedTextStyle";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_TimedTextSubformat[] = L"Windows.Media.Core.TimedTextSubformat";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_VideoStabilizationEffect[] = L"Windows.Media.Core.VideoStabilizationEffect";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_VideoStabilizationEffectDefinition[] = L"Windows.Media.Core.VideoStabilizationEffectDefinition";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_VideoStabilizationEffectEnabledChangedEventArgs[] = L"Windows.Media.Core.VideoStabilizationEffectEnabledChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_VideoStreamDescriptor[] = L"Windows.Media.Core.VideoStreamDescriptor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_VideoTrack[] = L"Windows.Media.Core.VideoTrack";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_VideoTrackOpenFailedEventArgs[] = L"Windows.Media.Core.VideoTrackOpenFailedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Core_VideoTrackSupportInfo[] = L"Windows.Media.Core.VideoTrackSupportInfo";
       
       
#pragma clang diagnostic pop
