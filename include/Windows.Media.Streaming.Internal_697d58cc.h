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
#include "Windows.Media.Streaming.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics;
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CMediaRenderer __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CMediaRenderer;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CMediaRenderer;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CMediaRendererVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CMediaRenderer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CMediaRenderer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CMediaRenderer * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CMediaRenderer * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CMediaRendererVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CMediaRenderer
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CMediaRendererVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRendererVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CMediaRenderer *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CMediaRenderer **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer * This, __RPC__out __x_ABI_CWindows_CMedia_CStreaming_CIMediaRenderer * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRendererVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRendererVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Internal_IMediaRendererBrokerStatics[] = L"Windows.Media.Streaming.Internal.IMediaRendererBrokerStatics";
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateMediaRendererAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics * This,
                  __RPC__in HSTRING deviceIdentifier,
                  __RPC__in_opt IInspectable * mediaSessionFactoryMF,
                  __RPC__in HSTRING applicationUserModelId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateMediaRendererFromBasicDeviceAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CIBasicDevice * basicDevice,
                  __RPC__in_opt IInspectable * mediaSessionFactoryMF,
                  __RPC__in HSTRING applicationUserModelId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CStreaming__CMediaRenderer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateMediaRendererAsync(This,deviceIdentifier,mediaSessionFactoryMF,applicationUserModelId,value) )
    ( (This)->lpVtbl->CreateMediaRendererFromBasicDeviceAsync(This,basicDevice,mediaSessionFactoryMF,applicationUserModelId,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CInternal_CIMediaRendererBrokerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Internal_MediaRendererBroker[] = L"Windows.Media.Streaming.Internal.MediaRendererBroker";
       
       
#pragma clang diagnostic pop
