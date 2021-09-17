#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ISpatialAudioObjectForHrtf ISpatialAudioObjectForHrtf;
typedef interface ISpatialAudioObjectRenderStreamForHrtf ISpatialAudioObjectRenderStreamForHrtf;
#include "wtypes.h"
#include "unknwn.h"
#include "hstring.h"
#include "SpatialAudioClient.h"
extern "C"{
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef
enum SpatialAudioHrtfDirectivityType
    {
        SpatialAudioHrtfDirectivity_OmniDirectional = 0,
        SpatialAudioHrtfDirectivity_Cardioid = ( SpatialAudioHrtfDirectivity_OmniDirectional + 1 ) ,
        SpatialAudioHrtfDirectivity_Cone = ( SpatialAudioHrtfDirectivity_Cardioid + 1 )
    } SpatialAudioHrtfDirectivityType;
typedef
enum SpatialAudioHrtfEnvironmentType
    {
        SpatialAudioHrtfEnvironment_Small = 0,
        SpatialAudioHrtfEnvironment_Medium = ( SpatialAudioHrtfEnvironment_Small + 1 ) ,
        SpatialAudioHrtfEnvironment_Large = ( SpatialAudioHrtfEnvironment_Medium + 1 ) ,
        SpatialAudioHrtfEnvironment_Outdoors = ( SpatialAudioHrtfEnvironment_Large + 1 ) ,
        SpatialAudioHrtfEnvironment_Average = ( SpatialAudioHrtfEnvironment_Outdoors + 1 )
    } SpatialAudioHrtfEnvironmentType;
typedef
enum SpatialAudioHrtfDistanceDecayType
    {
        SpatialAudioHrtfDistanceDecay_NaturalDecay = 0,
        SpatialAudioHrtfDistanceDecay_CustomDecay = ( SpatialAudioHrtfDistanceDecay_NaturalDecay + 1 )
    } SpatialAudioHrtfDistanceDecayType;
#pragma pack(push, 1)
typedef struct SpatialAudioHrtfDirectivity
    {
    SpatialAudioHrtfDirectivityType Type;
    float Scaling;
    } SpatialAudioHrtfDirectivity;
typedef struct SpatialAudioHrtfDirectivityCardioid
    {
    SpatialAudioHrtfDirectivity directivity;
    float Order;
    } SpatialAudioHrtfDirectivityCardioid;
typedef struct SpatialAudioHrtfDirectivityCone
    {
    SpatialAudioHrtfDirectivity directivity;
    float InnerAngle;
    float OuterAngle;
    } SpatialAudioHrtfDirectivityCone;
typedef union SpatialAudioHrtfDirectivityUnion
    {
    SpatialAudioHrtfDirectivityCone Cone;
    SpatialAudioHrtfDirectivityCardioid Cardiod;
    SpatialAudioHrtfDirectivity Omni;
    } SpatialAudioHrtfDirectivityUnion;
typedef struct SpatialAudioHrtfDistanceDecay
    {
    SpatialAudioHrtfDistanceDecayType Type;
    float MaxGain;
    float MinGain;
    float UnityGainDistance;
    float CutoffDistance;
    } SpatialAudioHrtfDistanceDecay;
typedef float SpatialAudioHrtfOrientation[ 9 ];
typedef struct SpatialAudioHrtfActivationParams
    {
    const WAVEFORMATEX *ObjectFormat;
    AudioObjectType StaticObjectTypeMask;
    UINT32 MinDynamicObjectCount;
    UINT32 MaxDynamicObjectCount;
    AUDIO_STREAM_CATEGORY Category;
    HANDLE EventHandle;
    ISpatialAudioObjectRenderStreamNotify *NotifyObject;
    SpatialAudioHrtfDistanceDecay *DistanceDecay;
    SpatialAudioHrtfDirectivityUnion *Directivity;
    SpatialAudioHrtfEnvironmentType *Environment;
    SpatialAudioHrtfOrientation *Orientation;
    } SpatialAudioHrtfActivationParams;
#pragma pack(pop)
extern RPC_IF_HANDLE __MIDL_itf_spatialaudiohrtf_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_spatialaudiohrtf_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ISpatialAudioObjectForHrtf;
    typedef struct ISpatialAudioObjectForHrtfVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpatialAudioObjectForHrtf * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpatialAudioObjectForHrtf * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpatialAudioObjectForHrtf * This);
        HRESULT ( STDMETHODCALLTYPE *GetBuffer )(
            ISpatialAudioObjectForHrtf * This,
            _Outptr_result_bytebuffer_(*bufferLength) BYTE **buffer,
            _Out_ UINT32 *bufferLength);
        HRESULT ( STDMETHODCALLTYPE *SetEndOfStream )(
            ISpatialAudioObjectForHrtf * This,
            _In_ UINT32 frameCount);
        HRESULT ( STDMETHODCALLTYPE *IsActive )(
            ISpatialAudioObjectForHrtf * This,
            _Out_ BOOL *isActive);
        HRESULT ( STDMETHODCALLTYPE *GetAudioObjectType )(
            ISpatialAudioObjectForHrtf * This,
            _Out_ AudioObjectType *audioObjectType);
        HRESULT ( STDMETHODCALLTYPE *SetPosition )(
            ISpatialAudioObjectForHrtf * This,
            _In_ float x,
            _In_ float y,
            _In_ float z);
        HRESULT ( STDMETHODCALLTYPE *SetGain )(
            ISpatialAudioObjectForHrtf * This,
            _In_ float gain);
        HRESULT ( STDMETHODCALLTYPE *SetOrientation )(
            ISpatialAudioObjectForHrtf * This,
            _In_ const SpatialAudioHrtfOrientation *orientation);
        HRESULT ( STDMETHODCALLTYPE *SetEnvironment )(
            ISpatialAudioObjectForHrtf * This,
            _In_ SpatialAudioHrtfEnvironmentType environment);
        HRESULT ( STDMETHODCALLTYPE *SetDistanceDecay )(
            ISpatialAudioObjectForHrtf * This,
            _In_ SpatialAudioHrtfDistanceDecay *distanceDecay);
        HRESULT ( STDMETHODCALLTYPE *SetDirectivity )(
            ISpatialAudioObjectForHrtf * This,
            _In_ SpatialAudioHrtfDirectivityUnion *directivity);
        END_INTERFACE
    } ISpatialAudioObjectForHrtfVtbl;
    interface ISpatialAudioObjectForHrtf
    {
        CONST_VTBL struct ISpatialAudioObjectForHrtfVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetBuffer(This,buffer,bufferLength) )
    ( (This)->lpVtbl -> SetEndOfStream(This,frameCount) )
    ( (This)->lpVtbl -> IsActive(This,isActive) )
    ( (This)->lpVtbl -> GetAudioObjectType(This,audioObjectType) )
    ( (This)->lpVtbl -> SetPosition(This,x,y,z) )
    ( (This)->lpVtbl -> SetGain(This,gain) )
    ( (This)->lpVtbl -> SetOrientation(This,orientation) )
    ( (This)->lpVtbl -> SetEnvironment(This,environment) )
    ( (This)->lpVtbl -> SetDistanceDecay(This,distanceDecay) )
    ( (This)->lpVtbl -> SetDirectivity(This,directivity) )
