#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IAudioFormatEnumerator IAudioFormatEnumerator;
typedef interface ISpatialAudioObjectBase ISpatialAudioObjectBase;
typedef interface ISpatialAudioObject ISpatialAudioObject;
typedef interface ISpatialAudioObjectRenderStreamBase ISpatialAudioObjectRenderStreamBase;
typedef interface ISpatialAudioObjectRenderStream ISpatialAudioObjectRenderStream;
typedef interface ISpatialAudioObjectRenderStreamNotify ISpatialAudioObjectRenderStreamNotify;
typedef interface ISpatialAudioClient ISpatialAudioClient;
#include "wtypes.h"
#include "unknwn.h"
#include "hstring.h"
#include "AudioClient.h"
#include "propsys.h"
extern "C"{
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef
enum AudioObjectType
    {
        AudioObjectType_None = 0,
        AudioObjectType_Dynamic = ( 1 << 0 ) ,
        AudioObjectType_FrontLeft = ( 1 << 1 ) ,
        AudioObjectType_FrontRight = ( 1 << 2 ) ,
        AudioObjectType_FrontCenter = ( 1 << 3 ) ,
        AudioObjectType_LowFrequency = ( 1 << 4 ) ,
        AudioObjectType_SideLeft = ( 1 << 5 ) ,
        AudioObjectType_SideRight = ( 1 << 6 ) ,
        AudioObjectType_BackLeft = ( 1 << 7 ) ,
        AudioObjectType_BackRight = ( 1 << 8 ) ,
        AudioObjectType_TopFrontLeft = ( 1 << 9 ) ,
        AudioObjectType_TopFrontRight = ( 1 << 10 ) ,
        AudioObjectType_TopBackLeft = ( 1 << 11 ) ,
        AudioObjectType_TopBackRight = ( 1 << 12 ) ,
        AudioObjectType_BottomFrontLeft = ( 1 << 13 ) ,
        AudioObjectType_BottomFrontRight = ( 1 << 14 ) ,
        AudioObjectType_BottomBackLeft = ( 1 << 15 ) ,
        AudioObjectType_BottomBackRight = ( 1 << 16 ) ,
        AudioObjectType_BackCenter = ( 1 << 17 )
    } AudioObjectType;
DEFINE_ENUM_FLAG_OPERATORS(AudioObjectType);
#pragma pack(push, 1)
typedef struct SpatialAudioObjectRenderStreamActivationParams
    {
    const WAVEFORMATEX *ObjectFormat;
    AudioObjectType StaticObjectTypeMask;
    UINT32 MinDynamicObjectCount;
    UINT32 MaxDynamicObjectCount;
    AUDIO_STREAM_CATEGORY Category;
    HANDLE EventHandle;
    ISpatialAudioObjectRenderStreamNotify *NotifyObject;
    } SpatialAudioObjectRenderStreamActivationParams;
#pragma pack(pop)
extern RPC_IF_HANDLE __MIDL_itf_spatialaudioclient_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_spatialaudioclient_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IAudioFormatEnumerator;
    typedef struct IAudioFormatEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioFormatEnumerator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioFormatEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioFormatEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            IAudioFormatEnumerator * This,
            _Out_ UINT32 *count);
        HRESULT ( STDMETHODCALLTYPE *GetFormat )(
            IAudioFormatEnumerator * This,
            _In_ UINT32 index,
            _Outptr_ WAVEFORMATEX **format);
        END_INTERFACE
    } IAudioFormatEnumeratorVtbl;
    interface IAudioFormatEnumerator
    {
        CONST_VTBL struct IAudioFormatEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,count) )
    ( (This)->lpVtbl -> GetFormat(This,index,format) )
EXTERN_C const IID IID_ISpatialAudioObjectBase;
    typedef struct ISpatialAudioObjectBaseVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpatialAudioObjectBase * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpatialAudioObjectBase * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpatialAudioObjectBase * This);
        HRESULT ( STDMETHODCALLTYPE *GetBuffer )(
            ISpatialAudioObjectBase * This,
            _Outptr_result_bytebuffer_(*bufferLength) BYTE **buffer,
            _Out_ UINT32 *bufferLength);
        HRESULT ( STDMETHODCALLTYPE *SetEndOfStream )(
            ISpatialAudioObjectBase * This,
            _In_ UINT32 frameCount);
        HRESULT ( STDMETHODCALLTYPE *IsActive )(
            ISpatialAudioObjectBase * This,
            _Out_ BOOL *isActive);
        HRESULT ( STDMETHODCALLTYPE *GetAudioObjectType )(
            ISpatialAudioObjectBase * This,
            _Out_ AudioObjectType *audioObjectType);
        END_INTERFACE
    } ISpatialAudioObjectBaseVtbl;
    interface ISpatialAudioObjectBase
    {
        CONST_VTBL struct ISpatialAudioObjectBaseVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetBuffer(This,buffer,bufferLength) )
    ( (This)->lpVtbl -> SetEndOfStream(This,frameCount) )
    ( (This)->lpVtbl -> IsActive(This,isActive) )
    ( (This)->lpVtbl -> GetAudioObjectType(This,audioObjectType) )
