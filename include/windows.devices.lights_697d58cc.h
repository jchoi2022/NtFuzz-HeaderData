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
#include "Windows.Foundation.Numerics.h"
#include "Windows.Storage.Streams.h"
#include "Windows.System.h"
#include "Windows.UI.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CDevices_CLights_CILamp __x_ABI_CWindows_CDevices_CLights_CILamp;
typedef interface __x_ABI_CWindows_CDevices_CLights_CILampArray __x_ABI_CWindows_CDevices_CLights_CILampArray;
typedef interface __x_ABI_CWindows_CDevices_CLights_CILampArrayStatics __x_ABI_CWindows_CDevices_CLights_CILampArrayStatics;
typedef interface __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs;
typedef interface __x_ABI_CWindows_CDevices_CLights_CILampInfo __x_ABI_CWindows_CDevices_CLights_CILampInfo;
typedef interface __x_ABI_CWindows_CDevices_CLights_CILampStatics __x_ABI_CWindows_CDevices_CLights_CILampStatics;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLampVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLampVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLampVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CLights__CLamp;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CLights__CLampVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp * This, __RPC__out __x_ABI_CWindows_CDevices_CLights_CILamp * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CLights__CLampVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CLights__CLampVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLampArray __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLampArray;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLampArray;
typedef interface __FIAsyncOperation_1_Windows__CDevices__CLights__CLampArray __FIAsyncOperation_1_Windows__CDevices__CLights__CLampArray;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLampArrayVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLampArray * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLampArray * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLampArray * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLampArray * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CLights__CLampArray *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLampArrayVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLampArray
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLampArrayVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CDevices__CLights__CLampArray __FIAsyncOperation_1_Windows__CDevices__CLights__CLampArray;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CLights__CLampArray;
typedef struct __FIAsyncOperation_1_Windows__CDevices__CLights__CLampArrayVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLampArray * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLampArray * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLampArray * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLampArray * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLampArray * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLampArray * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLampArray * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLampArray *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLampArray * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLampArray **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLampArray * This, __RPC__out __x_ABI_CWindows_CDevices_CLights_CILampArray * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CLights__CLampArrayVtbl;
interface __FIAsyncOperation_1_Windows__CDevices__CLights__CLampArray
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CLights__CLampArrayVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CDevices_CLights_CILamp * sender, __RPC__in_opt __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBufferVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
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
struct __x_ABI_CWindows_CUI_CColor;
typedef interface __FIReference_1_Windows__CUI__CColor __FIReference_1_Windows__CUI__CColor;
EXTERN_C const IID IID___FIReference_1_Windows__CUI__CColor;
typedef struct __FIReference_1_Windows__CUI__CColorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CUI__CColor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CUI__CColor * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CUI__CColor * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CUI__CColor * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CUI__CColor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CUI__CColor * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CUI__CColor * This, __RPC__out struct __x_ABI_CWindows_CUI_CColor *value);
    END_INTERFACE
} __FIReference_1_Windows__CUI__CColorVtbl;
interface __FIReference_1_Windows__CUI__CColor
{
    CONST_VTBL struct __FIReference_1_Windows__CUI__CColorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef enum __x_ABI_CWindows_CSystem_CVirtualKey __x_ABI_CWindows_CSystem_CVirtualKey;
typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;
typedef enum __x_ABI_CWindows_CDevices_CLights_CLampArrayKind __x_ABI_CWindows_CDevices_CLights_CLampArrayKind;
typedef enum __x_ABI_CWindows_CDevices_CLights_CLampPurposes __x_ABI_CWindows_CDevices_CLights_CLampPurposes;
enum __x_ABI_CWindows_CDevices_CLights_CLampArrayKind
{
    LampArrayKind_Undefined = 0,
    LampArrayKind_Keyboard = 1,
    LampArrayKind_Mouse = 2,
    LampArrayKind_GameController = 3,
    LampArrayKind_Peripheral = 4,
    LampArrayKind_Scene = 5,
    LampArrayKind_Notification = 6,
    LampArrayKind_Chassis = 7,
    LampArrayKind_Wearable = 8,
    LampArrayKind_Furniture = 9,
    LampArrayKind_Art = 10,
};
enum __x_ABI_CWindows_CDevices_CLights_CLampPurposes
{
    LampPurposes_Undefined = 0,
    LampPurposes_Control = 0x1,
    LampPurposes_Accent = 0x2,
    LampPurposes_Branding = 0x4,
    LampPurposes_Status = 0x8,
    LampPurposes_Illumination = 0x10,
    LampPurposes_Presentation = 0x20,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Lights_ILamp[] = L"Windows.Devices.Lights.ILamp";
typedef struct __x_ABI_CWindows_CDevices_CLights_CILampVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILamp * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILamp * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILamp * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILamp * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILamp * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILamp * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CLights_CILamp * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CDevices_CLights_CILamp * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsEnabled )(
        __x_ABI_CWindows_CDevices_CLights_CILamp * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BrightnessLevel )(
        __x_ABI_CWindows_CDevices_CLights_CILamp * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BrightnessLevel )(
        __x_ABI_CWindows_CDevices_CLights_CILamp * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsColorSettable )(
        __x_ABI_CWindows_CDevices_CLights_CILamp * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Color )(
        __x_ABI_CWindows_CDevices_CLights_CILamp * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Color )(
        __x_ABI_CWindows_CDevices_CLights_CILamp * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AvailabilityChanged )(
        __x_ABI_CWindows_CDevices_CLights_CILamp * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AvailabilityChanged )(
        __x_ABI_CWindows_CDevices_CLights_CILamp * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CLights_CILampVtbl;
interface __x_ABI_CWindows_CDevices_CLights_CILamp
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CLights_CILampVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_IsEnabled(This,value) )
    ( (This)->lpVtbl->put_IsEnabled(This,value) )
    ( (This)->lpVtbl->get_BrightnessLevel(This,value) )
    ( (This)->lpVtbl->put_BrightnessLevel(This,value) )
    ( (This)->lpVtbl->get_IsColorSettable(This,value) )
    ( (This)->lpVtbl->get_Color(This,value) )
    ( (This)->lpVtbl->put_Color(This,value) )
    ( (This)->lpVtbl->add_AvailabilityChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_AvailabilityChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CLights_CILamp;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Lights_ILampArray[] = L"Windows.Devices.Lights.ILampArray";
typedef struct __x_ABI_CWindows_CDevices_CLights_CILampArrayVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampArray * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampArray * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampArray * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampArray * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampArray * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampArray * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CLights_CILampArray * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HardwareVendorId )(
        __x_ABI_CWindows_CDevices_CLights_CILampArray * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HardwareProductId )(
        __x_ABI_CWindows_CDevices_CLights_CILampArray * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HardwareVersion )(
        __x_ABI_CWindows_CDevices_CLights_CILampArray * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LampArrayKind )(
        __x_ABI_CWindows_CDevices_CLights_CILampArray * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CLights_CLampArrayKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LampCount )(
        __x_ABI_CWindows_CDevices_CLights_CILampArray * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinUpdateInterval )(
        __x_ABI_CWindows_CDevices_CLights_CILampArray * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BoundingBox )(
        __x_ABI_CWindows_CDevices_CLights_CILampArray * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CDevices_CLights_CILampArray * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsEnabled )(
        __x_ABI_CWindows_CDevices_CLights_CILampArray * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BrightnessLevel )(
        __x_ABI_CWindows_CDevices_CLights_CILampArray * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BrightnessLevel )(
        __x_ABI_CWindows_CDevices_CLights_CILampArray * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsConnected )(
        __x_ABI_CWindows_CDevices_CLights_CILampArray * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportsVirtualKeys )(
        __x_ABI_CWindows_CDevices_CLights_CILampArray * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetLampInfo )(
        __x_ABI_CWindows_CDevices_CLights_CILampArray * This,
                  INT32 lampIndex,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CLights_CILampInfo * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetIndicesForKey )(
        __x_ABI_CWindows_CDevices_CLights_CILampArray * This,
                  __x_ABI_CWindows_CSystem_CVirtualKey key,
                   __RPC__out UINT32 * __resultSize,
                                                       __RPC__deref_out_ecount_full_opt(*(__resultSize)) INT32 * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetIndicesForPurposes )(
        __x_ABI_CWindows_CDevices_CLights_CILampArray * This,
                  __x_ABI_CWindows_CDevices_CLights_CLampPurposes purposes,
                   __RPC__out UINT32 * __resultSize,
                                                       __RPC__deref_out_ecount_full_opt(*(__resultSize)) INT32 * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetColor )(
        __x_ABI_CWindows_CDevices_CLights_CILampArray * This,
                  __x_ABI_CWindows_CUI_CColor desiredColor
        );
    HRESULT ( STDMETHODCALLTYPE *SetColorForIndex )(
        __x_ABI_CWindows_CDevices_CLights_CILampArray * This,
                  INT32 lampIndex,
                  __x_ABI_CWindows_CUI_CColor desiredColor
        );
    HRESULT ( STDMETHODCALLTYPE *SetSingleColorForIndices )(
        __x_ABI_CWindows_CDevices_CLights_CILampArray * This,
                  __x_ABI_CWindows_CUI_CColor desiredColor,
                  UINT32 __lampIndexesSize,
                                              __RPC__in_ecount_full(__lampIndexesSize) INT32 * lampIndexes
        );
    HRESULT ( STDMETHODCALLTYPE *SetColorsForIndices )(
        __x_ABI_CWindows_CDevices_CLights_CILampArray * This,
                  UINT32 __desiredColorsSize,
                                                __RPC__in_ecount_full(__desiredColorsSize) __x_ABI_CWindows_CUI_CColor * desiredColors,
                  UINT32 __lampIndexesSize,
                                              __RPC__in_ecount_full(__lampIndexesSize) INT32 * lampIndexes
        );
    HRESULT ( STDMETHODCALLTYPE *SetColorsForKey )(
        __x_ABI_CWindows_CDevices_CLights_CILampArray * This,
                  __x_ABI_CWindows_CUI_CColor desiredColor,
                  __x_ABI_CWindows_CSystem_CVirtualKey key
        );
    HRESULT ( STDMETHODCALLTYPE *SetColorsForKeys )(
        __x_ABI_CWindows_CDevices_CLights_CILampArray * This,
                  UINT32 __desiredColorsSize,
                                                __RPC__in_ecount_full(__desiredColorsSize) __x_ABI_CWindows_CUI_CColor * desiredColors,
                  UINT32 __keysSize,
                                       __RPC__in_ecount_full(__keysSize) __x_ABI_CWindows_CSystem_CVirtualKey * keys
        );
    HRESULT ( STDMETHODCALLTYPE *SetColorsForPurposes )(
        __x_ABI_CWindows_CDevices_CLights_CILampArray * This,
                  __x_ABI_CWindows_CUI_CColor desiredColor,
                  __x_ABI_CWindows_CDevices_CLights_CLampPurposes purposes
        );
    HRESULT ( STDMETHODCALLTYPE *SendMessageAsync )(
        __x_ABI_CWindows_CDevices_CLights_CILampArray * This,
                  INT32 messageId,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * message,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RequestMessageAsync )(
        __x_ABI_CWindows_CDevices_CLights_CILampArray * This,
                  INT32 messageId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CLights_CILampArrayVtbl;
interface __x_ABI_CWindows_CDevices_CLights_CILampArray
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CLights_CILampArrayVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
    ( (This)->lpVtbl->get_HardwareVendorId(This,value) )
    ( (This)->lpVtbl->get_HardwareProductId(This,value) )
    ( (This)->lpVtbl->get_HardwareVersion(This,value) )
    ( (This)->lpVtbl->get_LampArrayKind(This,value) )
    ( (This)->lpVtbl->get_LampCount(This,value) )
    ( (This)->lpVtbl->get_MinUpdateInterval(This,value) )
    ( (This)->lpVtbl->get_BoundingBox(This,value) )
    ( (This)->lpVtbl->get_IsEnabled(This,value) )
    ( (This)->lpVtbl->put_IsEnabled(This,value) )
    ( (This)->lpVtbl->get_BrightnessLevel(This,value) )
    ( (This)->lpVtbl->put_BrightnessLevel(This,value) )
    ( (This)->lpVtbl->get_IsConnected(This,value) )
    ( (This)->lpVtbl->get_SupportsVirtualKeys(This,value) )
    ( (This)->lpVtbl->GetLampInfo(This,lampIndex,result) )
    ( (This)->lpVtbl->GetIndicesForKey(This,key,__resultSize,result) )
    ( (This)->lpVtbl->GetIndicesForPurposes(This,purposes,__resultSize,result) )
    ( (This)->lpVtbl->SetColor(This,desiredColor) )
    ( (This)->lpVtbl->SetColorForIndex(This,lampIndex,desiredColor) )
    ( (This)->lpVtbl->SetSingleColorForIndices(This,desiredColor,__lampIndexesSize,lampIndexes) )
    ( (This)->lpVtbl->SetColorsForIndices(This,__desiredColorsSize,desiredColors,__lampIndexesSize,lampIndexes) )
    ( (This)->lpVtbl->SetColorsForKey(This,desiredColor,key) )
    ( (This)->lpVtbl->SetColorsForKeys(This,__desiredColorsSize,desiredColors,__keysSize,keys) )
    ( (This)->lpVtbl->SetColorsForPurposes(This,desiredColor,purposes) )
    ( (This)->lpVtbl->SendMessageAsync(This,messageId,message,operation) )
    ( (This)->lpVtbl->RequestMessageAsync(This,messageId,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CLights_CILampArray;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Lights_ILampArrayStatics[] = L"Windows.Devices.Lights.ILampArrayStatics";
typedef struct __x_ABI_CWindows_CDevices_CLights_CILampArrayStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampArrayStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampArrayStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampArrayStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampArrayStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampArrayStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampArrayStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CLights_CILampArrayStatics * This,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CLights_CILampArrayStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CLights__CLampArray * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CLights_CILampArrayStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CLights_CILampArrayStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CLights_CILampArrayStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelector(This,result) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CLights_CILampArrayStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Lights_ILampAvailabilityChangedEventArgs[] = L"Windows.Devices.Lights.ILampAvailabilityChangedEventArgs";
typedef struct __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsAvailable )(
        __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgsVtbl;
interface __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsAvailable(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Lights_ILampInfo[] = L"Windows.Devices.Lights.ILampInfo";
typedef struct __x_ABI_CWindows_CDevices_CLights_CILampInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Index )(
        __x_ABI_CWindows_CDevices_CLights_CILampInfo * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Purposes )(
        __x_ABI_CWindows_CDevices_CLights_CILampInfo * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CLights_CLampPurposes * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CDevices_CLights_CILampInfo * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RedLevelCount )(
        __x_ABI_CWindows_CDevices_CLights_CILampInfo * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GreenLevelCount )(
        __x_ABI_CWindows_CDevices_CLights_CILampInfo * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BlueLevelCount )(
        __x_ABI_CWindows_CDevices_CLights_CILampInfo * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GainLevelCount )(
        __x_ABI_CWindows_CDevices_CLights_CILampInfo * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FixedColor )(
        __x_ABI_CWindows_CDevices_CLights_CILampInfo * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNearestSupportedColor )(
        __x_ABI_CWindows_CDevices_CLights_CILampInfo * This,
                  __x_ABI_CWindows_CUI_CColor desiredColor,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UpdateLatency )(
        __x_ABI_CWindows_CDevices_CLights_CILampInfo * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CLights_CILampInfoVtbl;
interface __x_ABI_CWindows_CDevices_CLights_CILampInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CLights_CILampInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Index(This,value) )
    ( (This)->lpVtbl->get_Purposes(This,value) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_RedLevelCount(This,value) )
    ( (This)->lpVtbl->get_GreenLevelCount(This,value) )
    ( (This)->lpVtbl->get_BlueLevelCount(This,value) )
    ( (This)->lpVtbl->get_GainLevelCount(This,value) )
    ( (This)->lpVtbl->get_FixedColor(This,value) )
    ( (This)->lpVtbl->GetNearestSupportedColor(This,desiredColor,result) )
    ( (This)->lpVtbl->get_UpdateLatency(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CLights_CILampInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Lights_ILampStatics[] = L"Windows.Devices.Lights.ILampStatics";
typedef struct __x_ABI_CWindows_CDevices_CLights_CILampStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CLights_CILampStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CLights_CILampStatics * This,
                  __RPC__in HSTRING deviceId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetDefaultAsync )(
        __x_ABI_CWindows_CDevices_CLights_CILampStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CDevices_CLights_CILampStaticsVtbl;
interface __x_ABI_CWindows_CDevices_CLights_CILampStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CLights_CILampStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDeviceSelector(This,value) )
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,operation) )
    ( (This)->lpVtbl->GetDefaultAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CLights_CILampStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Lights_Lamp[] = L"Windows.Devices.Lights.Lamp";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Lights_LampArray[] = L"Windows.Devices.Lights.LampArray";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Lights_LampAvailabilityChangedEventArgs[] = L"Windows.Devices.Lights.LampAvailabilityChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Lights_LampInfo[] = L"Windows.Devices.Lights.LampInfo";
       
       
#pragma clang diagnostic pop
