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
#include "Windows.Devices.Enumeration.h"
#include "Windows.Foundation.Numerics.h"
#include "Windows.Media.h"
#include "Windows.Media.Capture.h"
#include "Windows.Media.Core.h"
#include "Windows.Media.Devices.h"
#include "Windows.Media.Effects.h"
#include "Windows.Media.MediaProperties.h"
#include "Windows.Media.Render.h"
#include "Windows.Media.Transcoding.h"
#include "Windows.Storage.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2 __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph3 __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph3;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings2 __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings2;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2 __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNode __x_ABI_CWindows_CMedia_CAudio_CIAudioNode;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2 __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitor __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitor;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitorStatics __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitorStatics;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult2 __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult2;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult2 __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult2;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult2 __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult2;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult2 __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult2;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult2 __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult2;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CICreateMediaSourceAudioInputNodeResult __x_ABI_CWindows_CMedia_CAudio_CICreateMediaSourceAudioInputNodeResult;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CICreateMediaSourceAudioInputNodeResult2 __x_ABI_CWindows_CMedia_CAudio_CICreateMediaSourceAudioInputNodeResult2;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIMediaSourceAudioInputNode __x_ABI_CWindows_CMedia_CAudio_CIMediaSourceAudioInputNode;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CISetDefaultSpatialAudioFormatResult __x_ABI_CWindows_CMedia_CAudio_CISetDefaultSpatialAudioFormatResult;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfiguration __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfiguration;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfigurationStatics __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfigurationStatics;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatConfiguration __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatConfiguration;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatConfigurationStatics __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatConfigurationStatics;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatSubtypeStatics __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatSubtypeStatics;
typedef interface __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection;
typedef struct __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection * This, __RPC__out __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnectionVtbl;
interface __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnectionVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection;
typedef struct __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnectionVtbl;
interface __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnectionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand;
typedef struct __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand * This, __RPC__out __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBandVtbl;
interface __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBandVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand;
typedef struct __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBandVtbl;
interface __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBandVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection;
typedef struct __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection * This,
                       __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnectionVtbl;
interface __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnectionVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand;
typedef struct __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand * This,
                       __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBandVtbl;