EXTERN_C const IID IID_ISpatialAudioObject;
    typedef struct ISpatialAudioObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpatialAudioObject * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpatialAudioObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpatialAudioObject * This);
        HRESULT ( STDMETHODCALLTYPE *GetBuffer )(
            ISpatialAudioObject * This,
            _Outptr_result_bytebuffer_(*bufferLength) BYTE **buffer,
            _Out_ UINT32 *bufferLength);
        HRESULT ( STDMETHODCALLTYPE *SetEndOfStream )(
            ISpatialAudioObject * This,
            _In_ UINT32 frameCount);
        HRESULT ( STDMETHODCALLTYPE *IsActive )(
            ISpatialAudioObject * This,
            _Out_ BOOL *isActive);
        HRESULT ( STDMETHODCALLTYPE *GetAudioObjectType )(
            ISpatialAudioObject * This,
            _Out_ AudioObjectType *audioObjectType);
        HRESULT ( STDMETHODCALLTYPE *SetPosition )(
            ISpatialAudioObject * This,
            _In_ float x,
            _In_ float y,
            _In_ float z);
        HRESULT ( STDMETHODCALLTYPE *SetVolume )(
            ISpatialAudioObject * This,
            _In_ float volume);
        END_INTERFACE
    } ISpatialAudioObjectVtbl;
    interface ISpatialAudioObject
    {
        CONST_VTBL struct ISpatialAudioObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetBuffer(This,buffer,bufferLength) )
    ( (This)->lpVtbl -> SetEndOfStream(This,frameCount) )
    ( (This)->lpVtbl -> IsActive(This,isActive) )
    ( (This)->lpVtbl -> GetAudioObjectType(This,audioObjectType) )
    ( (This)->lpVtbl -> SetPosition(This,x,y,z) )
    ( (This)->lpVtbl -> SetVolume(This,volume) )
EXTERN_C const IID IID_ISpatialAudioObjectRenderStreamBase;
    typedef struct ISpatialAudioObjectRenderStreamBaseVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpatialAudioObjectRenderStreamBase * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpatialAudioObjectRenderStreamBase * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpatialAudioObjectRenderStreamBase * This);
        HRESULT ( STDMETHODCALLTYPE *GetAvailableDynamicObjectCount )(
            ISpatialAudioObjectRenderStreamBase * This,
            _Out_ UINT32 *value);
        HRESULT ( STDMETHODCALLTYPE *GetService )(
            ISpatialAudioObjectRenderStreamBase * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **service);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            ISpatialAudioObjectRenderStreamBase * This);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            ISpatialAudioObjectRenderStreamBase * This);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            ISpatialAudioObjectRenderStreamBase * This);
        HRESULT ( STDMETHODCALLTYPE *BeginUpdatingAudioObjects )(
            ISpatialAudioObjectRenderStreamBase * This,
            _Out_ UINT32 *availableDynamicObjectCount,
            _Out_ UINT32 *frameCountPerBuffer);
        HRESULT ( STDMETHODCALLTYPE *EndUpdatingAudioObjects )(
            ISpatialAudioObjectRenderStreamBase * This);
        END_INTERFACE
    } ISpatialAudioObjectRenderStreamBaseVtbl;
    interface ISpatialAudioObjectRenderStreamBase
    {
        CONST_VTBL struct ISpatialAudioObjectRenderStreamBaseVtbl *lpVtbl;
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
EXTERN_C const IID IID_ISpatialAudioObjectRenderStream;
    typedef struct ISpatialAudioObjectRenderStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpatialAudioObjectRenderStream * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpatialAudioObjectRenderStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpatialAudioObjectRenderStream * This);
        HRESULT ( STDMETHODCALLTYPE *GetAvailableDynamicObjectCount )(
            ISpatialAudioObjectRenderStream * This,
            _Out_ UINT32 *value);
        HRESULT ( STDMETHODCALLTYPE *GetService )(
            ISpatialAudioObjectRenderStream * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **service);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            ISpatialAudioObjectRenderStream * This);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            ISpatialAudioObjectRenderStream * This);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            ISpatialAudioObjectRenderStream * This);
        HRESULT ( STDMETHODCALLTYPE *BeginUpdatingAudioObjects )(
            ISpatialAudioObjectRenderStream * This,
            _Out_ UINT32 *availableDynamicObjectCount,
            _Out_ UINT32 *frameCountPerBuffer);
        HRESULT ( STDMETHODCALLTYPE *EndUpdatingAudioObjects )(
            ISpatialAudioObjectRenderStream * This);
        HRESULT ( STDMETHODCALLTYPE *ActivateSpatialAudioObject )(
            ISpatialAudioObjectRenderStream * This,
            _In_ AudioObjectType type,
            _COM_Outptr_ ISpatialAudioObject **audioObject);
        END_INTERFACE
    } ISpatialAudioObjectRenderStreamVtbl;
    interface ISpatialAudioObjectRenderStream
    {
        CONST_VTBL struct ISpatialAudioObjectRenderStreamVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> ActivateSpatialAudioObject(This,type,audioObject) )
