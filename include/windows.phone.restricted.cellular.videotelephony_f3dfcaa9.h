#pragma warning( disable: 4049 )
#include <rpc.h>
#include <rpcndr.h>
#error this stub requires an updated version of <rpcndr.h>
#include <windows.h>
#include <ole2.h>
       
       
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include "Windows.Graphics.Display.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream;
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream;
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs;
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs;
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall;
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory;
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters;
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs;
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs;
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream;
typedef interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt;
typedef interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgs __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream * sender, __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgs __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream * sender, __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgs __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream * sender, __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgs __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream * sender, __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;
typedef enum __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations;
typedef enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CCameraLocation __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CCameraLocation;
typedef enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CStreamIdentifier __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CStreamIdentifier;
typedef enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CVideoQuality __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CVideoQuality;
typedef enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CVideoStreamState __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CVideoStreamState;
enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CCameraLocation
{
    CameraLocation_Front = 0,
    CameraLocation_Back = 1,
};
enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CStreamIdentifier
{
    StreamIdentifier_LocalPreview = 0,
    StreamIdentifier_RemoteView = 1,
};
enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CVideoQuality
{
    VideoQuality_Low = 0,
    VideoQuality_Average = 1,
    VideoQuality_High = 2,
};
enum __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CVideoStreamState
{
    VideoStreamState_Initialized = 0,
    VideoStreamState_ResourcesAcquired = 1,
    VideoStreamState_Playing = 2,
    VideoStreamState_Paused = 3,
    VideoStreamState_Destroyed = 4,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_VideoTelephony_ILocalVideoStream[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.ILocalVideoStream";
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetDeviceOrientation )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream * This,
                  __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations orientation
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStreamVtbl;
interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStreamVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetDeviceOrientation(This,orientation) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_VideoTelephony_IRemoteVideoStream[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.IRemoteVideoStream";
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Rotation )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream * This,
                           __RPC__out INT32 * degreesCw
        );
                    HRESULT ( STDMETHODCALLTYPE *add_RotationChanged )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRotationChangeEventArgs * handler,
                           __RPC__out EventRegistrationToken * registrationToken
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_RotationChanged )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream * This,
                  EventRegistrationToken registrationToken
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Quality )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream * This,
                           __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CVideoQuality * quality
        );
                    HRESULT ( STDMETHODCALLTYPE *add_QualityChanged )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CRemoteVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoQualityChangeEventArgs * handler,
                           __RPC__out EventRegistrationToken * registrationToken
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_QualityChanged )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream * This,
                  EventRegistrationToken registrationToken
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStreamVtbl;
interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStreamVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Rotation(This,degreesCw) )
    ( (This)->lpVtbl->add_RotationChanged(This,handler,registrationToken) )
    ( (This)->lpVtbl->remove_RotationChanged(This,registrationToken) )
    ( (This)->lpVtbl->get_Quality(This,quality) )
    ( (This)->lpVtbl->add_QualityChanged(This,handler,registrationToken) )
    ( (This)->lpVtbl->remove_QualityChanged(This,registrationToken) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_VideoTelephony_IResolutionChangeEventArgs[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.IResolutionChangeEventArgs";
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Resolution )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgsVtbl;
interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Resolution(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIResolutionChangeEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_VideoTelephony_IRotationChangeEventArgs[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.IRotationChangeEventArgs";
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Rotation )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs * This,
                           __RPC__out INT32 * degreesCw
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgsVtbl;
interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Rotation(This,degreesCw) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRotationChangeEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_VideoTelephony_IVideoCall[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoCall";
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall * This,
                           __RPC__out INT32 * callId
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CameraLocation )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall * This,
                           __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CCameraLocation * cameraLocation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemoteStream )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIRemoteVideoStream * * remoteStream
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocalStream )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CILocalVideoStream * * localStream
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Visibility )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall * This,
                           __RPC__out boolean * visible
        );
    HRESULT ( STDMETHODCALLTYPE *SetVisibilityChangeAsync )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall * This,
                  boolean visible,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    HRESULT ( STDMETHODCALLTYPE *SetCameraLocationAsync )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall * This,
                  __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CCameraLocation cameraLocation,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallVtbl;
interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,callId) )
    ( (This)->lpVtbl->get_CameraLocation(This,cameraLocation) )
    ( (This)->lpVtbl->get_RemoteStream(This,remoteStream) )
    ( (This)->lpVtbl->get_LocalStream(This,localStream) )
    ( (This)->lpVtbl->get_Visibility(This,visible) )
    ( (This)->lpVtbl->SetVisibilityChangeAsync(This,visible,asyncAction) )
    ( (This)->lpVtbl->SetCameraLocationAsync(This,cameraLocation,asyncAction) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_VideoTelephony_IVideoCallFactory[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoCallFactory";
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateVideoCall )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters * parameters,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCall * * videoCall
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactoryVtbl;
interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateVideoCall(This,parameters,videoCall) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_VideoTelephony_IVideoCallInitializationParameters[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoCallInitializationParameters";
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParametersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_CallId )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters * This,
                  INT32 callId
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CallId )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters * This,
                           __RPC__out INT32 * callId
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LocalOrientation )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters * This,
                  __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocalOrientation )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CDisplay_CDisplayOrientations * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CameraLocation )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters * This,
                  __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CCameraLocation cameraLocation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CameraLocation )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters * This,
                           __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CCameraLocation * cameraLocation
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LocalSurface )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters * This,
                  __RPC__in HSTRING localSurface
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocalSurface )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters * This,
                           __RPC__deref_out_opt HSTRING * localSurface
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RemoteSurface )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters * This,
                  __RPC__in HSTRING remoteSurface
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemoteSurface )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters * This,
                           __RPC__deref_out_opt HSTRING * remoteSurface
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParametersVtbl;
interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParametersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_CallId(This,callId) )
    ( (This)->lpVtbl->get_CallId(This,callId) )
    ( (This)->lpVtbl->put_LocalOrientation(This,value) )
    ( (This)->lpVtbl->get_LocalOrientation(This,value) )
    ( (This)->lpVtbl->put_CameraLocation(This,cameraLocation) )
    ( (This)->lpVtbl->get_CameraLocation(This,cameraLocation) )
    ( (This)->lpVtbl->put_LocalSurface(This,localSurface) )
    ( (This)->lpVtbl->get_LocalSurface(This,localSurface) )
    ( (This)->lpVtbl->put_RemoteSurface(This,remoteSurface) )
    ( (This)->lpVtbl->get_RemoteSurface(This,remoteSurface) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoCallInitializationParameters;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_VideoTelephony_IVideoQualityChangeEventArgs[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoQualityChangeEventArgs";
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Quality )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CVideoQuality * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgsVtbl;
interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Quality(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoQualityChangeEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_VideoTelephony_IVideoStateChangeEventArgs[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoStateChangeEventArgs";
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CVideoStreamState * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgsVtbl;
interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_State(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStateChangeEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_VideoTelephony_IVideoStream[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoStream";
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream * This,
                           __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CStreamIdentifier * streamId
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CallId )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream * This,
                           __RPC__out INT32 * callId
        );
                   HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream * This,
                           __RPC__out __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CVideoStreamState * state
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Resolution )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * resolution
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BroadcastingPort )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream * This,
                           __RPC__deref_out_opt HSTRING * port
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ResolutionChanged )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CResolutionChangeEventArgs * handler,
                           __RPC__out EventRegistrationToken * registrationToken
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ResolutionChanged )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream * This,
                  EventRegistrationToken registrationToken
        );
                    HRESULT ( STDMETHODCALLTYPE *add_StateChanged )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStream_Windows__CPhone__CRestricted__CCellular__CVideoTelephony__CVideoStateChangeEventArgs * handler,
                           __RPC__out EventRegistrationToken * registrationToken
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StateChanged )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream * This,
                  EventRegistrationToken registrationToken
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamVtbl;
interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,streamId) )
    ( (This)->lpVtbl->get_CallId(This,callId) )
    ( (This)->lpVtbl->get_State(This,state) )
    ( (This)->lpVtbl->get_Resolution(This,resolution) )
    ( (This)->lpVtbl->get_BroadcastingPort(This,port) )
    ( (This)->lpVtbl->add_ResolutionChanged(This,handler,registrationToken) )
    ( (This)->lpVtbl->remove_ResolutionChanged(This,registrationToken) )
    ( (This)->lpVtbl->add_StateChanged(This,handler,registrationToken) )
    ( (This)->lpVtbl->remove_StateChanged(This,registrationToken) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStream;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Restricted_Cellular_VideoTelephony_IVideoStreamExt[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.IVideoStreamExt";
typedef struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExtVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetResolution )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt * This,
                  __x_ABI_CWindows_CFoundation_CSize resolution
        );
    HRESULT ( STDMETHODCALLTYPE *GetSwapChainHandleForProcess )(
        __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt * This,
                  UINT32 targetProcessId,
                           __RPC__out UINT64 * phSwapChain
        );
    END_INTERFACE
} __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExtVtbl;
interface __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExtVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetResolution(This,resolution) )
    ( (This)->lpVtbl->GetSwapChainHandleForProcess(This,targetProcessId,phSwapChain) )
EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CRestricted_CCellular_CVideoTelephony_CIVideoStreamExt;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_VideoTelephony_LocalVideoStream[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.LocalVideoStream";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_VideoTelephony_RemoteVideoStream[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.RemoteVideoStream";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_VideoTelephony_ResolutionChangeEventArgs[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.ResolutionChangeEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_VideoTelephony_RotationChangeEventArgs[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.RotationChangeEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoCall[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.VideoCall";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoCallInitializationParameters[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.VideoCallInitializationParameters";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoQualityChangeEventArgs[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.VideoQualityChangeEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoStateChangeEventArgs[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.VideoStateChangeEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Restricted_Cellular_VideoTelephony_VideoStream[] = L"Windows.Phone.Restricted.Cellular.VideoTelephony.VideoStream";
       
