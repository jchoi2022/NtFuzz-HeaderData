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
#include "Windows.Gaming.Input.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory;
typedef interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics;
typedef interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2 __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2;
typedef interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink;
typedef interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider;
typedef interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult;
typedef interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink;
typedef interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider;
typedef interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink;
typedef interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider;
typedef interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink;
typedef interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider;
struct __x_ABI_CWindows_CGaming_CInput_CCustom_CGipFirmwareUpdateProgress;
typedef interface __FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress __FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress;
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress;
typedef struct __FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress *asyncInfo, struct __x_ABI_CWindows_CGaming_CInput_CCustom_CGipFirmwareUpdateProgress progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgressVtbl;
interface __FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgressVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) )
typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress;
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress;
typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgressVtbl;
interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgressVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress;
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress;
typedef struct __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This, __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This, __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress **handler);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This, __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This, __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * This, __RPC__deref_out_opt __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgressVtbl;
interface __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgressVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CGaming_CInput_CIGameController __x_ABI_CWindows_CGaming_CInput_CIGameController;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;
typedef enum __x_ABI_CWindows_CGaming_CInput_CCustom_CGipFirmwareUpdateStatus __x_ABI_CWindows_CGaming_CInput_CCustom_CGipFirmwareUpdateStatus;
typedef enum __x_ABI_CWindows_CGaming_CInput_CCustom_CGipMessageClass __x_ABI_CWindows_CGaming_CInput_CCustom_CGipMessageClass;
typedef enum __x_ABI_CWindows_CGaming_CInput_CCustom_CXusbDeviceSubtype __x_ABI_CWindows_CGaming_CInput_CCustom_CXusbDeviceSubtype;
typedef enum __x_ABI_CWindows_CGaming_CInput_CCustom_CXusbDeviceType __x_ABI_CWindows_CGaming_CInput_CCustom_CXusbDeviceType;
typedef struct __x_ABI_CWindows_CGaming_CInput_CCustom_CGameControllerVersionInfo __x_ABI_CWindows_CGaming_CInput_CCustom_CGameControllerVersionInfo;
typedef struct __x_ABI_CWindows_CGaming_CInput_CCustom_CGipFirmwareUpdateProgress __x_ABI_CWindows_CGaming_CInput_CCustom_CGipFirmwareUpdateProgress;
enum __x_ABI_CWindows_CGaming_CInput_CCustom_CGipFirmwareUpdateStatus
{
    GipFirmwareUpdateStatus_Completed = 0,
    GipFirmwareUpdateStatus_UpToDate = 1,
    GipFirmwareUpdateStatus_Failed = 2,
};
enum __x_ABI_CWindows_CGaming_CInput_CCustom_CGipMessageClass
{
    GipMessageClass_Command = 0,
    GipMessageClass_LowLatency = 1,
    GipMessageClass_StandardLatency = 2,
};
enum __x_ABI_CWindows_CGaming_CInput_CCustom_CXusbDeviceSubtype
{
    XusbDeviceSubtype_Unknown = 0,
    XusbDeviceSubtype_Gamepad = 1,
    XusbDeviceSubtype_ArcadePad = 2,
    XusbDeviceSubtype_ArcadeStick = 3,
    XusbDeviceSubtype_FlightStick = 4,
    XusbDeviceSubtype_Wheel = 5,
    XusbDeviceSubtype_Guitar = 6,
    XusbDeviceSubtype_GuitarAlternate = 7,
    XusbDeviceSubtype_GuitarBass = 8,
    XusbDeviceSubtype_DrumKit = 9,
    XusbDeviceSubtype_DancePad = 10,
};
enum __x_ABI_CWindows_CGaming_CInput_CCustom_CXusbDeviceType
{
    XusbDeviceType_Unknown = 0,
    XusbDeviceType_Gamepad = 1,
};
struct __x_ABI_CWindows_CGaming_CInput_CCustom_CGameControllerVersionInfo
{
    UINT16 Major;
    UINT16 Minor;
    UINT16 Build;
    UINT16 Revision;
};
struct __x_ABI_CWindows_CGaming_CInput_CCustom_CGipFirmwareUpdateProgress
{
    DOUBLE PercentCompleted;
    UINT32 CurrentComponentId;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_ICustomGameControllerFactory[] = L"Windows.Gaming.Input.Custom.ICustomGameControllerFactory";
typedef struct __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateGameController )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider * provider,
                           __RPC__deref_out_opt IInspectable * * value
        );
    HRESULT ( STDMETHODCALLTYPE *OnGameControllerAdded )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIGameController * value
        );
    HRESULT ( STDMETHODCALLTYPE *OnGameControllerRemoved )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIGameController * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactoryVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateGameController(This,provider,value) )
    ( (This)->lpVtbl->OnGameControllerAdded(This,value) )
    ( (This)->lpVtbl->OnGameControllerRemoved(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_IGameControllerFactoryManagerStatics[] = L"Windows.Gaming.Input.Custom.IGameControllerFactoryManagerStatics";
typedef struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RegisterCustomFactoryForGipInterface )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory * factory,
                  GUID interfaceId
        );
    HRESULT ( STDMETHODCALLTYPE *RegisterCustomFactoryForHardwareId )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory * factory,
                  UINT16 hardwareVendorId,
                  UINT16 hardwareProductId
        );
    HRESULT ( STDMETHODCALLTYPE *RegisterCustomFactoryForXusbType )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory * factory,
                  __x_ABI_CWindows_CGaming_CInput_CCustom_CXusbDeviceType xusbType,
                  __x_ABI_CWindows_CGaming_CInput_CCustom_CXusbDeviceSubtype xusbSubtype
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStaticsVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RegisterCustomFactoryForGipInterface(This,factory,interfaceId) )
    ( (This)->lpVtbl->RegisterCustomFactoryForHardwareId(This,factory,hardwareVendorId,hardwareProductId) )
    ( (This)->lpVtbl->RegisterCustomFactoryForXusbType(This,factory,xusbType,xusbSubtype) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_IGameControllerFactoryManagerStatics2[] = L"Windows.Gaming.Input.Custom.IGameControllerFactoryManagerStatics2";
typedef struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryGetFactoryControllerFromGameController )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CCustom_CICustomGameControllerFactory * factory,
                  __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIGameController * gameController,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGaming_CInput_CIGameController * * factoryController
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2Vtbl;
interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryGetFactoryControllerFromGameController(This,factory,gameController,factoryController) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerFactoryManagerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_IGameControllerInputSink[] = L"Windows.Gaming.Input.Custom.IGameControllerInputSink";
typedef struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSinkVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OnInputResumed )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink * This,
                  UINT64 timestamp
        );
    HRESULT ( STDMETHODCALLTYPE *OnInputSuspended )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink * This,
                  UINT64 timestamp
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSinkVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSinkVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->OnInputResumed(This,timestamp) )
    ( (This)->lpVtbl->OnInputSuspended(This,timestamp) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerInputSink;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_IGameControllerProvider[] = L"Windows.Gaming.Input.Custom.IGameControllerProvider";
typedef struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FirmwareVersionInfo )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider * This,
                           __RPC__out __x_ABI_CWindows_CGaming_CInput_CCustom_CGameControllerVersionInfo * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HardwareProductId )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HardwareVendorId )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HardwareVersionInfo )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider * This,
                           __RPC__out __x_ABI_CWindows_CGaming_CInput_CCustom_CGameControllerVersionInfo * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsConnected )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProviderVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FirmwareVersionInfo(This,value) )
    ( (This)->lpVtbl->get_HardwareProductId(This,value) )
    ( (This)->lpVtbl->get_HardwareVendorId(This,value) )
    ( (This)->lpVtbl->get_HardwareVersionInfo(This,value) )
    ( (This)->lpVtbl->get_IsConnected(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_IGipFirmwareUpdateResult[] = L"Windows.Gaming.Input.Custom.IGipFirmwareUpdateResult";
typedef struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExtendedErrorCode )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FinalComponentId )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult * This,
                           __RPC__out __x_ABI_CWindows_CGaming_CInput_CCustom_CGipFirmwareUpdateStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResultVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExtendedErrorCode(This,value) )
    ( (This)->lpVtbl->get_FinalComponentId(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CIGipFirmwareUpdateResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_IGipGameControllerInputSink[] = L"Windows.Gaming.Input.Custom.IGipGameControllerInputSink";
typedef struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSinkVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OnKeyReceived )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink * This,
                  UINT64 timestamp,
                  BYTE keyCode,
                  boolean isPressed
        );
    HRESULT ( STDMETHODCALLTYPE *OnMessageReceived )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink * This,
                  UINT64 timestamp,
                  __x_ABI_CWindows_CGaming_CInput_CCustom_CGipMessageClass messageClass,
                  BYTE messageId,
                  BYTE sequenceId,
                  UINT32 __messageBufferSize,
                                                __RPC__in_ecount_full(__messageBufferSize) BYTE * messageBuffer
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSinkVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSinkVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->OnKeyReceived(This,timestamp,keyCode,isPressed) )
    ( (This)->lpVtbl->OnMessageReceived(This,timestamp,messageClass,messageId,sequenceId,__messageBufferSize,messageBuffer) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerInputSink;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_IGipGameControllerProvider[] = L"Windows.Gaming.Input.Custom.IGipGameControllerProvider";
typedef struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SendMessage )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider * This,
                  __x_ABI_CWindows_CGaming_CInput_CCustom_CGipMessageClass messageClass,
                  BYTE messageId,
                  UINT32 __messageBufferSize,
                                                __RPC__in_ecount_full(__messageBufferSize) BYTE * messageBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *SendReceiveMessage )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider * This,
                  __x_ABI_CWindows_CGaming_CInput_CCustom_CGipMessageClass messageClass,
                  BYTE messageId,
                  UINT32 __requestMessageBufferSize,
                                                       __RPC__in_ecount_full(__requestMessageBufferSize) BYTE * requestMessageBuffer,
                  UINT32 __responseMessageBufferSize,
                                                         __RPC__out_ecount_full(__responseMessageBufferSize) BYTE * responseMessageBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateFirmwareAsync )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * firmwareImage,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateResult_Windows__CGaming__CInput__CCustom__CGipFirmwareUpdateProgress * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProviderVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SendMessage(This,messageClass,messageId,__messageBufferSize,messageBuffer) )
    ( (This)->lpVtbl->SendReceiveMessage(This,messageClass,messageId,__requestMessageBufferSize,requestMessageBuffer,__responseMessageBufferSize,responseMessageBuffer) )
    ( (This)->lpVtbl->UpdateFirmwareAsync(This,firmwareImage,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CIGipGameControllerProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_IHidGameControllerInputSink[] = L"Windows.Gaming.Input.Custom.IHidGameControllerInputSink";
typedef struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSinkVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OnInputReportReceived )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink * This,
                  UINT64 timestamp,
                  BYTE reportId,
                  UINT32 __reportBufferSize,
                                               __RPC__in_ecount_full(__reportBufferSize) BYTE * reportBuffer
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSinkVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSinkVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->OnInputReportReceived(This,timestamp,reportId,__reportBufferSize,reportBuffer) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerInputSink;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_IHidGameControllerProvider[] = L"Windows.Gaming.Input.Custom.IHidGameControllerProvider";
typedef struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UsageId )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UsagePage )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider * This,
                           __RPC__out UINT16 * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetFeatureReport )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider * This,
                  BYTE reportId,
                  UINT32 __reportBufferSize,
                                                __RPC__out_ecount_full(__reportBufferSize) BYTE * reportBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *SendFeatureReport )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider * This,
                  BYTE reportId,
                  UINT32 __reportBufferSize,
                                               __RPC__in_ecount_full(__reportBufferSize) BYTE * reportBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *SendOutputReport )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider * This,
                  BYTE reportId,
                  UINT32 __reportBufferSize,
                                               __RPC__in_ecount_full(__reportBufferSize) BYTE * reportBuffer
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProviderVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UsageId(This,value) )
    ( (This)->lpVtbl->get_UsagePage(This,value) )
    ( (This)->lpVtbl->GetFeatureReport(This,reportId,__reportBufferSize,reportBuffer) )
    ( (This)->lpVtbl->SendFeatureReport(This,reportId,__reportBufferSize,reportBuffer) )
    ( (This)->lpVtbl->SendOutputReport(This,reportId,__reportBufferSize,reportBuffer) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CIHidGameControllerProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_IXusbGameControllerInputSink[] = L"Windows.Gaming.Input.Custom.IXusbGameControllerInputSink";
typedef struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSinkVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OnInputReceived )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink * This,
                  UINT64 timestamp,
                  BYTE reportId,
                  UINT32 __inputBufferSize,
                                              __RPC__in_ecount_full(__inputBufferSize) BYTE * inputBuffer
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSinkVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSinkVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->OnInputReceived(This,timestamp,reportId,__inputBufferSize,inputBuffer) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerInputSink;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Custom_IXusbGameControllerProvider[] = L"Windows.Gaming.Input.Custom.IXusbGameControllerProvider";
typedef struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetVibration )(
        __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider * This,
                  DOUBLE lowFrequencyMotorSpeed,
                  DOUBLE highFrequencyMotorSpeed
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProviderVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetVibration(This,lowFrequencyMotorSpeed,highFrequencyMotorSpeed) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CCustom_CIXusbGameControllerProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_Custom_GameControllerFactoryManager[] = L"Windows.Gaming.Input.Custom.GameControllerFactoryManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_Custom_GipFirmwareUpdateResult[] = L"Windows.Gaming.Input.Custom.GipFirmwareUpdateResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_Custom_GipGameControllerProvider[] = L"Windows.Gaming.Input.Custom.GipGameControllerProvider";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_Custom_HidGameControllerProvider[] = L"Windows.Gaming.Input.Custom.HidGameControllerProvider";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_Custom_XusbGameControllerProvider[] = L"Windows.Gaming.Input.Custom.XusbGameControllerProvider";
       
       
#pragma clang diagnostic pop
