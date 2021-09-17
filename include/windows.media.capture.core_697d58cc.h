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
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2 __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2;
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
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectable __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgsVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Core_IVariablePhotoCapturedEventArgs[] = L"Windows.Media.Capture.Core.IVariablePhotoCapturedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Frame )(
        __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CICapturedFrame * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CaptureTimeOffset )(
        __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UsedFrameControllerIndex )(
        __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CapturedFrameControlValues )(
        __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CICapturedFrameControlValues * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Frame(This,value) )
    ( (This)->lpVtbl->get_CaptureTimeOffset(This,value) )
    ( (This)->lpVtbl->get_UsedFrameControllerIndex(This,value) )
    ( (This)->lpVtbl->get_CapturedFrameControlValues(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoCapturedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture[] = L"Windows.Media.Capture.Core.IVariablePhotoSequenceCapture";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCaptureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *StartAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *StopAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *FinishAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PhotoCaptured )(
        __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_Windows__CMedia__CCapture__CCore__CVariablePhotoCapturedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PhotoCaptured )(
        __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Stopped )(
        __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CCore__CVariablePhotoSequenceCapture_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Stopped )(
        __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCaptureVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCaptureVtbl *lpVtbl;
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
    ( (This)->lpVtbl->add_Stopped(This,handler,token) )
    ( (This)->lpVtbl->remove_Stopped(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Core_IVariablePhotoSequenceCapture2[] = L"Windows.Media.Capture.Core.IVariablePhotoSequenceCapture2";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *UpdateSettingsAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->UpdateSettingsAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CCore_CIVariablePhotoSequenceCapture2;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Core_VariablePhotoCapturedEventArgs[] = L"Windows.Media.Capture.Core.VariablePhotoCapturedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Core_VariablePhotoSequenceCapture[] = L"Windows.Media.Capture.Core.VariablePhotoSequenceCapture";
       
       
#pragma clang diagnostic pop