EXTERN_C const IID IID_ISpatialAudioObjectRenderStreamForHrtf;
    typedef struct ISpatialAudioObjectRenderStreamForHrtfVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpatialAudioObjectRenderStreamForHrtf * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpatialAudioObjectRenderStreamForHrtf * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpatialAudioObjectRenderStreamForHrtf * This);
        HRESULT ( STDMETHODCALLTYPE *GetAvailableDynamicObjectCount )(
            ISpatialAudioObjectRenderStreamForHrtf * This,
            _Out_ UINT32 *value);
        HRESULT ( STDMETHODCALLTYPE *GetService )(
            ISpatialAudioObjectRenderStreamForHrtf * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **service);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            ISpatialAudioObjectRenderStreamForHrtf * This);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            ISpatialAudioObjectRenderStreamForHrtf * This);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            ISpatialAudioObjectRenderStreamForHrtf * This);
        HRESULT ( STDMETHODCALLTYPE *BeginUpdatingAudioObjects )(
            ISpatialAudioObjectRenderStreamForHrtf * This,
            _Out_ UINT32 *availableDynamicObjectCount,
            _Out_ UINT32 *frameCountPerBuffer);
        HRESULT ( STDMETHODCALLTYPE *EndUpdatingAudioObjects )(
            ISpatialAudioObjectRenderStreamForHrtf * This);
        HRESULT ( STDMETHODCALLTYPE *ActivateSpatialAudioObjectForHrtf )(
            ISpatialAudioObjectRenderStreamForHrtf * This,
            _In_ AudioObjectType type,
            _COM_Outptr_ ISpatialAudioObjectForHrtf **audioObject);
        END_INTERFACE
    } ISpatialAudioObjectRenderStreamForHrtfVtbl;
    interface ISpatialAudioObjectRenderStreamForHrtf
    {
        CONST_VTBL struct ISpatialAudioObjectRenderStreamForHrtfVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAvailableDynamicObjectCount(This,value) )
    ( (This)->lpVtbl -> GetService(This,riid,service) )
    ( (This)->lpVtbl -> Start(This) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> BeginUpdatingAudioObjects(This,availableDynamicObjectCount,frameCountPerBuffer) )
    ( (This)->lpVtbl -> EndUpdatingAudioObjects(This) )
    ( (This)->lpVtbl -> ActivateSpatialAudioObjectForHrtf(This,type,audioObject) )
#endif
extern RPC_IF_HANDLE __MIDL_itf_spatialaudiohrtf_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_spatialaudiohrtf_0000_0002_v0_0_s_ifspec;
}