EXTERN_C const IID IID_ISpatialAudioObjectRenderStreamNotify;
    typedef struct ISpatialAudioObjectRenderStreamNotifyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpatialAudioObjectRenderStreamNotify * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpatialAudioObjectRenderStreamNotify * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpatialAudioObjectRenderStreamNotify * This);
        HRESULT ( STDMETHODCALLTYPE *OnAvailableDynamicObjectCountChange )(
            ISpatialAudioObjectRenderStreamNotify * This,
            _In_ ISpatialAudioObjectRenderStreamBase *sender,
            _In_ LONGLONG hnsComplianceDeadlineTime,
            _In_ UINT32 availableDynamicObjectCountChange);
        END_INTERFACE
    } ISpatialAudioObjectRenderStreamNotifyVtbl;
    interface ISpatialAudioObjectRenderStreamNotify
    {
        CONST_VTBL struct ISpatialAudioObjectRenderStreamNotifyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnAvailableDynamicObjectCountChange(This,sender,hnsComplianceDeadlineTime,availableDynamicObjectCountChange) )
EXTERN_C const IID IID_ISpatialAudioClient;
    typedef struct ISpatialAudioClientVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpatialAudioClient * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpatialAudioClient * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpatialAudioClient * This);
        HRESULT ( STDMETHODCALLTYPE *GetStaticObjectPosition )(
            ISpatialAudioClient * This,
            _In_ AudioObjectType type,
            _Out_ float *x,
            _Out_ float *y,
            _Out_ float *z);
        HRESULT ( STDMETHODCALLTYPE *GetNativeStaticObjectTypeMask )(
            ISpatialAudioClient * This,
            _Out_ AudioObjectType *mask);
        HRESULT ( STDMETHODCALLTYPE *GetMaxDynamicObjectCount )(
            ISpatialAudioClient * This,
            _Out_ UINT32 *value);
        HRESULT ( STDMETHODCALLTYPE *GetSupportedAudioObjectFormatEnumerator )(
            ISpatialAudioClient * This,
            _COM_Outptr_ IAudioFormatEnumerator **enumerator);
        HRESULT ( STDMETHODCALLTYPE *GetMaxFrameCount )(
            ISpatialAudioClient * This,
            _In_ const WAVEFORMATEX *objectFormat,
            _Out_ UINT32 *frameCountPerBuffer);
        HRESULT ( STDMETHODCALLTYPE *IsAudioObjectFormatSupported )(
            ISpatialAudioClient * This,
            _In_ const WAVEFORMATEX *objectFormat);
        HRESULT ( STDMETHODCALLTYPE *IsSpatialAudioStreamAvailable )(
            ISpatialAudioClient * This,
            _In_ REFIID streamUuid,
            _In_opt_ const PROPVARIANT *auxiliaryInfo);
        HRESULT ( STDMETHODCALLTYPE *ActivateSpatialAudioStream )(
            ISpatialAudioClient * This,
            _In_ const PROPVARIANT *activationParams,
            _In_ REFIID riid,
            _COM_Outptr_ void **stream);
        END_INTERFACE
    } ISpatialAudioClientVtbl;
    interface ISpatialAudioClient
    {
        CONST_VTBL struct ISpatialAudioClientVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStaticObjectPosition(This,type,x,y,z) )
    ( (This)->lpVtbl -> GetNativeStaticObjectTypeMask(This,mask) )
    ( (This)->lpVtbl -> GetMaxDynamicObjectCount(This,value) )
    ( (This)->lpVtbl -> GetSupportedAudioObjectFormatEnumerator(This,enumerator) )
    ( (This)->lpVtbl -> GetMaxFrameCount(This,objectFormat,frameCountPerBuffer) )
    ( (This)->lpVtbl -> IsAudioObjectFormatSupported(This,objectFormat) )
    ( (This)->lpVtbl -> IsSpatialAudioStreamAvailable(This,streamUuid,auxiliaryInfo) )
    ( (This)->lpVtbl -> ActivateSpatialAudioStream(This,activationParams,riid,stream) )
typedef struct SpatialAudioClientActivationParams
    {
    GUID tracingContextId;
    GUID appId;
    int majorVersion;
    int minorVersion1;
    int minorVersion2;
    int minorVersion3;
    } SpatialAudioClientActivationParams;
#endif
extern RPC_IF_HANDLE __MIDL_itf_spatialaudioclient_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_spatialaudioclient_0000_0007_v0_0_s_ifspec;
}
