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
#include "Windows.Devices.Sensors.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreview __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreview;
typedef interface __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReading __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReading;
typedef interface __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReadingChangedEventArgs __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReadingChangedEventArgs;
typedef interface __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewStatics __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewStatics;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview;
typedef interface __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview;
typedef struct __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview * This, __RPC__out __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreview * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewVtbl;
interface __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReading __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReading;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReading;
typedef interface __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReading __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReading;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReading * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReading * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReading * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReading * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReading *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReadingVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReading
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReadingVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReading __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReading;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReading;
typedef struct __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReading * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReading * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReading * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReading * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReading * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReading * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReading * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReading *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReading * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReading **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReading * This, __RPC__out __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReading * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReadingVtbl;
interface __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReading
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReadingVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReadingChangedEventArgs __FITypedEventHandler_2_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReadingChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReadingChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReadingChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReadingChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReadingChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReadingChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReadingChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreview * sender, __RPC__in_opt __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReadingChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReadingChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReadingChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReadingChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef enum __x_ABI_CWindows_CDevices_CSensors_CSimpleOrientation __x_ABI_CWindows_CDevices_CSensors_CSimpleOrientation;
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef enum __x_ABI_CWindows_CSystem_CPreview_CHingeState __x_ABI_CWindows_CSystem_CPreview_CHingeState;
enum __x_ABI_CWindows_CSystem_CPreview_CHingeState
{
    HingeState_Unknown = 0,
    HingeState_Closed = 1,
    HingeState_Concave = 2,
    HingeState_Flat = 3,
    HingeState_Convex = 4,
    HingeState_Full = 5,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Preview_ITwoPanelHingedDevicePosturePreview[] = L"Windows.System.Preview.ITwoPanelHingedDevicePosturePreview";
typedef struct __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreview * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreview * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreview * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreview * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreview * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreview * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCurrentPostureAsync )(
        __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreview * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReading * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PostureChanged )(
        __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreview * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreviewReadingChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PostureChanged )(
        __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreview * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewVtbl;
interface __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreview
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCurrentPostureAsync(This,value) )
    ( (This)->lpVtbl->add_PostureChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_PostureChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreview;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Preview_ITwoPanelHingedDevicePosturePreviewReading[] = L"Windows.System.Preview.ITwoPanelHingedDevicePosturePreviewReading";
typedef struct __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReading * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReading * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReading * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReading * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReading * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReading * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReading * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HingeState )(
        __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReading * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CPreview_CHingeState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Panel1Orientation )(
        __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReading * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSensors_CSimpleOrientation * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Panel1Id )(
        __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReading * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Panel2Orientation )(
        __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReading * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CSensors_CSimpleOrientation * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Panel2Id )(
        __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReading * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReadingVtbl;
interface __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReading
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReadingVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
    ( (This)->lpVtbl->get_HingeState(This,value) )
    ( (This)->lpVtbl->get_Panel1Orientation(This,value) )
    ( (This)->lpVtbl->get_Panel1Id(This,value) )
    ( (This)->lpVtbl->get_Panel2Orientation(This,value) )
    ( (This)->lpVtbl->get_Panel2Id(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReading;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Preview_ITwoPanelHingedDevicePosturePreviewReadingChangedEventArgs[] = L"Windows.System.Preview.ITwoPanelHingedDevicePosturePreviewReadingChangedEventArgs";
typedef struct __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReadingChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReadingChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReadingChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReadingChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReadingChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReadingChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReadingChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Reading )(
        __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReadingChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReading * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReadingChangedEventArgsVtbl;
interface __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReadingChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReadingChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Reading(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewReadingChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Preview_ITwoPanelHingedDevicePosturePreviewStatics[] = L"Windows.System.Preview.ITwoPanelHingedDevicePosturePreviewStatics";
typedef struct __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefaultAsync )(
        __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSystem__CPreview__CTwoPanelHingedDevicePosturePreview * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefaultAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CPreview_CITwoPanelHingedDevicePosturePreviewStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Preview_TwoPanelHingedDevicePosturePreview[] = L"Windows.System.Preview.TwoPanelHingedDevicePosturePreview";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Preview_TwoPanelHingedDevicePosturePreviewReading[] = L"Windows.System.Preview.TwoPanelHingedDevicePosturePreviewReading";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Preview_TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs[] = L"Windows.System.Preview.TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs";
       
       
#pragma clang diagnostic pop