interface __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBandVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CAudioDeviceInputNode __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CAudioDeviceInputNode;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CAudioDeviceInputNode;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNode __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNode;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CAudioDeviceInputNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CAudioDeviceInputNode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CAudioDeviceInputNode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CAudioDeviceInputNode * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CAudioDeviceInputNode * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNode *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CAudioDeviceInputNodeVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CAudioDeviceInputNode
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CAudioDeviceInputNodeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNode __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNode;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNode;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNode * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNode * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNode * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNode * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CAudioDeviceInputNode *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNode * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CAudioDeviceInputNode **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNode * This, __RPC__out __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNodeVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNode
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CAudio__CAudioDeviceInputNodeVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * This, __RPC__out __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResultVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult * This, __RPC__out __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResultVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult * This, __RPC__out __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResultVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult * This, __RPC__out __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResultVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult * This, __RPC__out __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResultVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateMediaSourceAudioInputNodeResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateMediaSourceAudioInputNodeResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateMediaSourceAudioInputNodeResult;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateMediaSourceAudioInputNodeResult __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateMediaSourceAudioInputNodeResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateMediaSourceAudioInputNodeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateMediaSourceAudioInputNodeResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateMediaSourceAudioInputNodeResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateMediaSourceAudioInputNodeResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateMediaSourceAudioInputNodeResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateMediaSourceAudioInputNodeResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateMediaSourceAudioInputNodeResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateMediaSourceAudioInputNodeResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateMediaSourceAudioInputNodeResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateMediaSourceAudioInputNodeResult __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateMediaSourceAudioInputNodeResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateMediaSourceAudioInputNodeResult;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateMediaSourceAudioInputNodeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateMediaSourceAudioInputNodeResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateMediaSourceAudioInputNodeResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateMediaSourceAudioInputNodeResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateMediaSourceAudioInputNodeResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateMediaSourceAudioInputNodeResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateMediaSourceAudioInputNodeResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateMediaSourceAudioInputNodeResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateMediaSourceAudioInputNodeResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateMediaSourceAudioInputNodeResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateMediaSourceAudioInputNodeResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateMediaSourceAudioInputNodeResult * This, __RPC__out __x_ABI_CWindows_CMedia_CAudio_CICreateMediaSourceAudioInputNodeResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateMediaSourceAudioInputNodeResultVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateMediaSourceAudioInputNodeResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateMediaSourceAudioInputNodeResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CSetDefaultSpatialAudioFormatResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CSetDefaultSpatialAudioFormatResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CSetDefaultSpatialAudioFormatResult;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CSetDefaultSpatialAudioFormatResult __FIAsyncOperation_1_Windows__CMedia__CAudio__CSetDefaultSpatialAudioFormatResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CSetDefaultSpatialAudioFormatResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CSetDefaultSpatialAudioFormatResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CSetDefaultSpatialAudioFormatResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CSetDefaultSpatialAudioFormatResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CSetDefaultSpatialAudioFormatResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CSetDefaultSpatialAudioFormatResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CSetDefaultSpatialAudioFormatResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CSetDefaultSpatialAudioFormatResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CSetDefaultSpatialAudioFormatResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CSetDefaultSpatialAudioFormatResult __FIAsyncOperation_1_Windows__CMedia__CAudio__CSetDefaultSpatialAudioFormatResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CAudio__CSetDefaultSpatialAudioFormatResult;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CAudio__CSetDefaultSpatialAudioFormatResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CSetDefaultSpatialAudioFormatResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CSetDefaultSpatialAudioFormatResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CSetDefaultSpatialAudioFormatResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CSetDefaultSpatialAudioFormatResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CSetDefaultSpatialAudioFormatResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CSetDefaultSpatialAudioFormatResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CSetDefaultSpatialAudioFormatResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CSetDefaultSpatialAudioFormatResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CSetDefaultSpatialAudioFormatResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CSetDefaultSpatialAudioFormatResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CSetDefaultSpatialAudioFormatResult * This, __RPC__out __x_ABI_CWindows_CMedia_CAudio_CISetDefaultSpatialAudioFormatResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CAudio__CSetDefaultSpatialAudioFormatResultVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CSetDefaultSpatialAudioFormatResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CAudio__CSetDefaultSpatialAudioFormatResultVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectable __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgs __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgs __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgs __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioStateMonitor_IInspectable __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioStateMonitor_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioStateMonitor_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioStateMonitor_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioStateMonitor_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioStateMonitor_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioStateMonitor_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioStateMonitor_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitor * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioStateMonitor_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioStateMonitor_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioStateMonitor_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CAudio__CMediaSourceAudioInputNode_IInspectable __FITypedEventHandler_2_Windows__CMedia__CAudio__CMediaSourceAudioInputNode_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CAudio__CMediaSourceAudioInputNode_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CAudio__CMediaSourceAudioInputNode_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CMediaSourceAudioInputNode_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CMediaSourceAudioInputNode_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CMediaSourceAudioInputNode_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CMediaSourceAudioInputNode_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIMediaSourceAudioInputNode * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CAudio__CMediaSourceAudioInputNode_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CAudio__CMediaSourceAudioInputNode_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CAudio__CMediaSourceAudioInputNode_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CAudio__CSpatialAudioDeviceConfiguration_IInspectable __FITypedEventHandler_2_Windows__CMedia__CAudio__CSpatialAudioDeviceConfiguration_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CAudio__CSpatialAudioDeviceConfiguration_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CAudio__CSpatialAudioDeviceConfiguration_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CSpatialAudioDeviceConfiguration_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CSpatialAudioDeviceConfiguration_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CSpatialAudioDeviceConfiguration_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CSpatialAudioDeviceConfiguration_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfiguration * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CAudio__CSpatialAudioDeviceConfiguration_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CAudio__CSpatialAudioDeviceConfiguration_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CAudio__CSpatialAudioDeviceConfiguration_IInspectableVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CMedia_CTranscoding_CTranscodeFailureReason;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReasonVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReasonVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReasonVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReasonVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This, __RPC__out enum __x_ABI_CWindows_CMedia_CTranscoding_CTranscodeFailureReason *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReasonVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReasonVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition;
typedef interface __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition;
typedef struct __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, __RPC__out __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl;
interface __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition;
typedef struct __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl;
interface __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition;
typedef struct __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                       __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl;
interface __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition;
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition;
typedef struct __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                   __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * *value);
    END_INTERFACE
} __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl;
interface __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CMedia_CIAudioFrame __x_ABI_CWindows_CMedia_CIAudioFrame;
typedef enum __x_ABI_CWindows_CMedia_CAudioProcessing __x_ABI_CWindows_CMedia_CAudioProcessing;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CMediaCategory __x_ABI_CWindows_CMedia_CCapture_CMediaCategory;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 __x_ABI_CWindows_CMedia_CCore_CIMediaSource2;
typedef enum __x_ABI_CWindows_CMedia_CDevices_CAudioDeviceRole __x_ABI_CWindows_CMedia_CDevices_CAudioDeviceRole;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile;
typedef enum __x_ABI_CWindows_CMedia_CRender_CAudioRenderCategory __x_ABI_CWindows_CMedia_CRender_CAudioRenderCategory;
typedef enum __x_ABI_CWindows_CMedia_CSoundLevel __x_ABI_CWindows_CMedia_CSoundLevel;
typedef enum __x_ABI_CWindows_CMedia_CTranscoding_CTranscodeFailureReason __x_ABI_CWindows_CMedia_CTranscoding_CTranscodeFailureReason;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;
typedef enum __x_ABI_CWindows_CMedia_CAudio_CAudioDeviceNodeCreationStatus __x_ABI_CWindows_CMedia_CAudio_CAudioDeviceNodeCreationStatus;
typedef enum __x_ABI_CWindows_CMedia_CAudio_CAudioFileNodeCreationStatus __x_ABI_CWindows_CMedia_CAudio_CAudioFileNodeCreationStatus;
typedef enum __x_ABI_CWindows_CMedia_CAudio_CAudioGraphCreationStatus __x_ABI_CWindows_CMedia_CAudio_CAudioGraphCreationStatus;
typedef enum __x_ABI_CWindows_CMedia_CAudio_CAudioGraphUnrecoverableError __x_ABI_CWindows_CMedia_CAudio_CAudioGraphUnrecoverableError;
typedef enum __x_ABI_CWindows_CMedia_CAudio_CAudioNodeEmitterDecayKind __x_ABI_CWindows_CMedia_CAudio_CAudioNodeEmitterDecayKind;
typedef enum __x_ABI_CWindows_CMedia_CAudio_CAudioNodeEmitterSettings __x_ABI_CWindows_CMedia_CAudio_CAudioNodeEmitterSettings;
typedef enum __x_ABI_CWindows_CMedia_CAudio_CAudioNodeEmitterShapeKind __x_ABI_CWindows_CMedia_CAudio_CAudioNodeEmitterShapeKind;
typedef enum __x_ABI_CWindows_CMedia_CAudio_CMediaSourceAudioInputNodeCreationStatus __x_ABI_CWindows_CMedia_CAudio_CMediaSourceAudioInputNodeCreationStatus;
typedef enum __x_ABI_CWindows_CMedia_CAudio_CMixedRealitySpatialAudioFormatPolicy __x_ABI_CWindows_CMedia_CAudio_CMixedRealitySpatialAudioFormatPolicy;
typedef enum __x_ABI_CWindows_CMedia_CAudio_CQuantumSizeSelectionMode __x_ABI_CWindows_CMedia_CAudio_CQuantumSizeSelectionMode;
typedef enum __x_ABI_CWindows_CMedia_CAudio_CSetDefaultSpatialAudioFormatStatus __x_ABI_CWindows_CMedia_CAudio_CSetDefaultSpatialAudioFormatStatus;
typedef enum __x_ABI_CWindows_CMedia_CAudio_CSpatialAudioModel __x_ABI_CWindows_CMedia_CAudio_CSpatialAudioModel;
enum __x_ABI_CWindows_CMedia_CAudio_CAudioDeviceNodeCreationStatus
{
    AudioDeviceNodeCreationStatus_Success = 0,
    AudioDeviceNodeCreationStatus_DeviceNotAvailable = 1,
    AudioDeviceNodeCreationStatus_FormatNotSupported = 2,
    AudioDeviceNodeCreationStatus_UnknownFailure = 3,
    AudioDeviceNodeCreationStatus_AccessDenied = 4,
};
enum __x_ABI_CWindows_CMedia_CAudio_CAudioFileNodeCreationStatus
{
    AudioFileNodeCreationStatus_Success = 0,
    AudioFileNodeCreationStatus_FileNotFound = 1,
    AudioFileNodeCreationStatus_InvalidFileType = 2,
    AudioFileNodeCreationStatus_FormatNotSupported = 3,
    AudioFileNodeCreationStatus_UnknownFailure = 4,
};
enum __x_ABI_CWindows_CMedia_CAudio_CAudioGraphCreationStatus
{
    AudioGraphCreationStatus_Success = 0,
    AudioGraphCreationStatus_DeviceNotAvailable = 1,
    AudioGraphCreationStatus_FormatNotSupported = 2,
    AudioGraphCreationStatus_UnknownFailure = 3,
};
enum __x_ABI_CWindows_CMedia_CAudio_CAudioGraphUnrecoverableError
{
    AudioGraphUnrecoverableError_None = 0,
    AudioGraphUnrecoverableError_AudioDeviceLost = 1,
    AudioGraphUnrecoverableError_AudioSessionDisconnected = 2,
    AudioGraphUnrecoverableError_UnknownFailure = 3,
};
enum __x_ABI_CWindows_CMedia_CAudio_CAudioNodeEmitterDecayKind
{
    AudioNodeEmitterDecayKind_Natural = 0,
    AudioNodeEmitterDecayKind_Custom = 1,
};
enum __x_ABI_CWindows_CMedia_CAudio_CAudioNodeEmitterSettings
{
    AudioNodeEmitterSettings_None = 0,
    AudioNodeEmitterSettings_DisableDoppler = 0x1,
};
enum __x_ABI_CWindows_CMedia_CAudio_CAudioNodeEmitterShapeKind
{
    AudioNodeEmitterShapeKind_Omnidirectional = 0,
    AudioNodeEmitterShapeKind_Cone = 1,
};
enum __x_ABI_CWindows_CMedia_CAudio_CMediaSourceAudioInputNodeCreationStatus
{
    MediaSourceAudioInputNodeCreationStatus_Success = 0,
    MediaSourceAudioInputNodeCreationStatus_FormatNotSupported = 1,
    MediaSourceAudioInputNodeCreationStatus_NetworkError = 2,
    MediaSourceAudioInputNodeCreationStatus_UnknownFailure = 3,
};
enum __x_ABI_CWindows_CMedia_CAudio_CMixedRealitySpatialAudioFormatPolicy
{
    MixedRealitySpatialAudioFormatPolicy_UseMixedRealityDefaultSpatialAudioFormat = 0,
    MixedRealitySpatialAudioFormatPolicy_UseDeviceConfigurationDefaultSpatialAudioFormat = 1,
};
enum __x_ABI_CWindows_CMedia_CAudio_CQuantumSizeSelectionMode
{
    QuantumSizeSelectionMode_SystemDefault = 0,
    QuantumSizeSelectionMode_LowestLatency = 1,
    QuantumSizeSelectionMode_ClosestToDesired = 2,
};
enum __x_ABI_CWindows_CMedia_CAudio_CSetDefaultSpatialAudioFormatStatus
{
    SetDefaultSpatialAudioFormatStatus_Succeeded = 0,
    SetDefaultSpatialAudioFormatStatus_AccessDenied = 1,
    SetDefaultSpatialAudioFormatStatus_LicenseExpired = 2,
    SetDefaultSpatialAudioFormatStatus_LicenseNotValidForAudioEndpoint = 3,
    SetDefaultSpatialAudioFormatStatus_NotSupportedOnAudioEndpoint = 4,
    SetDefaultSpatialAudioFormatStatus_UnknownError = 5,
};
enum __x_ABI_CWindows_CMedia_CAudio_CSpatialAudioModel
{
    SpatialAudioModel_ObjectBased = 0,
    SpatialAudioModel_FoldDown = 1,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioDeviceInputNode[] = L"Windows.Media.Audio.IAudioDeviceInputNode";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Device )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNodeVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNodeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Device(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioDeviceOutputNode[] = L"Windows.Media.Audio.IAudioDeviceOutputNode";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Device )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNodeVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNodeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Device(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioFileInputNode[] = L"Windows.Media.Audio.IAudioFileInputNode";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_PlaybackSpeedFactor )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PlaybackSpeedFactor )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    HRESULT ( STDMETHODCALLTYPE *Seek )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan position
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StartTime )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StartTime )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EndTime )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_EndTime )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LoopCount )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LoopCount )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SourceFile )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_FileCompleted )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_FileCompleted )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNodeVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNodeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_PlaybackSpeedFactor(This,value) )
    ( (This)->lpVtbl->get_PlaybackSpeedFactor(This,value) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->Seek(This,position) )
    ( (This)->lpVtbl->get_StartTime(This,value) )
    ( (This)->lpVtbl->put_StartTime(This,value) )
    ( (This)->lpVtbl->get_EndTime(This,value) )
    ( (This)->lpVtbl->put_EndTime(This,value) )
    ( (This)->lpVtbl->get_LoopCount(This,value) )
    ( (This)->lpVtbl->put_LoopCount(This,value) )
    ( (This)->lpVtbl->get_Duration(This,value) )
    ( (This)->lpVtbl->get_SourceFile(This,value) )
    ( (This)->lpVtbl->add_FileCompleted(This,handler,token) )
    ( (This)->lpVtbl->remove_FileCompleted(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioFileOutputNode[] = L"Windows.Media.Audio.IAudioFileOutputNode";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_File )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FileEncodingProfile )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * * value
        );
    HRESULT ( STDMETHODCALLTYPE *FinalizeAsync )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNodeVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNodeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_File(This,value) )
    ( (This)->lpVtbl->get_FileEncodingProfile(This,value) )
    ( (This)->lpVtbl->FinalizeAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioFrameCompletedEventArgs[] = L"Windows.Media.Audio.IAudioFrameCompletedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Frame )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIAudioFrame * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Frame(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioFrameInputNode[] = L"Windows.Media.Audio.IAudioFrameInputNode";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_PlaybackSpeedFactor )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PlaybackSpeedFactor )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * This,
                           __RPC__out DOUBLE * value
        );
    HRESULT ( STDMETHODCALLTYPE *AddFrame )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CIAudioFrame * frame
        );
    HRESULT ( STDMETHODCALLTYPE *DiscardQueuedFrames )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * This
        );
                   HRESULT ( STDMETHODCALLTYPE *get_QueuedSampleCount )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * This,
                           __RPC__out UINT64 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AudioFrameCompleted )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AudioFrameCompleted )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_QuantumStarted )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_QuantumStarted )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNodeVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNodeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_PlaybackSpeedFactor(This,value) )
    ( (This)->lpVtbl->get_PlaybackSpeedFactor(This,value) )
    ( (This)->lpVtbl->AddFrame(This,frame) )
    ( (This)->lpVtbl->DiscardQueuedFrames(This) )
    ( (This)->lpVtbl->get_QueuedSampleCount(This,value) )
    ( (This)->lpVtbl->add_AudioFrameCompleted(This,handler,token) )
    ( (This)->lpVtbl->remove_AudioFrameCompleted(This,token) )
    ( (This)->lpVtbl->add_QuantumStarted(This,handler,token) )
    ( (This)->lpVtbl->remove_QuantumStarted(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioFrameOutputNode[] = L"Windows.Media.Audio.IAudioFrameOutputNode";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetFrame )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIAudioFrame * * audioFrame
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNodeVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNodeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetFrame(This,audioFrame) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioGraph[] = L"Windows.Media.Audio.IAudioGraph";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateFrameInputNode )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * * frameInputNode
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFrameInputNodeWithFormat )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * encodingProperties,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * * frameInputNode
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateDeviceInputNodeAsync )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
                  __x_ABI_CWindows_CMedia_CCapture_CMediaCategory category,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateDeviceInputNodeWithFormatAsync )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
                  __x_ABI_CWindows_CMedia_CCapture_CMediaCategory category,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * encodingProperties,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateDeviceInputNodeWithFormatOnDeviceAsync )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
                  __x_ABI_CWindows_CMedia_CCapture_CMediaCategory category,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * encodingProperties,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * device,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFrameOutputNode )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode * * frameOutputNode
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFrameOutputNodeWithFormat )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * encodingProperties,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode * * frameOutputNode
        );
    HRESULT ( STDMETHODCALLTYPE *CreateDeviceOutputNodeAsync )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFileInputNodeAsync )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFileOutputNodeAsync )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFileOutputNodeWithFileProfileAsync )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * fileEncodingProfile,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateSubmixNode )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode * * submixNode
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateSubmixNodeWithFormat )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * encodingProperties,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode * * submixNode
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This
        );
    HRESULT ( STDMETHODCALLTYPE *ResetAllNodes )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This
        );
                    HRESULT ( STDMETHODCALLTYPE *add_QuantumStarted )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_QuantumStarted )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_QuantumProcessed )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_QuantumProcessed )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_UnrecoverableErrorOccurred )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_UnrecoverableErrorOccurred )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CompletedQuantumCount )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EncodingProperties )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LatencyInSamples )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PrimaryRenderDevice )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RenderDeviceAudioProcessing )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CAudioProcessing * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SamplesPerQuantum )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFrameInputNode(This,frameInputNode) )
    ( (This)->lpVtbl->CreateFrameInputNodeWithFormat(This,encodingProperties,frameInputNode) )
    ( (This)->lpVtbl->CreateDeviceInputNodeAsync(This,category,result) )
    ( (This)->lpVtbl->CreateDeviceInputNodeWithFormatAsync(This,category,encodingProperties,result) )
    ( (This)->lpVtbl->CreateDeviceInputNodeWithFormatOnDeviceAsync(This,category,encodingProperties,device,result) )
    ( (This)->lpVtbl->CreateFrameOutputNode(This,frameOutputNode) )
    ( (This)->lpVtbl->CreateFrameOutputNodeWithFormat(This,encodingProperties,frameOutputNode) )
    ( (This)->lpVtbl->CreateDeviceOutputNodeAsync(This,result) )
    ( (This)->lpVtbl->CreateFileInputNodeAsync(This,file,result) )
    ( (This)->lpVtbl->CreateFileOutputNodeAsync(This,file,result) )
    ( (This)->lpVtbl->CreateFileOutputNodeWithFileProfileAsync(This,file,fileEncodingProfile,result) )
    ( (This)->lpVtbl->CreateSubmixNode(This,submixNode) )
    ( (This)->lpVtbl->CreateSubmixNodeWithFormat(This,encodingProperties,submixNode) )
    ( (This)->lpVtbl->Start(This) )
    ( (This)->lpVtbl->Stop(This) )
    ( (This)->lpVtbl->ResetAllNodes(This) )
    ( (This)->lpVtbl->add_QuantumStarted(This,handler,token) )
    ( (This)->lpVtbl->remove_QuantumStarted(This,token) )
    ( (This)->lpVtbl->add_QuantumProcessed(This,handler,token) )
    ( (This)->lpVtbl->remove_QuantumProcessed(This,token) )
    ( (This)->lpVtbl->add_UnrecoverableErrorOccurred(This,handler,token) )
    ( (This)->lpVtbl->remove_UnrecoverableErrorOccurred(This,token) )
    ( (This)->lpVtbl->get_CompletedQuantumCount(This,value) )
    ( (This)->lpVtbl->get_EncodingProperties(This,value) )
    ( (This)->lpVtbl->get_LatencyInSamples(This,value) )
    ( (This)->lpVtbl->get_PrimaryRenderDevice(This,value) )
    ( (This)->lpVtbl->get_RenderDeviceAudioProcessing(This,value) )
    ( (This)->lpVtbl->get_SamplesPerQuantum(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioGraph;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioGraph2[] = L"Windows.Media.Audio.IAudioGraph2";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateFrameInputNodeWithFormatAndEmitter )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * encodingProperties,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * emitter,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * * frameInputNode
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateDeviceInputNodeWithFormatAndEmitterOnDeviceAsync )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2 * This,
                  __x_ABI_CWindows_CMedia_CCapture_CMediaCategory category,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * encodingProperties,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * device,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * emitter,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFileInputNodeWithEmitterAsync )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * emitter,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateSubmixNodeWithFormatAndEmitter )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * encodingProperties,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * emitter,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode * * submixNode
        );
    HRESULT ( STDMETHODCALLTYPE *CreateBatchUpdater )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIClosable * * updater
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2Vtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFrameInputNodeWithFormatAndEmitter(This,encodingProperties,emitter,frameInputNode) )
    ( (This)->lpVtbl->CreateDeviceInputNodeWithFormatAndEmitterOnDeviceAsync(This,category,encodingProperties,device,emitter,result) )
    ( (This)->lpVtbl->CreateFileInputNodeWithEmitterAsync(This,file,emitter,result) )
    ( (This)->lpVtbl->CreateSubmixNodeWithFormatAndEmitter(This,encodingProperties,emitter,submixNode) )
    ( (This)->lpVtbl->CreateBatchUpdater(This,updater) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioGraph3[] = L"Windows.Media.Audio.IAudioGraph3";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateMediaSourceAudioInputNodeAsync )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * mediaSource,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateMediaSourceAudioInputNodeResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateMediaSourceAudioInputNodeWithEmitterAsync )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * mediaSource,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * emitter,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateMediaSourceAudioInputNodeResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph3Vtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateMediaSourceAudioInputNodeAsync(This,mediaSource,operation) )
    ( (This)->lpVtbl->CreateMediaSourceAudioInputNodeWithEmitterAsync(This,mediaSource,emitter,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioGraph3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioGraphConnection[] = L"Windows.Media.Audio.IAudioGraphConnection";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Destination )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Gain )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Gain )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnectionVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Destination(This,value) )
    ( (This)->lpVtbl->put_Gain(This,value) )
    ( (This)->lpVtbl->get_Gain(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioGraphSettings[] = L"Windows.Media.Audio.IAudioGraphSettings";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EncodingProperties )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_EncodingProperties )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PrimaryRenderDevice )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PrimaryRenderDevice )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_QuantumSizeSelectionMode )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CAudio_CQuantumSizeSelectionMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_QuantumSizeSelectionMode )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This,
                  __x_ABI_CWindows_CMedia_CAudio_CQuantumSizeSelectionMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DesiredSamplesPerQuantum )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DesiredSamplesPerQuantum )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioRenderCategory )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CRender_CAudioRenderCategory * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AudioRenderCategory )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This,
                  __x_ABI_CWindows_CMedia_CRender_CAudioRenderCategory value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DesiredRenderDeviceAudioProcessing )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CAudioProcessing * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DesiredRenderDeviceAudioProcessing )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This,
                  __x_ABI_CWindows_CMedia_CAudioProcessing value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EncodingProperties(This,value) )
    ( (This)->lpVtbl->put_EncodingProperties(This,value) )
    ( (This)->lpVtbl->get_PrimaryRenderDevice(This,value) )
    ( (This)->lpVtbl->put_PrimaryRenderDevice(This,value) )
    ( (This)->lpVtbl->get_QuantumSizeSelectionMode(This,value) )
    ( (This)->lpVtbl->put_QuantumSizeSelectionMode(This,value) )
    ( (This)->lpVtbl->get_DesiredSamplesPerQuantum(This,value) )
    ( (This)->lpVtbl->put_DesiredSamplesPerQuantum(This,value) )
    ( (This)->lpVtbl->get_AudioRenderCategory(This,value) )
    ( (This)->lpVtbl->put_AudioRenderCategory(This,value) )
    ( (This)->lpVtbl->get_DesiredRenderDeviceAudioProcessing(This,value) )
    ( (This)->lpVtbl->put_DesiredRenderDeviceAudioProcessing(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioGraphSettings2[] = L"Windows.Media.Audio.IAudioGraphSettings2";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_MaxPlaybackSpeedFactor )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings2 * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxPlaybackSpeedFactor )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings2 * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings2Vtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_MaxPlaybackSpeedFactor(This,value) )
    ( (This)->lpVtbl->get_MaxPlaybackSpeedFactor(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioGraphSettingsFactory[] = L"Windows.Media.Audio.IAudioGraphSettingsFactory";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory * This,
                  __x_ABI_CWindows_CMedia_CRender_CAudioRenderCategory audioRenderCategory,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,audioRenderCategory,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioGraphStatics[] = L"Windows.Media.Audio.IAudioGraphStatics";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateAsync )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * settings,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateAsync(This,settings,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioGraphUnrecoverableErrorOccurredEventArgs[] = L"Windows.Media.Audio.IAudioGraphUnrecoverableErrorOccurredEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Error )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CAudio_CAudioGraphUnrecoverableError * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Error(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioInputNode[] = L"Windows.Media.Audio.IAudioInputNode";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OutgoingConnections )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *AddOutgoingConnection )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * destination
        );
                    HRESULT ( STDMETHODCALLTYPE *AddOutgoingConnectionWithGain )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * destination,
                  DOUBLE gain
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveOutgoingConnection )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * destination
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNodeVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNodeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OutgoingConnections(This,value) )
    ( (This)->lpVtbl->AddOutgoingConnection(This,destination) )
    ( (This)->lpVtbl->AddOutgoingConnectionWithGain(This,destination,gain) )
    ( (This)->lpVtbl->RemoveOutgoingConnection(This,destination) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioInputNode2[] = L"Windows.Media.Audio.IAudioInputNode2";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Emitter )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2Vtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Emitter(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNode[] = L"Windows.Media.Audio.IAudioNode";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EffectDefinitions )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OutgoingGain )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutgoingGain )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EncodingProperties )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ConsumeInput )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ConsumeInput )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * This
        );
    HRESULT ( STDMETHODCALLTYPE *Reset )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * This
        );
    HRESULT ( STDMETHODCALLTYPE *DisableEffectsByDefinition )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * definition
        );
    HRESULT ( STDMETHODCALLTYPE *EnableEffectsByDefinition )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * definition
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNode
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EffectDefinitions(This,value) )
    ( (This)->lpVtbl->put_OutgoingGain(This,value) )
    ( (This)->lpVtbl->get_OutgoingGain(This,value) )
    ( (This)->lpVtbl->get_EncodingProperties(This,value) )
    ( (This)->lpVtbl->get_ConsumeInput(This,value) )
    ( (This)->lpVtbl->put_ConsumeInput(This,value) )
    ( (This)->lpVtbl->Start(This) )
    ( (This)->lpVtbl->Stop(This) )
    ( (This)->lpVtbl->Reset(This) )
    ( (This)->lpVtbl->DisableEffectsByDefinition(This,definition) )
    ( (This)->lpVtbl->EnableEffectsByDefinition(This,definition) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNode;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNodeEmitter[] = L"Windows.Media.Audio.IAudioNodeEmitter";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Position )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Direction )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Direction )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Shape )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DecayModel )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Gain )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Gain )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DistanceScale )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DistanceScale )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DopplerScale )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DopplerScale )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DopplerVelocity )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DopplerVelocity )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDopplerDisabled )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->put_Position(This,value) )
    ( (This)->lpVtbl->get_Direction(This,value) )
    ( (This)->lpVtbl->put_Direction(This,value) )
    ( (This)->lpVtbl->get_Shape(This,value) )
    ( (This)->lpVtbl->get_DecayModel(This,value) )
    ( (This)->lpVtbl->get_Gain(This,value) )
    ( (This)->lpVtbl->put_Gain(This,value) )
    ( (This)->lpVtbl->get_DistanceScale(This,value) )
    ( (This)->lpVtbl->put_DistanceScale(This,value) )
    ( (This)->lpVtbl->get_DopplerScale(This,value) )
    ( (This)->lpVtbl->put_DopplerScale(This,value) )
    ( (This)->lpVtbl->get_DopplerVelocity(This,value) )
    ( (This)->lpVtbl->put_DopplerVelocity(This,value) )
    ( (This)->lpVtbl->get_IsDopplerDisabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNodeEmitter2[] = L"Windows.Media.Audio.IAudioNodeEmitter2";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SpatialAudioModel )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CAudio_CSpatialAudioModel * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SpatialAudioModel )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2 * This,
                  __x_ABI_CWindows_CMedia_CAudio_CSpatialAudioModel value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2Vtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SpatialAudioModel(This,value) )
    ( (This)->lpVtbl->put_SpatialAudioModel(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNodeEmitterConeProperties[] = L"Windows.Media.Audio.IAudioNodeEmitterConeProperties";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConePropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InnerAngle )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OuterAngle )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OuterAngleGain )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConePropertiesVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConePropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InnerAngle(This,value) )
    ( (This)->lpVtbl->get_OuterAngle(This,value) )
    ( (This)->lpVtbl->get_OuterAngleGain(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNodeEmitterDecayModel[] = L"Windows.Media.Audio.IAudioNodeEmitterDecayModel";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CAudio_CAudioNodeEmitterDecayKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinGain )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxGain )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NaturalProperties )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Kind(This,value) )
    ( (This)->lpVtbl->get_MinGain(This,value) )
    ( (This)->lpVtbl->get_MaxGain(This,value) )
    ( (This)->lpVtbl->get_NaturalProperties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNodeEmitterDecayModelStatics[] = L"Windows.Media.Audio.IAudioNodeEmitterDecayModelStatics";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateNatural )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics * This,
                  DOUBLE minGain,
                  DOUBLE maxGain,
                  DOUBLE unityGainDistance,
                  DOUBLE cutoffDistance,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel * * decayModel
        );
    HRESULT ( STDMETHODCALLTYPE *CreateCustom )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics * This,
                  DOUBLE minGain,
                  DOUBLE maxGain,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel * * decayModel
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateNatural(This,minGain,maxGain,unityGainDistance,cutoffDistance,decayModel) )
    ( (This)->lpVtbl->CreateCustom(This,minGain,maxGain,decayModel) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNodeEmitterFactory[] = L"Windows.Media.Audio.IAudioNodeEmitterFactory";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateAudioNodeEmitter )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape * shape,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel * decayModel,
                  __x_ABI_CWindows_CMedia_CAudio_CAudioNodeEmitterSettings settings,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * * emitter
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateAudioNodeEmitter(This,shape,decayModel,settings,emitter) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNodeEmitterNaturalDecayModelProperties[] = L"Windows.Media.Audio.IAudioNodeEmitterNaturalDecayModelProperties";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UnityGainDistance )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CutoffDistance )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelPropertiesVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UnityGainDistance(This,value) )
    ( (This)->lpVtbl->get_CutoffDistance(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNodeEmitterShape[] = L"Windows.Media.Audio.IAudioNodeEmitterShape";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CAudio_CAudioNodeEmitterShapeKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ConeProperties )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Kind(This,value) )
    ( (This)->lpVtbl->get_ConeProperties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNodeEmitterShapeStatics[] = L"Windows.Media.Audio.IAudioNodeEmitterShapeStatics";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateCone )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics * This,
                  DOUBLE innerAngle,
                  DOUBLE outerAngle,
                  DOUBLE outerAngleGain,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape * * shape
        );
    HRESULT ( STDMETHODCALLTYPE *CreateOmnidirectional )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape * * shape
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateCone(This,innerAngle,outerAngle,outerAngleGain,shape) )
    ( (This)->lpVtbl->CreateOmnidirectional(This,shape) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNodeListener[] = L"Windows.Media.Audio.IAudioNodeListener";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListenerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Position )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Orientation )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Orientation )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SpeedOfSound )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SpeedOfSound )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DopplerVelocity )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DopplerVelocity )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListenerVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListenerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->put_Position(This,value) )
    ( (This)->lpVtbl->get_Orientation(This,value) )
    ( (This)->lpVtbl->put_Orientation(This,value) )
    ( (This)->lpVtbl->get_SpeedOfSound(This,value) )
    ( (This)->lpVtbl->put_SpeedOfSound(This,value) )
    ( (This)->lpVtbl->get_DopplerVelocity(This,value) )
    ( (This)->lpVtbl->put_DopplerVelocity(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNodeWithListener[] = L"Windows.Media.Audio.IAudioNodeWithListener";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListenerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Listener )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Listener )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListenerVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListenerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Listener(This,value) )
    ( (This)->lpVtbl->get_Listener(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioStateMonitor[] = L"Windows.Media.Audio.IAudioStateMonitor";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitor * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_SoundLevelChanged )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitor * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioStateMonitor_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SoundLevelChanged )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitor * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SoundLevel )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitor * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CSoundLevel * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitorVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitor
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_SoundLevelChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_SoundLevelChanged(This,token) )
    ( (This)->lpVtbl->get_SoundLevel(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioStateMonitorStatics[] = L"Windows.Media.Audio.IAudioStateMonitorStatics";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateForRenderMonitoring )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitorStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitor * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateForRenderMonitoringWithCategory )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitorStatics * This,
                  __x_ABI_CWindows_CMedia_CRender_CAudioRenderCategory category,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitor * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateForRenderMonitoringWithCategoryAndDeviceRole )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitorStatics * This,
                  __x_ABI_CWindows_CMedia_CRender_CAudioRenderCategory category,
                  __x_ABI_CWindows_CMedia_CDevices_CAudioDeviceRole role,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitor * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateForRenderMonitoringWithCategoryAndDeviceId )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitorStatics * This,
                  __x_ABI_CWindows_CMedia_CRender_CAudioRenderCategory category,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitor * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateForCaptureMonitoring )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitorStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitor * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateForCaptureMonitoringWithCategory )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitorStatics * This,
                  __x_ABI_CWindows_CMedia_CCapture_CMediaCategory category,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitor * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateForCaptureMonitoringWithCategoryAndDeviceRole )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitorStatics * This,
                  __x_ABI_CWindows_CMedia_CCapture_CMediaCategory category,
                  __x_ABI_CWindows_CMedia_CDevices_CAudioDeviceRole role,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitor * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateForCaptureMonitoringWithCategoryAndDeviceId )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitorStatics * This,
                  __x_ABI_CWindows_CMedia_CCapture_CMediaCategory category,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitor * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitorStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateForRenderMonitoring(This,result) )
    ( (This)->lpVtbl->CreateForRenderMonitoringWithCategory(This,category,result) )
    ( (This)->lpVtbl->CreateForRenderMonitoringWithCategoryAndDeviceRole(This,category,role,result) )
    ( (This)->lpVtbl->CreateForRenderMonitoringWithCategoryAndDeviceId(This,category,deviceId,result) )
    ( (This)->lpVtbl->CreateForCaptureMonitoring(This,result) )
    ( (This)->lpVtbl->CreateForCaptureMonitoringWithCategory(This,category,result) )
    ( (This)->lpVtbl->CreateForCaptureMonitoringWithCategoryAndDeviceRole(This,category,role,result) )
    ( (This)->lpVtbl->CreateForCaptureMonitoringWithCategoryAndDeviceId(This,category,deviceId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_ICreateAudioDeviceInputNodeResult[] = L"Windows.Media.Audio.ICreateAudioDeviceInputNodeResult";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CAudio_CAudioDeviceNodeCreationStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceInputNode )(
        __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResultVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_DeviceInputNode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_ICreateAudioDeviceInputNodeResult2[] = L"Windows.Media.Audio.ICreateAudioDeviceInputNodeResult2";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult2 * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult2Vtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_ICreateAudioDeviceOutputNodeResult[] = L"Windows.Media.Audio.ICreateAudioDeviceOutputNodeResult";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CAudio_CAudioDeviceNodeCreationStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceOutputNode )(
        __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResultVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_DeviceOutputNode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_ICreateAudioDeviceOutputNodeResult2[] = L"Windows.Media.Audio.ICreateAudioDeviceOutputNodeResult2";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult2 * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult2Vtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_ICreateAudioFileInputNodeResult[] = L"Windows.Media.Audio.ICreateAudioFileInputNodeResult";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CAudio_CAudioFileNodeCreationStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FileInputNode )(
        __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResultVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_FileInputNode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_ICreateAudioFileInputNodeResult2[] = L"Windows.Media.Audio.ICreateAudioFileInputNodeResult2";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult2 * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult2Vtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_ICreateAudioFileOutputNodeResult[] = L"Windows.Media.Audio.ICreateAudioFileOutputNodeResult";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CAudio_CAudioFileNodeCreationStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FileOutputNode )(
        __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResultVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_FileOutputNode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_ICreateAudioFileOutputNodeResult2[] = L"Windows.Media.Audio.ICreateAudioFileOutputNodeResult2";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult2 * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult2Vtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_ICreateAudioGraphResult[] = L"Windows.Media.Audio.ICreateAudioGraphResult";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CAudio_CAudioGraphCreationStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Graph )(
        __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResultVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_Graph(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_ICreateAudioGraphResult2[] = L"Windows.Media.Audio.ICreateAudioGraphResult2";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult2 * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult2Vtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_ICreateMediaSourceAudioInputNodeResult[] = L"Windows.Media.Audio.ICreateMediaSourceAudioInputNodeResult";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CICreateMediaSourceAudioInputNodeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateMediaSourceAudioInputNodeResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateMediaSourceAudioInputNodeResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateMediaSourceAudioInputNodeResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateMediaSourceAudioInputNodeResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateMediaSourceAudioInputNodeResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateMediaSourceAudioInputNodeResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CMedia_CAudio_CICreateMediaSourceAudioInputNodeResult * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CAudio_CMediaSourceAudioInputNodeCreationStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Node )(
        __x_ABI_CWindows_CMedia_CAudio_CICreateMediaSourceAudioInputNodeResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIMediaSourceAudioInputNode * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CICreateMediaSourceAudioInputNodeResultVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CICreateMediaSourceAudioInputNodeResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CICreateMediaSourceAudioInputNodeResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_Node(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CICreateMediaSourceAudioInputNodeResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_ICreateMediaSourceAudioInputNodeResult2[] = L"Windows.Media.Audio.ICreateMediaSourceAudioInputNodeResult2";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CICreateMediaSourceAudioInputNodeResult2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateMediaSourceAudioInputNodeResult2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateMediaSourceAudioInputNodeResult2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateMediaSourceAudioInputNodeResult2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateMediaSourceAudioInputNodeResult2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateMediaSourceAudioInputNodeResult2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateMediaSourceAudioInputNodeResult2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CMedia_CAudio_CICreateMediaSourceAudioInputNodeResult2 * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CICreateMediaSourceAudioInputNodeResult2Vtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CICreateMediaSourceAudioInputNodeResult2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CICreateMediaSourceAudioInputNodeResult2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CICreateMediaSourceAudioInputNodeResult2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IEchoEffectDefinition[] = L"Windows.Media.Audio.IEchoEffectDefinition";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_WetDryMix )(
        __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WetDryMix )(
        __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Feedback )(
        __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Feedback )(
        __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Delay )(
        __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Delay )(
        __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_WetDryMix(This,value) )
    ( (This)->lpVtbl->get_WetDryMix(This,value) )
    ( (This)->lpVtbl->put_Feedback(This,value) )
    ( (This)->lpVtbl->get_Feedback(This,value) )
    ( (This)->lpVtbl->put_Delay(This,value) )
    ( (This)->lpVtbl->get_Delay(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IEchoEffectDefinitionFactory[] = L"Windows.Media.Audio.IEchoEffectDefinitionFactory";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * audioGraph,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,audioGraph,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IEqualizerBand[] = L"Windows.Media.Audio.IEqualizerBand";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Bandwidth )(
        __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Bandwidth )(
        __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FrequencyCenter )(
        __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FrequencyCenter )(
        __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Gain )(
        __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Gain )(
        __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand * This,
                  DOUBLE value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBandVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBandVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Bandwidth(This,value) )
    ( (This)->lpVtbl->put_Bandwidth(This,value) )
    ( (This)->lpVtbl->get_FrequencyCenter(This,value) )
    ( (This)->lpVtbl->put_FrequencyCenter(This,value) )
    ( (This)->lpVtbl->get_Gain(This,value) )
    ( (This)->lpVtbl->put_Gain(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IEqualizerEffectDefinition[] = L"Windows.Media.Audio.IEqualizerEffectDefinition";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Bands )(
        __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Bands(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IEqualizerEffectDefinitionFactory[] = L"Windows.Media.Audio.IEqualizerEffectDefinitionFactory";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * audioGraph,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,audioGraph,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IFrameInputNodeQuantumStartedEventArgs[] = L"Windows.Media.Audio.IFrameInputNodeQuantumStartedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RequiredSamples )(
        __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RequiredSamples(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_ILimiterEffectDefinition[] = L"Windows.Media.Audio.ILimiterEffectDefinition";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Release )(
        __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Release )(
        __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Loudness )(
        __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Loudness )(
        __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Release(This,value) )
    ( (This)->lpVtbl->get_Release(This,value) )
    ( (This)->lpVtbl->put_Loudness(This,value) )
    ( (This)->lpVtbl->get_Loudness(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_ILimiterEffectDefinitionFactory[] = L"Windows.Media.Audio.ILimiterEffectDefinitionFactory";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * audioGraph,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,audioGraph,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IMediaSourceAudioInputNode[] = L"Windows.Media.Audio.IMediaSourceAudioInputNode";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIMediaSourceAudioInputNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIMediaSourceAudioInputNode * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIMediaSourceAudioInputNode * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIMediaSourceAudioInputNode * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIMediaSourceAudioInputNode * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIMediaSourceAudioInputNode * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIMediaSourceAudioInputNode * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_PlaybackSpeedFactor )(
        __x_ABI_CWindows_CMedia_CAudio_CIMediaSourceAudioInputNode * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PlaybackSpeedFactor )(
        __x_ABI_CWindows_CMedia_CAudio_CIMediaSourceAudioInputNode * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CMedia_CAudio_CIMediaSourceAudioInputNode * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    HRESULT ( STDMETHODCALLTYPE *Seek )(
        __x_ABI_CWindows_CMedia_CAudio_CIMediaSourceAudioInputNode * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan position
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StartTime )(
        __x_ABI_CWindows_CMedia_CAudio_CIMediaSourceAudioInputNode * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StartTime )(
        __x_ABI_CWindows_CMedia_CAudio_CIMediaSourceAudioInputNode * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EndTime )(
        __x_ABI_CWindows_CMedia_CAudio_CIMediaSourceAudioInputNode * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_EndTime )(
        __x_ABI_CWindows_CMedia_CAudio_CIMediaSourceAudioInputNode * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LoopCount )(
        __x_ABI_CWindows_CMedia_CAudio_CIMediaSourceAudioInputNode * This,
                           __RPC__deref_out_opt __FIReference_1_int * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LoopCount )(
        __x_ABI_CWindows_CMedia_CAudio_CIMediaSourceAudioInputNode * This,
                  __RPC__in_opt __FIReference_1_int * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CMedia_CAudio_CIMediaSourceAudioInputNode * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediaSource )(
        __x_ABI_CWindows_CMedia_CAudio_CIMediaSourceAudioInputNode * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_MediaSourceCompleted )(
        __x_ABI_CWindows_CMedia_CAudio_CIMediaSourceAudioInputNode * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CAudio__CMediaSourceAudioInputNode_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MediaSourceCompleted )(
        __x_ABI_CWindows_CMedia_CAudio_CIMediaSourceAudioInputNode * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIMediaSourceAudioInputNodeVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIMediaSourceAudioInputNode
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIMediaSourceAudioInputNodeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_PlaybackSpeedFactor(This,value) )
    ( (This)->lpVtbl->get_PlaybackSpeedFactor(This,value) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->Seek(This,position) )
    ( (This)->lpVtbl->get_StartTime(This,value) )
    ( (This)->lpVtbl->put_StartTime(This,value) )
    ( (This)->lpVtbl->get_EndTime(This,value) )
    ( (This)->lpVtbl->put_EndTime(This,value) )
    ( (This)->lpVtbl->get_LoopCount(This,value) )
    ( (This)->lpVtbl->put_LoopCount(This,value) )
    ( (This)->lpVtbl->get_Duration(This,value) )
    ( (This)->lpVtbl->get_MediaSource(This,value) )
    ( (This)->lpVtbl->add_MediaSourceCompleted(This,handler,token) )
    ( (This)->lpVtbl->remove_MediaSourceCompleted(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIMediaSourceAudioInputNode;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IReverbEffectDefinition[] = L"Windows.Media.Audio.IReverbEffectDefinition";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_WetDryMix )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WetDryMix )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ReflectionsDelay )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReflectionsDelay )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ReverbDelay )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                  BYTE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReverbDelay )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RearDelay )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                  BYTE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RearDelay )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PositionLeft )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                  BYTE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PositionLeft )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PositionRight )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                  BYTE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PositionRight )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PositionMatrixLeft )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                  BYTE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PositionMatrixLeft )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PositionMatrixRight )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                  BYTE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PositionMatrixRight )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_EarlyDiffusion )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                  BYTE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EarlyDiffusion )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LateDiffusion )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                  BYTE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LateDiffusion )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LowEQGain )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                  BYTE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LowEQGain )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LowEQCutoff )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                  BYTE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LowEQCutoff )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_HighEQGain )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                  BYTE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HighEQGain )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_HighEQCutoff )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                  BYTE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HighEQCutoff )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RoomFilterFreq )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RoomFilterFreq )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RoomFilterMain )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RoomFilterMain )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RoomFilterHF )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RoomFilterHF )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ReflectionsGain )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReflectionsGain )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ReverbGain )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReverbGain )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DecayTime )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DecayTime )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Density )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Density )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RoomSize )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RoomSize )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DisableLateField )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisableLateField )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_WetDryMix(This,value) )
    ( (This)->lpVtbl->get_WetDryMix(This,value) )
    ( (This)->lpVtbl->put_ReflectionsDelay(This,value) )
    ( (This)->lpVtbl->get_ReflectionsDelay(This,value) )
    ( (This)->lpVtbl->put_ReverbDelay(This,value) )
    ( (This)->lpVtbl->get_ReverbDelay(This,value) )
    ( (This)->lpVtbl->put_RearDelay(This,value) )
    ( (This)->lpVtbl->get_RearDelay(This,value) )
    ( (This)->lpVtbl->put_PositionLeft(This,value) )
    ( (This)->lpVtbl->get_PositionLeft(This,value) )
    ( (This)->lpVtbl->put_PositionRight(This,value) )
    ( (This)->lpVtbl->get_PositionRight(This,value) )
    ( (This)->lpVtbl->put_PositionMatrixLeft(This,value) )
    ( (This)->lpVtbl->get_PositionMatrixLeft(This,value) )
    ( (This)->lpVtbl->put_PositionMatrixRight(This,value) )
    ( (This)->lpVtbl->get_PositionMatrixRight(This,value) )
    ( (This)->lpVtbl->put_EarlyDiffusion(This,value) )
    ( (This)->lpVtbl->get_EarlyDiffusion(This,value) )
    ( (This)->lpVtbl->put_LateDiffusion(This,value) )
    ( (This)->lpVtbl->get_LateDiffusion(This,value) )
    ( (This)->lpVtbl->put_LowEQGain(This,value) )
    ( (This)->lpVtbl->get_LowEQGain(This,value) )
    ( (This)->lpVtbl->put_LowEQCutoff(This,value) )
    ( (This)->lpVtbl->get_LowEQCutoff(This,value) )
    ( (This)->lpVtbl->put_HighEQGain(This,value) )
    ( (This)->lpVtbl->get_HighEQGain(This,value) )
    ( (This)->lpVtbl->put_HighEQCutoff(This,value) )
    ( (This)->lpVtbl->get_HighEQCutoff(This,value) )
    ( (This)->lpVtbl->put_RoomFilterFreq(This,value) )
    ( (This)->lpVtbl->get_RoomFilterFreq(This,value) )
    ( (This)->lpVtbl->put_RoomFilterMain(This,value) )
    ( (This)->lpVtbl->get_RoomFilterMain(This,value) )
    ( (This)->lpVtbl->put_RoomFilterHF(This,value) )
    ( (This)->lpVtbl->get_RoomFilterHF(This,value) )
    ( (This)->lpVtbl->put_ReflectionsGain(This,value) )
    ( (This)->lpVtbl->get_ReflectionsGain(This,value) )
    ( (This)->lpVtbl->put_ReverbGain(This,value) )
    ( (This)->lpVtbl->get_ReverbGain(This,value) )
    ( (This)->lpVtbl->put_DecayTime(This,value) )
    ( (This)->lpVtbl->get_DecayTime(This,value) )
    ( (This)->lpVtbl->put_Density(This,value) )
    ( (This)->lpVtbl->get_Density(This,value) )
    ( (This)->lpVtbl->put_RoomSize(This,value) )
    ( (This)->lpVtbl->get_RoomSize(This,value) )
    ( (This)->lpVtbl->put_DisableLateField(This,value) )
    ( (This)->lpVtbl->get_DisableLateField(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IReverbEffectDefinitionFactory[] = L"Windows.Media.Audio.IReverbEffectDefinitionFactory";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * audioGraph,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,audioGraph,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_ISetDefaultSpatialAudioFormatResult[] = L"Windows.Media.Audio.ISetDefaultSpatialAudioFormatResult";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CISetDefaultSpatialAudioFormatResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISetDefaultSpatialAudioFormatResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISetDefaultSpatialAudioFormatResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISetDefaultSpatialAudioFormatResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISetDefaultSpatialAudioFormatResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISetDefaultSpatialAudioFormatResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISetDefaultSpatialAudioFormatResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CMedia_CAudio_CISetDefaultSpatialAudioFormatResult * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CAudio_CSetDefaultSpatialAudioFormatStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CISetDefaultSpatialAudioFormatResultVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CISetDefaultSpatialAudioFormatResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CISetDefaultSpatialAudioFormatResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CISetDefaultSpatialAudioFormatResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_ISpatialAudioDeviceConfiguration[] = L"Windows.Media.Audio.ISpatialAudioDeviceConfiguration";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfiguration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfiguration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfiguration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfiguration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfiguration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfiguration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfiguration * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSpatialAudioSupported )(
        __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfiguration * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsSpatialAudioFormatSupported )(
        __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfiguration * This,
                  __RPC__in HSTRING subtype,
                           __RPC__out boolean * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ActiveSpatialAudioFormat )(
        __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfiguration * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DefaultSpatialAudioFormat )(
        __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfiguration * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetDefaultSpatialAudioFormatAsync )(
        __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfiguration * This,
                  __RPC__in HSTRING subtype,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CSetDefaultSpatialAudioFormatResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ConfigurationChanged )(
        __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfiguration * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CAudio__CSpatialAudioDeviceConfiguration_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ConfigurationChanged )(
        __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfiguration * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfigurationVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfigurationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_IsSpatialAudioSupported(This,value) )
    ( (This)->lpVtbl->IsSpatialAudioFormatSupported(This,subtype,result) )
    ( (This)->lpVtbl->get_ActiveSpatialAudioFormat(This,value) )
    ( (This)->lpVtbl->get_DefaultSpatialAudioFormat(This,value) )
    ( (This)->lpVtbl->SetDefaultSpatialAudioFormatAsync(This,subtype,operation) )
    ( (This)->lpVtbl->add_ConfigurationChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ConfigurationChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfiguration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_ISpatialAudioDeviceConfigurationStatics[] = L"Windows.Media.Audio.ISpatialAudioDeviceConfigurationStatics";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfigurationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfigurationStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfigurationStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfigurationStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfigurationStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfigurationStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfigurationStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForDeviceId )(
        __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfigurationStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfiguration * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfigurationStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfigurationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfigurationStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForDeviceId(This,deviceId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CISpatialAudioDeviceConfigurationStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_ISpatialAudioFormatConfiguration[] = L"Windows.Media.Audio.ISpatialAudioFormatConfiguration";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatConfiguration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatConfiguration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatConfiguration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatConfiguration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatConfiguration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatConfiguration * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ReportLicenseChangedAsync )(
        __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatConfiguration * This,
                  __RPC__in HSTRING subtype,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ReportConfigurationChangedAsync )(
        __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatConfiguration * This,
                  __RPC__in HSTRING subtype,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MixedRealityExclusiveModePolicy )(
        __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatConfiguration * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CAudio_CMixedRealitySpatialAudioFormatPolicy * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MixedRealityExclusiveModePolicy )(
        __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatConfiguration * This,
                  __x_ABI_CWindows_CMedia_CAudio_CMixedRealitySpatialAudioFormatPolicy value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatConfigurationVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatConfigurationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ReportLicenseChangedAsync(This,subtype,operation) )
    ( (This)->lpVtbl->ReportConfigurationChangedAsync(This,subtype,operation) )
    ( (This)->lpVtbl->get_MixedRealityExclusiveModePolicy(This,value) )
    ( (This)->lpVtbl->put_MixedRealityExclusiveModePolicy(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatConfiguration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_ISpatialAudioFormatConfigurationStatics[] = L"Windows.Media.Audio.ISpatialAudioFormatConfigurationStatics";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatConfigurationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatConfigurationStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatConfigurationStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatConfigurationStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatConfigurationStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatConfigurationStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatConfigurationStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatConfigurationStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatConfiguration * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatConfigurationStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatConfigurationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatConfigurationStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatConfigurationStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_ISpatialAudioFormatSubtypeStatics[] = L"Windows.Media.Audio.ISpatialAudioFormatSubtypeStatics";
typedef struct __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatSubtypeStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatSubtypeStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatSubtypeStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatSubtypeStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatSubtypeStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatSubtypeStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatSubtypeStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_WindowsSonic )(
        __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatSubtypeStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DolbyAtmosForHeadphones )(
        __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatSubtypeStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DolbyAtmosForHomeTheater )(
        __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatSubtypeStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DolbyAtmosForSpeakers )(
        __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatSubtypeStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DTSHeadphoneX )(
        __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatSubtypeStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DTSXUltra )(
        __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatSubtypeStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatSubtypeStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatSubtypeStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatSubtypeStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_WindowsSonic(This,value) )
    ( (This)->lpVtbl->get_DolbyAtmosForHeadphones(This,value) )
    ( (This)->lpVtbl->get_DolbyAtmosForHomeTheater(This,value) )
    ( (This)->lpVtbl->get_DolbyAtmosForSpeakers(This,value) )
    ( (This)->lpVtbl->get_DTSHeadphoneX(This,value) )
    ( (This)->lpVtbl->get_DTSXUltra(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CISpatialAudioFormatSubtypeStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioDeviceInputNode[] = L"Windows.Media.Audio.AudioDeviceInputNode";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioDeviceOutputNode[] = L"Windows.Media.Audio.AudioDeviceOutputNode";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioFileInputNode[] = L"Windows.Media.Audio.AudioFileInputNode";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioFileOutputNode[] = L"Windows.Media.Audio.AudioFileOutputNode";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioFrameCompletedEventArgs[] = L"Windows.Media.Audio.AudioFrameCompletedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioFrameInputNode[] = L"Windows.Media.Audio.AudioFrameInputNode";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioFrameOutputNode[] = L"Windows.Media.Audio.AudioFrameOutputNode";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioGraph[] = L"Windows.Media.Audio.AudioGraph";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioGraphBatchUpdater[] = L"Windows.Media.Audio.AudioGraphBatchUpdater";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioGraphConnection[] = L"Windows.Media.Audio.AudioGraphConnection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioGraphSettings[] = L"Windows.Media.Audio.AudioGraphSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioGraphUnrecoverableErrorOccurredEventArgs[] = L"Windows.Media.Audio.AudioGraphUnrecoverableErrorOccurredEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioNodeEmitter[] = L"Windows.Media.Audio.AudioNodeEmitter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioNodeEmitterConeProperties[] = L"Windows.Media.Audio.AudioNodeEmitterConeProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioNodeEmitterDecayModel[] = L"Windows.Media.Audio.AudioNodeEmitterDecayModel";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioNodeEmitterNaturalDecayModelProperties[] = L"Windows.Media.Audio.AudioNodeEmitterNaturalDecayModelProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioNodeEmitterShape[] = L"Windows.Media.Audio.AudioNodeEmitterShape";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioNodeListener[] = L"Windows.Media.Audio.AudioNodeListener";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioStateMonitor[] = L"Windows.Media.Audio.AudioStateMonitor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioSubmixNode[] = L"Windows.Media.Audio.AudioSubmixNode";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_CreateAudioDeviceInputNodeResult[] = L"Windows.Media.Audio.CreateAudioDeviceInputNodeResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_CreateAudioDeviceOutputNodeResult[] = L"Windows.Media.Audio.CreateAudioDeviceOutputNodeResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_CreateAudioFileInputNodeResult[] = L"Windows.Media.Audio.CreateAudioFileInputNodeResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_CreateAudioFileOutputNodeResult[] = L"Windows.Media.Audio.CreateAudioFileOutputNodeResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_CreateAudioGraphResult[] = L"Windows.Media.Audio.CreateAudioGraphResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_CreateMediaSourceAudioInputNodeResult[] = L"Windows.Media.Audio.CreateMediaSourceAudioInputNodeResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_EchoEffectDefinition[] = L"Windows.Media.Audio.EchoEffectDefinition";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_EqualizerBand[] = L"Windows.Media.Audio.EqualizerBand";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_EqualizerEffectDefinition[] = L"Windows.Media.Audio.EqualizerEffectDefinition";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_FrameInputNodeQuantumStartedEventArgs[] = L"Windows.Media.Audio.FrameInputNodeQuantumStartedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_LimiterEffectDefinition[] = L"Windows.Media.Audio.LimiterEffectDefinition";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_MediaSourceAudioInputNode[] = L"Windows.Media.Audio.MediaSourceAudioInputNode";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_ReverbEffectDefinition[] = L"Windows.Media.Audio.ReverbEffectDefinition";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_SetDefaultSpatialAudioFormatResult[] = L"Windows.Media.Audio.SetDefaultSpatialAudioFormatResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_SpatialAudioDeviceConfiguration[] = L"Windows.Media.Audio.SpatialAudioDeviceConfiguration";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_SpatialAudioFormatConfiguration[] = L"Windows.Media.Audio.SpatialAudioFormatConfiguration";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_SpatialAudioFormatSubtype[] = L"Windows.Media.Audio.SpatialAudioFormatSubtype";
       
       
#pragma clang diagnostic pop
